/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0156bce0; name: FUN_0156bce0
 */


void FUN_0156bce0(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int local_64;
  
LAB_0156bd0c:
  plVar11 = param_2 + -1;
  plVar8 = param_1;
LAB_0156bd14:
  while( true ) {
    param_1 = plVar8;
    lVar10 = (long)param_2 - (long)param_1;
    uVar9 = lVar10 >> 3;
    if (uVar9 < 2) {
      return;
    }
    switch(uVar9) {
    case 2:
      uVar2 = (**(code **)(*(long *)*plVar11 + 0x38))();
      uVar3 = (**(code **)(*(long *)*param_1 + 0x38))();
      if (uVar3 <= uVar2) {
        return;
      }
      lVar13 = *param_1;
      *param_1 = 0;
      lVar10 = *plVar11;
      *plVar11 = 0;
      *param_1 = lVar10;
      plVar8 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      *plVar11 = lVar13;
      return;
    case 3:
      FUN_0156c410(param_1,param_1 + 1,plVar11);
      return;
    case 4:
      FUN_0156c610(param_1,param_1 + 1,param_1 + 2,plVar11);
      return;
    case 5:
      FUN_0156c780(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar11);
      return;
    }
    if (lVar10 < 0x38) {
      FUN_0156c960(param_1,param_2);
      return;
    }
    uVar4 = uVar9;
    if ((long)uVar9 < 0) {
      uVar4 = uVar9 + 1;
    }
    plVar8 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      local_64 = FUN_0156c410(param_1,plVar8,plVar11);
    }
    else {
      uVar4 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar4 = uVar9;
      }
      lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
      local_64 = FUN_0156c780(param_1,(long)param_1 + lVar10,plVar8,(long)plVar8 + lVar10,plVar11);
    }
    uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
    if (uVar2 < uVar3) break;
    plVar7 = param_2;
    while (plVar12 = plVar7, param_1 + 2 != plVar12) {
      uVar2 = (**(code **)(*(long *)plVar12[-2] + 0x38))();
      uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      plVar7 = plVar12 + -1;
      if (uVar2 < uVar3) goto code_r0x0156c168;
    }
    plVar7 = param_1 + 1;
    uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar11 + 0x38))();
    if (uVar3 <= uVar2) {
      if (plVar7 == plVar11) {
        return;
      }
      plVar7 = param_1 + 2;
      while( true ) {
        uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
        uVar3 = (**(code **)(*(long *)plVar7[-1] + 0x38))();
        if (uVar2 < uVar3) break;
        plVar7 = plVar7 + 1;
        if (param_2 == plVar7) {
          return;
        }
      }
      lVar13 = plVar7[-1];
      plVar7[-1] = 0;
      lVar10 = *plVar11;
      *plVar11 = 0;
      plVar7[-1] = lVar10;
      plVar8 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      *plVar11 = lVar13;
    }
    if (plVar7 == plVar11) {
      return;
    }
    plVar12 = plVar11;
    while( true ) {
      plVar8 = plVar7 + -1;
      do {
        plVar7 = plVar8;
        uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
        plVar8 = plVar7 + 1;
        uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      } while (uVar3 <= uVar2);
      plVar7 = plVar7 + 2;
      do {
        uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
        plVar12 = plVar12 + -1;
        uVar3 = (**(code **)(*(long *)*plVar12 + 0x38))();
      } while (uVar2 < uVar3);
      if (plVar12 <= plVar8) break;
      lVar13 = *plVar8;
      *plVar8 = 0;
      lVar10 = *plVar12;
      *plVar12 = 0;
      *plVar8 = lVar10;
      plVar8 = (long *)*plVar12;
      *plVar12 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      *plVar12 = lVar13;
    }
  }
  plVar7 = plVar11;
  goto LAB_0156bee8;
code_r0x0156c168:
  lVar13 = *param_1;
  *param_1 = 0;
  plVar7 = plVar12 + -2;
  lVar10 = *plVar7;
  *plVar7 = 0;
  *param_1 = lVar10;
  plVar5 = (long *)*plVar7;
  *plVar7 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  local_64 = local_64 + 1;
  plVar12[-2] = lVar13;
