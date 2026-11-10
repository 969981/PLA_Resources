/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0180ee30; name: FUN_0180ee30
 */


long * FUN_0180ee30(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x21;
  long *local_48 [3];
  ulong *local_28;
  
  uVar2 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x21 = uVar5 - 1 & uVar2;
    }
    else {
      unaff_x21 = uVar2;
      if (uVar5 <= uVar2) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar2 / uVar5;
        }
        unaff_x21 = uVar2 - uVar1 * uVar5;
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x21 * 8);
    if (plVar4 != (long *)0x0) {
      if (uVar3 < 2) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar2 && (plVar4[1] & uVar5 - 1) != unaff_x21)) goto LAB_0180eef8;
        } while (plVar4[2] != uVar2);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0180eef8;
          uVar3 = plVar4[1];
          if (uVar3 != uVar2) {
            if (uVar5 <= uVar3) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar3 / uVar5;
              }
              uVar3 = uVar3 - uVar1 * uVar5;
            }
            if (uVar3 != unaff_x21) goto LAB_0180eef8;
          }
        } while (plVar4[2] != uVar2);
      }
      goto LAB_0180efb4;
    }
  }
LAB_0180eef8:
  local_28 = param_2;
  FUN_0180f838(local_48,param_1,uVar2,&local_28);
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar3 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    FUN_017d2b14(param_1,uVar3);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x21 = uVar5 - 1 & uVar2;
    }
    else if (uVar2 < uVar5) {
      unaff_x21 = uVar2;
    }
    else {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar2 / uVar5;
      }
      unaff_x21 = uVar2 - uVar3 * uVar5;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x21 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 6;
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
    *(long **)(*param_1 + unaff_x21 * 8) = plVar4;
    if (*local_48[0] != 0) {
      uVar2 = *(ulong *)(*local_48[0] + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar2 = uVar2 & uVar5 - 1;
      }
      else if (uVar5 <= uVar2) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar2 / uVar5;
        }
        uVar2 = uVar2 - uVar3 * uVar5;
      }
      *(long **)(*param_1 + uVar2 * 8) = local_48[0];
    }
  }
  else {
    *local_48[0] = *plVar4;
    *plVar4 = (long)local_48[0];
  }
  param_1[0xb] = param_1[0xb] + 1;
  plVar4 = local_48[0];
LAB_0180efb4:
  return plVar4 + 3;
}


