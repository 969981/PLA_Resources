/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d66128; name: FUN_00d66128
 */


void FUN_00d66128(long param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 local_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  plVar18 = *(long **)(param_1 + 0x2c8);
  if (plVar18 != (long *)0x0) {
    plVar10 = plVar18 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  uVar5 = *param_2;
  uVar6 = param_2[1];
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x5b8) = uVar6;
  *(undefined8 *)(param_1 + 0x5b0) = uVar5;
  lVar14 = param_2[3];
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x50);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x5c8);
  *(long *)(param_1 + 0x5c8) = lVar14;
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *(int *)plVar11 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x5d0) = param_2[4];
  uVar16 = param_2[7];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  *(undefined8 *)(param_1 + 0x5ed) = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)(param_1 + 0x5e8) = uVar16;
  *(undefined8 *)(param_1 + 0x5e0) = uVar6;
  *(undefined8 *)(param_1 + 0x5d8) = uVar5;
  lVar14 = param_2[9];
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x50);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x5f8);
  *(long *)(param_1 + 0x5f8) = lVar14;
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *(int *)plVar11 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x600) = param_2[10];
  *(undefined8 *)(param_1 + 0x608) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x610) = param_2[0xc];
  plVar10 = (long *)param_2[0xd];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar11 = *(long **)(param_1 + 0x618);
  *(long **)(param_1 + 0x618) = plVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0xe);
  local_70 = (undefined1 *)0xc0b802cc3afa6c58;
  pcStack_68 = "pane_L_cursor_00";
  local_60 = 0x10;
  local_58 = (long *)0x0;
  lVar14 = param_1 + 0x180;
  FUN_0283b11c(plVar18,&local_70,1 < *(ushort *)(param_1 + 0x5b6));
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = (undefined1 *)0xc0b803cc3afa6e0b;
  pcStack_68 = "pane_L_cursor_01";
  local_60 = 0x10;
  local_58 = (long *)0x0;
  FUN_0283b11c(plVar18,&local_70,1 < *(ushort *)(param_1 + 0x5b6));
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = (undefined1 *)0x3ac4740992e97e9c;
  pcStack_68 = "anime_switch";
  local_60 = 0xc;
  local_58 = (long *)0x0;
  puVar2 = (uint *)(param_1 + 0x5b0);
  FUN_00d2e2d0(lVar14,&local_70);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
  }
  FUN_00d2e4b8((float)(int)*puVar2,lVar14,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(uint *)(param_1 + 0x62c) = (uint)*(ushort *)(param_1 + 0x5b4);
  FUN_00d66a38(param_1);
  lVar19 = *(long *)(param_1 + 0x5e8);
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if (lVar19 != *(long *)PTR_DAT_0437a0d8) {
    if (*puVar2 == 0) {
      lVar19 = *(long *)(param_1 + 0x5e8);
      local_70 = (undefined1 *)0x1e5916d145eb869b;
      pcStack_68 = "pane_T_key_guide_01";
      local_60 = 0x13;
      local_58 = (long *)0x0;
      plVar10 = *(long **)(param_1 + 0x2c8);
      if (plVar10 != (long *)0x0) {
        plVar11 = plVar10 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar8) {
            *(int *)plVar11 = (int)*plVar11 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar12 = *(long *)(param_1 + 0x5c8);
      plVar11 = (long *)plVar10[0x38];
      if (plVar11 == (long *)0x0) {
        lVar17 = *(long *)(lVar12 + 0xb0);
        if (lVar17 != 0) {
          plVar11 = *(long **)(lVar17 + 0x270);
          if (plVar11 != *(long **)(lVar17 + 0x278)) {
            iVar9 = 0;
            do {
              plVar4 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar4 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar4 == lVar19) goto LAB_00d669b4;
              plVar11 = plVar11 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar17 + 0x278) != plVar11);
          }
        }
        iVar9 = 0;
LAB_00d669b4:
        FUN_02c2e33c(lVar12,iVar9,0);
      }
      else {
        plVar4 = plVar11 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = (int)*plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar17 = *(long *)(lVar12 + 0xb0);
        if (lVar17 != 0) {
          plVar15 = *(long **)(lVar17 + 0x270);
          if (plVar15 != *(long **)(lVar17 + 0x278)) {
            iVar9 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar15 != 0) {
                plVar3 = (long *)(*plVar15 + 0x58);
              }
              if (*plVar3 == lVar19) goto LAB_00d6646c;
              plVar15 = plVar15 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar17 + 0x278) != plVar15);
          }
        }
        iVar9 = 0;
