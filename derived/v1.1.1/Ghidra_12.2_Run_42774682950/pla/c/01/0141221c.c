/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141221c; name: FUN_0141221c
 */


void FUN_0141221c(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined1 **ppuVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_528;
  long *local_520;
  long *local_518;
  long *local_510;
  long *local_508;
  undefined8 local_500;
  long *local_4f8;
  long *local_4f0;
  undefined1 **local_4e8;
  code *local_4e0;
  long *local_4d8;
  long alStack_4d0 [13];
  undefined1 *local_468;
  char *pcStack_460;
  undefined8 local_458;
  long *local_450;
  
  *(undefined8 *)(param_1 + 0x630) = param_2;
  local_468 = &DAT_304928236d5bcabe;
  pcStack_460 = "common/pokedex.dat";
  local_458 = 0x12;
  local_450 = (long *)0x0;
  FUN_00d37bb4(&local_4f0,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_468,10);
  plVar16 = (long *)local_4f0[0xd];
  if (plVar16 != (long *)0x0) {
    plVar12 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (local_4f0 != (long *)0x0) {
    lVar11 = local_4f0[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_4f0 + 0x20))();
    }
  }
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  memset(&local_468,0,0x400);
  plVar17 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar17 != (long *)0x0) {
    lVar11 = plVar17[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01412e0c;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_4f0 = (long *)0x17fc6f23176b0272;
  local_4e8 = (undefined1 **)0x38cc6fb;
  local_4e0 = (code *)0x11;
  local_4d8 = (long *)0x0;
  lVar11 = FUN_00d4d2c4(plVar17,*(undefined8 *)(param_1 + 8),&local_4f0);
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    lVar13 = plVar17[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  plVar17 = *(long **)(lVar11 + 0x318);
  *(undefined8 *)(lVar11 + 0xf8) = 0x400000000;
  *(undefined1 **)(lVar11 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar11 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar11 + 0x310) = 0;
  *(undefined8 *)(lVar11 + 0x318) = 0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))();
  }
  pcVar14 = *(code **)(lVar11 + 0x188);
  local_4f0 = (long *)&LAB_01414d3c;
  local_4e8 = (undefined1 **)FUN_01414d4c;
  local_4e0 = FUN_01414d50;
  local_4d8 = (long *)&LAB_01414d5c;
  alStack_4d0[0] = param_1;
  if (pcVar14 == (code *)0x0) {
LAB_01412458:
    (*local_4e0)(alStack_4d0,lVar11 + 0x1a0);
    *(undefined1 ***)(lVar11 + 0x188) = local_4e8;
    *(long **)(lVar11 + 0x198) = local_4d8;
    *(code **)(lVar11 + 400) = local_4e0;
    *(undefined8 *)(lVar11 + 0x180) = local_4f0;
  }
  else {
    *(undefined8 *)(lVar11 + 400) = 0;
    *(undefined8 *)(lVar11 + 0x198) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0;
    *(undefined8 *)(lVar11 + 0x188) = 0;
    (*pcVar14)(lVar11 + 0x1a0);
    if (local_4e0 != (code *)0x0) goto LAB_01412458;
  }
  ppuVar8 = local_4e8;
  if (local_4e8 != (undefined1 **)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (long *)0x0;
    local_4f0 = (long *)0x0;
    local_4e8 = (undefined1 **)0x0;
    (*(code *)ppuVar8)(alStack_4d0);
  }
  plVar17 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar17 != (long *)0x0) {
    lVar11 = plVar17[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01412e0c;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_4f0 = (long *)0x3fb33b2efeff1f80;
  local_4e8 = (undefined1 **)0x38aefd8;
  local_4e0 = (code *)0x13;
  local_4d8 = (long *)0x0;
  lVar11 = FUN_00d4d2c4(plVar17,*(undefined8 *)(param_1 + 8),&local_4f0);
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    lVar13 = plVar17[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  pcVar14 = *(code **)(lVar11 + 0x188);
  *(undefined8 *)(lVar11 + 0xf8) = 0x200000000;
  local_4f0 = (long *)&LAB_01414d68;
  local_4e8 = (undefined1 **)FUN_01414d78;
  local_4e0 = FUN_01414d7c;
  local_4d8 = (long *)&LAB_01414d88;
  alStack_4d0[0] = param_1;
  if (pcVar14 == (code *)0x0) {
LAB_014125ac:
    (*local_4e0)(alStack_4d0,lVar11 + 0x1a0);
    *(undefined1 ***)(lVar11 + 0x188) = local_4e8;
    *(long **)(lVar11 + 0x198) = local_4d8;
    *(code **)(lVar11 + 400) = local_4e0;
    *(undefined8 *)(lVar11 + 0x180) = local_4f0;
  }
  else {
    *(undefined8 *)(lVar11 + 400) = 0;
    *(undefined8 *)(lVar11 + 0x198) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0;
    *(undefined8 *)(lVar11 + 0x188) = 0;
    (*pcVar14)(lVar11 + 0x1a0);
    if (local_4e0 != (code *)0x0) goto LAB_014125ac;
  }
  ppuVar8 = local_4e8;
  if (local_4e8 != (undefined1 **)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (long *)0x0;
    local_4f0 = (long *)0x0;
    local_4e8 = (undefined1 **)0x0;
    (*(code *)ppuVar8)(alStack_4d0);
  }
  plVar17 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar17 != (long *)0x0) {
    lVar11 = plVar17[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_01412e0c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_4f0 = (long *)0xf03bfed9d16a4fc5;
  local_4e8 = (undefined1 **)0x38ea156;
  local_4e0 = (code *)0x13;
  local_4d8 = (long *)0x0;
  lVar11 = FUN_00d4d2c4(plVar17,*(undefined8 *)(param_1 + 8),&local_4f0);
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    lVar13 = plVar17[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  pcVar14 = *(code **)(lVar11 + 0x188);
  *(undefined8 *)(lVar11 + 0xf8) = 0x100000000;
  local_4f0 = (long *)&LAB_01414d94;
  local_4e8 = (undefined1 **)FUN_01414ebc;
  local_4e0 = FUN_01414ec0;
  local_4d8 = (long *)&LAB_01414ecc;
  alStack_4d0[0] = param_1;
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 400) = 0;
    *(undefined8 *)(lVar11 + 0x198) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0;
    *(undefined8 *)(lVar11 + 0x188) = 0;
    (*pcVar14)(lVar11 + 0x1a0);
    if (local_4e0 == (code *)0x0) goto LAB_0141272c;
  }
  (*local_4e0)(alStack_4d0,lVar11 + 0x1a0);
  *(undefined1 ***)(lVar11 + 0x188) = local_4e8;
  *(long **)(lVar11 + 0x198) = local_4d8;
  *(code **)(lVar11 + 400) = local_4e0;
  *(undefined8 *)(lVar11 + 0x180) = local_4f0;
LAB_0141272c:
  param_1 = param_1 + 0x180;
  uVar9 = FUN_013e19c8();
  FUN_0280779c(lVar11,uVar9 & 1);
  ppuVar8 = local_4e8;
  if (local_4e8 != (undefined1 **)0x0) {
    local_4e0 = (code *)0x0;
    local_4d8 = (long *)0x0;
    local_4f0 = (long *)0x0;
    local_4e8 = (undefined1 **)0x0;
    (*(code *)ppuVar8)(alStack_4d0);
  }
  local_4f0 = (long *)0x2f55bf4cbaae4e32;
  local_4e8 = (undefined1 **)0x3913d70;
  local_4e0 = (code *)0x18;
  local_4d8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_500 = 0x72e8930e2784ed1b;
  local_4f8 = plVar16;
  FUN_011845f4(param_1,&local_4f0,&local_4f8,&local_500,10);
  if (local_4f8 != (long *)0x0) {
    plVar17 = local_4f8 + 10;
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_4f8 + 0x10))();
    }
  }
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x20))();
  }
  local_4f0 = (long *)0x3a6b0daf66d4ace0;
  local_4e8 = (undefined1 **)0x3961ece;
  local_4e0 = (code *)0x14;
  local_4d8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_500 = 0x72e8960e2784f234;
  local_508 = plVar16;
  FUN_011845f4(param_1,&local_4f0,&local_508,&local_500,10);
  if (local_508 != (long *)0x0) {
    plVar17 = local_508 + 10;
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_508 + 0x10))();
    }
  }
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x20))();
  }
  local_4f0 = (long *)0xa72a80a99d5e1e96;
  local_4e8 = (undefined1 **)0x391e937;
  local_4e0 = (code *)0x14;
  local_4d8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_500 = 0x46e18c07c61adc85;
  local_510 = plVar16;
  FUN_011845f4(param_1,&local_4f0,&local_510,&local_500,10);
  if (local_510 != (long *)0x0) {
    plVar17 = local_510 + 10;
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_510 + 0x10))();
    }
  }
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x20))();
  }
  local_4f0 = (long *)0x1e6bc992bbc81ae4;
  local_4e8 = (undefined1 **)0x38d5150;
  local_4e0 = (code *)0x14;
  local_4d8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_500 = 0x46e18b07c61adad2;
  local_518 = plVar16;
  FUN_011845f4(param_1,&local_4f0,&local_518,&local_500,10);
  if (local_518 != (long *)0x0) {
    plVar17 = local_518 + 10;
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_518 + 0x10))();
    }
  }
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x20))();
  }
  plVar17 = plVar12 + 10;
  plVar2 = plVar16 + 10;
  lVar11 = 0;
  if (plVar12 == (long *)0x0) {
    while (lVar11 = lVar11 + 1, lVar11 != 6) {
      if (lVar11 != 0) {
        snprintf((char *)&local_468,0x400,"pane_T_name_area_%02d",(int)lVar11);
        local_520 = (long *)0x0;
        local_4e0 = (code *)strlen((char *)&local_468);
        local_4f0 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_468 != 0) {
          local_4f0 = (long *)&DAT_cbf29ce484222645;
          pbVar15 = (byte *)((ulong)&local_468 | 1);
          bVar5 = (byte)local_468;
          do {
            local_4f0 = (long *)(((ulong)local_4f0 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar5 != 0);
        }
        local_4d8 = (long *)0x0;
        if (plVar16 == (long *)0x0) {
          plVar18 = (long *)0x0;
        }
        else {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plVar18 = plVar16;
        }
        local_500 = 0x1e0b5b1836ed2624;
        local_528 = plVar16;
        local_4e8 = &local_468;
        FUN_01412e2c(&local_520,&local_4f0,&local_528,&local_500,&UNK_03a7bb88 + lVar11 * 8);
        if (plVar18 != (long *)0x0) {
          plVar3 = plVar18 + 10;
          do {
            iVar4 = (int)*plVar3 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *(int *)plVar3 = iVar4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
        if (local_4d8 != (long *)0x0) {
          (**(code **)(*local_4d8 + 0x20))();
        }
        if (local_520 != (long *)0x0) {
          plVar18 = local_520 + 10;
          do {
            iVar4 = (int)*plVar18 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar7) {
              *(int *)plVar18 = iVar4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_520 + 0x10))();
          }
        }
      }
    }
  }
  else {
    while (lVar11 = lVar11 + 1, lVar11 != 6) {
      if (lVar11 != 0) {
        snprintf((char *)&local_468,0x400,"pane_T_name_area_%02d",(int)lVar11);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_520 = plVar12;
        local_4e0 = (code *)strlen((char *)&local_468);
        local_4f0 = (long *)&DAT_cbf29ce484222645;
        if ((byte)local_468 != 0) {
          local_4f0 = (long *)&DAT_cbf29ce484222645;
          pbVar15 = (byte *)((ulong)&local_468 | 1);
          bVar5 = (byte)local_468;
          do {
            local_4f0 = (long *)(((ulong)local_4f0 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar5 != 0);
        }
        local_4d8 = (long *)0x0;
        if (plVar16 == (long *)0x0) {
          plVar18 = (long *)0x0;
        }
        else {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plVar18 = plVar16;
        }
        local_500 = 0x1e0b5b1836ed2624;
        local_528 = plVar16;
        local_4e8 = &local_468;
        FUN_01412e2c(&local_520,&local_4f0,&local_528,&local_500,&UNK_03a7bb88 + lVar11 * 8);
        if (plVar18 != (long *)0x0) {
          plVar3 = plVar18 + 10;
          do {
            iVar4 = (int)*plVar3 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *(int *)plVar3 = iVar4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
        if (local_4d8 != (long *)0x0) {
          (**(code **)(*local_4d8 + 0x20))();
        }
        if (local_520 != (long *)0x0) {
          plVar18 = local_520 + 10;
          do {
            iVar4 = (int)*plVar18 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar7) {
              *(int *)plVar18 = iVar4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_520 + 0x10))();
          }
        }
      }
    }
  }
  if (plVar12 != (long *)0x0) {
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  if (plVar16 != (long *)0x0) {
    do {
      iVar4 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  return;
}


