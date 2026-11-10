/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001500d0; name: FUN_001500d0
 */


void FUN_001500d0(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar1 = &DAT_039c5c28;
        if ((int)((long *)*plVar2)[1] != 0x16) {
          lVar5 = *(long *)*plVar2;
          plVar1 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
            plVar1 = (long *)(lVar5 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (long *)(*plVar2 + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar1) {
      plVar1 = &DAT_039c5c28;
    }
  }
  if (0 < param_3) {
    plVar2 = (long *)(*plVar2 + (long)param_3 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar2) {
      plVar2 = &DAT_039c5c28;
    }
    lVar5 = plVar1[1];
    *plVar2 = *plVar1;
    plVar2[1] = lVar5;
    return;
  }
  if (-0xf4628 < param_3) {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * 0x10);
    lVar5 = plVar1[1];
    *plVar2 = *plVar1;
    plVar2[1] = lVar5;
    return;
  }
  if (param_3 == -0xf4628) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar5 = plVar1[1];
    *(long *)(lVar3 + 0x40) = *plVar1;
    *(long *)(lVar3 + 0x48) = lVar5;
    return;
  }
  plVar4 = &DAT_039c5c28;
  if ((int)((long *)*plVar2)[1] != 0x16) {
    lVar5 = *(long *)*plVar2;
    plVar4 = &DAT_039c5c28;
    if (-param_3 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
      plVar4 = (long *)(lVar5 + (long)(-param_3 + -0xf4629) * 0x10 + 0x20);
    }
  }
  lVar5 = plVar1[1];
  *plVar4 = *plVar1;
  plVar4[1] = lVar5;
  if ((((*(byte *)(plVar1 + 1) >> 6 & 1) == 0) ||
      ((*(byte *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 9) >> 2 & 1) == 0)) ||
     ((*(byte *)(*plVar1 + 9) & 3) == 0)) {
    return;
  }
  FUN_0015ca90();
  return;
}


