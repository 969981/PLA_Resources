/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fe0b4; name: FUN_028fe0b4
 */


/* WARNING: Removing unreachable block (ram,0x028fe274) */

void FUN_028fe0b4(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = param_2[2];
  param_2[1] = uVar11;
  uVar3 = param_1[1];
  if ((uVar3 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar3 < (float)(param_1[0xb] + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    FUN_028d7518(param_1,uVar4);
    uVar3 = param_1[1];
  }
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar6 = uVar3 - 1 & uVar11;
  }
  else {
    uVar6 = uVar11;
    if (uVar3 <= uVar11) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar11 / uVar3;
      }
      uVar6 = uVar11 - uVar6 * uVar3;
    }
  }
  plVar7 = *(long **)(*param_1 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar8 = param_2[2];
    if (uVar4 < 2) {
      bVar2 = false;
      do {
        bVar1 = bVar2;
        plVar5 = plVar7;
        plVar7 = (long *)*plVar5;
        if ((plVar7 == (long *)0x0) || ((plVar7[1] & uVar3 - 1) != uVar6)) break;
        bVar2 = bVar1;
      } while (((plVar7[1] == uVar11) &&
               (bVar2 = (bool)(bVar1 | plVar7[2] == lVar8), plVar7[2] == lVar8)) || (!bVar1));
    }
    else {
      bVar2 = false;
      while (bVar1 = bVar2, plVar5 = plVar7, plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        uVar10 = uVar9;
        if (uVar3 <= uVar9) {
          uVar10 = 0;
          if (uVar3 != 0) {
            uVar10 = uVar9 / uVar3;
          }
          uVar10 = uVar9 - uVar10 * uVar3;
        }
        if ((uVar10 != uVar6) ||
           (((bVar2 = bVar1, uVar9 != uVar11 ||
             (bVar2 = (bool)(bVar1 | plVar7[2] == lVar8), plVar7[2] != lVar8)) && (bVar1)))) break;
      }
    }
  }
  uVar11 = param_2[1];
  if (uVar4 < 2) {
    uVar11 = uVar11 & uVar3 - 1;
    if (plVar5 == (long *)0x0) goto LAB_028fe2e0;
LAB_028fe298:
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    if (*param_2 == 0) goto LAB_028fe344;
    uVar6 = *(ulong *)(*param_2 + 8);
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar4 * uVar3;
    }
    if (uVar6 == uVar11) goto LAB_028fe344;
  }
  else {
    if (uVar3 <= uVar11) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar11 / uVar3;
      }
      uVar11 = uVar11 - uVar6 * uVar3;
    }
    if (plVar5 != (long *)0x0) goto LAB_028fe298;
LAB_028fe2e0:
    plVar7 = param_1 + 6;
    *param_2 = *plVar7;
    *plVar7 = (long)param_2;
    *(long **)(*param_1 + uVar11 * 8) = plVar7;
    if (*param_2 == 0) goto LAB_028fe344;
    uVar6 = *(ulong *)(*param_2 + 8);
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar11 = 0;
      if (uVar3 != 0) {
        uVar11 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar11 * uVar3;
    }
  }
  *(long **)(*param_1 + uVar6 * 8) = param_2;
LAB_028fe344:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


