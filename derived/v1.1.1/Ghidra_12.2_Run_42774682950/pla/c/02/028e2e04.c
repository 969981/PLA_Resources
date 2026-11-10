/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e2e04; name: FUN_028e2e04
 */


long FUN_028e2e04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6,long *param_7,long *param_8,long *param_9)

{
  undefined8 uVar1;
  long *local_38;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  if (((*param_6 == 0) || (*(int *)(*param_6 + 0xc) == 0)) ||
     (*(char *)((long)param_6 + 0x14) == '\0')) {
LAB_028e2e8c:
    uVar1 = 0;
  }
  else {
    FUN_028aee54(&local_38,param_6);
    if (local_38 == (long *)0x0) goto LAB_028e2e8c;
    uVar1 = (**(code **)(*local_38 + 0x138))(local_38,(long)param_6 + 0x14);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  if (((*param_7 == 0) || (*(int *)(*param_7 + 0xc) == 0)) ||
     (*(char *)((long)param_7 + 0x14) == '\0')) {
LAB_028e2ef4:
    uVar1 = 0;
  }
  else {
    FUN_028aee54(&local_38,param_7);
    if (local_38 == (long *)0x0) goto LAB_028e2ef4;
    uVar1 = (**(code **)(*local_38 + 0x138))(local_38,(long)param_7 + 0x14);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (((*param_8 == 0) || (*(int *)(*param_8 + 0xc) == 0)) ||
     (*(char *)((long)param_8 + 0x14) == '\0')) {
LAB_028e2f58:
    uVar1 = 0;
  }
  else {
    FUN_028aee54(&local_38,param_8);
    if (local_38 == (long *)0x0) goto LAB_028e2f58;
    uVar1 = (**(code **)(*local_38 + 0x138))(local_38,(long)param_8 + 0x14);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  if (((*param_9 != 0) && (*(int *)(*param_9 + 0xc) != 0)) &&
     (*(char *)((long)param_9 + 0x14) != '\0')) {
    FUN_028aee54(&local_38,param_9);
    if (local_38 != (long *)0x0) {
      uVar1 = (**(code **)(*local_38 + 0x138))(local_38,(long)param_9 + 0x14);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))();
      }
      goto LAB_028e2fc0;
    }
  }
  uVar1 = 0;
LAB_028e2fc0:
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return param_1;
}


