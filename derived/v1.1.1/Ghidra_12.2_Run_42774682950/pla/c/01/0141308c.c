/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141308c; name: FUN_0141308c
 */


void FUN_0141308c(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  long *plVar25;
  ulong uVar26;
  uint *puVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  int iVar31;
  short *psVar32;
  long *plVar33;
  undefined4 uVar34;
  long local_518;
  char *pcStack_510;
  undefined8 local_508;
  long *local_500;
  long *local_4f8;
  long *local_4f0;
  long *local_4e8;
  long *local_4e0;
  long *local_4d8;
  long *local_4d0;
  long *local_4c8;
  long *local_4c0;
  long *local_4b8;
  long *local_4b0;
  long *local_4a8;
  undefined1 *local_4a0;
  char *pcStack_498;
  undefined8 local_490;
  long *local_488;
  long *local_a0;
  long *local_98;
  undefined1 **local_90;
  char *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  local_4a0 = &DAT_304928236d5bcabe;
  pcStack_498 = "common/pokedex.dat";
  local_490 = 0x12;
  local_488 = (long *)0x0;
  FUN_00d37bb4(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_4a0,10);
  plVar30 = (long *)local_98[0xd];
  if (plVar30 != (long *)0x0) {
    plVar25 = plVar30 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (local_98 != (long *)0x0) {
    lVar22 = local_98[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_488 != (long *)0x0) {
    (**(code **)(*local_488 + 0x20))();
  }
  local_4a0 = (undefined1 *)0x68ebf6b5d08185b8;
  pcStack_498 = "common/report.dat";
  local_490 = 0x11;
  local_488 = (long *)0x0;
  FUN_00d37bb4(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_4a0,10);
  plVar25 = (long *)local_98[0xd];
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (local_98 != (long *)0x0) {
    lVar22 = local_98[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_488 != (long *)0x0) {
    (**(code **)(*local_488 + 0x20))();
  }
  plVar23 = *(long **)(param_1 + 0x2c8);
  if (plVar23 != (long *)0x0) {
    plVar2 = plVar23 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar22 = param_1 + 0x180;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379558), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148f20(&local_a0);
  memset(&local_4a0,0,0x400);
  uVar29 = 0;
  plVar2 = plVar30 + 10;
  plVar3 = plVar23 + 10;
  do {
    if (uVar29 == 0) {
      uVar26 = 0;
    }
    else {
      snprintf((char *)&local_4a0,0x400,"pane_N_area_info_%02d",(int)uVar29);
      lVar20 = FUN_01306260(lVar22,&local_4a0);
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x630) + 0xa0) + 8) == '\0') {
        bVar12 = FUN_013e19d0(*(undefined4 *)(&UNK_03a7b7a8 + uVar29 * 4));
      }
      else {
        bVar12 = 0;
      }
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe | bVar12 & 1;
      uVar26 = uVar29 & 0xffffffff;
    }
    iVar19 = (int)uVar26;
    snprintf((char *)&local_4a0,0x400,"pane_T_p_registration_%02d",iVar19);
    if (plVar23 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_4a8 = plVar23;
    local_88 = (char *)strlen((char *)&local_4a0);
    local_98 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_4a0 != 0) {
      local_98 = (long *)&DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_4a0 | 1);
      bVar12 = (byte)local_4a0;
      do {
        local_98 = (long *)(((ulong)local_98 ^ (ulong)bVar12) * 0x100000001b3);
        bVar12 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar12 != 0);
    }
    local_90 = &local_4a0;
    local_80 = (long *)0x0;
    if (plVar30 == (long *)0x0) {
      plVar33 = (long *)0x0;
    }
    else {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar33 = plVar30;
    }
    local_518 = 0x72e8950e2784f081;
    iVar31 = 0;
    lVar20 = -0x389;
    puVar27 = (uint *)((long)local_a0 + 0x134);
    local_4b0 = plVar30;
    do {
      iVar13 = FUN_0112e8d0(uVar26,(int)lVar20 + 0x38a,0);
      if (iVar13 != 0) {
        iVar31 = (*puVar27 & 1) + iVar31;
      }
      bVar11 = lVar20 != -1;
      lVar20 = lVar20 + 1;
      puVar27 = puVar27 + 0x16;
    } while (bVar11);
    FUN_014143b8(&local_4a8,&local_98,&local_4b0,&local_518,iVar31);
    if (plVar33 != (long *)0x0) {
      plVar4 = plVar33 + 10;
      do {
        iVar31 = (int)*plVar4 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *(int *)plVar4 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*plVar33 + 0x10))(plVar33);
      }
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_4a8 != (long *)0x0) {
      plVar33 = local_4a8 + 10;
      do {
        iVar31 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *(int *)plVar33 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*local_4a8 + 0x10))();
      }
    }
    iVar31 = 0;
    bVar12 = 1;
    lVar20 = -0x389;
    psVar32 = (short *)((long)local_a0 + 0x13e);
    do {
      iVar13 = FUN_0112e8d0(uVar26,(int)lVar20 + 0x38a,0);
      if (iVar13 != 0) {
        if (*psVar32 != 0) {
          iVar31 = iVar31 + 1;
        }
        bVar12 = bVar12 & *psVar32 != 0;
      }
      bVar11 = lVar20 != -1;
      lVar20 = lVar20 + 1;
      psVar32 = psVar32 + 0x2c;
    } while (bVar11);
    snprintf((char *)&local_4a0,0x400,"pane_T_p_complete_%02d",iVar19);
    if (plVar23 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_4b8 = plVar23;
    local_88 = (char *)strlen((char *)&local_4a0);
    local_98 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_4a0 != 0) {
      local_98 = (long *)&DAT_cbf29ce484222645;
      pbVar24 = (byte *)((ulong)&local_4a0 | 1);
      bVar5 = (byte)local_4a0;
      do {
        local_98 = (long *)(((ulong)local_98 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (bVar5 != 0);
    }
    local_90 = &local_4a0;
    local_80 = (long *)0x0;
    if (plVar30 == (long *)0x0) {
      plVar33 = (long *)0x0;
    }
    else {
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar33 = plVar30;
    }
    local_518 = 0x72e8950e2784f081;
    local_4c0 = plVar30;
    FUN_014143b8(&local_4b8,&local_98,&local_4c0,&local_518,iVar31);
    if (plVar33 != (long *)0x0) {
      plVar4 = plVar33 + 10;
      do {
        iVar31 = (int)*plVar4 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar11) {
          *(int *)plVar4 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*plVar33 + 0x10))(plVar33);
      }
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_4b8 != (long *)0x0) {
      plVar33 = local_4b8 + 10;
      do {
        iVar31 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *(int *)plVar33 = iVar31;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar31 == 0) {
        (**(code **)(*local_4b8 + 0x10))();
      }
    }
    if (uVar29 != 0) {
      snprintf((char *)&local_4a0,0x400,"pane_N_deco_area%02d_com_00",iVar19);
      lVar20 = FUN_01306260(lVar22,&local_4a0);
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe | bVar12;
    }
    uVar29 = uVar29 + 1;
  } while (uVar29 != 6);
  bVar12 = FUN_0112e818(local_a0,0);
  uVar14 = FUN_01133924(local_a0);
  uVar15 = FUN_0113097c(local_a0);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379558), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar20 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar20;
  if (lVar20 == 0) {
    uVar28 = 0;
    uVar16 = 0;
    uVar29 = 0;
  }
  else {
    plVar33 = *(long **)(lVar20 + 0x228);
    if (plVar33 == (long *)0x0) {
      uVar28 = 0;
      uVar16 = 0;
      uVar29 = 0;
    }
    else {
      lVar20 = plVar33[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_014143a0;
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar21;
      }
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_98 = (long *)0x52daf76250fe632a;
      local_90 = (undefined1 **)0x394c3c0;
      local_88 = (char *)0xb;
      local_80 = (long *)0x0;
      uVar16 = FUN_010f5878(plVar33,&local_98);
      uVar29 = (ulong)uVar16;
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (uVar16 < 10) {
        uVar17 = FUN_013f6c68(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xf00),uVar29);
        uVar18 = FUN_013f6c68(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xf00),uVar16 + 1);
        uVar16 = uVar18 - uVar15;
        if (uVar18 < uVar15 || uVar16 == 0) {
          uVar16 = 0;
          uVar28 = 100;
        }
        else {
          uVar28 = 0;
          if ((uVar17 <= uVar15 && uVar15 - uVar17 != 0) &&
             (uVar7 = uVar18 - uVar17, uVar17 <= uVar18 && uVar7 != 0)) {
            uVar28 = 0;
            if (uVar7 != 0) {
              uVar28 = ((uVar15 - uVar17) * 100) / uVar7;
            }
          }
        }
      }
      else {
        uVar16 = 0;
        uVar29 = 10;
        uVar28 = 100;
      }
      lVar20 = plVar33[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar33 + 0x20))(plVar33);
      }
    }
  }
  local_98 = (long *)0x474c2d3829c41a0d;
  local_90 = (undefined1 **)0x388fade;
  local_88 = (char *)0x10;
  local_80 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    plVar33 = plVar25 + 10;
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_4c8 = plVar25;
  FUN_011845f4(lVar22,&local_98,&local_4c8,&UNK_03a7bbb8 + uVar29 * 8,10);
  if (local_4c8 != (long *)0x0) {
    plVar33 = local_4c8 + 10;
    do {
      iVar19 = (int)*plVar33 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*local_4c8 + 0x10))();
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (long *)0x77914afc28312443;
  local_90 = (undefined1 **)0x38fec4e;
  local_88 = (char *)0x11;
  local_80 = (long *)0x0;
  FUN_00d2e4b8((float)uVar29,lVar22,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (0x1869e < uVar15) {
    uVar15 = 99999;
  }
  if (0x1869e < uVar16) {
    uVar16 = 99999;
  }
  if (plVar23 != (long *)0x0) {
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = (long *)0xdbc2d80a5533c89e;
  local_90 = (undefined1 **)0x38fec60;
  local_88 = (char *)0x14;
  local_80 = (long *)0x0;
  if (plVar30 == (long *)0x0) {
    plVar33 = (long *)0x0;
  }
  else {
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar33 = plVar30;
  }
  local_518 = 0x46e18a07c61ad91f;
  local_4d8 = plVar30;
  local_4d0 = plVar23;
  FUN_0141462c(&local_4d0,&local_98,&local_4d8,&local_518,uVar15);
  if (plVar33 != (long *)0x0) {
    plVar4 = plVar33 + 10;
    do {
      iVar19 = (int)*plVar4 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar11) {
        *(int *)plVar4 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_4d0 != (long *)0x0) {
    plVar33 = local_4d0 + 10;
    do {
      iVar19 = (int)*plVar33 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*local_4d0 + 0x10))();
    }
  }
  if (plVar23 != (long *)0x0) {
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = (long *)0xda31cacca2c91b1c;
  local_90 = (undefined1 **)0x399213e;
  local_88 = (char *)0x14;
  local_80 = (long *)0x0;
  if (plVar30 == (long *)0x0) {
    plVar33 = (long *)0x0;
  }
  else {
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar33 = plVar30;
  }
  local_518 = 0x46e18907c61ad76c;
  local_4e8 = plVar30;
  local_4e0 = plVar23;
  FUN_0141462c(&local_4e0,&local_98,&local_4e8,&local_518,uVar16);
  if (plVar33 != (long *)0x0) {
    plVar4 = plVar33 + 10;
    do {
      iVar19 = (int)*plVar4 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar11) {
        *(int *)plVar4 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_4e0 != (long *)0x0) {
    plVar33 = local_4e0 + 10;
    do {
      iVar19 = (int)*plVar33 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*local_4e0 + 0x10))();
    }
  }
  local_98 = (long *)0x65551cbaec45b094;
  local_90 = (undefined1 **)0x398867c;
  local_88 = (char *)0x28;
  local_80 = (long *)0x0;
  FUN_00d2e4b8((float)(100 - uVar28),lVar22,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  uVar15 = FUN_0112ef8c(local_a0);
  if (0x62 < uVar15) {
    uVar15 = 99;
  }
  if (plVar23 != (long *)0x0) {
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = (long *)0x7e244d784520b049;
  local_90 = (undefined1 **)0x399b106;
  local_88 = (char *)0x16;
  local_80 = (long *)0x0;
  if (plVar30 == (long *)0x0) {
    plVar33 = (long *)0x0;
  }
  else {
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar33 = plVar30;
  }
  local_518 = -0x2938192d259c0d7d;
  local_4f8 = plVar30;
  local_4f0 = plVar23;
  FUN_014148a0(&local_4f0,&local_98,&local_4f8,&local_518,uVar15);
  if (plVar33 != (long *)0x0) {
    plVar4 = plVar33 + 10;
    do {
      iVar19 = (int)*plVar4 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar11) {
        *(int *)plVar4 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_4f0 != (long *)0x0) {
    plVar33 = local_4f0 + 10;
    do {
      iVar19 = (int)*plVar33 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar11) {
        *(int *)plVar33 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*local_4f0 + 0x10))();
    }
  }
  FUN_0283d878(plVar23,"T_p_unreported_00");
  lVar20 = FUN_01306260(lVar22,"pane_N_unreported_00");
  *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe | uVar15 != 0 & (bVar12 ^ 1);
  puVar8 = PTR_DAT_04379660;
  local_88 = (char *)0x9;
  local_80 = (long *)0x0;
  local_518 = 0x409e738c486bea6d;
  pcStack_510 = "pokedex_level3_count";
  local_98 = (long *)&DAT_12f480e8b0aebe7d;
  local_90 = (undefined1 **)0x39b3b74;
  local_508 = 0x14;
  local_500 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar10 = PTR_DAT_04379670;
  puVar9 = PTR_DAT_04379668;
  uVar21 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar21;
  FUN_00d7d9e4(local_70,uVar21,&local_98);
  if (local_70[0] == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = FUN_00d78f50(local_70[0],&local_518);
    if (local_70[0] != (long *)0x0) {
      plVar33 = local_70[0] + 10;
      do {
        iVar19 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *(int *)plVar33 = iVar19;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar19 == 0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
    }
  }
  if (local_500 != (long *)0x0) {
    (**(code **)(*local_500 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (uVar14 < uVar15) {
    local_88 = (char *)0x9;
    local_80 = (long *)0x0;
    local_518 = -0x1cbd136b9254e572;
    pcStack_510 = "pokedex_level2_count";
    local_98 = (long *)&DAT_12f480e8b0aebe7d;
    local_90 = (undefined1 **)0x39b3b74;
    local_508 = 0x14;
    local_500 = (long *)0x0;
    if (((*puVar8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_04379660), iVar19 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar21 = *(undefined8 *)puVar9;
    *(undefined8 *)puVar10 = uVar21;
    FUN_00d7d9e4(local_70,uVar21,&local_98);
    if (local_70[0] == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_00d78f50(local_70[0],&local_518);
      if (local_70[0] != (long *)0x0) {
        plVar33 = local_70[0] + 10;
        do {
          iVar19 = (int)*plVar33 + -1;
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar11) {
            *(int *)plVar33 = iVar19;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar19 == 0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
      }
    }
    if (local_500 != (long *)0x0) {
      (**(code **)(*local_500 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    uVar34 = 0;
    if (uVar15 <= uVar14) {
      uVar34 = 0x3f800000;
    }
  }
  else {
    uVar34 = 0x40000000;
  }
  local_98 = (long *)0x398a1c53e6a57a3a;
  local_90 = (undefined1 **)0x39886a5;
  local_88 = (char *)0x10;
  local_80 = (long *)0x0;
  FUN_00d2e4b8(uVar34,lVar22,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (*(int *)(*(long *)(param_1 + 0x630) + 0x70) == 0) {
    FUN_013d9430(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xef0),0);
    FUN_013d9438(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xef0),0,0,0,0,0,0);
  }
  uVar15 = FUN_013e19c8();
  plVar33 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar33 != (long *)0x0) {
    lVar22 = plVar33[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_014143a0;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar21 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar21;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = &local_518;
  local_518 = 0;
  local_90 = (undefined1 **)0xf03bfed9d16a4fc5;
  local_88 = "ShortcutInputSymbol";
  local_80 = (long *)0x13;
  local_78 = (long *)0x0;
  FUN_00d6190c(plVar33,&local_98,0);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  lVar22 = local_518;
  if (plVar33 != (long *)0x0) {
    lVar20 = plVar33[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar33 + 0x20))(plVar33);
    }
  }
  FUN_0280779c(lVar22,uVar15 & 1);
  plVar33 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar33 != (long *)0x0) {
    lVar22 = plVar33[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
LAB_014143a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar21 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar21;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = &local_518;
  local_518 = 0;
  local_90 = (undefined1 **)0x3c0aa3f3bf0ea887;
  local_88 = "unown_button";
  local_80 = (long *)0xc;
  local_78 = (long *)0x0;
  FUN_00d36468(plVar33,&local_98,0);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  lVar22 = local_518;
  if (plVar33 != (long *)0x0) {
    lVar20 = plVar33[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar33 + 0x20))(plVar33);
    }
  }
  FUN_028077c0(lVar22,uVar15 & 1);
  FUN_013da08c(param_1);
  if (local_a0 != (long *)0x0) {
    lVar22 = local_a0[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar19 = *piVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (plVar23 != (long *)0x0) {
    do {
      iVar19 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *(int *)plVar3 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 10;
    do {
      iVar19 = (int)*plVar23 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar11) {
        *(int *)plVar23 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  if (plVar30 != (long *)0x0) {
    do {
      iVar19 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(int *)plVar2 = iVar19;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
  return;
}


