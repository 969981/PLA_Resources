/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3deb4; name: FUN_01e3deb4
 */


long * FUN_01e3deb4(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      param_2 = uVar3 - 1 & param_2;
    }
    else if (uVar3 <= param_2) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = param_2 / uVar3;
      }
      param_2 = param_2 - uVar1 * uVar3;
    }
    plVar2 = *(long **)(*param_1 + param_2 * 8);
    if (plVar2 != (long *)0x0) {
      if (uVar4 < 2) {
        while ((plVar2 = (long *)*plVar2, plVar2 != (long *)0x0 &&
               ((plVar2[1] & uVar3 - 1) == param_2))) {
          if (plVar2[2] == *param_3) {
            return plVar2;
          }
        }
      }
      else {
        while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
          uVar4 = plVar2[1];
          if (uVar3 <= uVar4) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar1 * uVar3;
          }
          if (uVar4 != param_2) break;
          if (plVar2[2] == *param_3) {
            return plVar2;
          }
        }
      }
    }
  }
  if ((uVar3 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar3 < (float)(param_1[0xb] + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    FUN_01e3e0e4(param_1,uVar4);
  }
  return (long *)0x0;
}


