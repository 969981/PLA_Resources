/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d6230; name: FUN_017d6230
 */


void FUN_017d6230(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  *(undefined1 *)(param_1 + 0xe1) = 1;
  local_48 = 0xb0bc20d12e286f6;
  pcStack_40 = "buddy_group_talk";
  local_38 = 0x10;
  local_30 = (long *)0x0;
  local_68 = 0xca5c92730b9fdb39;
  pcStack_60 = "player_sub_delay";
  local_58 = 0x10;
  local_50 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar6;
  FUN_00d7d9e4(&local_28,uVar6,&local_48);
  if (local_28 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00d78f50(local_28,&local_68);
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
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return;
}


