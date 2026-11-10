/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a6fe0; name: FUN_028a6fe0
 */


bool FUN_028a6fe0(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar1 = (**(code **)(*(long *)param_2[-1] + 0x60))();
    iVar2 = (**(code **)(*(long *)*param_1 + 0x60))();
    if (iVar1 < iVar2) {
      lVar10 = *param_1;
      *param_1 = 0;
      lVar9 = param_2[-1];
      param_2[-1] = 0;
      *param_1 = lVar9;
      plVar4 = (long *)param_2[-1];
      param_2[-1] = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      param_2[-1] = lVar10;
      return true;
    }
    break;
  case 3:
    FUN_028a6a90(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_028a6c90(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_028a6e00(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_028a6a90(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar1 = 0;
      plVar4 = param_1 + 3;
      plVar8 = param_1 + 2;
      do {
        plVar6 = plVar4;
        iVar2 = (**(code **)(*(long *)*plVar6 + 0x60))();
        iVar3 = (**(code **)(*(long *)*plVar8 + 0x60))();
        if (iVar2 < iVar3) {
          plVar8 = (long *)*plVar6;
          plVar4 = (long *)0x0;
          *plVar6 = 0;
          lVar10 = lVar9;
          while( true ) {
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))();
            }
            uVar7 = *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            *(undefined8 *)((long)param_1 + lVar10 + 0x10) = 0;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) = uVar7;
            if (lVar10 == -0x10) {
              plVar4 = param_1;
              goto LAB_028a7190;
            }
            iVar2 = (**(code **)(*plVar8 + 0x60))(plVar8);
            iVar3 = (**(code **)(**(long **)((long)param_1 + lVar10 + 8) + 0x60))();
            if (iVar3 <= iVar2) break;
            plVar4 = *(long **)((long)param_1 + lVar10 + 0x10);
            lVar10 = lVar10 + -8;
          }
          plVar4 = (long *)((long)param_1 + lVar10 + 0x10);
LAB_028a7190:
          plVar5 = (long *)*plVar4;
          *plVar4 = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x18))();
          }
          iVar1 = iVar1 + 1;
          *plVar4 = (long)plVar8;
          if (iVar1 == 8) {
            return plVar6 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        plVar4 = plVar6 + 1;
        plVar8 = plVar6;
      } while (plVar6 + 1 != param_2);
    }
  }
  return true;
}


