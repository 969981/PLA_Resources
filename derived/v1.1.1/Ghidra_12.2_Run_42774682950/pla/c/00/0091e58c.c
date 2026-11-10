/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091e58c; name: FUN_0091e58c
 */


undefined4 FUN_0091e58c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_18;
  
  iVar5 = FUN_00932238(param_2);
  if (iVar5 == 2) {
    local_40 = 0x63e2672f9e43a54e;
    pcStack_38 = "battle_logic";
    local_30 = 0xc;
    local_28 = (long *)0x0;
    local_60 = 0x6d57422b90a3b5a;
    pcStack_58 = "surprisedSkipPer_3";
    local_50 = 0x12;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar7;
    FUN_00d7d9e4(&local_18,uVar7,&local_40);
    if (local_18 != (long *)0x0) {
      uVar6 = FUN_00d78f50(local_18,&local_60);
      if (local_18 == (long *)0x0) goto joined_r0x0091e97c;
      plVar1 = local_18 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        bVar4 = iVar5 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0091e82c;
    }
  }
  else if (iVar5 == 1) {
    local_40 = 0x63e2672f9e43a54e;
    pcStack_38 = "battle_logic";
    local_30 = 0xc;
    local_28 = (long *)0x0;
    local_60 = 0x6d57522b90a3d0d;
    pcStack_58 = "surprisedSkipPer_2";
    local_50 = 0x12;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar7;
    FUN_00d7d9e4(&local_18,uVar7,&local_40);
    if (local_18 != (long *)0x0) {
      uVar6 = FUN_00d78f50(local_18,&local_60);
      if (local_18 == (long *)0x0) goto joined_r0x0091e97c;
      plVar1 = local_18 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        bVar4 = iVar5 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0091e82c;
    }
  }
  else if (iVar5 == 0) {
    local_40 = 0x63e2672f9e43a54e;
    pcStack_38 = "battle_logic";
    local_30 = 0xc;
    local_28 = (long *)0x0;
    local_60 = 0x6d57222b90a37f4;
    pcStack_58 = "surprisedSkipPer_1";
    local_50 = 0x12;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar7;
    FUN_00d7d9e4(&local_18,uVar7,&local_40);
    if (local_18 != (long *)0x0) {
      uVar6 = FUN_00d78f50(local_18,&local_60);
      if (local_18 == (long *)0x0) goto joined_r0x0091e97c;
      plVar1 = local_18 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        bVar4 = iVar5 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0091e82c:
      if (bVar4) {
        (**(code **)(*local_18 + 0x10))();
      }
      goto joined_r0x0091e97c;
    }
  }
  else {
    local_40 = 0x63e2672f9e43a54e;
    pcStack_38 = "battle_logic";
    local_30 = 0xc;
    local_28 = (long *)0x0;
    local_60 = 0x6d56f22b90a32db;
    pcStack_58 = "surprisedSkipPer_4";
    local_50 = 0x12;
    local_48 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar7 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar7;
    FUN_00d7d9e4(&local_18,uVar7,&local_40);
    if (local_18 != (long *)0x0) {
      uVar6 = FUN_00d78f50(local_18,&local_60);
      if (local_18 == (long *)0x0) goto joined_r0x0091e97c;
      plVar1 = local_18 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        bVar4 = iVar5 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_0091e82c;
    }
  }
  uVar6 = 0;
joined_r0x0091e97c:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar6;
}


