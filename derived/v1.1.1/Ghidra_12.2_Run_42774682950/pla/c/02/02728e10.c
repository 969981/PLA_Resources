/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728e10; name: FUN_02728e10
 */


void FUN_02728e10(undefined8 param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  long *local_28;
  
  bVar2 = DAT_043ea508 == (long *)0x0;
  if (bVar2) {
    local_78 = 0x21f2888fa600744a;
    pcStack_70 = "NoNeedToLeave";
    local_68 = 0xd;
    local_60 = (long *)0x0;
    FUN_02729a10(&local_58,&local_78,&DAT_03a7dfc0);
  }
  else {
    (**(code **)(*DAT_043ea508 + 0x78))(&local_58);
  }
  local_98 = 0xa31aa04351fbbe96;
  pcStack_90 = "LogoutInternet";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  FUN_0272ae54(&local_50,local_58,&local_98);
  local_b8 = 0xd4f707ac097f8cb;
  pcStack_b0 = "TerminateNPLNManager";
  local_a8 = 0x14;
  local_a0 = (long *)0x0;
  FUN_0272aee0(&local_48,local_50,&local_b8);
  local_d8 = 0xfe93ce6e4831595f;
  pcStack_d0 = "TermPia";
  local_c8 = 7;
  local_c0 = (long *)0x0;
  FUN_0272af6c(&local_40,local_48,&local_d8);
  local_f8 = 0x60b2cd08de41555;
  pcStack_f0 = "TermCurl";
  local_e8 = 8;
  local_e0 = (long *)0x0;
  FUN_0272aff8(&local_38,local_40,&local_f8);
  local_118 = 0x1dad4498b148be0e;
  pcStack_110 = "TermSocket";
  local_108 = 10;
  local_100 = (long *)0x0;
  FUN_0272b084(&local_28,local_38,&local_118);
  local_138 = 0x6fdfe6336353b399;
  pcStack_130 = "DeleteSessionInstance";
  local_128 = 0x15;
  uStack_120 = 0;
  FUN_0272b110(param_1,local_28,&local_138);
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    lVar6 = local_40[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    lVar6 = local_48[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    lVar6 = local_58[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if ((bVar2) && (local_60 != (long *)0x0)) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


