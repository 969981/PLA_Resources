/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da4054; name: FUN_00da4054
 */


undefined8 FUN_00da4054(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (long)*(int *)(param_1 + 0x78);
  if (0 < *(int *)(param_1 + 0x78)) {
    plVar2 = (long *)(*(long *)(param_1 + 200) + 0x48);
    do {
      if ((*plVar2 == 0) || (*(char *)(*plVar2 + 0x1e1) == '\0')) {
        return 3;
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 0xe;
    } while (lVar1 != 0);
  }
  FUN_00937d80(param_1 + 0x80);
  return 4;
}


