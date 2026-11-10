/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02729540; name: FUN_02729540
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02729540(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_1a8;
  char *pcStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  char *pcStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char *pcStack_160;
  undefined8 local_158;
  long *local_150;
  undefined8 local_148;
  char *pcStack_140;
  undefined8 local_138;
  long *local_130;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
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
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined1 *local_60;
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
    local_108 = local_a0;
  }
  else {
    if ((DAT_043ea520 & 0xfffffffe) != 2) {
      DAT_043ea520 = 0;
      DAT_043ea528 = '\x01';
      FUN_02728e10(&local_108);
      local_128 = 0x3c51125c3625acf4;
      pcStack_120 = "NetworkUse";
      local_118 = 10;
      local_110 = (long *)0x0;
      FUN_02729a88(&local_100,local_108,&local_128,param_2 & 1);
      local_148 = 0xc740b3986b091e12;
      pcStack_140 = "InitSocket";
      local_138 = 10;
      local_130 = (long *)0x0;
      FUN_027291cc(&local_f8,local_100,&local_148);
      local_168 = 0xe84ddc16e8ed9c1;
      pcStack_160 = "InitCurl";
      local_158 = 8;
      local_150 = (long *)0x0;
      FUN_02729b24(&local_f0,local_f8,&local_168);
      local_60 = (undefined1 *)CONCAT44(local_60._4_4_,1);
      local_98 = (long *)0x36ccf9bde9583765;
      local_90 = "EnsureNsaTokenId";
      local_88 = 0x10;
      local_80 = (long *)0x0;
      local_58 = (char *)0x2000;
      FUN_0274934c(&local_e8,local_f0,&local_98,&local_60,param_2 & 1);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_70[0] = 1;
      local_58 = "InitializeNplnManager";
      local_50 = 0x15;
      local_48 = (long *)0x0;
      local_68 = 0x2000;
      local_60 = &DAT_b70d18694d5eebde;
      local_98 = (long *)*param_3;
      local_90 = (char *)param_3[1];
      local_88 = param_3[2];
      local_80 = (long *)param_3[3];
      local_78 = *(undefined4 *)(param_3 + 4);
      FUN_0274b838(&local_e0,local_e8,&local_60,local_70,&local_98,0);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      local_188 = 0xc30d97f731a10e1c;
      pcStack_180 = "Commit";
      local_178 = 6;
      uStack_170 = 0;
      FUN_02729bb0(&local_98,local_e0,&local_188);
      local_1a8 = 0xfaf6a7bef755c01f;
      pcStack_1a0 = "Finalize";
      local_198 = 8;
      uStack_190 = 0;
      FUN_02729c74(param_1,local_98,&local_1a8);
      if (local_98 != (long *)0x0) {
        lVar5 = local_98[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
      if (local_e0 != (long *)0x0) {
        lVar5 = local_e0[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_e0 + 0x20))();
        }
      }
      if (local_e8 != (long *)0x0) {
        lVar5 = local_e8[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_e8 + 0x20))();
        }
      }
      if (local_f0 != (long *)0x0) {
        lVar5 = local_f0[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_f0 + 0x20))();
        }
      }
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        lVar5 = local_f8[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_f8 + 0x20))();
        }
      }
      if (local_130 != (long *)0x0) {
        (**(code **)(*local_130 + 0x20))();
      }
      if (local_100 != (long *)0x0) {
        lVar5 = local_100[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
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
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      if (local_108 == (long *)0x0) {
        return;
      }
      lVar5 = local_108[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      goto LAB_02729604;
    }
    local_d8 = 0x575e748b9e7916a3;
    pcStack_d0 = "NoNeedToConnect";
    local_c8 = 0xf;
    local_c0 = (long *)0x0;
    FUN_02729a10(param_1,&local_d8,&DAT_03a7dfc0);
    local_108 = local_c0;
  }
  if (local_108 == (long *)0x0) {
    return;
  }
LAB_02729604:
  (**(code **)(*local_108 + 0x20))();
  return;
}


