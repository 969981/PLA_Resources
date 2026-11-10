/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016af080; name: FUN_016af080
 */


void FUN_016af080(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x22;
  long *local_48 [3];
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x22 = uVar4 - 1 & 0xc0ea47549ab5f3d9;
    }
    else {
      unaff_x22 = 0xc0ea47549ab5f3d9;
      if (uVar4 < 0xc0ea47549ab5f3da) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = 0xc0ea47549ab5f3d9 / uVar4;
        }
        unaff_x22 = 0xc0ea47549ab5f3d9 - uVar1 * uVar4;
      }
    }
    plVar2 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar2 != (long *)0x0) {
      if (uVar3 < 2) {
        while ((plVar2 = (long *)*plVar2, plVar2 != (long *)0x0 &&
               (plVar2[1] == 0xc0ea47549ab5f3d9 || (plVar2[1] & uVar4 - 1) == unaff_x22))) {
          if (plVar2[2] == -0x3f15b8ab654a0c27) {
            return;
          }
        }
      }
      else {
        while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
          uVar3 = plVar2[1];
          if (uVar3 != 0xc0ea47549ab5f3d9) {
            if (uVar4 <= uVar3) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar3 / uVar4;
              }
              uVar3 = uVar3 - uVar1 * uVar4;
            }
            if (uVar3 != unaff_x22) break;
          }
          if (plVar2[2] == -0x3f15b8ab654a0c27) {
            return;
          }
        }
      }
    }
  }
  FUN_016af2b4(local_48,param_1);
  if ((uVar4 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar4 < (float)(param_1[0xb] + 1))) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar3 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    FUN_016af344(param_1,uVar3);
    uVar4 = param_1[1];
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x22 = uVar4 - 1 & 0xc0ea47549ab5f3d9;
    }
    else if (uVar4 < 0xc0ea47549ab5f3da) {
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = 0xc0ea47549ab5f3d9 / uVar4;
      }
      unaff_x22 = 0xc0ea47549ab5f3d9 - uVar3 * uVar4;
    }
    else {
      unaff_x22 = 0xc0ea47549ab5f3d9;
    }
  }
  plVar2 = *(long **)(*param_1 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 6;
    *local_48[0] = *plVar2;
    *plVar2 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x22 * 8) = plVar2;
    if (*local_48[0] != 0) {
      uVar3 = *(ulong *)(*local_48[0] + 8);
      if ((uVar4 & uVar4 - 1) == 0) {
        uVar3 = uVar3 & uVar4 - 1;
      }
      else if (uVar4 <= uVar3) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar3 / uVar4;
        }
        uVar3 = uVar3 - uVar1 * uVar4;
      }
      *(long **)(*param_1 + uVar3 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar2;
    *plVar2 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


