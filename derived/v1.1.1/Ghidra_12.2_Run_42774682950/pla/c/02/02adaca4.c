/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02adaca4; name: FUN_02adaca4
 */


void FUN_02adaca4(long param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar9 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
  (**(code **)(*plVar9 + 0x28))(plVar9,param_1 + 0x68,3);
  plVar9 = DAT_043ef568;
  if (DAT_043ef568 != (long *)0x0) {
    plVar10 = DAT_043ef568 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + 0x38))();
  plVar10 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
  uVar11 = (**(code **)(*plVar10 + 0x40))(plVar10,2);
  if ((uVar11 & 1) == 0) {
    FUN_02adb74c(param_1 + 0x78,1);
    lVar15 = *(long *)(param_1 + 0x78);
    local_c8 = CONCAT44(local_c8._4_4_,0x22);
    local_60 = (long *)CONCAT44(local_60._4_4_,1);
    FUN_02b76540(lVar15,&local_60,&local_c8);
    iVar1 = *(int *)(lVar15 + 0x40) + 0xc;
    *(int *)(lVar15 + 0x40) = iVar1;
    *(int *)(lVar15 + 0x44) = iVar6;
    local_c8 = (ulong)(uint)(iVar1 * iVar6);
    local_b8 = (ulong)local_b8._4_4_ << 0x20;
    local_c0 = 4;
    local_60 = plVar9;
    lVar13 = FUN_01b34908(&local_80,plVar9[1],&local_60);
    if (lVar13 != 0) {
      piVar2 = (int *)(lVar13 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02bbfe84(lVar13,&local_c8,1,0,0);
    plVar10 = *(long **)(lVar15 + 0x38);
    *(undefined8 *)(lVar15 + 0x38) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar6 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(long *)(lVar15 + 0x38) = lVar13;
    goto LAB_02adb3ac;
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
  uVar11 = (**(code **)(*plVar10 + 0x40))(plVar10,3);
  plVar10 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
  uVar12 = (**(code **)(*plVar10 + 0x40))(plVar10,4);
  lVar13 = param_1 + 0x78;
  if ((uVar11 & 1) == 0) {
    if ((uVar12 & 1) == 0) {
      FUN_02adb74c(lVar13,2);
      lVar15 = *(long *)(param_1 + 0x78);
      local_c8 = CONCAT44(local_c8._4_4_,0x22);
      local_60 = (long *)CONCAT44(local_60._4_4_,1);
      FUN_02b76540(lVar15,&local_60,&local_c8);
      iVar1 = *(int *)(lVar15 + 0x40) + 0xc;
      *(int *)(lVar15 + 0x40) = iVar1;
      *(int *)(lVar15 + 0x44) = iVar6;
      local_c8 = (ulong)(uint)(iVar1 * iVar6);
      local_b8 = (ulong)local_b8._4_4_ << 0x20;
      local_c0 = 4;
      local_60 = plVar9;
      lVar13 = FUN_01b34908(&local_80,plVar9[1],&local_60);
      if (lVar13 != 0) {
        piVar2 = (int *)(lVar13 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_02bbfe84(lVar13,&local_c8,1,0,0);
      plVar10 = *(long **)(lVar15 + 0x38);
      *(undefined8 *)(lVar15 + 0x38) = 0;
      if (plVar10 != (long *)0x0) {
        plVar3 = plVar10 + 10;
        do {
          iVar1 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      *(long *)(lVar15 + 0x38) = lVar13;
      lVar15 = *(long *)(param_1 + 0x78);
      local_c8 = CONCAT44(local_c8._4_4_,0x69);
      local_60 = (long *)CONCAT44(local_60._4_4_,2);
      FUN_02b76540(lVar15 + 0x48,&local_60,&local_c8);
      iVar1 = *(int *)(lVar15 + 0x88) + 4;
      *(int *)(lVar15 + 0x88) = iVar1;
      *(int *)(lVar15 + 0x8c) = iVar6;
      local_c8 = (ulong)(uint)(iVar1 * iVar6);
      local_b8 = local_b8 & 0xffffffff00000000;
      local_c0 = 4;
      local_60 = plVar9;
      lVar13 = FUN_01b34908(&local_80,plVar9[1],&local_60);
      if (lVar13 != 0) {
        piVar2 = (int *)(lVar13 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_02bbfe84(lVar13,&local_c8,1,0,0);
      plVar10 = *(long **)(lVar15 + 0x80);
      *(undefined8 *)(lVar15 + 0x80) = 0;
      if (plVar10 != (long *)0x0) {
        plVar3 = plVar10 + 10;
        do {
          iVar6 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      *(long *)(lVar15 + 0x80) = lVar13;
      goto LAB_02adb3ac;
    }
    FUN_02adb74c(lVar13,3);
    lVar15 = *(long *)(param_1 + 0x78);
    local_c8 = CONCAT44(local_c8._4_4_,0x22);
    local_60 = (long *)CONCAT44(local_60._4_4_,1);
    FUN_02b76540(lVar15,&local_60,&local_c8);
    iVar1 = *(int *)(lVar15 + 0x40) + 0xc;
    *(int *)(lVar15 + 0x40) = iVar1;
    *(int *)(lVar15 + 0x44) = iVar6;
    local_c8 = (ulong)(uint)(iVar1 * iVar6);
    local_b8 = (ulong)local_b8._4_4_ << 0x20;
    local_c0 = 4;
    local_60 = plVar9;
    lVar13 = FUN_01b34908(&local_80,plVar9[1],&local_60);
    if (lVar13 != 0) {
      piVar2 = (int *)(lVar13 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02bbfe84(lVar13,&local_c8,1,0,0);
    plVar10 = *(long **)(lVar15 + 0x38);
    *(undefined8 *)(lVar15 + 0x38) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar1 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(long *)(lVar15 + 0x38) = lVar13;
    lVar15 = *(long *)(param_1 + 0x78);
    local_60 = (long *)CONCAT44(local_60._4_4_,2);
    local_c8 = CONCAT44(local_c8._4_4_,0x69);
    FUN_02b76540(lVar15 + 0x48,&local_60,&local_c8);
    iVar1 = *(int *)(lVar15 + 0x88) + 4;
    *(int *)(lVar15 + 0x88) = iVar1;
    *(int *)(lVar15 + 0x8c) = iVar6;
    local_c8 = (ulong)(uint)(iVar1 * iVar6);
    local_b8 = local_b8 & 0xffffffff00000000;
    local_c0 = 4;
    local_60 = plVar9;
    lVar13 = FUN_01b34908(&local_80,plVar9[1],&local_60);
    if (lVar13 != 0) {
      piVar2 = (int *)(lVar13 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02bbfe84(lVar13,&local_c8,1,0,0);
    plVar10 = *(long **)(lVar15 + 0x80);
    *(undefined8 *)(lVar15 + 0x80) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar1 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(long *)(lVar15 + 0x80) = lVar13;
    lVar13 = *(long *)(param_1 + 0x78);
    local_c8 = CONCAT44(local_c8._4_4_,0x69);
    local_60 = (long *)CONCAT44(local_60._4_4_,4);
    FUN_02b76540(lVar13 + 0x90,&local_60,&local_c8);
    iVar1 = *(int *)(lVar13 + 0xd0) + 4;
    *(int *)(lVar13 + 0xd0) = iVar1;
    *(int *)(lVar13 + 0xd4) = iVar6;
    local_c8 = (ulong)(uint)(iVar1 * iVar6);
    local_b8 = local_b8 & 0xffffffff00000000;
    local_60 = plVar9;
    local_c0 = 4;
    lVar15 = FUN_01b34908(&local_80,plVar9[1],&local_60);
    if (lVar15 != 0) {
      piVar2 = (int *)(lVar15 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02bbfe84(lVar15,&local_c8,1,0,0);
    plVar10 = *(long **)(lVar13 + 200);
    *(undefined8 *)(lVar13 + 200) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar6 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto joined_r0x02adb238;
    }
  }
  else {
    FUN_02adb74c(lVar13,3);
    lVar15 = *(long *)(param_1 + 0x78);
    local_c8 = CONCAT44(local_c8._4_4_,0x22);
    local_60 = (long *)CONCAT44(local_60._4_4_,1);
    FUN_02b76540(lVar15,&local_60,&local_c8);
    iVar1 = *(int *)(lVar15 + 0x40) + 0xc;
    *(int *)(lVar15 + 0x40) = iVar1;
    *(int *)(lVar15 + 0x44) = iVar6;
    local_c8 = (ulong)(uint)(iVar1 * iVar6);
    local_b8 = (ulong)local_b8._4_4_ << 0x20;
    local_c0 = 4;
    local_60 = plVar9;
    lVar13 = FUN_01b34908(&local_80,plVar9[1],&local_60);
    if (lVar13 != 0) {
      piVar2 = (int *)(lVar13 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02bbfe84(lVar13,&local_c8,1,0,0);
    plVar10 = *(long **)(lVar15 + 0x38);
    *(undefined8 *)(lVar15 + 0x38) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar1 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(long *)(lVar15 + 0x38) = lVar13;
    lVar15 = *(long *)(param_1 + 0x78);
    local_60 = (long *)CONCAT44(local_60._4_4_,2);
    local_c8 = CONCAT44(local_c8._4_4_,0x69);
    FUN_02b76540(lVar15 + 0x48,&local_60,&local_c8);
    iVar1 = *(int *)(lVar15 + 0x88) + 4;
    *(int *)(lVar15 + 0x88) = iVar1;
    *(int *)(lVar15 + 0x8c) = iVar6;
    local_c8 = (ulong)(uint)(iVar1 * iVar6);
    local_b8 = local_b8 & 0xffffffff00000000;
    local_c0 = 4;
    local_60 = plVar9;
    lVar13 = FUN_01b34908(&local_80,plVar9[1],&local_60);
    if (lVar13 != 0) {
      piVar2 = (int *)(lVar13 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02bbfe84(lVar13,&local_c8,1,0,0);
    plVar10 = *(long **)(lVar15 + 0x80);
    *(undefined8 *)(lVar15 + 0x80) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar1 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(long *)(lVar15 + 0x80) = lVar13;
    lVar13 = *(long *)(param_1 + 0x78);
    local_c8 = CONCAT44(local_c8._4_4_,0x69);
    local_60 = (long *)CONCAT44(local_60._4_4_,4);
    FUN_02b76540(lVar13 + 0x90,&local_60,&local_c8);
    iVar1 = *(int *)(lVar13 + 0xd0) + 4;
    *(int *)(lVar13 + 0xd0) = iVar1;
    *(int *)(lVar13 + 0xd4) = iVar6;
    local_c8 = (ulong)(uint)(iVar1 * iVar6);
    local_b8 = local_b8 & 0xffffffff00000000;
    local_60 = plVar9;
    local_c0 = 4;
    lVar15 = FUN_01b34908(&local_80,plVar9[1],&local_60);
    if (lVar15 != 0) {
      piVar2 = (int *)(lVar15 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02bbfe84(lVar15,&local_c8,1,0,0);
    plVar10 = *(long **)(lVar13 + 200);
    *(undefined8 *)(lVar13 + 200) = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar6 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
joined_r0x02adb238:
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
  *(long *)(lVar13 + 200) = lVar15;
LAB_02adb3ac:
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  local_60 = (long *)0xa7f8b17bb810435d;
  pcStack_58 = "EnableNormal";
  local_50 = 0xc;
  local_48 = (long *)0x0;
  plVar10 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
  uVar7 = (**(code **)(*plVar10 + 0x40))(plVar10,2);
  FUN_02b62580(uVar14,&local_60,uVar7 & 1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  local_80 = 0x8e2cad611d4dbaa7;
  pcStack_78 = "EnableTangent";
  local_70 = 0xd;
  local_68 = (long *)0x0;
  plVar10 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
  uVar7 = (**(code **)(*plVar10 + 0x40))(plVar10,4);
  FUN_02b62580(uVar14,&local_80,uVar7 & 1);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  local_a0 = 0xef9f2572fe73cee0;
  pcStack_98 = "EnableBinormal";
  local_90 = 0xe;
  local_88 = (long *)0x0;
  plVar10 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
  uVar7 = (**(code **)(*plVar10 + 0x40))(plVar10,3);
  FUN_02b62580(uVar14,&local_a0,uVar7 & 1);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar11 = FUN_02b62410(*(undefined8 *)(param_1 + 0xb8));
  if ((uVar11 & 1) != 0) {
    lVar13 = *(long *)(param_1 + 0xb8);
    lVar15 = *(long *)(param_1 + 0x68);
    local_c8 = local_c8 & 0xffffffffffffff00;
    if (*(char *)(lVar13 + 0x118) != '\0') {
      local_c0 = *(undefined8 *)(lVar13 + 0x120);
      local_b8 = *(ulong *)(lVar13 + 0x128);
      local_b0 = *(undefined8 *)(lVar13 + 0x130);
      local_a8 = *(long **)(lVar13 + 0x138);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x18))();
      }
      local_c8 = CONCAT71(local_c8._1_7_,1);
    }
    FUN_02ba7ba0(*(undefined8 *)(lVar15 + 0x60),1,&local_c8);
    if ((char)local_c8 != '\0') {
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_c8 = local_c8 & 0xffffffffffffff00;
    }
  }
  plVar10 = plVar9 + 10;
  do {
    iVar6 = (int)*plVar10 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *(int *)plVar10 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  lVar13 = *(long *)(param_1 + 0x78);
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60);
  if ((int)((ulong)(*(long *)(param_1 + 0x80) - lVar13) >> 3) * 0x38e38e39 != 0) {
    uVar11 = 0;
    lVar15 = 0x38;
    do {
      FUN_02ba88a8(uVar14,uVar11 & 0xffffffff,lVar13 + lVar15);
      lVar13 = *(long *)(param_1 + 0x78);
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60);
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 0x48;
    } while (uVar11 < (uint)((int)((ulong)(*(long *)(param_1 + 0x80) - lVar13) >> 3) * 0x38e38e39));
  }
  FUN_02ba918c(uVar14,param_1 + 0x70,1);
  lVar13 = *(long *)(param_1 + 0x68);
  uVar8 = (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + 0x38))();
  FUN_02ba9aa4(*(undefined8 *)(lVar13 + 0x60),uVar8,0,0,0,0);
  plVar9 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x02adb620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x48))(plVar9,(long *)(param_1 + 0x78),2);
  return;
}


