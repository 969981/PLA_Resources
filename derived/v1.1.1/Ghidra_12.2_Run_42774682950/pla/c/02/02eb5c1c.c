/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5c1c; name: FUN_02eb5c1c
 */


void FUN_02eb5c1c(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = lVar3;
    do {
      plVar1 = *(long **)(lVar4 + 0x10);
      if (((plVar1 != (long *)0x0) && (plVar1[0xf] != 0)) && (0 < *(short *)(plVar1[0xf] + 0x90))) {
        (**(code **)(*plVar1 + 0x188))(plVar1,param_2 & 1,param_3 & 1);
        lVar3 = *(long *)(param_1 + 0x18);
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      lVar4 = lVar4 + 0x38;
    } while (lVar4 != lVar3 + (ulong)uVar2 * 0x38);
  }
  return;
}


