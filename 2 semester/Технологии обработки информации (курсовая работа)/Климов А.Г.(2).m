k=2; m=1; A=4; B=3;
[x,y]=meshgrid(-3:.3:3,-3:.3:3);
z=(x.^k).*(y.^m).*(exp((-x.^2)/A-((y.^2)/B)));
contour(x,y,z);