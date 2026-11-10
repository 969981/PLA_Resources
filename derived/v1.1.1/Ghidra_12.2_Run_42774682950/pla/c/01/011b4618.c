/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b4618; name: FUN_011b4618
 */


void FUN_011b4618(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  long *local_30;
  long *local_28;
  
  FUN_011d24c4(&local_30);
  local_68 = 0xe706482abab7a5ce;
  FUN_02c2e7d0(local_30,&local_68,*(undefined8 *)(param_1 + 0xa0));
  local_37 = 1;
  local_48 = *(undefined8 *)(param_1 + 0xa0);
  local_38 = 1;
  local_40 = 2;
  local_36 = 0;
  local_68 = 0x63e2672f9e43a54e;
  pcStack_60 = "battle_logic";
  local_58 = 0xc;
  local_50 = (long *)0x0;
  local_88 = 0xbb8c9d45409677d0;
  pcStack_80 = "systemMessageHideFrame";
  local_78 = 0x16;
  local_70 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar6;
  FUN_00d7d9e4(&local_28,uVar6,&local_68);
  if (local_28 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00d78f50(local_28,&local_88);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  local_40 = CONCAT44(uVar4,(undefined4)local_40);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x98),0);
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0x98),&local_48);
  if (local_30 != (long *)0x0) {
    plVar1 = local_30 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return;
}


