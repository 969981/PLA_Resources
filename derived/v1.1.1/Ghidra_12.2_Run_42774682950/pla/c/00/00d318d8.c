/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d318d8; name: FUN_00d318d8
 */


/* WARNING: Removing unreachable block (ram,0x00d31ba0) */

void FUN_00d318d8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  
  plVar12 = param_1 + 7;
  plVar6 = (long *)(**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,0x58,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)*plVar12 + 0xb8))();
  }
  FUN_0093b2d4(plVar12,plVar6 + 2,param_2);
  uVar16 = plVar6[3];
  *plVar6 = 0;
  plVar6[1] = uVar16;
  uVar7 = param_1[1];
  if ((uVar7 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar7 < (float)(param_1[0xb] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    FUN_0093b6f4(param_1,uVar8);
    uVar7 = param_1[1];
  }
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar11 = uVar7 - 1 & uVar16;
  }
  else if (uVar16 < uVar7) {
    uVar11 = uVar16;
  }
  else {
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar16 / uVar7;
    }
    uVar11 = uVar16 - uVar11 * uVar7;
  }
  plVar12 = *(long **)(*param_1 + uVar11 * 8);
  if (plVar12 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    lVar9 = plVar6[2];
    plVar1 = (long *)PTR_DAT_04379c88;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 0x58);
    }
    if (uVar8 < 2) {
      bVar15 = 0;
LAB_00d319d8:
      do {
        bVar14 = bVar15;
        plVar10 = plVar12;
        plVar12 = (long *)*plVar10;
        if ((plVar12 == (long *)0x0) || ((plVar12[1] & uVar7 - 1) != uVar11)) break;
        if (plVar12[1] == uVar16) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar12[2] != 0) {
            plVar2 = (long *)(plVar12[2] + 0x58);
          }
          bVar15 = bVar14 | *plVar2 == *plVar1;
          if (*plVar2 == *plVar1) goto LAB_00d319d8;
        }
        else {
          bVar15 = bVar14;
        }
      } while ((bool)(bVar14 ^ 1));
    }
    else {
      bVar5 = false;
LAB_00d31b60:
      do {
        bVar4 = bVar5;
        plVar10 = plVar12;
        plVar12 = (long *)*plVar10;
        if (plVar12 == (long *)0x0) break;
        uVar13 = plVar12[1];
        uVar3 = uVar13;
        if (uVar7 <= uVar13) {
          uVar3 = 0;
          if (uVar7 != 0) {
            uVar3 = uVar13 / uVar7;
          }
          uVar3 = uVar13 - uVar3 * uVar7;
        }
        if (uVar3 != uVar11) break;
        bVar5 = bVar4;
        if (uVar13 == uVar16) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar12[2] != 0) {
            plVar2 = (long *)(plVar12[2] + 0x58);
          }
          bVar5 = (bool)(bVar4 | *plVar2 == *plVar1);
          if (*plVar2 == *plVar1) goto LAB_00d31b60;
        }
      } while (!bVar4);
    }
  }
  uVar16 = plVar6[1];
  if (uVar8 < 2) {
    uVar16 = uVar16 & uVar7 - 1;
LAB_00d31a5c:
    if (plVar10 == (long *)0x0) goto LAB_00d31af8;
LAB_00d31a60:
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
    if (*plVar6 == 0) goto LAB_00d31b34;
    uVar11 = *(ulong *)(*plVar6 + 8);
    if (uVar8 < 2) {
      uVar11 = uVar11 & uVar7 - 1;
    }
    else if (uVar7 <= uVar11) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar8 * uVar7;
    }
    if (uVar11 == uVar16) goto LAB_00d31b34;
  }
  else {
    if (uVar16 < uVar7) goto LAB_00d31a5c;
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar16 / uVar7;
    }
    uVar16 = uVar16 - uVar11 * uVar7;
    if (plVar10 != (long *)0x0) goto LAB_00d31a60;
LAB_00d31af8:
    plVar12 = param_1 + 6;
    *plVar6 = *plVar12;
    *plVar12 = (long)plVar6;
    *(long **)(*param_1 + uVar16 * 8) = plVar12;
    if (*plVar6 == 0) goto LAB_00d31b34;
    uVar11 = *(ulong *)(*plVar6 + 8);
    if (uVar8 < 2) {
      uVar11 = uVar11 & uVar7 - 1;
    }
    else if (uVar7 <= uVar11) {
      uVar16 = 0;
      if (uVar7 != 0) {
        uVar16 = uVar11 / uVar7;
      }
      uVar11 = uVar11 - uVar16 * uVar7;
    }
  }
  *(long **)(*param_1 + uVar11 * 8) = plVar6;
LAB_00d31b34:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


