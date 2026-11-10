/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9ebe0; name: FUN_00d9ebe0
 */


void FUN_00d9ebe0(long param_1,int param_2,int *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_00d9ed70();
  if (*param_3 == 0x20) {
    return;
  }
  if (param_2 == 1) {
    FUN_00d9ee54(param_1 + 0x70,*(undefined8 *)(param_1 + 0x688));
  }
  else {
    switch(param_2) {
    case 0:
      lVar1 = param_1 + 0x70;
      plVar2 = (long *)FUN_00d9a98c(lVar1,0);
      if (((plVar2 != (long *)0x0) && (uVar3 = (**(code **)(*plVar2 + 0x58))(), (uVar3 & 1) != 0))
         && ((int)plVar2[5] == *param_3)) {
        FUN_00d9e914(lVar1,0,*(undefined8 *)(param_1 + 0x688));
      }
      plVar2 = (long *)FUN_00d9a98c(lVar1,1);
      if (plVar2 == (long *)0x0) {
        return;
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((int)plVar2[5] == *param_3) {
        FUN_00d9e914(lVar1,1,*(undefined8 *)(param_1 + 0x688));
        return;
      }
      return;
    default:
      goto switchD_00d9ec80_caseD_1;
    case 2:
      FUN_00d9e97c(param_1 + 0x70,0,*(undefined8 *)(param_1 + 0x688));
      break;
    case 3:
      FUN_00d9eeb0(param_1 + 0x70,*(undefined8 *)(param_1 + 0x688));
      break;
    case 4:
      FUN_00d9ef0c(param_1 + 0x70,*(undefined8 *)(param_1 + 0x688));
      break;
    case 5:
      FUN_00d9ef68(param_1 + 0x70,*(undefined8 *)(param_1 + 0x688));
    }
  }
  plVar2 = (long *)FUN_00d9a98c(param_1 + 0x70,0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d9ec5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))(plVar2,param_3);
    return;
  }
switchD_00d9ec80_caseD_1:
  return;
}


