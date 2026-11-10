/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153910; name: FUN_00153910
 */


long FUN_00153910(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (0 < param_2) {
    plVar3 = (long *)(*plVar2 + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar3) {
      plVar3 = &DAT_039c5c28;
    }
    uVar1 = *(uint *)(plVar3 + 1);
    goto joined_r0x00153944;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      plVar3 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x00153944;
    }
    plVar3 = &DAT_039c5c28;
    if ((int)((long *)*plVar2)[1] != 0x16) {
      lVar4 = *(long *)*plVar2;
      plVar3 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar4 + 10)) {
        plVar3 = (long *)(lVar4 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      uVar1 = *(uint *)(plVar3 + 1);
      goto joined_r0x00153944;
    }
  }
  else {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  uVar1 = *(uint *)(plVar3 + 1);
joined_r0x00153944:
  if ((uVar1 & 0x3f) == 0x26) {
    return *plVar3 + (long)param_3 * 0x10 + 0x10;
  }
  if ((uVar1 & 0x3f) != 6) {
    return 0;
  }
  if (0 < param_2) {
    plVar2 = (long *)(*plVar2 + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar2) {
      plVar2 = &DAT_039c5c28;
    }
    return *(long *)(*plVar2 + (long)param_3 * 8 + 0x18);
  }
  if (-0xf4628 < param_2) {
    return *(long *)(*(long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10) + (long)param_3 * 8
                    + 0x18);
  }
  if (param_2 == -0xf4628) {
    return *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + (long)param_3 * 8 + 0x18);
  }
  plVar3 = &DAT_039c5c28;
  if ((int)((long *)*plVar2)[1] != 0x16) {
    lVar4 = *(long *)*plVar2;
    plVar3 = &DAT_039c5c28;
    if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar4 + 10)) {
      plVar3 = (long *)(lVar4 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
    }
  }
  return *(long *)(*plVar3 + (long)param_3 * 8 + 0x18);
}


