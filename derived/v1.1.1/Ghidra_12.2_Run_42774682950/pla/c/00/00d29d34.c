/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d29d34; name: FUN_00d29d34
 */


void FUN_00d29d34(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar1 = param_1[1];
  uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = param_2[1];
  uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar3 < 2) {
    uVar2 = uVar1 - 1 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar5 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar5 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *param_2 = *plVar4;
    *plVar4 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar4;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if (uVar3 < 2) {
        uVar2 = uVar2 & uVar1 - 1;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(*param_1 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if (uVar3 < 2) {
        uVar5 = uVar5 & uVar1 - 1;
      }
      else if (uVar1 <= uVar5) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar5 / uVar1;
        }
        uVar5 = uVar5 - uVar3 * uVar1;
      }
      if (uVar5 != uVar2) {
        *(long **)(*param_1 + uVar5 * 8) = param_2;
      }
    }
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


