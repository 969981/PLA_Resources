/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b6ac0; name: FUN_009b6ac0
 */


int FUN_009b6ac0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = FUN_009b68c0();
  uVar2 = (**(code **)(*(long *)*param_4 + 0x38))();
  uVar3 = (**(code **)(*(long *)*param_3 + 0x38))();
  if (uVar2 < uVar3) {
    lVar6 = *param_3;
    *param_3 = 0;
    lVar5 = *param_4;
    *param_4 = 0;
    *param_3 = lVar5;
    plVar4 = (long *)*param_4;
    *param_4 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    *param_4 = lVar6;
    uVar2 = (**(code **)(*(long *)*param_3 + 0x38))();
    uVar3 = (**(code **)(*(long *)*param_2 + 0x38))();
    if (uVar2 < uVar3) {
      lVar6 = *param_2;
      *param_2 = 0;
      lVar5 = *param_3;
      *param_3 = 0;
      *param_2 = lVar5;
      plVar4 = (long *)*param_3;
      *param_3 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      *param_3 = lVar6;
      uVar2 = (**(code **)(*(long *)*param_2 + 0x38))();
      uVar3 = (**(code **)(*(long *)*param_1 + 0x38))();
      if (uVar2 < uVar3) {
        lVar6 = *param_1;
        *param_1 = 0;
        lVar5 = *param_2;
        *param_2 = 0;
        *param_1 = lVar5;
        plVar4 = (long *)*param_2;
        *param_2 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
        iVar1 = iVar1 + 3;
        *param_2 = lVar6;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


