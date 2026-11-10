/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ebdc0; name: FUN_002ebdc0
 */


long FUN_002ebdc0(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return 0;
  }
  lVar1 = (*(code *)PTR_realloc_04152f88)();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar1;
}


