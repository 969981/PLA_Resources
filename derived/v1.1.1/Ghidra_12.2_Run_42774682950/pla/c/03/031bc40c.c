/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bc40c; name: FUN_031bc40c
 */


bool FUN_031bc40c(long param_1)

{
  long *plVar1;
  bool bVar2;
  
  plVar1 = *(long **)(param_1 + 0xc0);
  if (*plVar1 == 0) {
    bVar2 = *(int *)((long)plVar1 + 0x14) < (int)plVar1[2];
  }
  else {
    bVar2 = true;
  }
  FUN_031ba39c();
  return bVar2;
}