LAB_0156bee8:
  plVar12 = param_1 + 1;
  if (plVar12 < plVar7) {
    while( true ) {
      plVar5 = plVar12 + 1;
      uVar2 = (**(code **)(*(long *)*plVar12 + 0x38))();
      uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      if (uVar2 < uVar3) {
        uVar2 = (**(code **)(*(long *)plVar12[1] + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
        plVar6 = plVar12 + 2;
        if (uVar2 < uVar3) {
          uVar2 = (**(code **)(*(long *)plVar12[2] + 0x38))();
          uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
          plVar5 = plVar12 + 3;
          if (uVar2 < uVar3) {
            uVar2 = (**(code **)(*(long *)plVar12[3] + 0x38))();
            uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
            plVar6 = plVar12 + 4;
            if (uVar2 < uVar3) {
              uVar2 = (**(code **)(*(long *)plVar12[4] + 0x38))();
              uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
              plVar1 = plVar12 + 5;
              if (uVar2 < uVar3) {
                uVar2 = (**(code **)(*(long *)plVar12[5] + 0x38))();
                uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
                plVar5 = plVar12 + 6;
                if (uVar2 < uVar3) {
                  do {
                    plVar12 = plVar5;
                    uVar2 = (**(code **)(*(long *)*plVar12 + 0x38))();
                    uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
                    plVar5 = plVar12 + 1;
                  } while (uVar2 < uVar3);
                }
                else {
                  plVar12 = plVar1;
                }
              }
              else {
                plVar12 = plVar6;
                plVar5 = plVar1;
              }
            }
            else {
              plVar12 = plVar5;
              plVar5 = plVar6;
            }
          }
          else {
            plVar12 = plVar6;
          }
        }
        else {
          plVar12 = plVar5;
          plVar5 = plVar6;
        }
      }
      do {
        plVar7 = plVar7 + -1;
        uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
        uVar3 = (**(code **)(*(long *)*plVar8 + 0x38))();
      } while (uVar3 <= uVar2);
      if (plVar7 < plVar12) break;
      lVar13 = *plVar12;
      *plVar12 = 0;
      lVar10 = *plVar7;
      *plVar7 = 0;
      *plVar12 = lVar10;
      plVar6 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      local_64 = local_64 + 1;
      *plVar7 = lVar13;
      plVar6 = plVar7;
      if (plVar8 != plVar12) {
        plVar6 = plVar8;
      }
      plVar8 = plVar6;
      plVar12 = plVar5;
    }
  }
  if (plVar12 == plVar8) {
LAB_0156c040:
    if (local_64 != 0) goto LAB_0156c1f8;
  }
  else {
    uVar2 = (**(code **)(*(long *)*plVar8 + 0x38))();
    uVar3 = (**(code **)(*(long *)*plVar12 + 0x38))();
    if (uVar3 <= uVar2) goto LAB_0156c040;
    lVar13 = *plVar12;
    *plVar12 = 0;
    lVar10 = *plVar8;
    *plVar8 = 0;
    *plVar12 = lVar10;
    plVar7 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    *plVar8 = lVar13;
    if (local_64 != -1) goto LAB_0156c1f8;
  }
  uVar9 = FUN_0156caa0(param_1,plVar12);
  uVar4 = FUN_0156caa0(plVar12 + 1,param_2);
  if ((uVar4 & 1) != 0) goto code_r0x0156c06c;
  plVar8 = plVar12 + 1;
  if ((uVar9 & 1) != 0) goto LAB_0156bd14;
LAB_0156c1f8:
  if ((long)param_2 - (long)plVar12 <= (long)plVar12 - (long)param_1) {
    FUN_0156bce0(plVar12 + 1,param_2);
    param_2 = plVar12;
    goto LAB_0156bd0c;
  }
  FUN_0156bce0(param_1,plVar12);
  plVar8 = plVar12 + 1;
  goto LAB_0156bd14;
code_r0x0156c06c:
  param_2 = plVar12;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_0156bd0c;
}


