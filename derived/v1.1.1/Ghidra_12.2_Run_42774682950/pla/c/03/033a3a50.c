/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a3a50; name: gmtime_r
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_043713f0)();
  return ptVar1;
}


