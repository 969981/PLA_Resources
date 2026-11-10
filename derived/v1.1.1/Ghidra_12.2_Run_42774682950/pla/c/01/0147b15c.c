/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147b15c; name: FUN_0147b15c
 */


undefined8 FUN_0147b15c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  char *local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  char acStack_60 [64];
  
  iVar2 = *(int *)(param_2 + 4);
  plVar5 = *(long **)(param_1 + 0x2c8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(int *)(param_2 + 0x28) == 3) {
    uVar6 = 0;
    goto joined_r0x0147b24c;
  }
  snprintf(acStack_60,0x40,"anime_L_result_plate_%02d_L_info_%02d_close",iVar2,
           *(int *)(param_2 + 0x28));
  local_90 = acStack_60;
  FUN_009313e8(&local_88,&local_90);
  plVar1 = local_88;
  if (local_88 == (long *)0x0) {
    local_80 = *(long *)PTR_DAT_04379c88;
LAB_0147b2b4:
    lStack_78 = *(long *)PTR_PTR_04379d00;
    if (local_88 != (long *)0x0) goto LAB_0147b214;
LAB_0147b2c4:
    local_70 = 0;
  }
  else {
    local_80 = local_88[0xb];
    if (local_88 == (long *)0x0) goto LAB_0147b2b4;
    lStack_78 = local_88[0xc];
    if (local_88 == (long *)0x0) goto LAB_0147b2c4;
LAB_0147b214:
    local_70 = local_88[0xd];
  }
  local_68 = (long *)0x0;
  if (local_88 == (long *)0x0) {
    local_68 = local_88;
    FUN_0283b1e8(plVar5,&local_80);
  }
  else {
    (**(code **)(*local_88 + 0x18))(local_88);
    local_68 = plVar1;
    FUN_0283b1e8(plVar5,&local_80);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar6 = 1;
joined_r0x0147b24c:
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      iVar2 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return uVar6;
}


