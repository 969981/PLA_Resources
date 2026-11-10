/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1e310; name: FUN_02c1e310
 */


void FUN_02c1e310(long *param_1,int param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_60 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  ulong local_48;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  
  puVar5 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
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
  *param_1 = (long)&PTR_LAB_04288d68;
  param_1[1] = lVar9;
  param_1[0x10c] = 0;
  param_1[9] = (long)&PTR_LAB_04288dc0;
  param_1[0xb] = (long)&PTR_LAB_04288df0;
  puVar5 = PTR_DAT_0437b6e8;
  *(undefined8 *)((long)param_1 + 0x87c) = 0;
  *(undefined8 *)((long)param_1 + 0x884) = 0;
  *(undefined8 *)((long)param_1 + 0x88c) = 0;
  *(undefined8 *)((long)param_1 + 0x894) = 0;
  lVar7 = *(long *)puVar5;
  lVar9 = *(long *)(puVar5 + 8);
  param_1[0x114] = lVar7;
  param_1[0x116] = lVar7;
  param_1[0x115] = lVar9;
  param_1[0x117] = lVar9;
  *(int *)(param_1 + 0x118) = param_2;
  *(int *)((long)param_1 + 0x8c4) = param_2;
  param_1[0x11a] = 0;
  param_1[0x11c] = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11b] = 0;
  param_1[0x120] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x121] = 0;
  *(undefined1 *)(param_1 + 0x124) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x125),false,0);
  local_48 = (ulong)(uint)(param_2 * param_2);
  local_60[0] = *param_3;
  local_60[1] = 0;
  local_3c = 2;
  local_50 = 0;
  uStack_4c = 0x100;
  lVar7 = FUN_02c1c384(auStack_38,*(undefined8 *)(local_60[0] + 8),local_60,&local_3c,&local_48,
                       &uStack_4c,&local_50,local_60 + 1);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)param_1[0x10c];
  param_1[0x10c] = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  param_1[0x10c] = lVar7;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  memcpy(param_1 + 0xc,&DAT_03a8427c,0x400);
  memcpy(param_1 + 0x8c,&DAT_03a8427c,0x400);
  return;
}


