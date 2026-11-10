/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2c08c; name: FUN_00d2c08c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d2c08c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  size_t sVar16;
  code *pcVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  char *pcVar21;
  undefined1 *puVar22;
  long lVar23;
  long *local_118;
  code *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code *local_88;
  long *local_80 [4];
  
  pcVar17 = *(code **)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x148) != 0) {
    return 1;
  }
  local_88 = pcVar17;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar18 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar18,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(code **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = pcVar17;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*(long *)pcVar17 + 0x10))(pcVar17,0x120,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*(long *)pcVar17 + 0xb8))(pcVar17);
  }
  FUN_0283ee34(plVar9,local_88,param_1 + 0x118,*(undefined1 *)(param_1 + 0xf8),
               *(undefined1 *)(param_1 + 0xf9));
  plVar9[1] = (long)pcVar17;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x120;
  plVar9[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar9 != (long *)0x0) {
    plVar13 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar19 = DAT_03a78338;
  uVar14 = DAT_03a78330;
  *(undefined4 *)(param_1 + 0x1a8) = DAT_03a78348;
  uVar5 = DAT_03a78340;
  *(undefined8 *)(param_1 + 0x198) = uVar19;
  *(undefined8 *)(param_1 + 0x1a0) = uVar5;
  *(undefined8 *)(param_1 + 400) = uVar14;
  *(undefined1 *)(param_1 + 0x1ad) = 1;
  FUN_02c3a000(param_1 + 0x160);
  FUN_02c3a2c4(param_1 + 0x160,&DAT_03a848b0);
  *(undefined8 *)(param_1 + 0x220) = 0x438078000000000;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar8 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar8;
  lVar8 = *(long *)(*(long *)(lVar8 + 0x50) + 0x2fa0);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x590) != 0)) {
    local_110 = FUN_00d34c20;
    local_108 = &LAB_00d34e08;
    local_100 = &LAB_00d34e0c;
    local_f8 = &LAB_00d34e10;
    pcVar17 = (code *)plVar9[0x13];
    if (pcVar17 != (code *)0x0) {
      plVar9[0x14] = 0;
      plVar9[0x15] = 0;
      plVar9[0x12] = 0;
      plVar9[0x13] = 0;
      (*pcVar17)(plVar9 + 0x16);
    }
    plVar9[0x13] = (long)local_108;
    plVar9[0x15] = (long)local_f8;
    plVar9[0x14] = (long)local_100;
    plVar9[0x12] = (long)local_110;
  }
  pcVar17 = local_88;
  if (*(int *)(param_1 + 0x108) == 1) {
    puVar18 = &DAT_03a81cc8;
    sVar16 = strlen("BGUI");
    plVar13 = (long *)0x0;
    puVar22 = (undefined1 *)0x38c09a86db6c4a00;
  }
  else if (*(int *)(param_1 + 0x108) == 0) {
    puVar18 = &DAT_03a81ce8;
    sVar16 = strlen("UI");
    plVar13 = (long *)0x0;
    puVar22 = &DAT_121d7307bd58c49b;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    puVar22 = *(undefined1 **)(lVar8 + 200);
    puVar18 = *(undefined **)(lVar8 + 0xd0);
    sVar16 = *(size_t *)(lVar8 + 0xd8);
    plVar13 = *(long **)(lVar8 + 0xe0);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  local_110 = pcVar17;
  plVar10 = (long *)FUN_00d305cc(local_80,pcVar17,&local_110);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10[0x3a] = (long)puVar22;
  plVar10[0x3b] = (long)puVar18;
  plVar10[0x3c] = sVar16;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar11 = (long *)plVar10[0x3d];
  plVar10[0x3d] = (long)plVar13;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  plVar11 = (long *)(param_1 + 0x148);
  plVar12 = plVar10 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *(int *)plVar12 = (int)*plVar12 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_80[0] = plVar10;
  (**(code **)(*plVar9 + 0x28))(plVar9,local_80);
  if (local_80[0] != (long *)0x0) {
    plVar12 = local_80[0] + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_80[0] + 0x10))();
    }
  }
  plVar12 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar12 == (long *)0x0) {
LAB_00d2c354:
    *plVar11 = (long)plVar10;
  }
  else {
    plVar1 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_00d2c354;
    (**(code **)(*plVar12 + 0x10))();
    *plVar11 = (long)plVar10;
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
    plVar10 = (long *)*plVar11;
  }
  lVar8 = plVar10[0x14];
  if (lVar8 != 0) {
    lVar20 = plVar10[0x13];
    if (*(char *)(lVar20 + 0x28) == '\0') {
      plVar13 = *(long **)(*(long *)(lVar20 + 0x20) + 0x60);
      (**(code **)(*plVar13 + 0x18))(plVar13,FUN_02c3bc54);
    }
    if (lVar8 != 1) {
      if (*(char *)(lVar20 + 0x58) == '\0') {
        plVar13 = *(long **)(*(long *)(lVar20 + 0x50) + 0x60);
        (**(code **)(*plVar13 + 0x18))(plVar13,FUN_02c3bc54);
      }
      if (lVar8 != 2) {
        pcVar21 = (char *)(lVar20 + 0x88);
        lVar8 = lVar8 * 0x30 + -0x60;
        do {
          if (*pcVar21 == '\0') {
            (**(code **)(**(long **)(*(long *)(pcVar21 + -8) + 0x60) + 0x18))
                      (*(long **)(*(long *)(pcVar21 + -8) + 0x60),FUN_02c3bc54);
          }
          pcVar21 = pcVar21 + 0x30;
          lVar8 = lVar8 + -0x30;
        } while (lVar8 != 0);
      }
    }
  }
  FUN_0283c5bc(plVar10);
  if (plVar10[0x1f] != 0) {
    lVar8 = plVar10[0x1e];
    lVar20 = lVar8 + plVar10[0x1f] * 0x28;
    do {
      plVar13 = *(long **)(lVar8 + 0x18);
      if (plVar13 == (long *)0x0) {
        plVar10 = *(long **)(lVar8 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_00d2c70c;
LAB_00d2c404:
        lVar23 = plVar10[0xb];
        if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar23 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
          *(undefined8 *)(lVar23 + 0x10) = uVar14;
        }
        piVar2 = (int *)(lVar23 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar23 = plVar10[0xb];
        piVar2 = (int *)(lVar23 + 0xc);
        plVar10[0x4a] = param_1 + 0x150;
        *(undefined1 *)((long)plVar10 + 0x81) = 0;
        do {
          iVar7 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
      else {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        plVar10 = *(long **)(lVar8 + 0x20);
        if (plVar10 != (long *)0x0) goto LAB_00d2c404;
LAB_00d2c70c:
        DAT_00000081 = 0;
        _DAT_00000250 = param_1 + 0x150;
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lVar20);
  }
  plVar13 = plVar9 + 10;
  do {
    iVar7 = (int)*plVar13 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if (*(char *)(param_1 + 0x270) != '\0') goto LAB_00d2c74c;
LAB_00d2c4a0:
    if (*(char *)(param_1 + 0x2b8) == '\0') goto LAB_00d2c4a8;
LAB_00d2c840:
    plVar9 = (long *)FUN_00d34e14(&local_110,local_88,plVar11);
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar13 = *(long **)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = 0;
    if (plVar13 != (long *)0x0) {
      plVar10 = plVar13 + 10;
      do {
        iVar7 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    *(long **)(param_1 + 0x278) = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_118 = plVar9;
    FUN_02833858(&local_110,local_88,local_88,&local_118,param_1 + 0x280);
    plVar9 = *(long **)(param_1 + 0x2b0);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar13 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    pcVar17 = local_110;
    local_110 = (code *)0x0;
    *(code **)(param_1 + 0x2b0) = pcVar17;
    if (local_118 != (long *)0x0) {
      plVar9 = local_118 + 10;
      do {
        iVar7 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_118 + 0x10))();
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x2b0) + 0x62) != '\0') goto LAB_00d2c4a8;
    FUN_028324b0(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x58),0);
    cVar3 = *(char *)(param_1 + 0x270);
  }
  else {
    if (*(char *)(param_1 + 0x270) == '\0') goto LAB_00d2c4a0;
LAB_00d2c74c:
    local_118 = (long *)FUN_00d34e14(&local_110,local_88,plVar11);
    if (local_118 != (long *)0x0) {
      plVar9 = local_118 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x230) = 0;
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar13 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(long **)(param_1 + 0x230) = local_118;
    if (local_118 != (long *)0x0) {
      plVar9 = local_118 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_02833858(&local_110,local_88,local_88,&local_118,param_1 + 0x238);
    plVar9 = *(long **)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x268) = 0;
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar13 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    pcVar17 = local_110;
    local_110 = (code *)0x0;
    *(code **)(param_1 + 0x268) = pcVar17;
    if (local_118 != (long *)0x0) {
      plVar9 = local_118 + 10;
      do {
        iVar7 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_118 + 0x10))();
      }
    }
    if (*(char *)(*(long *)(param_1 + 0x268) + 0x62) != '\0') goto LAB_00d2c4a0;
    FUN_028324b0(*(undefined8 *)(*(long *)(param_1 + 0x268) + 0x58),0);
    if (*(char *)(param_1 + 0x2b8) != '\0') goto LAB_00d2c840;
LAB_00d2c4a8:
    cVar3 = *(char *)(param_1 + 0x270);
  }
  if (cVar3 != '\0') {
    if (*(char *)(param_1 + 0x2b8) == '\0') {
      lVar8 = *(long *)(param_1 + 0x268);
    }
    else {
      FUN_02831644(*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x2b0));
      lVar8 = *(long *)(param_1 + 0x268);
    }
    if (lVar8 != 0) {
      piVar2 = (int *)(lVar8 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9 = *(long **)(param_1 + 0x2c0);
    *(long *)(param_1 + 0x2c0) = lVar8;
    if (plVar9 == (long *)0x0) {
LAB_00d2c4f8:
      lVar8 = *(long *)(param_1 + 0x2c0);
    }
    else {
      plVar13 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar13 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 != 0) goto LAB_00d2c4f8;
      (**(code **)(*plVar9 + 0x10))();
      lVar8 = *(long *)(param_1 + 0x2c0);
    }
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x62) == '\0')) {
      *(undefined1 *)(lVar8 + 0x60) = 0;
      FUN_02831b48(*(undefined8 *)(lVar8 + 0x58),0);
    }
  }
  pcVar6 = local_88;
  FUN_00d2d080(&local_110,local_88,&local_88);
  pcVar17 = local_110;
  local_110 = (code *)0x0;
  lVar8 = *(long *)(param_1 + 0x3b0);
  *(code **)(param_1 + 0x3b0) = pcVar17;
  if (lVar8 != 0) {
    FUN_02bcbe58(local_80,0);
    FUN_00d35130(lVar8 + 0x20);
    plVar9 = *(long **)(param_1 + 0x3b8);
    uVar14 = *(undefined8 *)(param_1 + 0x3c0);
    uVar19 = *(undefined8 *)(param_1 + 0x3c8);
    uVar15 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    lVar20 = tpidr_el0;
    if ((uVar15 & 1) == 0) {
LAB_00d2cad8:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,uVar14,uVar19);
    }
    else {
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar20 + 0x38d480) < 1) goto LAB_00d2cad8;
      FUN_02bcc824(plVar9,lVar8,uVar14,uVar19);
    }
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar20 + 0x38d480) + -1;
    *(int *)(lVar20 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar20 + 0x38d484) = 0;
    }
  }
  *(undefined1 **)(param_1 + 0x3b8) = local_108;
  *(undefined1 **)(param_1 + 0x3c8) = local_f8;
  *(undefined1 **)(param_1 + 0x3c0) = local_100;
  FUN_00d2d080(&local_110,pcVar6,&local_88);
  pcVar17 = local_110;
  local_110 = (code *)0x0;
  lVar8 = *(long *)(param_1 + 0x3d0);
  *(code **)(param_1 + 0x3d0) = pcVar17;
  if (lVar8 == 0) goto LAB_00d2c578;
  FUN_02bcbe58(local_80,0);
  FUN_00d35130(lVar8 + 0x20);
  plVar9 = *(long **)(param_1 + 0x3d8);
  uVar14 = *(undefined8 *)(param_1 + 0x3e0);
  uVar19 = *(undefined8 *)(param_1 + 1000);
  uVar15 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar15 & 1) == 0) {
LAB_00d2cbf0:
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,uVar14,uVar19);
  }
  else {
    lVar20 = tpidr_el0;
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar20 + 0x38d480) < 1) goto LAB_00d2cbf0;
    FUN_02bcc824(plVar9,lVar8,uVar14,uVar19);
  }
  lVar8 = tpidr_el0;
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
LAB_00d2c578:
  *(undefined1 **)(param_1 + 1000) = local_f8;
  *(undefined1 **)(param_1 + 0x3d8) = local_108;
  lVar8 = *(long *)(param_1 + 0x148);
  *(undefined1 **)(param_1 + 0x3e0) = local_100;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (lVar8 != 0) {
      lVar20 = *(long *)(lVar8 + 0xf8);
      if (lVar20 != 0) {
        lVar23 = *(long *)(lVar8 + 0xf0);
        *(undefined1 *)(*(long *)(lVar23 + 0x20) + 0x550) = 0;
        if (lVar20 != 1) {
          lVar20 = lVar20 * 0x28 + -0x28;
          plVar9 = (long *)(lVar23 + 0x48);
          do {
            lVar20 = lVar20 + -0x28;
            *(undefined1 *)(*plVar9 + 0x550) = 0;
            plVar9 = plVar9 + 5;
          } while (lVar20 != 0);
        }
      }
      *(undefined1 *)(lVar8 + 500) = 0;
      if (((*PTR_DAT_0437b228 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b228);
      }
      lVar8 = *(long *)PTR_DAT_0437b230;
      *(long *)PTR_DAT_0437b238 = lVar8;
      *(undefined1 *)(lVar8 + 0x3f9) = 1;
    }
  }
  else if (lVar8 != 0) {
    lVar20 = *(long *)(lVar8 + 0xf8);
    if (lVar20 != 0) {
      lVar23 = *(long *)(lVar8 + 0xf0);
      *(undefined1 *)(*(long *)(lVar23 + 0x20) + 0x550) = 1;
      if (lVar20 != 1) {
        lVar20 = lVar20 * 0x28 + -0x28;
        plVar9 = (long *)(lVar23 + 0x48);
        do {
          lVar20 = lVar20 + -0x28;
          *(undefined1 *)(*plVar9 + 0x550) = 1;
          plVar9 = plVar9 + 5;
        } while (lVar20 != 0);
      }
    }
    *(undefined1 *)(lVar8 + 500) = 1;
    if (((*PTR_DAT_0437b228 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b228);
    }
    lVar8 = *(long *)PTR_DAT_0437b230;
    *(long *)PTR_DAT_0437b238 = lVar8;
    *(undefined1 *)(lVar8 + 0x3f9) = 1;
  }
  return 1;
}


