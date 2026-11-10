/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00448130; name: FUN_00448130
 */


tm * FUN_00448130(time_t *param_1,tm *param_2)

{
  tm *ptVar1;
  tm *ptVar2;
  
  ptVar2 = gmtime_r(param_1,param_2);
  ptVar1 = (tm *)0x0;
  if (ptVar2 != (tm *)0x0) {
    ptVar1 = param_2;
  }
  return ptVar1;
}


