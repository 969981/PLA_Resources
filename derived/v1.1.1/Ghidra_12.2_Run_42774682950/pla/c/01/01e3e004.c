/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3e004; name: FUN_01e3e004
 */


void FUN_01e3e004(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar2 = param_1[1];
  uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = param_2[1];
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar3 = uVar2 - 1 & uVar3;
  }
  else if (uVar2 <= uVar3) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar3 / uVar2;
    }
    uVar3 = uVar3 - uVar1 * uVar2;
  }
  plVar5 = *(long **)(*param_1 + uVar3 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar3 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_01e3e0a4;
    uVar3 = *(ulong *)(*param_2 + 8);
    if (uVar4 < 2) {
      uVar3 = uVar3 & uVar2 - 1;
    }
    else if (uVar2 <= uVar3) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      uVar3 = uVar3 - uVar4 * uVar2;
    }
    plVar5 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *param_2 = *plVar5;
  }
  *plVar5 = (long)param_2;
LAB_01e3e0a4:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


