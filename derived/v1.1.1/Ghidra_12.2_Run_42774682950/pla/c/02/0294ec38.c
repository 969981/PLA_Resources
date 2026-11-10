/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294ec38; name: FUN_0294ec38
 */


void FUN_0294ec38(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  puVar5 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar5 = PTR_DAT_04379520;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  local_38 = param_2;
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
  *param_1 = (long)&PTR_LAB_04276978;
  param_1[1] = lVar9;
  param_1[9] = (long)&PTR_LAB_042769b0;
  param_1[0xc] = 0;
  *(undefined2 *)((long)param_1 + 0x2fc) = 0;
  *(undefined1 *)((long)param_1 + 0x2fe) = 0;
  *(undefined2 *)(param_1 + 0x61) = 0;
  *(undefined1 *)((long)param_1 + 0x30a) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((long)param_1 + 0x303) = 0;
  *(undefined1 *)((long)param_1 + 0x30c) = 0;
  *(undefined2 *)(param_1 + 99) = 0;
  *(undefined1 *)((long)param_1 + 0x31a) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((long)param_1 + 0x313) = 0;
  *(undefined2 *)((long)param_1 + 0x324) = 0;
  *(undefined1 *)((long)param_1 + 0x326) = 0;
  *(undefined4 *)((long)param_1 + 799) = 0;
  *(undefined4 *)((long)param_1 + 0x31c) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined2 *)((long)param_1 + 0x334) = 0;
  *(undefined1 *)((long)param_1 + 0x336) = 0;
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  *(undefined4 *)((long)param_1 + 0x32f) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined1 *)((long)param_1 + 0x342) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((long)param_1 + 0x33b) = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x352) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((long)param_1 + 0x34b) = 0;
  *(undefined2 *)((long)param_1 + 0x35c) = 0;
  *(undefined1 *)((long)param_1 + 0x35e) = 0;
  *(undefined4 *)((long)param_1 + 0x357) = 0;
  *(undefined4 *)((long)param_1 + 0x354) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined2 *)((long)param_1 + 0x374) = 0;
  *(undefined4 *)((long)param_1 + 0x36b) = 0;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x2f3) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)((long)param_1 + 0x376) = 6;
  param_1[0x71] = 0;
  *(undefined4 *)((long)param_1 + 0x38f) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)((long)param_1 + 0x48c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined8 *)((long)param_1 + 0x484) = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined8 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  *(undefined8 *)((long)param_1 + 0x464) = 0;
  *(undefined8 *)((long)param_1 + 0x44c) = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  *(undefined8 *)((long)param_1 + 0x3c4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined1 *)((long)param_1 + 0x3c2) = 6;
  *(undefined8 *)((long)param_1 + 0x3c4) = 0;
  *(undefined2 *)((long)param_1 + 0x3cc) = 0;
  *(undefined1 *)((long)param_1 + 0x3ce) = 6;
  param_1[0x7a] = 0;
  *(undefined2 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)((long)param_1 + 0x3da) = 6;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined2 *)((long)param_1 + 0x3e4) = 0;
  *(undefined1 *)((long)param_1 + 0x3e6) = 6;
  param_1[0x7d] = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)((long)param_1 + 0x3f2) = 6;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined2 *)((long)param_1 + 0x3fc) = 0;
  *(undefined1 *)((long)param_1 + 0x3fe) = 6;
  *(undefined2 *)(param_1 + 0x81) = 0;
  param_1[0x80] = 0;
  *(undefined1 *)((long)param_1 + 0x40a) = 6;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined2 *)((long)param_1 + 0x414) = 0;
  *(undefined1 *)((long)param_1 + 0x416) = 6;
  param_1[0x83] = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x422) = 6;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined2 *)((long)param_1 + 0x42c) = 0;
  *(undefined1 *)((long)param_1 + 0x42e) = 6;
  param_1[0x86] = 0;
  *(undefined2 *)(param_1 + 0x87) = 0;
  *(undefined1 *)((long)param_1 + 0x43a) = 6;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined2 *)((long)param_1 + 0x444) = 0;
  *(undefined1 *)((long)param_1 + 0x446) = 6;
  param_1[0x89] = 0;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((long)param_1 + 0x452) = 6;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  *(undefined2 *)((long)param_1 + 0x45c) = 0;
  *(undefined1 *)((long)param_1 + 0x45e) = 6;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)((long)param_1 + 0x46a) = 6;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined2 *)((long)param_1 + 0x474) = 0;
  *(undefined1 *)((long)param_1 + 0x476) = 6;
  *(undefined2 *)(param_1 + 0x90) = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)((long)param_1 + 0x482) = 6;
  *(undefined2 *)((long)param_1 + 0x48c) = 0;
  *(undefined8 *)((long)param_1 + 0x484) = 0;
  *(undefined1 *)((long)param_1 + 0x48e) = 6;
  *(undefined2 *)((long)param_1 + 0x496) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined1 *)((long)param_1 + 0x49c) = 0;
  *(undefined1 *)((long)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x94] = param_3;
  param_1[0x95] = 0;
  lVar7 = FUN_00e9439c(auStack_28,local_38,&local_38);
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)param_1[0xc];
  param_1[0xc] = 0;
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
  param_1[0xc] = lVar7;
  return;
}


