/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb6610; name: FUN_02eb6610
 */


void FUN_02eb6610(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    plVar2 = *(long **)(lVar4 + 0x10);
    lVar1 = lVar4;
    while( true ) {
      if (((plVar2 != (long *)0x0) && (plVar2[0xf] != 0)) && (0 < *(short *)(plVar2[0xf] + 0x90))) {
        (**(code **)(*plVar2 + 0xc0))(plVar2,param_2);
        lVar4 = *(long *)(param_1 + 0x18);
        uVar3 = *(uint *)(param_1 + 0x20);
      }
      if (lVar1 + 0x38 == lVar4 + (ulong)uVar3 * 0x38) break;
      plVar2 = *(long **)(lVar1 + 0x48);
      lVar1 = lVar1 + 0x38;
    }
  }
  return;
}


