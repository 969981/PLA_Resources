/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9ed70; name: FUN_00d9ed70
 */


void FUN_00d9ed70(long param_1,int param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_3 == 0x20) {
    if (param_2 == 0) {
      return;
    }
    plVar2 = (long *)FUN_00d9a98c(param_1 + 0x70,0);
    if (plVar2 == (long *)0x0) {
      return;
    }
    iVar1 = (**(code **)(*plVar2 + 0x40))();
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    if (param_2 != 0) {
      FUN_00da3b98(param_1 + 0x3c0);
      plVar2 = *(long **)(param_1 + 0x3a0);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      goto LAB_00d9edc8;
    }
    plVar2 = (long *)FUN_00d9a98c(param_1 + 0x70,0);
    if (((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x58))(), (uVar3 & 1) == 0)) ||
       ((int)plVar2[5] != *param_3)) {
      return;
    }
  }
  FUN_00da3b98(param_1 + 0x3c0,0x20);
  plVar2 = *(long **)(param_1 + 0x3a0);
  lVar4 = *plVar2;
  param_3 = (int *)PTR_Handheld_0437b5e0;
LAB_00d9edc8:
                    /* WARNING: Could not recover jumptable at 0x00d9edd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x80))(plVar2,param_3);
  return;
}


