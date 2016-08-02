function costo = campo_optim( entradas, pared, N, Pp_1, rayo1, radio)
%CAMPO_OPTIM Funcion objetivo para m�todo de optimizaci�n
%   FIXME: Agregar la documentaci�n

ct = de_entradas_a_ct(entradas);
[con_p, ~] = simulador_rayos(pared, N, Pp_1, rayo1, ct, radio);

costo = 1 - sum(con_p(7:end))/sum(con_p);

end

