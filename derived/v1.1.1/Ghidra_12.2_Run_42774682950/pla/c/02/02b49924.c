/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b49924; name: FUN_02b49924
 */


/* WARNING: Removing unreachable block (ram,0x02b49b6c) */

void FUN_02b49924(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  plVar11 = param_1 + 7;
  plVar5 = (long *)(**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,0x58,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)*plVar11 + 0xb8))();
  }
  FUN_0093b2d4(plVar11,plVar5 + 2,param_2);
  uVar14 = plVar5[3];
  *plVar5 = 0;
  plVar5[1] = uVar14;
  uVar6 = param_1[1];
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    FUN_0093b6f4(param_1,uVar7);
    uVar6 = param_1[1];
  }
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar8 = uVar6 - 1 & uVar14;
  }
  else {
    uVar8 = uVar14;
    if (uVar6 <= uVar14) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar14 / uVar6;
      }
      uVar8 = uVar14 - uVar8 * uVar6;
    }
  }
  plVar11 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar11 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    lVar9 = plVar5[2];
    plVar1 = (long *)PTR_DAT_04379c88;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 0x58);
    }
    if (uVar7 < 2) {
      bVar4 = false;
LAB_02b49b04:
      do {
        bVar3 = bVar4;
        plVar10 = plVar11;
        plVar11 = (long *)*plVar10;
        if ((plVar11 == (long *)0x0) || ((plVar11[1] & uVar6 - 1) != uVar8)) break;
        bVar4 = bVar3;
        if (plVar11[1] == uVar14) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar11[2] != 0) {
            plVar2 = (long *)(plVar11[2] + 0x58);
          }
          bVar4 = (bool)(bVar3 | *plVar2 == *plVar1);
          if (*plVar2 == *plVar1) goto LAB_02b49b04;
        }
      } while (!bVar3);
    }
    else {
      bVar4 = false;
LAB_02b49a70:
      do {
        bVar3 = bVar4;
        plVar10 = plVar11;
        plVar11 = (long *)*plVar10;
        if (plVar11 == (long *)0x0) break;
        uVar12 = plVar11[1];
        uVar13 = uVar12;
        if (uVar6 <= uVar12) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar12 / uVar6;
          }
          uVar13 = uVar12 - uVar13 * uVar6;
        }
        if (uVar13 != uVar8) break;
        bVar4 = bVar3;
        if (uVar12 == uVar14) {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (plVar11[2] != 0) {
            plVar2 = (long *)(plVar11[2] + 0x58);
          }
          bVar4 = (bool)(bVar3 | *plVar2 == *plVar1);
          if (*plVar2 == *plVar1) goto LAB_02b49a70;
        }
      } while (!bVar3);
    }
  }
  uVar14 = plVar5[1];
  if (uVar7 < 2) {
    uVar14 = uVar14 & uVar6 - 1;
  }
  else if (uVar6 <= uVar14) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar14 / uVar6;
    }
    uVar14 = uVar14 - uVar8 * uVar6;
  }
  if (plVar10 == (long *)0x0) {
    plVar11 = param_1 + 6;
    *plVar5 = *plVar11;
    *plVar11 = (long)plVar5;
    *(long **)(*param_1 + uVar14 * 8) = plVar11;
    if (*plVar5 != 0) {
      uVar14 = *(ulong *)(*plVar5 + 8);
      if (uVar7 < 2) {
        uVar14 = uVar14 & uVar6 - 1;
      }
      else if (uVar6 <= uVar14) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar14 / uVar6;
        }
        uVar14 = uVar14 - uVar7 * uVar6;
      }
      *(long **)(*param_1 + uVar14 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar10;
    *plVar10 = (long)plVar5;
    if (*plVar5 != 0) {
      uVar8 = *(ulong *)(*plVar5 + 8);
      if (uVar7 < 2) {
        uVar8 = uVar8 & uVar6 - 1;
      }
      else if (uVar6 <= uVar8) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar8 / uVar6;
        }
        uVar8 = uVar8 - uVar7 * uVar6;
      }
      if (uVar8 != uVar14) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
      }
    }
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


