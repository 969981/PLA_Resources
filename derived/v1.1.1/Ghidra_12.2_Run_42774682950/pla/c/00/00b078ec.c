/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b078ec; name: FUN_00b078ec
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00b078ec(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_1c [4];
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  
  if ((param_2 & 0x200000000) != 0) {
    param_2 = param_2 & 0xfffffffc00000000 | 0xffff;
  }
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
    local_18[0] = (undefined2)(param_2 >> 0x10);
    local_1c[0] = (byte)(param_2 >> 0x20) & 1;
    local_14[0] = (undefined2)param_2;
    uVar2 = (**(code **)(param_1 + 0x100))(param_1 + 0x120,local_14,local_18,local_1c);
    if ((uVar2 & 1) != 0) {
      return (long *)0x0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 0xa0);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_2 / uVar2;
    }
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar8 = uVar2 - 1 & param_2;
    }
    else {
      uVar8 = param_2;
      if (uVar2 <= param_2) {
        uVar8 = param_2 - uVar4 * uVar2;
      }
    }
    lVar7 = *(long *)(param_1 + 0x98);
    plVar5 = *(long **)(lVar7 + uVar8 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      uVar6 = uVar2 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar5[1] == param_2) {
            if (plVar5[2] == param_2) goto LAB_00b07a00;
          }
          else if ((plVar5[1] & uVar6) != uVar8) {
            return (long *)0x0;
          }
          plVar5 = (long *)*plVar5;
          param_1 = 0;
          if (plVar5 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        uVar9 = plVar5[1];
        if (uVar9 == param_2) {
          if (plVar5[2] == param_2) goto LAB_00b07a00;
        }
        else {
          if (uVar2 <= uVar9) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar9 / uVar2;
            }
            uVar9 = uVar9 - uVar1 * uVar2;
          }
          if (uVar9 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return (long *)0x0;
LAB_00b07a00:
  if (uVar3 < 2) {
    uVar8 = uVar6 & param_2;
    plVar5 = *(long **)(lVar7 + uVar8 * 8);
  }
  else {
    uVar8 = param_2;
    if (uVar2 <= param_2) {
      uVar8 = param_2 - uVar4 * uVar2;
    }
    plVar5 = *(long **)(lVar7 + uVar8 * 8);
  }
  if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
    if (uVar3 < 2) {
      do {
        if (plVar5[1] == param_2) {
          if (plVar5[2] == param_2) goto LAB_00b07aac;
        }
        else if ((plVar5[1] & uVar6) != uVar8) break;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        uVar4 = plVar5[1];
        if (uVar4 == param_2) {
          if (plVar5[2] == param_2) {
LAB_00b07aac:
            return plVar5 + 3;
          }
        }
        else {
          if (uVar2 <= uVar4) {
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = uVar4 / uVar2;
            }
            uVar4 = uVar4 - uVar3 * uVar2;
          }
          if (uVar4 != uVar8) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = (long *)FUN_00b12f60(param_1);
  if ((long *)plVar5[4] != (long *)0x0) {
    (**(code **)(*(long *)plVar5[4] + 0x20))();
  }
  if ((long *)*plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00b07b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar5 = (long *)(**(code **)(*(long *)*plVar5 + 0x20))();
  return plVar5;
}


