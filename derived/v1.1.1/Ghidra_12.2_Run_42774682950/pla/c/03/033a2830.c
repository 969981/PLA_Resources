/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2830; name: ldexp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double ldexp(double __x,int __exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_ldexp_04370ae0)(__exponent);
  return dVar1;
}


