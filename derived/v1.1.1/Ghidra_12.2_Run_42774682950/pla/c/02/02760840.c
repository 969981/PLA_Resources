/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02760840; name: FUN_02760840
 */


bool FUN_02760840(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  undefined1 auStack_78 [8];
  long *local_70;
  undefined **local_68;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  ulong local_38;
  
  pcVar5 = (char *)(param_1 + 0x38);
  if (*pcVar5 != '\0') {
    return false;
  }
  local_68 = &PTR_FUN_0426b9f8;
  FUN_027635a8(auStack_60,"custom1");
  FUN_006d99d8(auStack_40);
  local_38 = param_2 & 0xffffffff;
  FUN_007871a0(auStack_78,param_1 + 0x10,&local_68);
  FUN_027653b0(pcVar5,auStack_78);
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 1;
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
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
      lVar4 = *(long *)(param_1 + 0x40);
      goto joined_r0x027608f0;
    }
  }
  lVar4 = *(long *)(param_1 + 0x40);
joined_r0x027608f0:
  if (lVar4 == 0) {
    FUN_027651a4(pcVar5);
  }
  FUN_02765204(&local_68);
  return lVar4 != 0;
}


