/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00989398; name: FUN_00989398
 */


void FUN_00989398(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
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
    uVar8 = uVar5 - 1 & uVar14;
  }
  else if (uVar14 < uVar5) {
    uVar8 = uVar14;
  }
  else {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar14 / uVar5;
    }
    uVar8 = uVar14 - uVar8 * uVar5;
  }
  plVar10 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar10 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    lVar9 = plVar4[2];
    plVar1 = (long *)PTR_DAT_04379c88;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 0x58);
    }
    if (uVar6 < 2) {
      bVar13 = 0;
LAB_00989510:
      do {
        bVar12 = bVar13;
        plVar7 = plVar10;
        plVar10 = (long *)*plVar7;
        if ((plVar10 == (long *)0x0) || ((plVar10[1] & uVar5 - 1) != uVar8)) break;
        if (plVar10[1] == uVar14) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar10[2] != 0) {
            plVar2 = (long *)(plVar10[2] + 0x58);
          }
          bVar13 = bVar12 | *plVar2 == *plVar1;
          if (*plVar2 == *plVar1) goto LAB_00989510;
        }
        else {
          bVar13 = bVar12;
        }
      } while ((bool)(bVar12 ^ 1));
    }
    else {
      bVar13 = 0;
LAB_00989648:
      do {
        bVar12 = bVar13;
        plVar7 = plVar10;
        plVar10 = (long *)*plVar7;
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
        if (uVar3 != uVar8) break;
        if (uVar11 == uVar14) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar10[2] != 0) {
            plVar2 = (long *)(plVar10[2] + 0x58);
          }
          bVar13 = bVar12 | *plVar2 == *plVar1;
          if (*plVar2 == *plVar1) goto LAB_00989648;
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
LAB_00989480:
    if (plVar7 == (long *)0x0) goto LAB_00989484;
LAB_009895f4:
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
    if (*plVar4 == 0) goto LAB_009894c0;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 == uVar14) goto LAB_009894c0;
  }
  else {
    if (uVar14 < uVar5) goto LAB_00989480;
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar14 / uVar5;
    }
    uVar14 = uVar14 - uVar8 * uVar5;
    if (plVar7 != (long *)0x0) goto LAB_009895f4;
LAB_00989484:
    plVar10 = param_1 + 6;
    *plVar4 = *plVar10;
    *plVar10 = (long)plVar4;
    *(long **)(*param_1 + uVar14 * 8) = plVar10;
    if (*plVar4 == 0) goto LAB_009894c0;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar5 - 1;
    }
    else if (uVar5 <= uVar8) {
      uVar14 = 0;
      if (uVar5 != 0) {
        uVar14 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar14 * uVar5;
    }
  }
  *(long **)(*param_1 + uVar8 * 8) = plVar4;
LAB_009894c0:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


