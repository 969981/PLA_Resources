/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018b434c; name: FUN_018b434c
 */


long * FUN_018b434c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong local_60;
  ulong local_48;
  undefined1 auStack_40 [8];
  long *local_38 [3];
  ulong *local_18;
  
  uVar1 = *param_2;
  local_48 = param_1[1];
  if (local_48 != 0) {
    uVar2 = local_48 - (local_48 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      local_60 = local_48 - 1 & uVar1;
    }
    else {
      local_60 = uVar1;
      if (local_48 <= uVar1) {
        uVar3 = 0;
        if (local_48 != 0) {
          uVar3 = uVar1 / local_48;
        }
        local_60 = uVar1 - uVar3 * local_48;
      }
    }
    plVar4 = *(long **)(*param_1 + local_60 * 8);
    if (plVar4 != (long *)0x0) {
      if (uVar2 < 2) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar1 && (plVar4[1] & local_48 - 1) != local_60)) goto LAB_018b4414;
        } while (plVar4[2] != uVar1);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_018b4414;
          uVar2 = plVar4[1];
          if (uVar2 != uVar1) {
            if (local_48 <= uVar2) {
              uVar3 = 0;
              if (local_48 != 0) {
                uVar3 = uVar2 / local_48;
              }
              uVar2 = uVar2 - uVar3 * local_48;
            }
            if (uVar2 != local_60) goto LAB_018b4414;
          }
        } while (plVar4[2] != uVar1);
      }
      goto LAB_018b454c;
    }
  }
LAB_018b4414:
  local_18 = param_2;
  FUN_018bc268(local_38,param_1,uVar1,&DAT_03a7c622,&local_18,auStack_40);
  if ((local_48 == 0) || (*(float *)(param_1 + 0xc) * (float)local_48 < (float)(param_1[0xb] + 1)))
  {
    uVar2 = (ulong)(local_48 < 3 || (local_48 & local_48 - 1) != 0) | local_48 << 1;
    uVar3 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_018bc30c(param_1,uVar3);
    local_48 = param_1[1];
    if ((local_48 & local_48 - 1) == 0) {
      uVar1 = local_48 - 1 & uVar1;
    }
    else if (local_48 <= uVar1) {
      uVar2 = 0;
      if (local_48 != 0) {
        uVar2 = uVar1 / local_48;
      }
      uVar1 = uVar1 - uVar2 * local_48;
    }
    local_60 = uVar1;
  }
  plVar4 = *(long **)(*param_1 + local_60 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *local_38[0] = *plVar4;
    *plVar4 = (long)local_38[0];
    *(long **)(*param_1 + local_60 * 8) = plVar4;
    if (*local_38[0] != 0) {
      uVar1 = *(ulong *)(*local_38[0] + 8);
      if ((local_48 & local_48 - 1) == 0) {
        uVar1 = uVar1 & local_48 - 1;
      }
      else if (local_48 <= uVar1) {
        uVar2 = 0;
        if (local_48 != 0) {
          uVar2 = uVar1 / local_48;
        }
        uVar1 = uVar1 - uVar2 * local_48;
      }
      *(long **)(*param_1 + uVar1 * 8) = local_38[0];
    }
  }
  else {
    *local_38[0] = *plVar4;
    *plVar4 = (long)local_38[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar4 = local_38[0];
LAB_018b454c:
  return plVar4 + 3;
}


