/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d08ee0; name: FUN_00d08ee0
 */


void FUN_00d08ee0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x22;
  long *local_48 [3];
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      unaff_x22 = uVar4 - 1 & 0x4b0587b63ecd0d8e;
    }
    else {
      unaff_x22 = 0x4b0587b63ecd0d8e;
      if (uVar4 < 0x4b0587b63ecd0d8f) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = 0x4b0587b63ecd0d8e / uVar4;
        }
        unaff_x22 = 0x4b0587b63ecd0d8e - uVar1 * uVar4;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar3 != (long *)0x0) {
      if (uVar2 < 2) {
        while ((plVar3 = (long *)*plVar3, plVar3 != (long *)0x0 &&
               (plVar3[1] == 0x4b0587b63ecd0d8e || (plVar3[1] & uVar4 - 1) == unaff_x22))) {
          if (plVar3[2] == 0x4b0587b63ecd0d8e) {
            return;
          }
        }
      }
      else {
        while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if (uVar2 != 0x4b0587b63ecd0d8e) {
            if (uVar4 <= uVar2) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar2 / uVar4;
              }
              uVar2 = uVar2 - uVar1 * uVar4;
            }
            if (uVar2 != unaff_x22) break;
          }
          if (plVar3[2] == 0x4b0587b63ecd0d8e) {
            return;
          }
        }
      }
    }
  }
  FUN_00b7c274(local_48,param_1,0x4b0587b63ecd0d8e,&DAT_03a77f70,param_2);
  if ((uVar4 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar4 < (float)(param_1[0xb] + 1))) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar2 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_00b7c3c4(param_1,uVar2);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x22 = uVar4 - 1 & 0x4b0587b63ecd0d8e;
    }
    else if (uVar4 < 0x4b0587b63ecd0d8f) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = 0x4b0587b63ecd0d8e / uVar4;
      }
      unaff_x22 = 0x4b0587b63ecd0d8e - uVar2 * uVar4;
    }
    else {
      unaff_x22 = 0x4b0587b63ecd0d8e;
    }
  }
  plVar3 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 6;
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar3;
    if (*local_48[0] != 0) {
      uVar2 = *(ulong *)(*local_48[0] + 8);
      if ((uVar4 & uVar4 - 1) == 0) {
        uVar2 = uVar2 & uVar4 - 1;
      }
      else if (uVar4 <= uVar2) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar2 / uVar4;
        }
        uVar2 = uVar2 - uVar1 * uVar4;
      }
      *(long **)(*param_1 + uVar2 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar3;
    *plVar3 = (long)local_48[0];
  }
  local_48[0] = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_00d08010(local_48);
  return;
}


