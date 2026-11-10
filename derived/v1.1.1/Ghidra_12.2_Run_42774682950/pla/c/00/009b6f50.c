/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b6f50; name: FUN_009b6f50
 */


bool FUN_009b6f50(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if (1 < uVar5) {
    switch(uVar5) {
    case 2:
      uVar1 = (**(code **)(*(long *)param_2[-1] + 0x38))();
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      if (uVar1 < uVar2) {
        lVar11 = *param_1;
        *param_1 = 0;
        lVar9 = param_2[-1];
        param_2[-1] = 0;
        *param_1 = lVar9;
        plVar3 = (long *)param_2[-1];
        param_2[-1] = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        param_2[-1] = lVar11;
      }
      break;
    case 3:
      FUN_009b68c0(param_1,param_1 + 1,param_2 + -1);
      break;
    case 4:
      FUN_009b6ac0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      break;
    case 5:
      FUN_009b6c30(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      break;
    default:
      FUN_009b68c0(param_1,param_1 + 1,param_1 + 2);
      if (param_1 + 3 != param_2) {
        lVar9 = 0;
        iVar10 = 0;
        plVar3 = param_1 + 3;
        plVar8 = param_1 + 2;
        do {
          plVar6 = plVar3;
          uVar1 = (**(code **)(*(long *)*plVar6 + 0x38))();
          uVar2 = (**(code **)(*(long *)*plVar8 + 0x38))();
          if (uVar1 < uVar2) {
            plVar8 = (long *)*plVar6;
            plVar3 = (long *)0x0;
            *plVar6 = 0;
            lVar11 = lVar9;
            while( true ) {
              *(undefined8 *)((long)param_1 + lVar11 + 0x18) = 0;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x18))();
              }
              uVar7 = *(undefined8 *)((long)param_1 + lVar11 + 0x10);
              *(undefined8 *)((long)param_1 + lVar11 + 0x10) = 0;
              *(undefined8 *)((long)param_1 + lVar11 + 0x18) = uVar7;
              if (lVar11 == -0x10) {
                plVar3 = param_1;
                goto LAB_009b7164;
              }
              uVar1 = (**(code **)(*plVar8 + 0x38))(plVar8);
              uVar2 = (**(code **)(**(long **)((long)param_1 + lVar11 + 8) + 0x38))();
              if (uVar2 <= uVar1) break;
              plVar3 = *(long **)((long)param_1 + lVar11 + 0x10);
              lVar11 = lVar11 + -8;
            }
            plVar3 = (long *)((long)param_1 + lVar11 + 0x10);
LAB_009b7164:
            plVar4 = (long *)*plVar3;
            *plVar3 = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))();
            }
            *plVar3 = (long)plVar8;
            iVar10 = iVar10 + 1;
            if (iVar10 == 8) {
              return plVar6 + 1 == param_2;
            }
          }
          lVar9 = lVar9 + 8;
          plVar3 = plVar6 + 1;
          plVar8 = plVar6;
          if (plVar6 + 1 == param_2) {
            return true;
          }
        } while( true );
      }
    }
  }
  return true;
}


