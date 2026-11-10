/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728a80; name: FUN_02728a80
 */


void FUN_02728a80(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (DAT_043ea528 == '\x01') {
    local_48 = 0;
    local_40 = 0xc437672bf8d5c64f;
    pcStack_38 = "DuplicatedRun";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_02728d78(param_1,&local_40,&local_48);
    local_68 = local_28;
    if (local_28 == (long *)0x0) {
      return;
    }
  }
  else {
    DAT_043ea520 = 0;
    DAT_043ea528 = '\x01';
    FUN_02728e10(&local_68);
    local_88 = 0xc740b3986b091e12;
    pcStack_80 = "InitSocket";
    local_78 = 10;
    local_70 = (long *)0x0;
    FUN_027291cc(&local_60,local_68,&local_88);
    local_a8 = 0x4d4f360032cc4a43;
    pcStack_a0 = "InitPia";
    local_98 = 7;
    local_90 = (long *)0x0;
    FUN_02729258(&local_58,local_60,&local_a8,1);
    local_c8 = 0x34504ee951f16a6c;
    pcStack_c0 = "CreateSessionInstance";
    local_b8 = 0x15;
    uStack_b0 = 0;
    FUN_027292f4(&local_50,local_58,&local_c8);
    local_e8 = 0xc30d97f731a10e1c;
    pcStack_e0 = "Commit";
    local_d8 = 6;
    uStack_d0 = 0;
    FUN_027293b8(&local_48,local_50,&local_e8);
    local_108 = 0xfaf6a7bef755c01f;
    pcStack_100 = "Finalize";
    local_f8 = 8;
    uStack_f0 = 0;
    FUN_0272947c(param_1,CONCAT44(uStack_44,local_48),&local_108);
    plVar5 = (long *)CONCAT44(uStack_44,local_48);
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    if (local_58 != (long *)0x0) {
      lVar6 = local_58[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      lVar6 = local_60[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_68 == (long *)0x0) {
      return;
    }
    lVar6 = local_68[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
  }
  (**(code **)(*local_68 + 0x20))();
  return;
}


