/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b0510; name: FUN_009b0510
 */


void FUN_009b0510(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar4 = param_2[1];
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = param_3[1];
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar3 = uVar4 - 1 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar6 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 6) {
    uVar6 = plVar7[1];
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar1 * uVar4;
    }
    if (uVar6 == uVar3) goto LAB_009b0588;
  }
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar1 * uVar4;
    }
    if (uVar6 == uVar3) goto LAB_009b0588;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_009b0588:
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar5 * uVar4;
    }
    if (uVar6 != uVar3) {
      *(long **)(*param_2 + uVar6 * 8) = plVar7;
    }
  }
  *plVar7 = *param_3;
  *param_3 = 0;
  param_2[0xb] = param_2[0xb] + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = param_3;
  param_1[1] = param_2 + 7;
  return;
}


