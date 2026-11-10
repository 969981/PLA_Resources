/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a752c4; name: FUN_02a752c4
 */


void FUN_02a752c4(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_38;
  
  param_1[0xb] = 0;
  puVar5 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  puVar5 = PTR_DAT_04379520;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_0427ef40;
  param_1[1] = lVar9;
  param_1[9] = (long)&PTR_LAB_0427ef78;
  FUN_002209a8(param_1 + 0x2e68);
  *(undefined1 *)(param_1 + 0x3242) = 0;
  *(undefined1 *)(param_1 + 0x3243) = 0;
  param_1[0x3245] = 0;
  (*DAT_043ef6c0)(&local_38,&DAT_043ef6e0);
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)param_1[0xb];
  param_1[0xb] = (long)local_38;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_00220768(param_1 + 0xc);
  uVar2 = *param_3;
  *(undefined4 *)(param_1 + 0x2d4f) = 0;
  *(undefined4 *)((long)param_1 + 0x16b14) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = param_3[1];
  *(undefined4 *)((long)param_1 + 100) = param_3[2];
  param_1[0x2d61] = (long)(int)param_3[3];
  *(undefined8 *)((long)param_1 + 0x16aec) = 0;
  *(undefined8 *)((long)param_1 + 0x16af4) = 0;
  *(undefined8 *)((long)param_1 + 0x16adc) = 0;
  *(undefined8 *)((long)param_1 + 0x16ae4) = 0;
  *(undefined8 *)((long)param_1 + 0x16acc) = 0;
  *(undefined8 *)((long)param_1 + 0x16ad4) = 0;
  *(undefined8 *)((long)param_1 + 0x16abc) = 0;
  *(undefined8 *)((long)param_1 + 0x16ac4) = 0;
  *(undefined8 *)((long)param_1 + 0x16aac) = 0;
  *(undefined8 *)((long)param_1 + 0x16ab4) = 0;
  *(undefined8 *)((long)param_1 + 0x16a9c) = 0;
  *(undefined8 *)((long)param_1 + 0x16aa4) = 0;
  *(undefined8 *)((long)param_1 + 0x16a8c) = 0;
  *(undefined8 *)((long)param_1 + 0x16a94) = 0;
  *(undefined8 *)((long)param_1 + 0x16a7c) = 0;
  *(undefined8 *)((long)param_1 + 0x16a84) = 0;
  return;
}


