/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0272a678; name: FUN_0272a678
 */


void FUN_0272a678(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (DAT_043ea528 == '\x01') {
    local_18 = 0;
    local_40 = 0xc437672bf8d5c64f;
    pcStack_38 = "DuplicatedRun";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_02728d78(param_1,&local_40,&local_18);
    plVar6 = local_28;
  }
  else if (DAT_043ea520 == 3) {
    if (DAT_043ea529 == '\x01') {
      local_80 = 0x9bc58c670037cfe2;
      pcStack_78 = "NoNeedToLoginRelayServer";
      local_70 = 0x18;
      local_68 = (long *)0x0;
      FUN_02729a10(param_1,&local_80,&DAT_03a7dfc0);
      plVar6 = local_68;
    }
    else {
      local_a0 = 0xa42e60e0b4f4def0;
      pcStack_98 = "LoginRelayServer";
      local_90 = 0x10;
      local_88 = (long *)0x0;
      FUN_0272a850(&local_18,&local_a0);
      local_c0 = 0xc30d97f731a10e1c;
      pcStack_b8 = "Commit";
      local_b0 = 6;
      uStack_a8 = 0;
      FUN_0272a8d8(param_1,CONCAT44(uStack_14,local_18),&local_c0);
      plVar5 = (long *)CONCAT44(uStack_14,local_18);
      plVar6 = local_88;
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
          plVar6 = local_88;
        }
      }
    }
  }
  else {
    local_18 = 0;
    local_60 = 0x5b495c4990c8e78c;
    pcStack_58 = "NotInInternet";
    local_50 = 0xd;
    local_48 = (long *)0x0;
    FUN_02728d78(param_1,&local_60,&local_18);
    plVar6 = local_48;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  return;
}


