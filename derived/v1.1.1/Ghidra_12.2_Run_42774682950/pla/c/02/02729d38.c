/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02729d38; name: FUN_02729d38
 */


void FUN_02729d38(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_210;
  char *pcStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  char *pcStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  char *pcStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  char *pcStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 local_190;
  char *pcStack_188;
  undefined8 local_180;
  long *local_178;
  undefined8 local_170;
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long *local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  
  if (DAT_043ea528 == '\x01') {
    local_98 = (long *)((ulong)local_98 & 0xffffffff00000000);
    local_b8 = 0xc437672bf8d5c64f;
    pcStack_b0 = "DuplicatedRun";
    local_a8 = 0xd;
    local_a0 = (long *)0x0;
    FUN_02728d78(param_1,&local_b8,&local_98);
    local_110 = local_a0;
  }
  else {
    if (DAT_043ea520 != 3) {
      DAT_043ea520 = 0;
      DAT_043ea528 = '\x01';
      FUN_02728e10(&local_110);
      local_130 = 0x3c51125c3625acf4;
      pcStack_128 = "NetworkUse";
      param_2 = param_2 & 1;
      local_120 = 10;
      local_118 = (long *)0x0;
      FUN_02729a88(&local_108,local_110,&local_130,param_2);
      local_150 = 0xc740b3986b091e12;
      pcStack_148 = "InitSocket";
      local_140 = 10;
      local_138 = (long *)0x0;
      FUN_027291cc(&local_100,local_108,&local_150);
      local_170 = 0xe84ddc16e8ed9c1;
      pcStack_168 = "InitCurl";
      local_160 = 8;
      local_158 = (long *)0x0;
      FUN_02729b24(&local_f8,local_100,&local_170);
      local_60 = (long *)CONCAT44(local_60._4_4_,1);
      local_98 = (long *)0x36ccf9bde9583765;
      local_90 = "EnsureNsaTokenId";
      local_88 = 0x10;
      local_80 = (long *)0x0;
      local_58 = (char *)0x2000;
      FUN_0274934c(&local_f0,local_f8,&local_98,&local_60,param_2);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_190 = 0x9d8ea5d066d20b85;
      pcStack_188 = "CheckNSO";
      local_180 = 8;
      local_178 = (long *)0x0;
      FUN_0272a390(&local_e8,local_f0,&local_190,param_2);
      local_70 = 1;
      local_58 = "InitializeNplnManager";
      local_50 = 0x15;
      local_48 = (long *)0x0;
      local_68 = 0x2000;
      local_60 = (long *)&DAT_b70d18694d5eebde;
      local_98 = (long *)*param_3;
      local_90 = (char *)param_3[1];
      local_88 = param_3[2];
      local_80 = (long *)param_3[3];
      local_78 = *(undefined4 *)(param_3 + 4);
      FUN_0274b838(&local_e0,local_e8,&local_60,&local_70,&local_98,1);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      local_1b0 = 0x4d4f360032cc4a43;
      pcStack_1a8 = "InitPia";
      local_1a0 = 7;
      local_198 = (long *)0x0;
      FUN_02729258(&local_70,local_e0,&local_1b0,2);
      local_1d0 = 0x34504ee951f16a6c;
      pcStack_1c8 = "CreateSessionInstance";
      local_1c0 = 0x15;
      uStack_1b8 = 0;
      FUN_0272a42c(&local_60,CONCAT44(uStack_6c,local_70),&local_1d0);
      local_1f0 = 0xc30d97f731a10e1c;
      pcStack_1e8 = "Commit";
      local_1e0 = 6;
      uStack_1d8 = 0;
      FUN_0272a4f0(&local_98,local_60,&local_1f0);
      local_210 = 0xfaf6a7bef755c01f;
      pcStack_208 = "Finalize";
      local_200 = 8;
      uStack_1f8 = 0;
      FUN_0272a5b4(param_1,local_98,&local_210);
      if (local_98 == (long *)0x0) {
LAB_0272a0e4:
        if (local_60 == (long *)0x0) goto LAB_0272a108;
LAB_0272a0ec:
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
        if (iVar2 + -1 != 0) goto LAB_0272a108;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
        plVar5 = (long *)CONCAT44(uStack_6c,local_70);
      }
      else {
        lVar6 = local_98[0xb];
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
        if (iVar2 + -1 != 0) goto LAB_0272a0e4;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
        if (local_60 != (long *)0x0) goto LAB_0272a0ec;
LAB_0272a108:
        plVar5 = (long *)CONCAT44(uStack_6c,local_70);
      }
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
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      if (local_e0 != (long *)0x0) {
        lVar6 = local_e0[0xb];
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
          (**(code **)(*local_e0 + 0x20))();
        }
      }
      if (local_e8 != (long *)0x0) {
        lVar6 = local_e8[0xb];
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
          (**(code **)(*local_e8 + 0x20))();
        }
      }
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        lVar6 = local_f0[0xb];
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
          (**(code **)(*local_f0 + 0x20))();
        }
      }
      if (local_f8 != (long *)0x0) {
        lVar6 = local_f8[0xb];
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
          (**(code **)(*local_f8 + 0x20))();
        }
      }
      if (local_158 != (long *)0x0) {
        (**(code **)(*local_158 + 0x20))();
      }
      if (local_100 != (long *)0x0) {
        lVar6 = local_100[0xb];
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
          (**(code **)(*local_100 + 0x20))();
        }
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_108 != (long *)0x0) {
        lVar6 = local_108[0xb];
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
          (**(code **)(*local_108 + 0x20))();
        }
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_110 == (long *)0x0) {
        return;
      }
      lVar6 = local_110[0xb];
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
      goto LAB_02729df8;
    }
    local_d8 = 0x575e748b9e7916a3;
    pcStack_d0 = "NoNeedToConnect";
    local_c8 = 0xf;
    local_c0 = (long *)0x0;
    FUN_02729a10(param_1,&local_d8,&DAT_03a7dfc0);
    local_110 = local_c0;
  }
  if (local_110 == (long *)0x0) {
    return;
  }
LAB_02729df8:
  (**(code **)(*local_110 + 0x20))();
  return;
}


