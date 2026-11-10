/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b3254; name: FUN_008b3254
 */


undefined4 FUN_008b3254(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_18;
  
  local_28 = (long *)0x0;
  local_40 = 0x63e2672f9e43a54e;
  pcStack_38 = "battle_logic";
  local_30 = 0xc;
  local_60 = 0x2d466ae53713d68c;
  pcStack_58 = "rareColorEffectInterval";
  local_50 = 0x17;
  local_48 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(&LAB_008b3cb4,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar6;
  FUN_00d7d9e4(&local_18,uVar6,&local_40);
  if (local_18 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00d78f50(local_18,&local_60);
    if (local_18 != (long *)0x0) {
      plVar1 = local_18 + 10;
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
        (**(code **)(*local_18 + 0x10))();
      }
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar4;
}


