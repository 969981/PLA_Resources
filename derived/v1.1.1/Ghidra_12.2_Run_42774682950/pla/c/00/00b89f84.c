/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b89f84; name: FUN_00b89f84
 */


long * FUN_00b89f84(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x22;
  long *plVar6;
  undefined1 auStack_60 [8];
  long *local_58 [3];
  ulong *puStack_38;
  
  uVar4 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      unaff_x22 = uVar5 - 1 & uVar4;
    }
    else {
      unaff_x22 = uVar4;
      if (uVar5 <= uVar4) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar4 / uVar5;
        }
        unaff_x22 = uVar4 - uVar1 * uVar5;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar6 != (long *)0x0) {
      if (uVar2 < 2) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) ||
             (plVar6[1] != uVar4 && (plVar6[1] & uVar5 - 1) != unaff_x22)) goto LAB_00b8a0a0;
        } while (plVar6[2] != uVar4);
      }
      else {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00b8a0a0;
          uVar2 = plVar6[1];
          if (uVar2 != uVar4) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x22) goto LAB_00b8a0a0;
          }
        } while (plVar6[2] != uVar4);
      }
      goto LAB_00b8a02c;
    }
  }
LAB_00b8a0a0:
  puStack_38 = param_2;
  FUN_00b8a1e8(local_58,param_1,uVar4,&DAT_03a77ac9,&puStack_38,auStack_60);
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    FUN_00b7bac8(param_1,uVar2);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x22 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      unaff_x22 = uVar4;
    }
    else {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar4 / uVar5;
      }
      unaff_x22 = uVar4 - uVar2 * uVar5;
    }
  }
  plVar6 = local_58[0];
  plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_58[0] = *plVar3;
    *plVar3 = (long)local_58[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar3;
    if (*local_58[0] != 0) {
      uVar4 = *(ulong *)(*local_58[0] + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar4 = uVar4 & uVar5 - 1;
      }
      else if (uVar5 <= uVar4) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar2 * uVar5;
      }
      *(long **)(*param_1 + uVar4 * 8) = local_58[0];
    }
  }
  else {
    *local_58[0] = *plVar3;
    *plVar3 = (long)local_58[0];
  }
  local_58[0] = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_00b8a374(local_58);
LAB_00b8a02c:
  return plVar6 + 3;
}


