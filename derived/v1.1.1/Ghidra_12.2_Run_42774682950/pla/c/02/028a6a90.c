/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a6a90; name: FUN_028a6a90
 */


undefined8 FUN_028a6a90(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = (**(code **)(*(long *)*param_2 + 0x60))();
  iVar2 = (**(code **)(*(long *)*param_1 + 0x60))();
  iVar3 = (**(code **)(*(long *)*param_3 + 0x60))();
  iVar4 = (**(code **)(*(long *)*param_2 + 0x60))();
  if (iVar1 < iVar2) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (iVar3 < iVar4) {
      lVar6 = *param_3;
      *param_3 = 0;
      *param_1 = lVar6;
      plVar5 = (long *)*param_3;
      *param_3 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *param_3 = lVar7;
    }
    else {
      lVar6 = *param_2;
      *param_2 = 0;
      *param_1 = lVar6;
      plVar5 = (long *)*param_2;
      *param_2 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *param_2 = lVar7;
      iVar1 = (**(code **)(*(long *)*param_3 + 0x60))();
      iVar2 = (**(code **)(*(long *)*param_2 + 0x60))();
      if (iVar1 < iVar2) {
        lVar6 = *param_2;
        *param_2 = 0;
        lVar7 = *param_3;
        *param_3 = 0;
        *param_2 = lVar7;
        plVar5 = (long *)*param_3;
        *param_3 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        *param_3 = lVar6;
        return 2;
      }
    }
  }
  else {
    if (iVar4 <= iVar3) {
      return 0;
    }
    lVar6 = *param_2;
    *param_2 = 0;
    lVar7 = *param_3;
    *param_3 = 0;
    *param_2 = lVar7;
    plVar5 = (long *)*param_3;
    *param_3 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *param_3 = lVar6;
    iVar1 = (**(code **)(*(long *)*param_2 + 0x60))();
    iVar2 = (**(code **)(*(long *)*param_1 + 0x60))();
    if (iVar1 < iVar2) {
      lVar6 = *param_1;
      *param_1 = 0;
      lVar7 = *param_2;
      *param_2 = 0;
      *param_1 = lVar7;
      plVar5 = (long *)*param_2;
      *param_2 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *param_2 = lVar6;
      return 2;
    }
  }
  return 1;
}


