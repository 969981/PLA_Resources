/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00492e40; name: FUN_00492e40
 */


void FUN_00492e40(ulong *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 == 0) {
    uVar8 = 0;
    *param_1 = 0;
LAB_004930dc:
    param_1[1] = 0;
    uVar10 = uVar8;
joined_r0x004930e8:
    if (uVar10 < param_3) goto LAB_004930ec;
LAB_00492f3c:
    param_1[2] = 0;
    uVar8 = uVar10;
joined_r0x00492f48:
    if (param_3 <= uVar8) goto LAB_004931a0;
LAB_00492f4c:
    uVar9 = (ulong)param_2[uVar8];
    uVar10 = uVar8 + 1;
    if (param_3 <= uVar10) {
LAB_00492ff0:
      param_1[3] = uVar9;
      goto joined_r0x004931ac;
    }
    uVar2 = CONCAT11(param_2[uVar10],param_2[uVar8]);
    uVar9 = (ulong)uVar2;
    uVar10 = uVar8 + 2;
    if (param_3 <= uVar10) goto LAB_00492ff0;
    uVar3 = CONCAT12(param_2[uVar10],uVar2);
    uVar9 = (ulong)uVar3;
    uVar10 = uVar8 + 3;
    if (param_3 <= uVar10) goto LAB_00492ff0;
    uVar4 = CONCAT13(param_2[uVar10],uVar3);
    uVar9 = (ulong)uVar4;
    uVar10 = uVar8 + 4;
    if (param_3 <= uVar10) goto LAB_00492ff0;
    uVar5 = CONCAT14(param_2[uVar10],uVar4);
    uVar9 = (ulong)uVar5;
    uVar10 = uVar8 + 5;
    if (param_3 <= uVar10) goto LAB_00492ff0;
    uVar6 = CONCAT15(param_2[uVar10],uVar5);
    uVar9 = (ulong)uVar6;
    uVar10 = uVar8 + 6;
    if (param_3 <= uVar10) goto LAB_00492ff0;
    uVar7 = CONCAT16(param_2[uVar10],uVar6);
    uVar9 = (ulong)uVar7;
    uVar10 = uVar8 + 7;
    if (param_3 <= uVar10) goto LAB_00492ff0;
    pbVar1 = param_2 + uVar10;
    uVar10 = uVar8 + 8;
    param_1[3] = CONCAT17(*pbVar1,uVar7);
    if (uVar10 < param_3) goto LAB_004931b0;
LAB_00493000:
    param_1[4] = 0;
    uVar8 = uVar10;
  }
  else {
    if (param_3 < 2) {
      uVar8 = 1;
      *param_1 = (ulong)*param_2;
      if (1 < param_3) goto LAB_00492e88;
      goto LAB_004930dc;
    }
    uVar2 = CONCAT11(param_2[1],*param_2);
    if (param_3 == 2) {
      uVar8 = 2;
      *param_1 = (ulong)uVar2;
      goto LAB_004930dc;
    }
    uVar3 = CONCAT12(param_2[2],uVar2);
    if (param_3 < 4) {
      uVar8 = 3;
      *param_1 = (ulong)uVar3;
      if (3 < param_3) goto LAB_00492e88;
      goto LAB_004930dc;
    }
    uVar4 = CONCAT13(param_2[3],uVar3);
    if (param_3 == 4) {
      uVar8 = 4;
      *param_1 = (ulong)uVar4;
      goto LAB_004930dc;
    }
    uVar5 = CONCAT14(param_2[4],uVar4);
    if (param_3 < 6) {
      uVar8 = 5;
      *param_1 = (ulong)uVar5;
      if (5 < param_3) goto LAB_00492e88;
      goto LAB_004930dc;
    }
    uVar6 = CONCAT15(param_2[5],uVar5);
    if (param_3 == 6) {
      uVar8 = 6;
      *param_1 = (ulong)uVar6;
      goto LAB_004930dc;
    }
    uVar7 = CONCAT16(param_2[6],uVar6);
    if (param_3 < 8) {
      uVar8 = 7;
      *param_1 = (ulong)uVar7;
      if (param_3 < 8) goto LAB_004930dc;
    }
    else {
      uVar8 = 8;
      *param_1 = CONCAT17(param_2[7],uVar7);
      if (param_3 < 9) goto LAB_004930dc;
    }
LAB_00492e88:
    uVar9 = (ulong)param_2[uVar8];
    uVar10 = uVar8 + 1;
    if (param_3 <= uVar10) {
LAB_00492f2c:
      param_1[1] = uVar9;
      goto joined_r0x004930e8;
    }
    uVar2 = CONCAT11(param_2[uVar10],param_2[uVar8]);
    uVar9 = (ulong)uVar2;
    uVar10 = uVar8 + 2;
    if (param_3 <= uVar10) goto LAB_00492f2c;
    uVar3 = CONCAT12(param_2[uVar10],uVar2);
    uVar9 = (ulong)uVar3;
    uVar10 = uVar8 + 3;
    if (param_3 <= uVar10) goto LAB_00492f2c;
    uVar4 = CONCAT13(param_2[uVar10],uVar3);
    uVar9 = (ulong)uVar4;
    uVar10 = uVar8 + 4;
    if (param_3 <= uVar10) goto LAB_00492f2c;
    uVar5 = CONCAT14(param_2[uVar10],uVar4);
    uVar9 = (ulong)uVar5;
    uVar10 = uVar8 + 5;
    if (param_3 <= uVar10) goto LAB_00492f2c;
    uVar6 = CONCAT15(param_2[uVar10],uVar5);
    uVar9 = (ulong)uVar6;
    uVar10 = uVar8 + 6;
    if (param_3 <= uVar10) goto LAB_00492f2c;
    uVar7 = CONCAT16(param_2[uVar10],uVar6);
    uVar9 = (ulong)uVar7;
    uVar10 = uVar8 + 7;
    if (param_3 <= uVar10) goto LAB_00492f2c;
    pbVar1 = param_2 + uVar10;
    uVar10 = uVar8 + 8;
    param_1[1] = CONCAT17(*pbVar1,uVar7);
    if (param_3 <= uVar10) goto LAB_00492f3c;
LAB_004930ec:
    uVar9 = (ulong)param_2[uVar10];
    uVar8 = uVar10 + 1;
    if (uVar8 < param_3) {
      uVar2 = CONCAT11(param_2[uVar8],param_2[uVar10]);
      uVar9 = (ulong)uVar2;
      uVar8 = uVar10 + 2;
      if (uVar8 < param_3) {
        uVar3 = CONCAT12(param_2[uVar8],uVar2);
        uVar9 = (ulong)uVar3;
        uVar8 = uVar10 + 3;
        if (uVar8 < param_3) {
          uVar4 = CONCAT13(param_2[uVar8],uVar3);
          uVar9 = (ulong)uVar4;
          uVar8 = uVar10 + 4;
          if (uVar8 < param_3) {
            uVar5 = CONCAT14(param_2[uVar8],uVar4);
            uVar9 = (ulong)uVar5;
            uVar8 = uVar10 + 5;
            if (uVar8 < param_3) {
              uVar6 = CONCAT15(param_2[uVar8],uVar5);
              uVar9 = (ulong)uVar6;
              uVar8 = uVar10 + 6;
              if (uVar8 < param_3) {
                uVar7 = CONCAT16(param_2[uVar8],uVar6);
                uVar9 = (ulong)uVar7;
                uVar8 = uVar10 + 7;
                if (uVar8 < param_3) {
                  pbVar1 = param_2 + uVar8;
                  uVar8 = uVar10 + 8;
                  param_1[2] = CONCAT17(*pbVar1,uVar7);
                  goto joined_r0x00492f48;
                }
              }
            }
          }
        }
      }
    }
    param_1[2] = uVar9;
    if (uVar8 < param_3) goto LAB_00492f4c;
LAB_004931a0:
    param_1[3] = 0;
    uVar10 = uVar8;
joined_r0x004931ac:
    if (param_3 <= uVar10) goto LAB_00493000;
LAB_004931b0:
    uVar9 = (ulong)param_2[uVar10];
    uVar8 = uVar10 + 1;
    if (uVar8 < param_3) {
      uVar2 = CONCAT11(param_2[uVar8],param_2[uVar10]);
      uVar9 = (ulong)uVar2;
      uVar8 = uVar10 + 2;
      if (param_3 <= uVar8) goto LAB_00493254;
      uVar3 = CONCAT12(param_2[uVar8],uVar2);
      uVar9 = (ulong)uVar3;
      uVar8 = uVar10 + 3;
      if (param_3 <= uVar8) goto LAB_00493254;
      uVar4 = CONCAT13(param_2[uVar8],uVar3);
      uVar9 = (ulong)uVar4;
      uVar8 = uVar10 + 4;
      if (param_3 <= uVar8) goto LAB_00493254;
      uVar5 = CONCAT14(param_2[uVar8],uVar4);
      uVar9 = (ulong)uVar5;
      uVar8 = uVar10 + 5;
      if (param_3 <= uVar8) goto LAB_00493254;
      uVar6 = CONCAT15(param_2[uVar8],uVar5);
      uVar9 = (ulong)uVar6;
      uVar8 = uVar10 + 6;
      if (param_3 <= uVar8) goto LAB_00493254;
      uVar7 = CONCAT16(param_2[uVar8],uVar6);
      uVar9 = (ulong)uVar7;
      uVar8 = uVar10 + 7;
      if (param_3 <= uVar8) goto LAB_00493254;
      param_1[4] = CONCAT17(param_2[uVar8],uVar7);
      uVar8 = uVar10 + 8;
    }
    else {
LAB_00493254:
      param_1[4] = uVar9;
    }
  }
  if (uVar8 < param_3) {
    uVar9 = (ulong)param_2[uVar8];
    uVar10 = uVar8 + 1;
    if (uVar10 < param_3) {
      uVar2 = CONCAT11(param_2[uVar10],param_2[uVar8]);
      uVar9 = (ulong)uVar2;
      uVar10 = uVar8 + 2;
      if (uVar10 < param_3) {
        uVar3 = CONCAT12(param_2[uVar10],uVar2);
        uVar9 = (ulong)uVar3;
        uVar10 = uVar8 + 3;
        if (uVar10 < param_3) {
          uVar4 = CONCAT13(param_2[uVar10],uVar3);
          uVar9 = (ulong)uVar4;
          uVar10 = uVar8 + 4;
          if (uVar10 < param_3) {
            uVar5 = CONCAT14(param_2[uVar10],uVar4);
            uVar9 = (ulong)uVar5;
            uVar10 = uVar8 + 5;
            if (uVar10 < param_3) {
              uVar6 = CONCAT15(param_2[uVar10],uVar5);
              uVar9 = (ulong)uVar6;
              uVar10 = uVar8 + 6;
              if (uVar10 < param_3) {
                uVar7 = CONCAT16(param_2[uVar10],uVar6);
                uVar9 = (ulong)uVar7;
                uVar10 = uVar8 + 7;
                if (uVar10 < param_3) {
                  param_1[5] = CONCAT17(param_2[uVar10],uVar7);
                  uVar8 = uVar8 + 8;
                  goto joined_r0x004930ac;
                }
              }
            }
          }
        }
      }
    }
    param_1[5] = uVar9;
    uVar8 = uVar10;
  }
  else {
    param_1[5] = 0;
  }
