/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c289e0; name: FUN_01c289e0
 */


void FUN_01c289e0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int local_64;
  
LAB_01c28ddc:
  plVar9 = param_2 + -1;
  plVar6 = param_1;
LAB_01c28a10:
  while( true ) {
    param_1 = plVar6;
    lVar8 = (long)param_2 - (long)param_1;
    uVar7 = lVar8 >> 3;
    switch(uVar7) {
    case 0:
    case 1:
      return;
    case 2:
      uVar1 = (**(code **)(*(long *)*plVar9 + 0x38))();
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      if (uVar2 <= uVar1) {
        return;
      }
      lVar12 = *param_1;
      *param_1 = 0;
      lVar8 = *plVar9;
      *plVar9 = 0;
      *param_1 = lVar8;
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *plVar9 = lVar12;
      return;
    case 3:
      FUN_01c291b0(param_1,param_1 + 1,plVar9);
      return;
    case 4:
      FUN_01c293b0(param_1,param_1 + 1,param_1 + 2,plVar9);
      return;
    case 5:
      FUN_01c29520(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar9);
      return;
    }
    if (lVar8 < 0x38) {
      FUN_01c29700(param_1,param_2);
      return;
    }
    uVar3 = uVar7;
    if ((long)uVar7 < 0) {
      uVar3 = uVar7 + 1;
    }
    plVar6 = (long *)((long)param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
    if (lVar8 < 0x1f39) {
      local_64 = FUN_01c291b0(param_1,plVar6,plVar9);
    }
    else {
      uVar3 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar3 = uVar7;
      }
      lVar8 = (uVar3 & 0x7ffffffffffffffc) * 2;
      local_64 = FUN_01c29520(param_1,(long)param_1 + lVar8,plVar6,(long)plVar6 + lVar8,plVar9);
    }
    uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
    if (uVar1 < uVar2) break;
    plVar5 = param_2;
    while (plVar10 = plVar5, param_1 + 2 != plVar10) {
      uVar1 = (**(code **)(*(long *)plVar10[-2] + 0x38))();
      uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
      plVar5 = plVar10 + -1;
      if (uVar1 < uVar2) goto LAB_01c29040;
    }
    plVar5 = param_1 + 1;
    uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
    uVar2 = (**(code **)(*(long *)*plVar9 + 0x38))();
    if (uVar2 <= uVar1) {
      if (plVar5 == plVar9) {
        return;
      }
      plVar5 = param_1 + 2;
      while( true ) {
        uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
        uVar2 = (**(code **)(*(long *)plVar5[-1] + 0x38))();
        if (uVar1 < uVar2) break;
        plVar5 = plVar5 + 1;
        if (param_2 == plVar5) {
          return;
        }
      }
      lVar12 = plVar5[-1];
      plVar5[-1] = 0;
      lVar8 = *plVar9;
      *plVar9 = 0;
      plVar5[-1] = lVar8;
      plVar6 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *plVar9 = lVar12;
    }
    if (plVar5 == plVar9) {
      return;
    }
    plVar10 = plVar9;
    while( true ) {
      plVar6 = plVar5 + -1;
      do {
        plVar5 = plVar6;
        uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
        plVar6 = plVar5 + 1;
        uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
      } while (uVar2 <= uVar1);
      plVar5 = plVar5 + 2;
      do {
        uVar1 = (**(code **)(*(long *)*param_1 + 0x38))();
        plVar10 = plVar10 + -1;
        uVar2 = (**(code **)(*(long *)*plVar10 + 0x38))();
      } while (uVar1 < uVar2);
      if (plVar10 <= plVar6) break;
      lVar12 = *plVar6;
      *plVar6 = 0;
      lVar8 = *plVar10;
      *plVar10 = 0;
      *plVar6 = lVar8;
      plVar6 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *plVar10 = lVar12;
    }
  }
  plVar5 = plVar9;
  goto LAB_01c28a90;
LAB_01c29040:
  lVar12 = *param_1;
  *param_1 = 0;
  plVar5 = plVar10 + -2;
  lVar8 = *plVar5;
  *plVar5 = 0;
  *param_1 = lVar8;
  plVar4 = (long *)*plVar5;
  *plVar5 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  local_64 = local_64 + 1;
  plVar10[-2] = lVar12;
