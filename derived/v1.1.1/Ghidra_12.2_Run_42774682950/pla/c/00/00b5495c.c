/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b5495c; name: FUN_00b5495c
 */


bool FUN_00b5495c(long param_1)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    bVar1 = false;
    plVar3 = *(long **)(param_1 + 0x150);
  }
  else {
    bVar1 = *(char *)(*(long *)(param_1 + 0x90) + 0x1e1) != '\0';
    plVar3 = *(long **)(param_1 + 0x150);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    bVar2 = false;
    if (plVar3[4] != 0) {
      bVar2 = *(char *)(plVar3[4] + 0x1e1) != '\0';
    }
    bVar1 = (bool)(bVar1 & bVar2);
  }
  return bVar1;
}


