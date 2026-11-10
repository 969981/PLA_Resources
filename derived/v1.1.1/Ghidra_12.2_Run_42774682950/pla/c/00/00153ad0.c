/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153ad0; name: FUN_00153ad0
 */


void FUN_00153ad0(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = &DAT_039c5c28;
        if ((int)((long *)*plVar1)[1] != 0x16) {
          lVar2 = *(long *)*plVar1;
          plVar4 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar2 + 10)) {
            plVar4 = (long *)(lVar2 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(*plVar1 + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar4) {
      plVar4 = &DAT_039c5c28;
    }
  }
  plVar4 = (long *)(*plVar4 + (long)param_3 * 8 + 0x18);
  if (param_4 < 1) {
    if (param_4 < -0xf4627) {
      if (param_4 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar3 = &DAT_039c5c28;
        if ((int)((long *)*plVar1)[1] != 0x16) {
          lVar2 = *(long *)*plVar1;
          plVar3 = &DAT_039c5c28;
          if (-param_4 + -0xf4628 <= (int)(uint)*(byte *)(lVar2 + 10)) {
            plVar3 = (long *)(lVar2 + (long)(-param_4 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_4 * 0x10);
    }
  }
  else {
    plVar3 = (long *)(*plVar1 + (long)param_4 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar3) {
      plVar3 = &DAT_039c5c28;
    }
  }
  lVar2 = *plVar3;
  FUN_0015ccb0(param_1,*plVar4);
  lVar2 = *(long *)(lVar2 + (long)param_5 * 8 + 0x18);
  *plVar4 = lVar2;
  *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  plVar1 = (long *)*plVar4;
  plVar3 = (long *)*plVar1;
  if (plVar3 != plVar1 + 2) {
    *(undefined4 *)(plVar1 + 3) = 1;
    plVar1 = (long *)*plVar4;
    plVar3 = (long *)*plVar1;
  }
  if (((*(byte *)(plVar3 + 1) >> 6 & 1) == 0) || (plVar3 != plVar1 + 2)) {
    return;
  }
  FUN_0015cc00(param_1);
  return;
}


