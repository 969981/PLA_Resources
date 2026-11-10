/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010bd23c; name: FUN_010bd23c
 */


void FUN_010bd23c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  byte bVar12;
  byte bVar13;
  ulong uVar14;
  
  plVar10 = param_1 + 7;
  plVar4 = (long *)(**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,0x58,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)*plVar10 + 0xb8))();
  }
  FUN_0093b2d4(plVar10,plVar4 + 2,param_2);
  uVar14 = plVar4[3];
  *plVar4 = 0;
  plVar4[1] = uVar14;
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_0093b6f4(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar6 < 2) {
    uVar9 = uVar5 - 1 & uVar14;
  }
  else if (uVar14 < uVar5) {
    uVar9 = uVar14;
  }
  else {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar14 / uVar5;
    }
    uVar9 = uVar14 - uVar9 * uVar5;
  }
  plVar10 = *(long **)(*param_1 + uVar9 * 8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    lVar7 = plVar4[2];
    plVar1 = (long *)PTR_DAT_04379c88;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x58);
    }
    if (uVar6 < 2) {
      bVar13 = 0;
LAB_010bd33c:
      do {
        bVar12 = bVar13;
        plVar8 = plVar10;
        plVar10 = (long *)*plVar8;
        if ((plVar10 == (long *)0x0) || ((plVar10[1] & uVar5 - 1) != uVar9)) break;
        if (plVar10[1] == uVar14) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar10[2] != 0) {
            plVar2 = (long *)(plVar10[2] + 0x58);
          }
          bVar13 = bVar12 | *plVar2 == *plVar1;
          if (*plVar2 == *plVar1) goto LAB_010bd33c;
        }
        else {
          bVar13 = bVar12;
        }
      } while ((bool)(bVar12 ^ 1));
    }
    else {
      bVar13 = 0;
LAB_010bd4c4:
      do {
        bVar12 = bVar13;
        plVar8 = plVar10;
        plVar10 = (long *)*plVar8;
        if (plVar10 == (long *)0x0) break;
        uVar11 = plVar10[1];
        uVar3 = uVar11;
        if (uVar5 <= uVar11) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar11 / uVar5;
          }
          uVar3 = uVar11 - uVar3 * uVar5;
        }
        if (uVar3 != uVar9) break;
        if (uVar11 == uVar14) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar10[2] != 0) {
            plVar2 = (long *)(plVar10[2] + 0x58);
          }
          bVar13 = bVar12 | *plVar2 == *plVar1;
          if (*plVar2 == *plVar1) goto LAB_010bd4c4;
        }
        else {
          bVar13 = bVar12;
        }
      } while ((bool)(bVar12 ^ 1));
    }
  }
  uVar14 = plVar4[1];
  if (uVar6 < 2) {
    uVar14 = uVar14 & uVar5 - 1;
LAB_010bd3c0:
    if (plVar8 != (long *)0x0) goto LAB_010bd3c4;
LAB_010bd45c:
    plVar10 = param_1 + 6;
    *plVar4 = *plVar10;
    *plVar10 = (long)plVar4;
    *(long **)(*param_1 + uVar14 * 8) = plVar10;
    if (*plVar4 == 0) goto LAB_010bd498;
    uVar9 = *(ulong *)(*plVar4 + 8);
    if (uVar6 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar14 = 0;
      if (uVar5 != 0) {
        uVar14 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar14 * uVar5;
    }
  }
  else {
    if (uVar14 < uVar5) goto LAB_010bd3c0;
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar14 / uVar5;
    }
    uVar14 = uVar14 - uVar9 * uVar5;
    if (plVar8 == (long *)0x0) goto LAB_010bd45c;
LAB_010bd3c4:
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
    if (*plVar4 == 0) goto LAB_010bd498;
    uVar9 = *(ulong *)(*plVar4 + 8);
    if (uVar6 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar6 * uVar5;
    }
    if (uVar9 == uVar14) goto LAB_010bd498;
  }
  *(long **)(*param_1 + uVar9 * 8) = plVar4;
LAB_010bd498:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


