/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017db374; name: FUN_017db374
 */


int FUN_017db374(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  long *local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70 [2];
  
  puVar5 = PTR_DAT_04379660;
  local_90 = 0xb0bc20d12e286f6;
  pcStack_88 = "buddy_group_talk";
  local_80 = 0x10;
  local_78 = (long *)0x0;
  local_b0 = 0x36f7045da3dc17be;
  pcStack_a8 = "change_talker_interval_min";
  local_a0 = 0x1a;
  local_98 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  uVar11 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar11;
  FUN_00d7d9e4(&local_d0,uVar11,&local_90);
  if (local_d0 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00d78f50(local_d0,&local_b0);
    if (local_d0 != (long *)0x0) {
      plVar1 = local_d0 + 10;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
  }
  local_c0 = 0x10;
  local_b8 = (long *)0x0;
  local_f0 = 0x36dc165da3c56e9c;
  pcStack_e8 = "change_talker_interval_max";
  local_d0 = (long *)0xb0bc20d12e286f6;
  pcStack_c8 = "buddy_group_talk";
  local_e0 = 0x1a;
  local_d8 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar11;
  FUN_00d7d9e4(&local_110,uVar11,&local_d0);
  if (local_110 == (long *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_00d78f50(local_110,&local_f0);
    if (local_110 != (long *)0x0) {
      plVar1 = local_110 + 10;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_110 + 0x10))();
      }
    }
  }
  local_100 = 0x10;
  local_f8 = (long *)0x0;
  local_110 = (long *)0xb0bc20d12e286f6;
  pcStack_108 = "buddy_group_talk";
  local_130 = 0x36f7045da3dc17be;
  pcStack_128 = "change_talker_interval_min";
  local_120 = 0x1a;
  local_118 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar11;
  FUN_00d7d9e4(local_70,uVar11,&local_110);
  if (local_70[0] == (long *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_00d78f50(local_70[0],&local_130);
    if (local_70[0] != (long *)0x0) {
      plVar1 = local_70[0] + 10;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
    }
  }
  iVar9 = FUN_017da8e0(iVar9 - iVar10);
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return iVar9 + iVar8;
}


