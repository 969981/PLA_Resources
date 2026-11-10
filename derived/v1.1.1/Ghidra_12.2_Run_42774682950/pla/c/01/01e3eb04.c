/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3eb04; name: FUN_01e3eb04
 */


long * FUN_01e3eb04(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      param_2 = uVar4 - 1 & param_2;
    }
    else if (uVar4 <= param_2) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = param_2 / uVar4;
      }
      param_2 = param_2 - uVar1 * uVar4;
    }
    plVar3 = *(long **)(*param_1 + param_2 * 8);
    if (plVar3 != (long *)0x0) {
      if (uVar2 < 2) {
        while ((plVar3 = (long *)*plVar3, plVar3 != (long *)0x0 &&
               ((plVar3[1] & uVar4 - 1) == param_2))) {
          if (plVar3[2] == *param_3) {
            return plVar3;
          }
        }
      }
      else {
        while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if (uVar4 <= uVar2) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar2 / uVar4;
            }
            uVar2 = uVar2 - uVar1 * uVar4;
          }
          if (uVar2 != param_2) break;
          if (plVar3[2] == *param_3) {
            return plVar3;
          }
        }
      }
    }
  }
  if ((uVar4 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar4 < (float)(param_1[0xb] + 1))) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar2 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_01e3ed30(param_1,uVar2);
  }
  return (long *)0x0;
}


