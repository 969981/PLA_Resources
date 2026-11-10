/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d2f388; name: FUN_01d2f388
 */


void FUN_01d2f388(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x23;
  float fVar6;
  long *local_58 [3];
  ulong uStack_38;
  
  uVar5 = *(ulong *)(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 0x68);
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x23 = uVar5 - 1 & param_2;
    }
    else {
      unaff_x23 = param_2;
      if (uVar5 <= param_2) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = param_2 / uVar5;
        }
        unaff_x23 = param_2 - uVar2 * uVar5;
      }
    }
    plVar4 = *(long **)(*plVar1 + unaff_x23 * 8);
    if (plVar4 != (long *)0x0) {
      if (uVar3 < 2) {
        while ((plVar4 = (long *)*plVar4, plVar4 != (long *)0x0 &&
               (plVar4[1] == param_2 || (plVar4[1] & uVar5 - 1) == unaff_x23))) {
          if (plVar4[2] == param_2) {
            return;
          }
        }
      }
      else {
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          uVar3 = plVar4[1];
          if (uVar3 != param_2) {
            if (uVar5 <= uVar3) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar3 / uVar5;
              }
              uVar3 = uVar3 - uVar2 * uVar5;
            }
            if (uVar3 != unaff_x23) break;
          }
          if (plVar4[2] == param_2) {
            return;
          }
        }
      }
    }
  }
  uStack_38 = param_2;
  FUN_01d2f9e0(local_58,plVar1,param_2,&uStack_38,param_3);
  fVar6 = (float)(*(long *)(param_1 + 0xc0) + 1);
  if ((uVar5 == 0) || (*(float *)(param_1 + 200) * (float)uVar5 < fVar6)) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar3 = (ulong)(fVar6 / *(float *)(param_1 + 200));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_01d2fb78(plVar1,uVar3);
    uVar5 = *(ulong *)(param_1 + 0x70);
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x23 = uVar5 - 1 & param_2;
    }
    else if (param_2 < uVar5) {
      unaff_x23 = param_2;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = param_2 / uVar5;
      }
      unaff_x23 = param_2 - uVar3 * uVar5;
    }
  }
  plVar4 = *(long **)(*plVar1 + unaff_x23 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(param_1 + 0x98);
    *local_58[0] = *plVar4;
    *plVar4 = (long)local_58[0];
    *(long **)(*(long *)(param_1 + 0x68) + unaff_x23 * 8) = plVar4;
    if (*local_58[0] != 0) {
      uVar3 = *(ulong *)(*local_58[0] + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar3 = uVar3 & uVar5 - 1;
      }
      else if (uVar5 <= uVar3) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar3 / uVar5;
        }
        uVar3 = uVar3 - uVar2 * uVar5;
      }
      *(long **)(*plVar1 + uVar3 * 8) = local_58[0];
    }
  }
  else {
    *local_58[0] = *plVar4;
    *plVar4 = (long)local_58[0];
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return;
}


