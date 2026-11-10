/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00626364; name: FUN_00626364
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00626364(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  undefined8 uVar24;
  long local_1678;
  ulong local_1630;
  int local_1620 [2];
  ulong local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  long *plStack_1600;
  char local_15f8;
  undefined8 *local_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  long local_15d8;
  undefined8 local_15d0;
  long *local_15c8;
  undefined *local_15c0;
  long *local_15b8;
  undefined4 local_15b0 [2];
  ulong local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  long *plStack_1590;
  char local_1588;
  long *local_1580;
  long local_1578;
  undefined8 uStack_1570;
  long local_1568;
  undefined8 local_1560;
  long *local_1558;
  long local_1550;
  ulong uStack_1548;
  char local_1540;
  undefined8 local_1538;
  long lStack_1530;
  long local_1528;
  undefined8 local_1520;
  long *local_1518;
  undefined8 local_1510;
  long *local_1508;
  undefined8 local_1500;
  long *local_14f8;
  undefined4 local_14f0 [2];
  ulong local_14e8;
  undefined8 uStack_14e0;
  undefined8 local_14d8;
  long *plStack_14d0;
  char local_14c8;
  long *local_14c0;
  long local_14b8;
  undefined8 uStack_14b0;
  long local_14a8;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  uint local_1480;
  uint local_147c [623];
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined1 auStack_aa8 [8];
  long *local_aa0;
  undefined1 auStack_a98 [32];
  long *local_a78;
  long *local_a70;
  byte *local_a40;
  long *local_a38;
  undefined *local_d8;
  long *local_d0;
  undefined8 *******local_c8;
  undefined8 *******local_c0;
  undefined1 auStack_b0 [64];
  long **local_70;
  undefined8 uStack_68;
  
  lVar23 = *(long *)(param_1 + 0x1c8);
  local_1538 = *(undefined8 *)(param_1 + 200);
  lStack_1530 = *(long *)(param_1 + 0xd0);
  if (lStack_1530 == 0) {
    FUN_0061dd8c(local_1620,param_1 + 0xd8,&local_1538,param_1 + 0x118);
  }
  else {
    plVar2 = (long *)(lStack_1530 + 0x10);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = *plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    FUN_0061dd8c(local_1620,param_1 + 0xd8,&local_1538,param_1 + 0x118);
    std::__shared_weak_count::__release_weak();
  }
  if ((local_1620[0] == 0x10) || (local_1620[0] == 0xe)) {
    local_1560 = *(undefined8 *)(param_1 + 0xd8);
    local_1558 = *(long **)(param_1 + 0xe0);
    local_15c8 = (long *)0x0;
    local_15d0 = local_1560;
    if (local_1558 != (long *)0x0) {
      plVar2 = local_1558 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = *plVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_15d0 = *(undefined8 *)(param_1 + 0xd8);
      local_15c8 = *(long **)(param_1 + 0xe0);
    }
    local_1540 = '\x01';
    uStack_1548 = _UNK_03888de8;
    local_1550 = _DAT_03888de0;
    if (local_15c8 != (long *)0x0) {
      plVar2 = local_15c8 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = *plVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    lVar20 = param_1 + 0x1a8;
    local_15c0 = *(undefined **)(param_1 + 200);
    local_15b8 = *(long **)(param_1 + 0xd0);
    if (local_15b8 != (long *)0x0) {
      plVar2 = local_15b8 + 2;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = *plVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    FUN_00617a0c(&local_14a0);
    FUN_00617a90(&local_14a0);
    local_1678 = std::chrono::steady_clock::now();
    uStack_1498 = _UNK_03889bc8;
    local_14a0 = _DAT_03889bc0;
    uStack_1488 = _UNK_03889188;
    uStack_1490 = _DAT_03889180;
    FUN_00617a0c(auStack_aa8);
    local_1480 = FUN_00617a90(auStack_aa8);
    lVar18 = -0x26e;
    iVar21 = 1;
    puVar17 = local_147c + 1;
    uVar22 = local_1480;
    while( true ) {
      iVar10 = (int)lVar18;
      uVar22 = iVar10 + (uVar22 ^ uVar22 >> 0x1e) * 0x6c078965 + 0x26f;
      puVar17[-1] = uVar22;
      if (lVar18 == 0) break;
      iVar1 = iVar21 + 1;
      iVar21 = iVar21 + 2;
      iVar6 = (uVar22 ^ uVar22 >> 0x1e) * 0x6c078965;
      lVar18 = lVar18 + 2;
      uVar22 = iVar6 + iVar1;
      *puVar17 = iVar10 + iVar6 + 0x270;
      puVar17 = puVar17 + 2;
    }
    local_1630 = 1;
    uStack_ab8 = 0;
    local_ac0 = 0;
    puVar3 = PTR_DAT_04373168 + 0x10;
    plVar2 = (long *)(PTR_DAT_04373170 + 0x10);
    do {
      uVar24 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 8);
      FUN_006dd558(&local_d8);
      FUN_006dd564(&local_d8,lVar20);
      FUN_006236e4(auStack_aa8,uVar24,param_1 + 0xf8,&local_d8);
      plVar5 = local_a78;
      plVar11 = local_a70;
      pbVar12 = local_a40;
      plVar13 = local_a38;
      if (local_d0 != (long *)0x0) {
        plVar4 = local_d0 + 1;
        do {
          lVar18 = *plVar4;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
          std::__shared_weak_count::__release_weak();
          plVar5 = local_a78;
          plVar11 = local_a70;
          pbVar12 = local_a40;
          plVar13 = local_a38;
        }
      }
      if (plVar13 != (long *)0x0) {
        plVar4 = plVar13 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = *plVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (plVar11 != (long *)0x0) {
        plVar4 = plVar11 + 1;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = *plVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_a78 = plVar5;
      local_a70 = plVar11;
      local_a40 = pbVar12;
      local_a38 = plVar13;
      local_d8 = local_15c0;
      local_d0 = local_15b8;
      if (local_15b8 == (long *)0x0) {
        FUN_0061dd8c(local_14f0,&local_15d0,&local_d8,auStack_aa8);
      }
      else {
        plVar4 = local_15b8 + 2;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = *plVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        FUN_0061dd8c(local_14f0,&local_15d0,&local_d8,auStack_aa8);
        std::__shared_weak_count::__release_weak();
      }
      local_70 = (long **)0x0;
      uStack_68 = 0;
      local_d8 = puVar3;
      local_d0 = plVar2;
      local_c8 = &local_c8;
      local_c0 = &local_c8;
      (**(code **)(*plVar5 + 0x10))(plVar5,auStack_b0);
      local_70 = &local_d0;
      thunk_FUN_00783af0(&local_d8);
      local_d8 = puVar3;
      FUN_00782f18(&local_d0);
      pcVar15 = (char *)(**(code **)(*plVar5 + 0x38))(plVar5);
      uVar14 = local_14d8;
      uVar24 = uStack_14e0;
      uVar16 = local_14e8;
      switch(local_14f0[0]) {
      case 2:
      case 0xd:
      case 0x10:
        if ((1 < local_1630) && ((*pbVar12 & 1) == 0)) {
          local_15b0[0] = local_14f0[0];
          break;
        }
LAB_0062679c:
        if ((*pbVar12 & 1) != 0) {
          local_1678 = std::chrono::steady_clock::now();
          FUN_00619140(&local_14a0);
          local_1630 = 1;
LAB_00626800:
          lVar18 = FUN_006190c8(&local_14a0);
          FUN_00618738(&local_d8,&local_1560);
          FUN_00618534(&local_1500,local_d8);
          if (local_d0 != (long *)0x0) {
            plVar5 = local_d0 + 1;
            do {
              lVar19 = *plVar5;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar9) {
                *plVar5 = lVar19 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
              std::__shared_weak_count::__release_weak();
            }
          }
          local_1520 = *(undefined8 *)(param_1 + 0x1a8);
          local_1518 = *(long **)(param_1 + 0x1b0);
          if (local_1518 != (long *)0x0) {
            plVar5 = local_1518 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar9) {
                *plVar5 = *plVar5 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          local_1510 = local_1500;
          local_1508 = local_14f8;
          if (local_14f8 != (long *)0x0) {
            plVar5 = local_14f8 + 1;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar9) {
                *plVar5 = *plVar5 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          FUN_00617c4c(&local_d8,&local_1520,2);
          if (local_1508 != (long *)0x0) {
            plVar5 = local_1508 + 1;
            do {
              lVar19 = *plVar5;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar9) {
                *plVar5 = lVar19 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*local_1508 + 0x10))(local_1508);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_1518 != (long *)0x0) {
            plVar5 = local_1518 + 1;
            do {
              lVar19 = *plVar5;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar9) {
                *plVar5 = lVar19 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*local_1518 + 0x10))(local_1518);
              std::__shared_weak_count::__release_weak();
            }
          }
          local_1528 = lVar18 * 1000000;
          FUN_00617eb8(&local_1520,&local_d8);
          FUN_006119e0(&local_1528,&local_1520);
          if (local_1518 == (long *)0x0) {
LAB_00626a2c:
            uVar16 = FUN_00783cf4(lVar20);
            if ((uVar16 & 1) != 0) goto LAB_00626a38;
LAB_00626ab4:
            bVar9 = false;
          }
          else {
            plVar5 = local_1518 + 1;
            do {
              lVar18 = *plVar5;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar9) {
                *plVar5 = lVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar18 != 0) goto LAB_00626a2c;
            (**(code **)(*local_1518 + 0x10))(local_1518);
            std::__shared_weak_count::__release_weak();
            uVar16 = FUN_00783cf4(lVar20);
            if ((uVar16 & 1) == 0) goto LAB_00626ab4;
LAB_00626a38:
            local_1598 = local_14d8;
            uStack_15a0 = uStack_14e0;
            local_15a8 = local_14e8;
            local_15b0[0] = local_14f0[0];
            uStack_14e0 = 0;
            local_14d8 = 0;
            local_14e8 = 0;
            plStack_1590 = plStack_14d0;
            local_1588 = '\0';
            if (local_14c8 == '\0') {
              bVar9 = true;
            }
            else {
              local_1580 = local_14c0;
              uStack_1570 = uStack_14b0;
              local_1578 = local_14b8;
              local_1568 = local_14a8;
              if (local_14a8 == 0) {
                local_1580 = &local_1578;
              }
              else {
                *(long **)(local_14b8 + 0x10) = &local_1578;
                local_14a8 = 0;
                local_14b8 = 0;
                local_14c0 = &local_14b8;
              }
              bVar9 = true;
              local_1588 = '\x01';
            }
          }
          FUN_00617d58(&local_d8);
          if (local_14f8 != (long *)0x0) {
            plVar5 = local_14f8 + 1;
            do {
              lVar18 = *plVar5;
              cVar8 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar7) {
                *plVar5 = lVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*local_14f8 + 0x10))(local_14f8);
              std::__shared_weak_count::__release_weak();
            }
          }
          goto joined_r0x00626c68;
        }
        if (uStack_1548 <= local_1630) {
          local_15b0[0] = local_14f0[0];
          break;
        }
        lVar18 = std::chrono::steady_clock::now();
        uVar14 = local_14d8;
        uVar24 = uStack_14e0;
        uVar16 = local_14e8;
        if (lVar18 - local_1678 < local_1550 * 1000000) {
          local_1630 = local_1630 + 1;
          goto LAB_00626800;
        }
        local_15b0[0] = local_14f0[0];
        uStack_14e0 = 0;
        local_14d8 = 0;
        local_14e8 = 0;
        uStack_15a0 = uVar24;
        local_15a8 = uVar16;
        plStack_1590 = plStack_14d0;
        local_1598 = uVar14;
        local_1588 = '\0';
        if (local_14c8 != '\0') {
          local_1568 = local_14a8;
          local_1578 = local_14b8;
          goto joined_r0x00626afc;
        }
        bVar9 = true;
        goto LAB_00626b44;
      default:
        local_15b0[0] = local_14f0[0];
        break;
      case 0xe:
        if (local_1540 != '\0' || *pcVar15 != '\0') goto LAB_0062679c;
        local_15b0[0] = 0xe;
      }
      if (local_14c8 == '\0') {
        local_14d8 = 0;
        uStack_14e0 = 0;
        local_14e8 = 0;
        local_1588 = '\0';
        plStack_1590 = plStack_14d0;
        local_1598 = uVar14;
        uStack_15a0 = uVar24;
        local_15a8 = uVar16;
        bVar9 = true;
      }
      else {
        uStack_15a0 = uStack_14e0;
        local_15a8 = local_14e8;
        local_1598 = local_14d8;
        local_1568 = local_14a8;
joined_r0x00626afc:
        if (local_1568 == 0) {
          local_1580 = &local_1578;
          local_14a8 = local_1568;
        }
        else {
          *(long **)(local_1578 + 0x10) = &local_1578;
          local_14a8 = 0;
          local_14b8 = 0;
          local_1580 = local_14c0;
          local_14c0 = &local_14b8;
        }
        local_14d8 = 0;
        uStack_14e0 = 0;
        local_14e8 = 0;
        bVar9 = true;
        local_1588 = '\x01';
        plStack_1590 = plStack_14d0;
        uStack_1570 = uStack_14b0;
joined_r0x00626c68:
        if (local_14c8 != '\0') {
          FUN_02767254(&local_14c0,local_14b8);
        }
        if ((local_14e8 & 1) != 0) {
          (**(code **)(*plStack_14d0 + 0x18))
                    (plStack_14d0,local_14d8,local_14e8 & 0xfffffffffffffffe,1);
        }
      }
LAB_00626b44:
      if (plVar11 == (long *)0x0) {
LAB_00626b60:
        if (plVar13 == (long *)0x0) goto LAB_00626b7c;
LAB_00626b64:
        plVar5 = plVar13 + 1;
        do {
          lVar18 = *plVar5;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar7) {
            *plVar5 = lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar18 != 0) goto LAB_00626b7c;
        (**(code **)(*plVar13 + 0x10))(plVar13);
        std::__shared_weak_count::__release_weak();
        FUN_0061f3dc(auStack_a98);
      }
      else {
        plVar5 = plVar11 + 1;
        do {
          lVar18 = *plVar5;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar7) {
            *plVar5 = lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar18 != 0) goto LAB_00626b60;
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__shared_weak_count::__release_weak();
        if (plVar13 != (long *)0x0) goto LAB_00626b64;
LAB_00626b7c:
        FUN_0061f3dc(auStack_a98);
      }
      if (local_aa0 != (long *)0x0) {
        plVar5 = local_aa0 + 1;
        do {
          lVar18 = *plVar5;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar7) {
            *plVar5 = lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_aa0 + 0x10))(local_aa0);
          std::__shared_weak_count::__release_weak();
        }
      }
    } while (!bVar9);
                    /* try { // try from 00626c80 to 00626c8b has its CatchHandler @ 00626e34 */
    FUN_0062703c(local_1620,local_15b0);
    if (local_1588 != '\0') {
      FUN_02767254(&local_1580,local_1578);
    }
    if ((local_15a8 & 1) != 0) {
      (**(code **)(*plStack_1590 + 0x18))(plStack_1590,local_1598,local_15a8 & 0xfffffffffffffffe,1)
      ;
    }
    if (local_15b8 != (long *)0x0) {
      std::__shared_weak_count::__release_weak();
    }
    if (local_15c8 != (long *)0x0) {
      plVar2 = local_15c8 + 1;
      do {
        lVar20 = *plVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_15c8 + 0x10))(local_15c8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1558 != (long *)0x0) {
      plVar2 = local_1558 + 1;
      do {
        lVar20 = *plVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar20 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_1558 + 0x10))(local_1558);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::LockMutex((MutexType *)(lVar23 + 0x38));
  *(int *)(lVar23 + 0x58) = local_1620[0];
  *(undefined8 *)(lVar23 + 0x68) = uStack_1610;
  *(ulong *)(lVar23 + 0x60) = local_1618;
  *(long **)(lVar23 + 0x78) = plStack_1600;
  *(undefined8 *)(lVar23 + 0x70) = local_1608;
  local_1618 = 0;
  uStack_1610 = 0;
  local_1608 = 0;
  *(undefined1 *)(lVar23 + 0x80) = 0;
  if (local_15f8 != '\0') {
    *(undefined8 **)(lVar23 + 0x88) = local_15f0;
    *(undefined8 *)(lVar23 + 0x98) = uStack_15e0;
    *(undefined8 *)(lVar23 + 0x90) = local_15e8;
    plVar2 = (long *)(lVar23 + 0x90);
    *(long *)(lVar23 + 0xa0) = local_15d8;
    if (local_15d8 == 0) {
      *(long **)(lVar23 + 0x88) = plVar2;
    }
    else {
      *(long **)(*plVar2 + 0x10) = plVar2;
      local_15f0 = &local_15e8;
      local_15e8 = 0;
      local_15d8 = 0;
    }
    *(undefined1 *)(lVar23 + 0x80) = 1;
  }
  *(undefined1 *)(lVar23 + 0xa8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar23 + 0x38));
  if (local_15f8 != '\0') {
    FUN_02767254(&local_15f0,local_15e8);
  }
  if ((local_1618 & 1) != 0) {
    (**(code **)(*plStack_1600 + 0x18))(plStack_1600,local_1608,local_1618 & 0xfffffffffffffffe,1);
  }
  return 1;
}


