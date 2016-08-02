classdef CacheableFunction < handle
    properties
        exeFun
        cacheMap
    end

    methods
        function obj = CacheableFunction(exeFun)
            obj.exeFun = exeFun;
            obj.cacheMap = containers.Map;
        end

        function [result] = evaluate(obj, x)

            thisKey = mat2str(x);

            if isKey(obj.cacheMap, thisKey)
                result = obj.cacheMap(thisKey);
            else
                result = obj.exeFun(x);
                obj.cacheMap(thisKey) = result;
            end
        end
    end
end