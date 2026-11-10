/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a7418; name: FUN_027a7418
 */


void FUN_027a7418(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  char local_260 [8];
  undefined1 auStack_258 [72];
  char local_210 [8];
  undefined1 auStack_208 [72];
  char local_1c0 [8];
  undefined1 auStack_1b8 [72];
  long local_170;
  undefined8 local_168;
  char *pcStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  char *pcStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  long *local_b8;
  long local_b0 [13];
  long *local_48;
  long *local_40;
  long *local_38;
  
  lVar9 = param_1 + 0x70;
  FUN_027bc6c4(lVar9);
  local_b0[0] = param_1;
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 3:
    if (*(char *)(param_1 + 0x2f8) != '\0') {
      FUN_02727c1c(param_1 + 0x300);
      *(undefined1 *)(param_1 + 0x2f8) = 0;
    }
    bVar5 = FUN_027a7ab4();
    *(byte *)(param_1 + 0x6d) = bVar5 & 1;
    if ((bVar5 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x68) = 4;
    }
    else {
      local_38 = *(long **)(param_1 + 0x238);
      local_40 = *(long **)(param_1 + 0x228);
      local_48 = *(long **)(param_1 + 0x230);
      local_d0 = &LAB_027a8078;
      local_c8 = FUN_027a80a0;
      local_c0 = &LAB_027a80a4;
      local_b8 = (long *)&LAB_027a80b0;
      FUN_027bcb98(lVar9,&local_38,&local_40,&local_48,&local_d0);
      pcVar10 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (long *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar10)(local_b0);
      }
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x6c) == '\0') {
      FUN_027bd1a0(&local_d0,1);
      FUN_02729540(&local_e0,1,&local_d0);
    }
    else {
      FUN_027bd1a0(&local_d0,1);
      FUN_02729d38(&local_e0,1,&local_d0);
    }
    local_100 = 0x7519e79c21344471;
    pcStack_f8 = "WaitTimer";
    local_f0 = 9;
    local_e8 = (long *)0x0;
    FUN_013b00e0(&local_d8,local_e0,&local_100,3000);
    local_120 = 0x65cf9bd33f8da31e;
    pcStack_118 = "SaveNplnUserId";
    local_110 = 0xe;
    uStack_108 = 0;
    local_128 = param_1;
    FUN_027a7b8c(&local_48,local_d8,&local_120,&local_128);
    local_148 = 0x82907e5d5ae21583;
    pcStack_140 = "RecoverNetwork";
    local_138 = 0xe;
    uStack_130 = 0;
    FUN_027a7c5c(&local_40,local_48,&local_148);
    local_168 = 0x9a1b9ce665afc7d1;
    pcStack_160 = "Failure";
    local_158 = 7;
    uStack_150 = 0;
    local_170 = param_1;
    FUN_027a7d20(&local_38,local_40,&local_168,&local_170);
    if (local_40 != (long *)0x0) {
      lVar11 = local_40[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_48 != (long *)0x0) {
      lVar11 = local_48[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (local_d8 != (long *)0x0) {
      lVar11 = local_d8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_d8 + 0x20))();
      }
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      lVar11 = local_e0[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_e0 + 0x20))();
      }
    }
    if (local_38 == (long *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = 10;
    }
    else {
      local_d0 = *(undefined1 **)(param_1 + 0x240);
      FUN_027bcc14(lVar9,&local_d0);
      *(undefined4 *)(param_1 + 0x68) = 2;
      if (local_38 != (long *)0x0) {
        lVar9 = local_38[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
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
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
    break;
  case 5:
    local_38 = *(long **)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x68) = 1;
    local_d0 = &LAB_027b845c;
    local_c8 = (code *)&LAB_027b846c;
    local_b8 = (long *)&LAB_027b847c;
    local_c0 = &LAB_027b8470;
    goto LAB_027a7748;
  case 6:
    nn::os::GetSystemTick();
    uVar6 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x2e8) = uVar6;
    FUN_013aff48(&local_d0,*(undefined8 *)(param_1 + 8));
    plVar8 = *(long **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    if (plVar8 != (long *)0x0) {
      lVar11 = plVar8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(undefined1 **)(param_1 + 0x2e0) = local_d0;
    FUN_0275d420(local_d0,*(undefined8 *)(param_1 + 8),3);
    local_d0 = *(undefined1 **)(param_1 + 0x250);
    FUN_027bcc14(lVar9,&local_d0);
    *(undefined4 *)(param_1 + 0x68) = 7;
    break;
  case 7:
    FUN_0120bd20(param_1 + 0x2e8);
    uVar7 = FUN_0275d460(*(undefined8 *)(param_1 + 0x2e0));
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((double)*(long *)(param_1 + 0x2f0) / 1000000.0 < 3000.0) {
      return;
    }
    plVar8 = *(long **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    if (plVar8 != (long *)0x0) {
      lVar11 = plVar8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 1;
    local_d0 = &LAB_027b8488;
    local_c8 = FUN_027b8498;
    local_c0 = &LAB_027b849c;
    local_b8 = (long *)&LAB_027b84a8;
    FUN_027bceb8(lVar9,&local_d0);
    pcVar10 = local_c8;
    if (local_c8 == (code *)0x0) {
      return;
    }
    goto LAB_027a7768;
  case 8:
    FUN_02a4754c(&local_d0,&DAT_0426c1f0);
    FUN_028354b0(&local_d0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_38 = *(long **)(param_1 + 600);
    if (local_38 == (long *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = 9;
      return;
    }
    *(undefined4 *)(param_1 + 0x68) = 1;
    local_d0 = &LAB_027b84b4;
    local_c8 = FUN_027b84c4;
    local_b8 = (long *)&LAB_027b84d4;
    local_c0 = &LAB_027b84c8;
LAB_027a7748:
    FUN_027bc964(lVar9,&local_38,&local_d0);
    pcVar10 = local_c8;
    if (local_c8 != (code *)0x0) {
LAB_027a7768:
      local_c0 = (undefined1 *)0x0;
      local_b8 = (long *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar10)(local_b0);
    }
    break;
  case 9:
    if (*(long *)(param_1 + 0x260) != 0) {
      local_1c0[0] = '\0';
      FUN_027a7df0(param_1 + 0x260,0,local_1c0);
      if (local_1c0[0] != '\0') {
        FUN_02727c1c(auStack_1b8);
      }
    }
    goto LAB_027a79c4;
  case 10:
    if (*(long *)(param_1 + 0x260) != 0) {
      FUN_027a7f34(local_210,param_1 + 0x2f8);
      FUN_027a7df0(param_1 + 0x260,1,local_210);
      if (local_210[0] != '\0') {
        FUN_02727c1c(auStack_208);
      }
    }
    goto LAB_027a79c4;
  case 0xb:
    if (*(long *)(param_1 + 0x260) != 0) {
      local_260[0] = '\0';
      FUN_027a7df0(param_1 + 0x260,2,local_260);
      if (local_260[0] != '\0') {
        FUN_02727c1c(auStack_258);
      }
    }
LAB_027a79c4:
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}