LAB_00d6646c:
        FUN_02c2e33c(lVar12,iVar9,plVar11);
        do {
          iVar9 = (int)*plVar4 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      lVar19 = plVar10[0x38];
      lVar12 = plVar10[0x39];
      lVar17 = plVar10[0x37];
      *(undefined4 *)(lVar17 + 0x124) = 0;
      *(undefined2 *)(lVar17 + 0x128) = 0;
      *(undefined4 *)(lVar17 + 300) = 0;
      *(undefined4 *)(lVar17 + 0x134) = 0;
      FUN_02c33414(lVar17,lVar19);
      if (*(char *)(lVar12 + 0x7c) != '\0') {
        **(undefined2 **)(lVar12 + 0x58) = 0;
        *(undefined2 *)(lVar12 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar17,lVar12,lVar19,0,0);
      FUN_0283ce7c(plVar10,&local_70,plVar10[0x39],10);
      plVar11 = plVar10 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *(int *)plVar11 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_70 = (undefined1 *)0xaa9746b0d29093b6;
      pcStack_68 = "pane_A_alignment_00";
    }
    else {
      if (*puVar2 == 2) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      lVar19 = *(long *)(param_1 + 0x5e8);
      local_70 = (undefined1 *)0x1e5915d145eb84e8;
      pcStack_68 = "pane_T_key_guide_00";
      local_60 = 0x13;
      local_58 = (long *)0x0;
      plVar10 = *(long **)(param_1 + 0x2c8);
      if (plVar10 != (long *)0x0) {
        plVar11 = plVar10 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar8) {
            *(int *)plVar11 = (int)*plVar11 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar12 = *(long *)(param_1 + 0x5c8);
      plVar11 = (long *)plVar10[0x38];
      if (plVar11 == (long *)0x0) {
        lVar17 = *(long *)(lVar12 + 0xb0);
        if (lVar17 != 0) {
          plVar11 = *(long **)(lVar17 + 0x270);
          if (plVar11 != *(long **)(lVar17 + 0x278)) {
            iVar9 = 0;
            do {
              plVar4 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar4 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar4 == lVar19) goto LAB_00d66a14;
              plVar11 = plVar11 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar17 + 0x278) != plVar11);
          }
        }
        iVar9 = 0;
LAB_00d66a14:
        FUN_02c2e33c(lVar12,iVar9,0);
      }
      else {
        plVar4 = plVar11 + 10;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = (int)*plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar17 = *(long *)(lVar12 + 0xb0);
        if (lVar17 != 0) {
          plVar15 = *(long **)(lVar17 + 0x270);
          if (plVar15 != *(long **)(lVar17 + 0x278)) {
            iVar9 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar15 != 0) {
                plVar3 = (long *)(*plVar15 + 0x58);
              }
              if (*plVar3 == lVar19) goto LAB_00d667b4;
              plVar15 = plVar15 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar17 + 0x278) != plVar15);
          }
        }
        iVar9 = 0;
LAB_00d667b4:
        FUN_02c2e33c(lVar12,iVar9,plVar11);
        do {
          iVar9 = (int)*plVar4 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      lVar19 = plVar10[0x38];
      lVar12 = plVar10[0x39];
      lVar17 = plVar10[0x37];
      *(undefined4 *)(lVar17 + 0x124) = 0;
      *(undefined2 *)(lVar17 + 0x128) = 0;
      *(undefined4 *)(lVar17 + 300) = 0;
      *(undefined4 *)(lVar17 + 0x134) = 0;
      FUN_02c33414(lVar17,lVar19);
      if (*(char *)(lVar12 + 0x7c) != '\0') {
        **(undefined2 **)(lVar12 + 0x58) = 0;
        *(undefined2 *)(lVar12 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar17,lVar12,lVar19,0,0);
      FUN_0283ce7c(plVar10,&local_70,plVar10[0x39],10);
      plVar11 = plVar10 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *(int *)plVar11 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_70 = &DAT_aa9747b0d2909569;
      pcStack_68 = "pane_A_alignment_01";
    }
    local_60 = 0x13;
    local_58 = (long *)0x0;
    FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_70);
    FUN_00256608();
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  uVar13 = *puVar2;
  if ((uVar13 != 0) && (uVar13 != 2)) {
    *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x62c) * *(int *)(param_1 + 0x5b8);
    FUN_00d66dcc(param_1);
    uVar13 = *(uint *)(param_1 + 0x5b0);
  }
  if ((uVar13 & 0xfffffffe) != 2) {
    FUN_00d428b0(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x634) = 0;
  local_70 = (undefined1 *)0xaa9745b0d2909203;
  pcStack_68 = "pane_A_alignment_03";
  local_60 = 0x13;
  local_58 = (long *)0x0;
  FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_70);
  FUN_00256608();
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_78 = 0x4487000000000000;
  local_70 = (undefined1 *)0x80a8e808288e407;
  pcStack_68 = "pane_all";
  local_60 = 8;
  local_58 = (long *)0x0;
  FUN_0283ab3c(plVar18,&local_70,&local_78);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = (undefined1 *)0xbf2bb2531b7cde14;
  pcStack_68 = "anime_out";
  local_60 = 9;
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
  }
  local_70 = (undefined1 *)0xbf2bb2531b7cde14;
  pcStack_68 = "anime_out";
  local_60 = 9;
  local_58 = (long *)0x0;
  FUN_00d2e4b8(0,lVar14,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_00d42690(param_1,1,1);
  *(undefined4 *)(param_1 + 0x628) = 0;
  if (plVar18 != (long *)0x0) {
    plVar10 = plVar18 + 10;
    do {
      iVar9 = (int)*plVar10 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *(int *)plVar10 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  return;
}


