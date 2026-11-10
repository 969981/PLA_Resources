/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fe378; name: FUN_028fe378
 */


void FUN_028fe378(long *param_1,ulong *param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lStack_b0;
  undefined4 local_a8;
  long *local_48;
  
  uVar9 = *param_2;
  plVar7 = (long *)param_2[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar3 = *(ulong *)(*param_1 + 0x10);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    lVar8 = *param_3;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & uVar9;
    }
    else {
      uVar5 = uVar9;
      if (uVar3 <= uVar9) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar9 / uVar3;
        }
        uVar5 = uVar9 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(*param_1 + 8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar9) {
            if (plVar6[2] == uVar9) goto LAB_028fe49c;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar9) {
            if (plVar6[2] == uVar9) goto LAB_028fe49c;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar2 = 0;
              if (uVar3 != 0) {
                uVar2 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar2 * uVar3;
            }
            if (uVar4 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
LAB_028fe5e8:
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
LAB_028fe49c:
  lVar10 = plVar6[6];
  if (lVar10 != 0) {
    uVar1 = (undefined4)param_1[1];
    plVar6 = *(long **)(lVar8 + 0x50);
    lStack_b0 = lVar10;
    local_a8 = uVar1;
    if (plVar6 != (long *)0x0) {
      local_48 = plVar6 + 6;
      FUN_028fe62c(&lStack_b0,plVar6 + 2,&local_48);
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        local_48 = plVar6 + 6;
        FUN_028fe62c(&lStack_b0,plVar6 + 2,&local_48);
      }
    }
    FUN_028fe7d0(&lStack_b0);
    plVar6 = *(long **)(lVar8 + 0xb8);
    lStack_b0 = lVar10;
    local_a8 = uVar1;
    if (plVar6 != (long *)0x0) {
      local_48 = plVar6 + 6;
      FUN_028fe7ec(&lStack_b0,plVar6 + 2,&local_48);
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        local_48 = plVar6 + 6;
        FUN_028fe7ec(&lStack_b0,plVar6 + 2,&local_48);
      }
    }
    FUN_028fe994(&lStack_b0);
  }
  goto LAB_028fe5e8;
}


