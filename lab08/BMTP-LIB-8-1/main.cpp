float s_calculation (float x, float  y, float z)
{ float s;
s = x - y + (3.14 * x * x) / (x + z / (2 * y * y));
return s;
}
