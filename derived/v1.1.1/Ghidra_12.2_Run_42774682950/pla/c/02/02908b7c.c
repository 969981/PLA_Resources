/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02908b7c; name: FUN_02908b7c
 */


/* WARNING: Removing unreachable block (ram,0x02908d40) */

void FUN_02908b7c(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_2[2];
  param_2[1] = uVar10;
  uVar3 = param_1[1];
  if ((uVar3 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar3 < (float)(param_1[0xb] + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    FUN_028db108(param_1,uVar4);
    uVar3 = param_1[1];
  }
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar6 = uVar3 - 1 & uVar10;
  }
  else {
    uVar6 = uVar10;
    if (uVar3 <= uVar10) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar10 / uVar3;
      }
      uVar6 = uVar10 - uVar6 * uVar3;
    }
  }
  plVar7 = *(long **)(*param_1 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else if (uVar4 < 2) {
    bVar2 = false;
    do {
      bVar1 = bVar2;
      plVar5 = plVar7;
      plVar7 = (long *)*plVar5;
      if ((plVar7 == (long *)0x0) || ((plVar7[1] & uVar3 - 1) != uVar6)) break;
      bVar2 = bVar1;
    } while (((plVar7[1] == uVar10) &&
             (bVar2 = (bool)(bVar1 | plVar7[2] == param_2[2]), plVar7[2] == param_2[2])) || (!bVar1)
            );
  }
  else {
    bVar2 = false;
    while (bVar1 = bVar2, plVar5 = plVar7, plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
      uVar8 = plVar7[1];
      uVar9 = uVar8;
      if (uVar3 <= uVar8) {
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = uVar8 / uVar3;
        }
        uVar9 = uVar8 - uVar9 * uVar3;
      }
      if ((uVar9 != uVar6) ||
         (((bVar2 = bVar1, uVar8 != uVar10 ||
           (bVar2 = (bool)(bVar1 | plVar7[2] == param_2[2]), plVar7[2] != param_2[2])) && (bVar1))))
      break;
    }
  }
  uVar10 = param_2[1];
  if (uVar4 < 2) {
    uVar10 = uVar10 & uVar3 - 1;
    if (plVar5 == (long *)0x0) goto LAB_02908dac;
LAB_02908d64:
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    if (*param_2 == 0) goto LAB_02908e10;
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
    if (uVar6 == uVar10) goto LAB_02908e10;
  }
  else {
    if (uVar3 <= uVar10) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar10 / uVar3;
      }
      uVar10 = uVar10 - uVar6 * uVar3;
    }
    if (plVar5 != (long *)0x0) goto LAB_02908d64;
LAB_02908dac:
    plVar7 = param_1 + 6;
    *param_2 = *plVar7;
    *plVar7 = (long)param_2;
    *(long **)(*param_1 + uVar10 * 8) = plVar7;
    if (*param_2 == 0) goto LAB_02908e10;
    uVar6 = *(ulong *)(*param_2 + 8);
    if (uVar4 < 2) {
      uVar6 = uVar6 & uVar3 - 1;
    }
    else if (uVar3 <= uVar6) {
      uVar10 = 0;
      if (uVar3 != 0) {
        uVar10 = uVar6 / uVar3;
      }
      uVar6 = uVar6 - uVar10 * uVar3;
    }
  }
  *(long **)(*param_1 + uVar6 * 8) = param_2;
LAB_02908e10:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


