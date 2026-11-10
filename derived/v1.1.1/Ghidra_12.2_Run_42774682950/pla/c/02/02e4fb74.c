/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4fb74; name: FUN_02e4fb74
 */


undefined8 FUN_02e4fb74(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(*(long *)(param_2 + 0x38) + 0x38);
  if (uVar1 != 0) {
    plVar2 = *(long **)(*(long *)(param_2 + 0x38) + 0x30);
    lVar3 = (ulong)uVar1 << 3;
    lVar4 = lVar3;
    plVar5 = plVar2;
    do {
      if (*plVar5 == *param_1) {
        return 1;
      }
      lVar4 = lVar4 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
    do {
      if (*plVar2 == param_1[1]) {
        return 1;
      }
      lVar3 = lVar3 + -8;
      plVar2 = plVar2 + 1;
    } while (lVar3 != 0);
  }
  return 0;
}


