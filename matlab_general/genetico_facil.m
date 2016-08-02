%% Optimizador sencillo, prueba 1

clc,
close all
clear all
tiempo = cputime;

%% Inicializa los datos

load datos_ini.mat
load pos_ct.mat

%% Inicializa parametros del optimizador

radio = 0.025;

LBX = -5 + radio;
UBX = 5 - radio;
LBY = radio;
UBY = 10 - radio;

[X, Y] = meshgrid(linspace(LBX, UBX, 24), linspace(LBY, UBY, 25));
ct = [X(:), Y(:)];

x0 = [ct(:,1)', ct(:,2)'];
nvars = length(x0);

ObjectiveFunction = @(x)campo_optim( x, pared, N, Pp_1, rayo1, radio);
ConstraintFunction = @campo_optim_restricciones;

% FunMemoizada = CacheableFunction(@(x)campo_optim( x, pared, N, Pp_1, rayo1, radio));
% ObjectiveFunction = @(x)FunMemoizada.evaluate(x);

unos = ones(1, nvars/2);
LB = [LBX * unos, LBY * unos];
UB = [UBX * unos, UBY * unos];


rng(1,'twister') % for reproducibility
% Para ver como funciona el optimizador
% options = gaoptimset('PlotFcns',{@gaplotbestf,@gaplotmaxconstr},'Display','iter');

% Para agregar condiciones iniciales
options = gaoptimset('InitialPopulation',x0);


%% Llama al optimizador

[x,fval] = ga(ObjectiveFunction,nvars,[],[],[],[],...
              LB,UB,ConstraintFunction,options);

save('temp_ga', 'x', 'fval'); 

%[x,fval] = ga(ObjectiveFunction,nvars,[],[],[],[],...
%              LB,UB,ConstraintFunction)
          
%% Fin
e = cputime-tiempo;