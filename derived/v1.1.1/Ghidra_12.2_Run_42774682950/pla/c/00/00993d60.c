/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00993d60; name: FUN_00993d60
 */


long * FUN_00993d60(long *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x22;
  int *local_50;
  long *local_48 [3];
  
  iVar1 = *param_2;
  uVar5 = (ulong)iVar1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x22 = uVar6 - 1 & uVar5;
    }
    else {
      unaff_x22 = uVar5;
      if (uVar6 <= uVar5) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar5 / uVar6;
        }
        unaff_x22 = uVar5 - uVar2 * uVar6;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar4 != (long *)0x0) {
      if (uVar3 < 2) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar5 && (plVar4[1] & uVar6 - 1) != unaff_x22)) goto LAB_00993e0c;
        } while ((int)plVar4[2] != iVar1);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00993e0c;
          uVar3 = plVar4[1];
          if (uVar3 != uVar5) {
            if (uVar6 <= uVar3) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar3 / uVar6;
              }
              uVar3 = uVar3 - uVar2 * uVar6;
            }
            if (uVar3 != unaff_x22) goto LAB_00993e0c;
          }
        } while ((int)plVar4[2] != iVar1);
      }
      goto LAB_00993ec8;
    }
  }
LAB_00993e0c:
  local_50 = param_2;
  FUN_009ac8d0(local_48,param_1,uVar5,&local_50);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar3 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    FUN_009ac95c(param_1,uVar3);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x22 = uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      unaff_x22 = uVar5;
    }
    else {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar5 / uVar6;
      }
      unaff_x22 = uVar5 - uVar3 * uVar6;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar4;
    if (*local_48[0] != 0) {
      uVar5 = *(ulong *)(*local_48[0] + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar5 = uVar5 & uVar6 - 1;
      }
      else if (uVar6 <= uVar5) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar5 / uVar6;
        }
        uVar5 = uVar5 - uVar3 * uVar6;
      }
      *(long **)(*param_1 + uVar5 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar4 = local_48[0];
LAB_00993ec8:
  return plVar4 + 3;
}


