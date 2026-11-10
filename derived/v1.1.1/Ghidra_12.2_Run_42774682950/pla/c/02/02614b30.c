/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02614b30; name: FUN_02614b30
 */


void FUN_02614b30(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  FUN_026145e0(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
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
        lVar9 = lVar8;
        while( true ) {
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))();
          }
          uVar6 = *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          *(undefined8 *)((long)param_1 + lVar9 + 0x10) = 0;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) = uVar6;
          if (lVar9 == -0x10) {
            plVar3 = param_1;
            goto LAB_02614c38;
          }
          uVar1 = (**(code **)(*plVar7 + 0x38))(plVar7);
          uVar2 = (**(code **)(**(long **)((long)param_1 + lVar9 + 8) + 0x38))();
          if (uVar2 <= uVar1) break;
          plVar3 = *(long **)((long)param_1 + lVar9 + 0x10);
          lVar9 = lVar9 + -8;
        }
        plVar3 = (long *)((long)param_1 + lVar9 + 0x10);
LAB_02614c38:
        plVar4 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
        *plVar3 = (long)plVar7;
      }
      lVar8 = lVar8 + 8;
      plVar3 = plVar5 + 1;
      plVar7 = plVar5;
    } while (plVar5 + 1 != param_2);
  }
  return;
}


