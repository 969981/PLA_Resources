/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01517f48; name: FUN_01517f48
 */


long * FUN_01517f48(long *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong local_50;
  undefined1 auStack_48 [8];
  int *local_40;
  long *local_38 [3];
  
  iVar1 = *param_2;
  uVar3 = (ulong)iVar1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      local_50 = uVar6 - 1 & uVar3;
    }
    else {
      local_50 = uVar3;
      if (uVar6 <= uVar3) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = uVar3 / uVar6;
        }
        local_50 = uVar3 - uVar2 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + local_50 * 8);
    if (plVar5 != (long *)0x0) {
      if (uVar4 < 2) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar3 && (plVar5[1] & uVar6 - 1) != local_50)
             ) goto LAB_01518004;
        } while ((int)plVar5[2] != iVar1);
      }
      else {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_01518004;
          uVar4 = plVar5[1];
          if (uVar4 != uVar3) {
            if (uVar6 <= uVar4) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar2 * uVar6;
            }
            if (uVar4 != local_50) goto LAB_01518004;
          }
        } while ((int)plVar5[2] != iVar1);
      }
      goto LAB_015180bc;
    }
  }
LAB_01518004:
  local_40 = param_2;
  FUN_015181bc(local_38,param_1,uVar3,&DAT_03a7c2f1,&local_40,auStack_48);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar4 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_01518300(param_1,uVar4);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar3 = uVar6 - 1 & uVar3;
    }
    else if (uVar6 <= uVar3) {
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar3 / uVar6;
      }
      uVar3 = uVar3 - uVar4 * uVar6;
    }
    local_50 = uVar3;
  }
  plVar5 = *(long **)(*param_1 + local_50 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 6;
    *local_38[0] = *plVar5;
    *plVar5 = (long)local_38[0];
    *(long **)(*param_1 + local_50 * 8) = plVar5;
    if (*local_38[0] != 0) {
      uVar3 = *(ulong *)(*local_38[0] + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar3 = uVar3 & uVar6 - 1;
      }
      else if (uVar6 <= uVar3) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar3 / uVar6;
        }
        uVar3 = uVar3 - uVar4 * uVar6;
      }
      *(long **)(*param_1 + uVar3 * 8) = local_38[0];
    }
  }
  else {
    *local_38[0] = *plVar5;
    *plVar5 = (long)local_38[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar5 = local_38[0];
LAB_015180bc:
  return plVar5 + 3;
}


