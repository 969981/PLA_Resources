/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02946368; name: FUN_02946368
 */


/* WARNING: Removing unreachable block (ram,0x02946438) */
/* WARNING: Removing unreachable block (ram,0x0294643c) */
/* WARNING: Removing unreachable block (ram,0x02946444) */
/* WARNING: Removing unreachable block (ram,0x0294644c) */
/* WARNING: Removing unreachable block (ram,0x02946450) */
/* WARNING: Removing unreachable block (ram,0x029464a4) */
/* WARNING: Removing unreachable block (ram,0x029464a8) */
/* WARNING: Removing unreachable block (ram,0x029464b0) */
/* WARNING: Removing unreachable block (ram,0x029464b8) */
/* WARNING: Removing unreachable block (ram,0x02946d60) */
/* WARNING: Removing unreachable block (ram,0x029464fc) */
/* WARNING: Removing unreachable block (ram,0x02946500) */
/* WARNING: Removing unreachable block (ram,0x02946508) */
/* WARNING: Removing unreachable block (ram,0x02946510) */
/* WARNING: Removing unreachable block (ram,0x02946d70) */
/* WARNING: Removing unreachable block (ram,0x02946554) */
/* WARNING: Removing unreachable block (ram,0x02946558) */
/* WARNING: Removing unreachable block (ram,0x02946560) */
/* WARNING: Removing unreachable block (ram,0x02946568) */
/* WARNING: Removing unreachable block (ram,0x02946d80) */
/* WARNING: Removing unreachable block (ram,0x029465ac) */
/* WARNING: Removing unreachable block (ram,0x029465b0) */
/* WARNING: Removing unreachable block (ram,0x029465b8) */
/* WARNING: Removing unreachable block (ram,0x029465c0) */
/* WARNING: Removing unreachable block (ram,0x02946d90) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02946368(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined4 local_e0;
  uint uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  local_80 = DAT_043ece98;
  local_a8 = DAT_043ece70;
  local_b0 = DAT_043ece68;
  uStack_f0 = *(undefined8 *)(param_1 + 0x1c8);
  local_e8 = *(undefined4 *)(param_3 + 4);
  local_e3 = *(undefined1 *)(param_3 + 0x55);
  local_e4 = *(undefined1 *)(param_3 + 0x54);
  uStack_dc = (uint)*(byte *)(param_1 + 0x130);
  local_d0 = *(undefined8 *)(param_1 + 0x80);
  local_b8 = *(undefined8 *)(param_1 + 0x370);
  local_c0 = *(undefined8 *)(param_1 + 0x390);
  local_58 = *(long **)(param_3 + 0xff0);
  if (local_58 != (long *)0x0) {
    plVar6 = local_58 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78 = DAT_043ecea0;
  local_a0 = DAT_043ece78;
  local_50 = *(long **)(param_3 + 0xff8);
  if (local_50 != (long *)0x0) {
    plVar6 = local_50 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = DAT_043ecea8;
  local_98 = DAT_043ece80;
  local_48 = *(long **)(param_3 + 0x1000);
  if (local_48 != (long *)0x0) {
    plVar6 = local_48 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = DAT_043eceb0;
  local_90 = DAT_043ece88;
  local_40 = *(long **)(param_3 + 0x1008);
  if (local_40 != (long *)0x0) {
    plVar6 = local_40 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_60 = DAT_043eceb8;
  local_88 = DAT_043ece90;
  local_38 = *(long **)(param_3 + 0x1010);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_d8 = 1;
  local_e0 = 0;
  local_100 = (long *)0x0;
  local_108 = (long *)0x0;
  local_110 = (long *)0x0;
  local_118 = (long *)0x0;
  local_120 = (long *)0x0;
  local_128 = (long *)0x0;
  local_130 = (long *)0x0;
  local_138 = (long *)0x0;
  local_140 = (long *)0x0;
  local_148 = (long *)0x0;
  local_150 = (long *)0x0;
  local_f8 = param_2;
  lStack_c8 = param_1;
  FUN_029562c0(&local_f8,&local_150);
  if (local_148 != (long *)0x0) {
    plVar6 = local_148 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x150);
  *(long **)(param_1 + 0x150) = local_148;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_120 != (long *)0x0) {
    plVar6 = local_120 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x178);
  *(long **)(param_1 + 0x178) = local_120;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_140 != (long *)0x0) {
    plVar6 = local_140 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x158);
  *(long **)(param_1 + 0x158) = local_140;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_118 != (long *)0x0) {
    plVar6 = local_118 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x180);
  *(long **)(param_1 + 0x180) = local_118;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_138 != (long *)0x0) {
    plVar6 = local_138 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x160);
  *(long **)(param_1 + 0x160) = local_138;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_110 != (long *)0x0) {
    plVar6 = local_110 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x188);
  *(long **)(param_1 + 0x188) = local_110;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_130 != (long *)0x0) {
    plVar6 = local_130 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x168);
  *(long **)(param_1 + 0x168) = local_130;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_108 != (long *)0x0) {
    plVar6 = local_108 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 400);
  *(long **)(param_1 + 400) = local_108;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_128 != (long *)0x0) {
    plVar6 = local_128 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x170);
  *(long **)(param_1 + 0x170) = local_128;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_100 != (long *)0x0) {
    plVar6 = local_100 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x198);
  *(long **)(param_1 + 0x198) = local_100;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_150 != (long *)0x0) {
    plVar6 = local_150 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x140);
  *(long **)(param_1 + 0x140) = local_150;
  if (plVar6 == (long *)0x0) {
LAB_02946890:
    if (*(long *)(param_1 + 0x150) == 0) goto LAB_0294693c;
LAB_02946898:
    iVar5 = *(int *)(param_1 + 0x110);
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        if ((*(byte *)(param_1 + 0x130) < 5) &&
           ((&DAT_03a7ebe5)[*(byte *)(param_1 + 0x130)] == '\0')) goto LAB_029468ec;
      }
      else if (iVar5 == 0) goto LAB_029468b0;
      goto LAB_0294693c;
    }
LAB_029468b0:
    if ((4 < *(byte *)(param_1 + 0x130)) || ((&DAT_03a7ebe0)[*(byte *)(param_1 + 0x130)] != '\0'))
    goto LAB_0294693c;
LAB_029468ec:
    lVar8 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    if (*(byte *)(lVar8 + 0x38) < 2) {
      *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
           *(undefined2 *)(*(long *)(lVar8 + 8) + 0x70);
      goto LAB_0294693c;
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
         *(undefined2 *)(*(long *)(lVar8 + 8) + 0x70);
    if (lVar9 == 0) goto LAB_0294693c;
    *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f6) = *(undefined2 *)(lVar9 + 0x70);
    if (*(long *)(param_1 + 0x158) != 0) goto LAB_02946944;
LAB_029469e4:
    if (*(long *)(param_1 + 0x160) == 0) goto LAB_02946a98;
LAB_029469ec:
    iVar5 = *(int *)(param_1 + 0x110);
    bVar2 = *(byte *)(param_1 + 0x130);
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        if (bVar2 < 5) {
          bVar7 = 0;
          puVar10 = &DAT_03a7ebe5;
          goto LAB_02946a34;
        }
      }
      else if (iVar5 == 0) goto LAB_02946a08;
      goto LAB_02946a98;
    }
LAB_02946a08:
    if (4 < bVar2) goto LAB_02946a98;
    bVar7 = 2;
    puVar10 = &DAT_03a7ebe0;
LAB_02946a34:
    if ((1 < (byte)puVar10[bVar2]) || (puVar10[bVar2] != bVar7)) goto LAB_02946a98;
    lVar8 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    if (*(byte *)(lVar8 + 0xa8) < 2) {
      *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
           *(undefined2 *)(*(long *)(lVar8 + 0x78) + 0x70);
      goto LAB_02946a98;
    }
    lVar9 = *(long *)(lVar8 + 0x80);
    *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
         *(undefined2 *)(*(long *)(lVar8 + 0x78) + 0x70);
    if (lVar9 == 0) goto LAB_02946a98;
    *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f6) = *(undefined2 *)(lVar9 + 0x70);
    lVar8 = *(long *)(param_1 + 0x168);
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02946890;
    (**(code **)(*plVar6 + 0x10))();
    if (*(long *)(param_1 + 0x150) != 0) goto LAB_02946898;
LAB_0294693c:
    if (*(long *)(param_1 + 0x158) == 0) goto LAB_029469e4;
LAB_02946944:
    iVar5 = *(int *)(param_1 + 0x110);
    if (iVar5 != 2) {
      if (iVar5 == 1) {
        bVar2 = *(byte *)(param_1 + 0x130);
        if (bVar2 < 5) {
          puVar10 = &DAT_03a7ebe5;
          goto LAB_02946988;
        }
      }
      else if (iVar5 == 0) goto LAB_0294695c;
      goto LAB_029469e4;
    }
LAB_0294695c:
    bVar2 = *(byte *)(param_1 + 0x130);
    if (4 < bVar2) goto LAB_029469e4;
    puVar10 = &DAT_03a7ebe0;
LAB_02946988:
    if (puVar10[bVar2] != '\x01') goto LAB_029469e4;
    lVar8 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    if (*(byte *)(lVar8 + 0x70) < 2) {
      *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
           *(undefined2 *)(*(long *)(lVar8 + 0x40) + 0x70);
      goto LAB_029469e4;
    }
    lVar9 = *(long *)(lVar8 + 0x48);
    *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
         *(undefined2 *)(*(long *)(lVar8 + 0x40) + 0x70);
    if (lVar9 == 0) goto LAB_029469e4;
    *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f6) = *(undefined2 *)(lVar9 + 0x70);
    if (*(long *)(param_1 + 0x160) != 0) goto LAB_029469ec;
LAB_02946a98:
    lVar8 = *(long *)(param_1 + 0x168);
  }
  if (lVar8 == 0) goto joined_r0x02946b50;
  iVar5 = *(int *)(param_1 + 0x110);
  bVar2 = *(byte *)(param_1 + 0x130);
  if (iVar5 == 2) {
LAB_02946abc:
    if (4 < bVar2) goto joined_r0x02946b50;
    bVar7 = 2;
    puVar10 = &DAT_03a7ebe0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 != 0) goto joined_r0x02946b50;
      goto LAB_02946abc;
    }
    if (4 < bVar2) goto joined_r0x02946b50;
    bVar7 = 1;
    puVar10 = &DAT_03a7ebe5;
  }
  if (((byte)puVar10[bVar2] < 2) && (puVar10[bVar2] == bVar7)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x370) + 8);
    if (*(byte *)(lVar8 + 0xe0) < 2) {
      *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
           *(undefined2 *)(*(long *)(lVar8 + 0xb0) + 0x70);
    }
    else {
      lVar9 = *(long *)(lVar8 + 0xb8);
      *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f4) =
           *(undefined2 *)(*(long *)(lVar8 + 0xb0) + 0x70);
      if (lVar9 != 0) {
        *(undefined2 *)(*(long *)(param_1 + 0x58) + 0x12f6) = *(undefined2 *)(lVar9 + 0x70);
      }
    }
  }
joined_r0x02946b50:
  if (local_100 != (long *)0x0) {
    plVar6 = (long *)((long)local_100 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
  }
  if (local_108 != (long *)0x0) {
    plVar6 = (long *)((long)local_108 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  if (local_110 != (long *)0x0) {
    plVar6 = (long *)((long)local_110 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  if (local_118 != (long *)0x0) {
    plVar6 = (long *)((long)local_118 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  if (local_120 != (long *)0x0) {
    plVar6 = (long *)((long)local_120 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_120 + 0x10))();
    }
  }
  if (local_128 != (long *)0x0) {
    plVar6 = (long *)((long)local_128 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_128 + 0x10))();
    }
  }
  if (local_130 != (long *)0x0) {
    plVar6 = (long *)((long)local_130 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_130 + 0x10))();
    }
  }
  if (local_138 != (long *)0x0) {
    plVar6 = (long *)((long)local_138 + 0x50);
    do {
      iVar5 = *(int *)plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*local_138 + 0x10))();
    }
  }
  if (local_140 != (long *)0x0) {
    plVar6 = local_140 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
  if (local_148 != (long *)0x0) {
    plVar6 = local_148 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_148 + 0x10))();
    }
  }
  if (local_150 != (long *)0x0) {
    plVar6 = local_150 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_150 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    plVar6 = local_40 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_48 != (long *)0x0) {
    plVar6 = local_48 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (local_50 != (long *)0x0) {
    plVar6 = local_50 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (local_58 != (long *)0x0) {
    plVar6 = local_58 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  return;
}