LAB_01c28a90:
  plVar10 = param_1 + 1;
  plVar4 = plVar10;
  if (plVar10 < plVar5) {
    do {
      plVar10 = plVar4 + 1;
      uVar1 = (**(code **)(*(long *)*plVar4 + 0x38))();
      uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
      if (uVar1 < uVar2) {
        uVar1 = (**(code **)(*(long *)plVar4[1] + 0x38))();
        uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
        plVar11 = plVar4 + 2;
        if (uVar1 < uVar2) {
          uVar1 = (**(code **)(*(long *)plVar4[2] + 0x38))();
          uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
          plVar10 = plVar4 + 3;
          if (uVar2 <= uVar1) {
            plVar4 = plVar11;
            plVar11 = plVar10;
            goto LAB_01c28b30;
          }
          uVar1 = (**(code **)(*(long *)plVar4[3] + 0x38))();
          uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
          plVar11 = plVar4 + 4;
          if (uVar1 < uVar2) {
            do {
              plVar10 = plVar11;
              plVar11 = plVar10 + 1;
              uVar1 = (**(code **)(*(long *)*plVar10 + 0x38))();
              uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
            } while (uVar1 < uVar2);
          }
        }
      }
      else {
        plVar11 = plVar10;
LAB_01c28b30:
        plVar10 = plVar4;
      }
      uVar1 = (**(code **)(*(long *)plVar5[-1] + 0x38))();
      uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
      plVar4 = plVar5 + -1;
      if (uVar2 <= uVar1) {
        uVar1 = (**(code **)(*(long *)plVar5[-2] + 0x38))();
        uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
        plVar4 = plVar5 + -2;
        if (uVar2 <= uVar1) {
          uVar1 = (**(code **)(*(long *)plVar5[-3] + 0x38))();
          uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
          plVar4 = plVar5 + -3;
          if (uVar2 <= uVar1) {
            uVar1 = (**(code **)(*(long *)plVar5[-4] + 0x38))();
            uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
            plVar4 = plVar5 + -4;
            if (uVar2 <= uVar1) {
              uVar1 = (**(code **)(*(long *)plVar5[-5] + 0x38))();
              uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
              plVar4 = plVar5 + -5;
              if (uVar2 <= uVar1) {
                plVar5 = plVar5 + -6;
                do {
                  plVar4 = plVar5;
                  uVar1 = (**(code **)(*(long *)*plVar4 + 0x38))();
                  uVar2 = (**(code **)(*(long *)*plVar6 + 0x38))();
                  plVar5 = plVar4 + -1;
                } while (uVar2 <= uVar1);
              }
            }
          }
        }
      }
      plVar5 = plVar4;
      if (plVar5 < plVar10) break;
      lVar12 = *plVar10;
      *plVar10 = 0;
      lVar8 = *plVar5;
      *plVar5 = 0;
      *plVar10 = lVar8;
      plVar4 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      local_64 = local_64 + 1;
      *plVar5 = lVar12;
      plVar4 = plVar5;
      if (plVar6 != plVar10) {
        plVar4 = plVar6;
      }
      plVar6 = plVar4;
      plVar4 = plVar11;
    } while( true );
  }
  if (plVar10 == plVar6) {
LAB_01c28d00:
    if (local_64 != 0) goto LAB_01c290f4;
  }
  else {
    uVar1 = (**(code **)(*(long *)*plVar6 + 0x38))();
    uVar2 = (**(code **)(*(long *)*plVar10 + 0x38))();
    if (uVar2 <= uVar1) goto LAB_01c28d00;
    lVar12 = *plVar10;
    *plVar10 = 0;
    lVar8 = *plVar6;
    *plVar6 = 0;
    *plVar10 = lVar8;
    plVar5 = (long *)*plVar6;
    *plVar6 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar6 = lVar12;
    if (local_64 != -1) goto LAB_01c290f4;
  }
  uVar7 = FUN_01c29840(param_1,plVar10);
  uVar3 = FUN_01c29840(plVar10 + 1,param_2);
  if ((uVar3 & 1) != 0) goto LAB_01c28dd4;
  plVar6 = plVar10 + 1;
  if ((uVar7 & 1) != 0) goto LAB_01c28a10;
LAB_01c290f4:
  if ((long)param_2 - (long)plVar10 <= (long)plVar10 - (long)param_1) {
    FUN_01c289e0(plVar10 + 1,param_2);
    param_2 = plVar10;
    goto LAB_01c28ddc;
  }
  FUN_01c289e0(param_1,plVar10);
  plVar6 = plVar10 + 1;
  goto LAB_01c28a10;
LAB_01c28dd4:
  param_2 = plVar10;
  if ((uVar7 & 1) != 0) {
    return;
  }
  goto LAB_01c28ddc;
}


