/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a56dc0; name: FUN_02a56dc0
 */


bool FUN_02a56dc0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar1 = (**(code **)(*(long *)param_2[-1] + 0x38))();
    uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    if (uVar1 < uVar2) {
      lVar10 = *param_1;
      *param_1 = 0;
      lVar8 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar8;
      plVar3 = (long *)param_2[-1];
      param_2[-1] = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))();
      }
      param_2[-1] = lVar10;
      return true;
    }
    break;
  case 3:
    FUN_02a56870(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_02a56a70(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_02a56be0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_02a56870(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      plVar3 = param_1 + 3;
      plVar7 = param_1 + 2;
      do {
        plVar5 = plVar3;
        uVar1 = (**(code **)(*(long *)*plVar5 + 0x38))();
        uVar2 = (**(code **)(*(long *)*plVar7 + 0x38))();
        if (uVar1 < uVar2) {
          plVar7 = (long *)*plVar5;
          plVar3 = (long *)0x0;
          *plVar5 = 0;
          lVar10 = lVar8;
          while( true ) {
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x18))();
            }
            uVar6 = *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            *(undefined8 *)((long)param_1 + lVar10 + 0x10) = 0;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) = uVar6;
            if (lVar10 == -0x10) {
              plVar3 = param_1;
              goto LAB_02a56f70;
            }
            uVar1 = (**(code **)(*plVar7 + 0x38))(plVar7);
            uVar2 = (**(code **)(**(long **)((long)param_1 + lVar10 + 8) + 0x38))();
            if (uVar2 <= uVar1) break;
            plVar3 = *(long **)((long)param_1 + lVar10 + 0x10);
            lVar10 = lVar10 + -8;
          }
          plVar3 = (long *)((long)param_1 + lVar10 + 0x10);
LAB_02a56f70:
          plVar4 = (long *)*plVar3;
          *plVar3 = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))();
          }
          iVar9 = iVar9 + 1;
          *plVar3 = (long)plVar7;
          if (iVar9 == 8) {
            return plVar5 + 1 == param_2;
          }
        }
        lVar8 = lVar8 + 8;
        plVar3 = plVar5 + 1;
        plVar7 = plVar5;
      } while (plVar5 + 1 != param_2);
    }
  }
  return true;
}


