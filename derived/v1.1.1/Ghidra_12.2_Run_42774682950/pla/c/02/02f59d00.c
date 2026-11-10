/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59d00; name: FUN_02f59d00
 */


void FUN_02f59d00(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_3 + 8) == 1) {
    plVar2 = (long *)(param_2 + (ulong)*(uint *)(param_3 + 0x14) * 0x10 + 8);
    lVar1 = *(long *)(param_3 + 0x48);
    if (*plVar2 == param_3) {
      *plVar2 = lVar1;
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_3 + 0x50);
        FUN_02f58420();
        return;
      }
    }
    else {
      lVar3 = *(long *)(param_3 + 0x50);
      *(long *)(lVar3 + 0x48) = lVar1;
      if (lVar1 == 0) {
        lVar1 = *plVar2;
      }
      *(long *)(lVar1 + 0x50) = lVar3;
    }
  }
  FUN_02f58420();
  return;
}


