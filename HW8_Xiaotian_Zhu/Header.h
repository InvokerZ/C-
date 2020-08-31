using Funcptr = double(*)(double);
using Func_deri_ptr = double(*)(double);
double NewtonRaphson(Funcptr F, Func_deri_ptr f, double guess, double error);

using FuncMultPtr = double(*)(double, double);
void Hessian(FuncMultPtr F, double x, double y);
