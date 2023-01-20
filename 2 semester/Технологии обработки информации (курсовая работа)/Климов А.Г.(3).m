f=inline('(x.^2).*(y.^1).*(exp((-x.^2)/4-((y.^2)/3)))')
x=[-3:0.05:3]; y=[-3:0.05:3];
[X,Y]=meshgrid(x,y);
Z=f(X,Y);
hold on
surf(X,Y,Z)
[x1,y1] = fminsearch(@(x) (x(1)^2)*(x(2)^1)*(exp((-x(1)^2)/4-((x(2)^2)/3))), [-0.05,0.05])
stem3(x1(1),x1(2),y1,'fill','or')