#ifndef FLUX_MANAGER_H
#define FLUX_MANAGER_H

#include <string>
#include <map>
#include <set>
#include <memory>
#include <functional>

class FluxExpression {
public:
    FluxExpression(const std::string& expression, const std::set<std::string>& dependencies)
        : expression(expression), dependencies(dependencies) {}

    std::string getExpression() const { return expression; }
    const std::set<std::string>& getDependencies() const { return dependencies; }

private:
    std::string expression;
    std::set<std::string> dependencies;
};

class FluxManager {
public:
    void registerFlux(const std::string& name, const std::string& expression, const std::set<std::string>& dependencies) {
        fluxExpressions[name] = std::make_shared<FluxExpression>(expression, dependencies);
        
        // Registra as dependências para rastreamento reverso
        for (const auto& dep : dependencies) {
            dependents[dep].insert(name);
        }
    }

    std::shared_ptr<FluxExpression> getFlux(const std::string& name) {
        auto it = fluxExpressions.find(name);
        if (it != fluxExpressions.end()) {
            return it->second;
        }
        return nullptr;
    }

    const std::set<std::string>& getDependents(const std::string& name) {
        static const std::set<std::string> emptySet;
        auto it = dependents.find(name);
        if (it != dependents.end()) {
            return it->second;
        }
        return emptySet;
    }

private:
    std::map<std::string, std::shared_ptr<FluxExpression>> fluxExpressions;
    std::map<std::string, std::set<std::string>> dependents;
};

#endif // FLUX_MANAGER_H