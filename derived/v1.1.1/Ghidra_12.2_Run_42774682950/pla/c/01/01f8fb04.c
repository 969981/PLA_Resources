/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8fb04; name: FUN_01f8fb04
 */


void FUN_01f8fb04(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x25;
  long *local_68;
  long *plStack_60;
  undefined1 local_58;
  
  uVar6 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      unaff_x25 = uVar5 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar6 / uVar5;
        }
        unaff_x25 = uVar6 - uVar1 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar3 != (long *)0x0) {
      if (uVar2 < 2) {
        while ((plVar3 = (long *)*plVar3, plVar3 != (long *)0x0 &&
               (plVar3[1] == uVar6 || (plVar3[1] & uVar5 - 1) == unaff_x25))) {
          if (plVar3[2] == uVar6) {
            return;
          }
        }
      }
      else {
        while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if (uVar2 != uVar6) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x25) break;
          }
          if (plVar3[2] == uVar6) {
            return;
          }
        }
      }
    }
  }
  plVar4 = param_1 + 7;
  plVar3 = (long *)(**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,0xf0,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*(long *)*plVar4 + 0xb8))();
  }
  local_68 = plVar3;
  plStack_60 = plVar4;
  FUN_01f8a674(plVar4,plVar3 + 2,param_2);
  local_58 = 1;
  *plVar3 = 0;
  plVar3[1] = uVar6;
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
    FUN_018bbce8(param_1,uVar2);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x25 = uVar5 - 1 & uVar6;
    }
    else if (uVar6 < uVar5) {
      unaff_x25 = uVar6;
    }
    else {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar6 / uVar5;
      }
      unaff_x25 = uVar6 - uVar2 * uVar5;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *plVar3 = *plVar4;
    *plVar4 = (long)plVar3;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar4;
    if (*plVar3 == 0) goto LAB_01f8fcd4;
    uVar6 = *(ulong *)(*plVar3 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar2 * uVar5;
    }
    plVar4 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar3 = *plVar4;
  }
  *plVar4 = (long)plVar3;
LAB_01f8fcd4:
  local_68 = (long *)0x0;
  param_1[0xb] = param_1[0xb] + 1;
  FUN_01f8fd8c(&local_68);
  return;
}


