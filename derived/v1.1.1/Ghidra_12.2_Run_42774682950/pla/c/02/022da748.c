/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022da748; name: FUN_022da748
 */


void FUN_022da748(long *param_1,byte *param_2,long *param_3,long *param_4)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x25;
  long *plVar9;
  undefined1 auStack_58 [8];
  
  uVar3 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar3 = (ulong)(*param_2 >> 1);
  }
  uVar3 = FUN_008e8ed4(auStack_58,pbVar1,uVar3);
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar4 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      unaff_x25 = uVar8 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar8 <= uVar3) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar3 / uVar8;
        }
        unaff_x25 = uVar3 - uVar2 * uVar8;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar9 != (long *)0x0) {
      if (uVar4 < 2) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar3 || (plVar9[1] & uVar8 - 1) == unaff_x25))) {
          uVar4 = FUN_022da530(plVar9 + 2,param_2);
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
      }
      else {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar4 = plVar9[1];
          if (uVar4 != uVar3) {
            if (uVar8 <= uVar4) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar4 / uVar8;
              }
              uVar4 = uVar4 - uVar2 * uVar8;
            }
            if (uVar4 != unaff_x25) break;
          }
          uVar4 = FUN_022da530(plVar9 + 2,param_2);
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
      }
    }
  }
  plVar9 = DAT_043f1798;
  lVar7 = tpidr_el0;
  plVar5 = *(long **)(lVar7 + 0x20);
  if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
    *(long **)(lVar7 + 0x20) = DAT_043f1798;
    plVar5 = plVar9;
  }
  plVar9 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x40,8);
  lVar7 = param_3[1];
  lVar6 = param_3[2];
  plVar9[2] = *param_3;
  plVar9[3] = lVar7;
  plVar9[4] = lVar6;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lVar7 = param_4[1];
  lVar6 = *param_4;
  plVar9[7] = param_4[2];
  plVar9[5] = lVar6;
  plVar9[6] = lVar7;
  *plVar9 = 0;
  plVar9[1] = uVar3;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    FUN_008e9ae4(param_1,uVar4);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar3;
    }
    else if (uVar3 < uVar8) {
      unaff_x25 = uVar3;
    }
    else {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar3 / uVar8;
      }
      unaff_x25 = uVar3 - uVar4 * uVar8;
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar9 = *plVar5;
    *plVar5 = (long)plVar9;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar5;
    if (*plVar9 == 0) goto LAB_022da92c;
    uVar3 = *(ulong *)(*plVar9 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar3 = uVar3 & uVar8 - 1;
    }
    else if (uVar8 <= uVar3) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar3 / uVar8;
      }
      uVar3 = uVar3 - uVar4 * uVar8;
    }
    plVar5 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_022da92c:
  param_1[3] = param_1[3] + 1;
  return;
}


