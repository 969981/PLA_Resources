/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a3b90; name: rand
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_04371490)();
  return iVar1;
}


