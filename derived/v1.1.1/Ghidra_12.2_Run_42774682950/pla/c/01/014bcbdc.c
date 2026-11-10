/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bcbdc; name: FUN_014bcbdc
 */


void FUN_014bcbdc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  undefined1 auStack_60 [24];
  long *local_48;
  long local_40;
  long *local_38;
  
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  plVar11 = (long *)param_2[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar8 = *(long **)(param_1 + 0x20);
  *(long **)(param_1 + 0x20) = plVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x28) = param_2[4];
  uVar9 = param_2[5];
  uVar2 = param_2[6];
  uVar1 = param_2[7];
  uVar3 = param_2[8];
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  pcVar10 = (char *)param_2[1];
  if (*pcVar10 == '\0') {
    plVar11 = (long *)FUN_00938550();
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
    FUN_02a47cd8(&local_38,uVar9,pcVar10);
    plVar11 = local_38;
  }
  if (plVar11 == (long *)0x0) {
    plVar8 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar8 = plVar11 + 0xc;
  }
  local_40 = *plVar8;
  FUN_014bcde4(&local_38,&local_40,"_base");
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  FUN_02a47560(auStack_60,&local_38);
  FUN_014bce68(&local_40,param_1,auStack_60,*(int *)(param_2 + 8) + -1);
  plVar11 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  lVar6 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x58) = lVar6;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


