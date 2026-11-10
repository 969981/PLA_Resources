/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bdcac; name: FUN_027bdcac
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_027bdcac(long *param_1,int param_2,undefined8 *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *local_200;
  long local_1f8;
  char *pcStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  char *pcStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long *local_1b0;
  long local_1a8;
  char *pcStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  long *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_38;
  
  if (((long *)param_1[0xe] == (long *)0x0) ||
     (uVar5 = (**(code **)(*(long *)param_1[0xe] + 0x48))(), (uVar5 & 1) == 0)) {
    if (param_2 == 0) {
      FUN_02728a80(&local_38);
    }
    else {
      FUN_027bd1a0(&local_120,0);
      FUN_02729d38(&local_188,1,&local_120);
      local_60 = 0xa42e60e0b4f4def0;
      pcStack_58 = "LoginRelayServer";
      local_50 = 0x10;
      uStack_48 = 0;
      FUN_027be224(&local_38,local_188,&local_60);
      if (local_188 != (long *)0x0) {
        lVar7 = local_188[0xb];
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
          (**(code **)(*local_188 + 0x20))();
        }
      }
    }
    if (local_38 != (long *)0x0) {
      if (*param_4 != 0) {
        FUN_01124038(*param_4,param_1 + 0xf);
      }
      FUN_027be2b0(param_1);
      plVar6 = (long *)param_1[0x23];
      param_1[0x23] = 0;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[0xb];
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
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      local_b8 = 0x6a7a4963b2fbae1a;
      pcStack_b0 = "Matching";
      local_a8 = 8;
      local_a0 = (long *)0x0;
      local_d8 = *param_3;
      local_d0 = param_3[1];
      local_c8 = param_3[2];
      local_c0 = param_3[3];
      FUN_027be354(&local_98,local_38,&local_b8,&local_d8);
      local_f8 = 0x6a40e65512acacbc;
      pcStack_f0 = "DataExchangeStart";
      local_e8 = 0x11;
      local_e0 = (long *)0x0;
      uStack_118 = *param_3;
      local_110 = param_3[1];
      local_108 = param_3[2];
      local_100 = param_3[3];
      local_120 = param_1;
      FUN_027be3f0(&local_90,local_98,&local_f8,&local_120);
      local_140 = 0x2b8b18cbb17d40cb;
      pcStack_138 = "OnCancelDataExchange";
      local_130 = 0x14;
      uStack_128 = 0;
      FUN_027be48c(&local_88,local_90,&local_140);
      local_160 = 0x3fb1b86d0da82c93;
      pcStack_158 = "OnSuccess";
      local_150 = 9;
      uStack_148 = 0;
      uStack_180 = *param_3;
      local_178 = param_3[1];
      local_170 = param_3[2];
      local_168 = param_3[3];
      local_188 = param_1;
      FUN_027be550(&local_80,local_88,&local_160,&local_188);
      local_1a8 = 0x125c3f6b9088eb02;
      pcStack_1a0 = "OnFailure";
      local_198 = 9;
      uStack_190 = 0;
      local_1b0 = param_1;
      FUN_027be620(&local_78,local_80,&local_1a8,&local_1b0);
      local_1d0 = 0x6cde543bea65a3aa;
      pcStack_1c8 = "OnCancel";
      local_1c0 = 8;
      uStack_1b8 = 0;
      local_1d8 = param_1;
      FUN_027be6f0(&local_70,local_78,&local_1d0,&local_1d8);
      local_1f8 = -0x61f65dfb19d6060d;
      pcStack_1f0 = "Cleanup";
      local_1e8 = 7;
      uStack_1e0 = 0;
      local_200 = param_1;
      FUN_027be7c0(&local_68,local_70,&local_1f8,&local_200);
      plVar6 = (long *)param_1[0xe];
      param_1[0xe] = 0;
      if (plVar6 != (long *)0x0) {
        lVar7 = plVar6[0xb];
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
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      lVar7 = local_68;
      local_68 = 0;
      param_1[0xe] = lVar7;
      if (local_70 != (long *)0x0) {
        lVar7 = local_70[0xb];
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
          (**(code **)(*local_70 + 0x20))();
        }
      }
      if (local_78 != (long *)0x0) {
        lVar7 = *(long *)((long)local_78 + 0x58);
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
          (**(code **)(*local_78 + 0x20))();
        }
      }
      if (local_80 != (long *)0x0) {
        lVar7 = local_80[0xb];
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
          (**(code **)(*local_80 + 0x20))();
        }
      }
      if (local_88 != (long *)0x0) {
        lVar7 = local_88[0xb];
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
          (**(code **)(*local_88 + 0x20))();
        }
      }
      if (local_90 != (long *)0x0) {
        lVar7 = local_90[0xb];
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
          (**(code **)(*local_90 + 0x20))();
        }
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        lVar7 = local_98[0xb];
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
          (**(code **)(*local_98 + 0x20))();
        }
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        lVar7 = local_38[0xb];
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
        if (iVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      return 1;
    }
  }
  return 0;
}


