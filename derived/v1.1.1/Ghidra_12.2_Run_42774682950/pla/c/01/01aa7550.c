/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aa7550; name: FUN_01aa7550
 */


bool FUN_01aa7550(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  
  lVar5 = (long)param_2 - (long)param_1 >> 3;
  if (lVar5 == 3) {
    FUN_01aa6ec0(param_1,param_1 + 1,param_2 + -1);
  }
  else {
    switch(lVar5) {
    case 0:
    case 1:
      break;
    case 2:
      uVar1 = (**(code **)(*(long *)param_2[-1] + 0x38))();
      uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
      if (uVar1 < uVar2) {
        lVar10 = *param_1;
        *param_1 = 0;
        lVar5 = param_2[-1];
        param_2[-1] = 0;
        *param_1 = lVar5;
        plVar3 = (long *)param_2[-1];
        param_2[-1] = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        param_2[-1] = lVar10;
      }
      break;
    default:
      FUN_01aa6ec0(param_1,param_1 + 1,param_1 + 2);
      if (param_1 + 3 != param_2) {
        lVar5 = 0;
        iVar9 = 0;
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
            lVar10 = lVar5;
            while( true ) {
              *(undefined8 *)((long)param_1 + lVar10 + 0x18) = 0;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x18))();
              }
              uVar7 = *(undefined8 *)((long)param_1 + lVar10 + 0x10);
              *(undefined8 *)((long)param_1 + lVar10 + 0x10) = 0;
              *(undefined8 *)((long)param_1 + lVar10 + 0x18) = uVar7;
              if (lVar10 == -0x10) {
                plVar3 = param_1;
                goto LAB_01aa7764;
              }
              uVar1 = (**(code **)(*plVar8 + 0x38))(plVar8);
              uVar2 = (**(code **)(**(long **)((long)param_1 + lVar10 + 8) + 0x38))();
              if (uVar2 <= uVar1) break;
              plVar3 = *(long **)((long)param_1 + lVar10 + 0x10);
              lVar10 = lVar10 + -8;
            }
            plVar3 = (long *)((long)param_1 + lVar10 + 0x10);
LAB_01aa7764:
            plVar4 = (long *)*plVar3;
            *plVar3 = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))();
            }
            *plVar3 = (long)plVar8;
            iVar9 = iVar9 + 1;
            if (iVar9 == 8) {
              return plVar6 + 1 == param_2;
            }
          }
          lVar5 = lVar5 + 8;
          plVar3 = plVar6 + 1;
          plVar8 = plVar6;
          if (plVar6 + 1 == param_2) {
            return true;
          }
        } while( true );
      }
      break;
    case 4:
      FUN_01aa70c0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      break;
    case 5:
      FUN_01aa7230(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    }
  }
  return true;
}


