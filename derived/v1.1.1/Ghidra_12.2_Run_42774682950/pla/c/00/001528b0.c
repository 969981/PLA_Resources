/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001528b0; name: FUN_001528b0
 */


void FUN_001528b0(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar2 = (long *)**(long **)(param_1 + 0x20);
        plVar3 = &DAT_039c5c28;
        if ((int)plVar2[1] != 0x16) {
          lVar1 = *plVar2;
          plVar3 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar1 + 10)) {
            plVar3 = (long *)(lVar1 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar3) {
      plVar3 = &DAT_039c5c28;
    }
  }
  FUN_00171ba0(param_1,*plVar3,param_3,*(long *)(param_1 + 0x10) + -0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if ((((*(byte *)(lVar1 + -8) >> 6 & 1) != 0) && ((*(byte *)(*plVar3 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*(long *)(lVar1 + -0x10) + 9) & 3) != 0)) {
    FUN_0015cbe0(param_1);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar1 + -0x10;
  return;
}