joined_r0x004930ac:
  if (param_3 <= uVar8) {
    param_1[6] = 0;
    return;
  }
  uVar10 = (ulong)param_2[uVar8];
  if (uVar8 + 1 < param_3) {
    uVar2 = CONCAT11(param_2[uVar8 + 1],param_2[uVar8]);
    uVar10 = (ulong)uVar2;
    if (uVar8 + 2 < param_3) {
      uVar3 = CONCAT12(param_2[uVar8 + 2],uVar2);
      uVar10 = (ulong)uVar3;
      if (uVar8 + 3 < param_3) {
        uVar4 = CONCAT13(param_2[uVar8 + 3],uVar3);
        uVar10 = (ulong)uVar4;
        if (uVar8 + 4 < param_3) {
          uVar5 = CONCAT14(param_2[uVar8 + 4],uVar4);
          uVar10 = (ulong)uVar5;
          if (uVar8 + 5 < param_3) {
            uVar6 = CONCAT15(param_2[uVar8 + 5],uVar5);
            uVar10 = (ulong)uVar6;
            if (uVar8 + 6 < param_3) {
              uVar7 = CONCAT16(param_2[uVar8 + 6],uVar6);
              uVar10 = (ulong)uVar7;
              if (uVar8 + 7 < param_3) {
                uVar10 = CONCAT17(param_2[uVar8 + 7],uVar7);
              }
            }
          }
        }
      }
    }
  }
  param_1[6] = uVar10;
  return;
}


