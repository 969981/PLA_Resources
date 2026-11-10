/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d3b0c; name: FUN_028d3b0c
 */


long FUN_028d3b0c(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong unaff_x25;
  long local_88;
  undefined1 auStack_80 [24];
  long *local_68 [3];
  
  uVar5 = param_1[2];
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uVar5 <= uVar3) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar3 / uVar5;
        }
        uVar7 = uVar3 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(param_1[1] + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (plVar8[2] == uVar3) goto LAB_028d3c24;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar3) {
            if (plVar8[2] == uVar3) goto LAB_028d3c24;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_028d3c2c:
  FUN_028d3ea0(&local_88,*param_1,param_1);
  lVar2 = local_88;
  plVar8 = param_1 + 1;
  uVar5 = *param_2;
  uVar6 = param_1[2];
  if (uVar6 != 0) {
    uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x25 = uVar6 - 1 & uVar5;
    }
    else {
      unaff_x25 = uVar5;
      if (uVar6 <= uVar5) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar5 / uVar6;
        }
        unaff_x25 = uVar5 - uVar7 * uVar6;
      }
    }
    plVar4 = *(long **)(*plVar8 + unaff_x25 * 8);
    if (plVar4 != (long *)0x0) {
      if (uVar3 < 2) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar5 && (plVar4[1] & uVar6 - 1) != unaff_x25)) goto LAB_028d3d2c;
        } while (plVar4[2] != uVar5);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_028d3d2c;
          uVar3 = plVar4[1];
          if (uVar3 != uVar5) {
            if (uVar6 <= uVar3) {
              uVar7 = 0;
              if (uVar6 != 0) {
                uVar7 = uVar3 / uVar6;
              }
              uVar3 = uVar3 - uVar7 * uVar6;
            }
            if (uVar3 != unaff_x25) goto LAB_028d3d2c;
          }
        } while (plVar4[2] != uVar5);
      }
      goto joined_r0x028d3e70;
    }
  }
LAB_028d3d2c:
  FUN_028d4038(local_68,plVar8,uVar5,param_2,&local_88);
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xd) * (float)uVar6 < (float)(param_1[0xc] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar3 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    FUN_028d41b8(plVar8,uVar3);
    uVar6 = param_1[2];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x25 = uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      unaff_x25 = uVar5;
    }
    else {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar5 / uVar6;
      }
      unaff_x25 = uVar5 - uVar3 * uVar6;
    }
  }
  plVar4 = *(long **)(*plVar8 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 7;
    *local_68[0] = *plVar4;
    *plVar4 = (long)local_68[0];
    *(long **)(param_1[1] + unaff_x25 * 8) = plVar4;
    if (*local_68[0] != 0) {
      uVar5 = *(ulong *)(*local_68[0] + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar5 = uVar5 & uVar6 - 1;
      }
      else if (uVar6 <= uVar5) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar5 / uVar6;
        }
        uVar5 = uVar5 - uVar3 * uVar6;
      }
      *(long **)(*plVar8 + uVar5 * 8) = local_68[0];
    }
  }
  else {
    *local_68[0] = *plVar4;
    *plVar4 = (long)local_68[0];
  }
  param_1[0xc] = param_1[0xc] + 1;
joined_r0x028d3e70:
  if (local_88 != 0) {
    local_88 = 0;
    FUN_028d4718(auStack_80);
  }
  return lVar2;
LAB_028d3c24:
  if (plVar8[6] != 0) {
    return plVar8[6];
  }
  goto LAB_028d3c2c;
}


