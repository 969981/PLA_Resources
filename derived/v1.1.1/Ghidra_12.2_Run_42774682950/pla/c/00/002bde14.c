/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bde14; name: FUN_002bde14
 */


void FUN_002bde14(undefined4 *param_1,long *param_2,undefined *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  void *pvVar3;
  code *pcVar4;
  undefined *local_60;
  long *plStack_58;
  long *local_40;
  
  local_40 = (long *)&local_60;
  uVar1 = *param_4;
  *(undefined1 *)((long)param_2 + 0x1c) = *(undefined1 *)(param_4 + 1);
  *(undefined4 *)(param_2 + 3) = uVar1;
  local_60 = PTR_DAT_04373518 + 0x10;
  plStack_58 = param_2;
  FUN_002bbcc4(&local_60,param_2 + 4);
  if (&local_60 == (undefined **)local_40) {
    pcVar4 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_002bde90;
    pcVar4 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar4)();
LAB_002bde90:
  if (*param_2 == 0) {
    plVar2 = (long *)param_2[8];
    local_60 = param_3;
    if (plVar2 == (long *)0x0) {
      pvVar3 = (void *)FUN_002ba2a0();
      operator_delete(pvVar3);
      return;
    }
    (**(code **)(*plVar2 + 0x30))(param_1,plVar2,&local_60);
    plVar2 = (long *)param_2[8];
    param_2[8] = 0;
    if (param_2 + 4 == plVar2) {
      (**(code **)(*plVar2 + 0x20))();
    }
    else if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
  }
  return;
}


