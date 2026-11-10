/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027604d0; name: FUN_027604d0
 */


bool FUN_027604d0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  undefined1 auStack_88 [8];
  long *local_80;
  undefined **local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  ulong local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  pcVar5 = (char *)(param_1 + 0x38);
  if (*pcVar5 != '\0') {
    return false;
  }
  FUN_006d99d8(auStack_40);
  FUN_006e4b38(auStack_88,auStack_40);
  FUN_006d9900(&local_78,"attributes",auStack_88);
  FUN_006d9aec(auStack_38,&local_78,1);
  FUN_006e4b9c(auStack_58);
  if (((ulong)local_78 & 1) != 0) {
    (**(code **)(*plStack_60 + 0x18))(plStack_60,local_68,(ulong)local_78 & 0xfffffffffffffffe,1);
  }
  FUN_006e4b9c(auStack_88);
  FUN_006d9cd8(auStack_40);
  local_78 = &PTR_FUN_0426b9f8;
  FUN_027635a8(auStack_70,"manual");
  FUN_006d9d50(auStack_50,auStack_38);
  local_48 = param_2 & 0xffffffff;
  FUN_007871a0(auStack_88,param_1 + 0x10,&local_78);
  FUN_027653b0(pcVar5,auStack_88);
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_80 + 0x10))(local_80);
      std::__shared_weak_count::__release_weak();
      lVar4 = *(long *)(param_1 + 0x40);
      goto joined_r0x027605fc;
    }
  }
  lVar4 = *(long *)(param_1 + 0x40);
joined_r0x027605fc:
  if (lVar4 == 0) {
    FUN_027651a4(pcVar5);
  }
  FUN_02765204(&local_78);
  FUN_006d9cd8(auStack_38);
  return lVar4 != 0;
}


