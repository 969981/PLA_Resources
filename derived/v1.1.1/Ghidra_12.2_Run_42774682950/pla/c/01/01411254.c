/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01411254; name: FUN_01411254
 */


void FUN_01411254(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  long *plVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  byte *pbVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *local_4b0;
  long *local_4a0;
  long *local_498;
  long *local_490;
  long *local_488;
  undefined1 **ppuStack_480;
  size_t local_478;
  long *local_470;
  undefined1 *local_468;
  char *pcStack_460;
  undefined8 local_458;
  long *local_450;
  
  local_468 = &DAT_304928236d5bcabe;
  pcStack_460 = "common/pokedex.dat";
  local_458 = 0x12;
  local_450 = (long *)0x0;
  FUN_00d37bb4(&local_488,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_468,10);
  plVar20 = (long *)local_488[0xd];
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar9) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (local_488 != (long *)0x0) {
    lVar13 = local_488[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar12 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_488 + 0x20))();
    }
  }
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  lVar13 = param_1 + 0x180;
  plVar21 = *(long **)(param_1 + 0x2c8);
  if (plVar21 != (long *)0x0) {
    plVar2 = plVar21 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  memset(&local_468,0,0x400);
  puVar10 = PTR_DAT_04379c88;
  pbVar14 = (byte *)((ulong)&local_468 | 1);
  plVar2 = plVar20 + 10;
  plVar3 = plVar21 + 10;
  lVar23 = 1;
  do {
    plVar15 = (long *)&DAT_cbf29ce484222645;
    iVar12 = (int)lVar23;
    snprintf((char *)&local_468,0x400,"pane_L_detail_tab_%02d_T_text_00",iVar12);
    if (iVar12 == 1) {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x5b8) + 0xa0) + 8) == '\0') {
        local_478 = strlen((char *)&local_468);
        if ((byte)local_468 != 0) {
          pbVar19 = pbVar14;
          bVar7 = (byte)local_468;
          do {
            plVar15 = (long *)(((ulong)plVar15 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (bVar7 != 0);
        }
        ppuStack_480 = &local_468;
        local_470 = (long *)0x0;
        if (plVar20 != (long *)0x0) {
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        local_4a0 = plVar20;
        local_488 = plVar15;
        FUN_011845f4(lVar13,&local_488,&local_4a0,&UNK_03a7bb40 + lVar23 * 8,10);
        plVar15 = local_470;
        if (local_4a0 != (long *)0x0) {
          plVar15 = local_4a0 + 10;
          do {
            iVar12 = (int)*plVar15 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar9) {
              *(int *)plVar15 = iVar12;
              cVar8 = ExclusiveMonitorsStatus();
            }
            plVar5 = local_4a0;
          } while (cVar8 != '\0');
          goto joined_r0x0141171c;
        }
      }
      else {
        local_478 = strlen((char *)&local_468);
        if ((byte)local_468 != 0) {
          pbVar19 = pbVar14;
          bVar7 = (byte)local_468;
          do {
            plVar15 = (long *)(((ulong)plVar15 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (bVar7 != 0);
        }
        ppuStack_480 = &local_468;
        local_470 = (long *)0x0;
        if (plVar20 != (long *)0x0) {
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        local_498 = plVar20;
        local_488 = plVar15;
        FUN_011845f4(lVar13,&local_488,&local_498,&DAT_03a7bb80,10);
        plVar15 = local_470;
        if (local_498 != (long *)0x0) {
          plVar15 = local_498 + 10;
          do {
            iVar12 = (int)*plVar15 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar9) {
              *(int *)plVar15 = iVar12;
              cVar8 = ExclusiveMonitorsStatus();
            }
            plVar5 = local_498;
          } while (cVar8 != '\0');
joined_r0x0141171c:
          plVar15 = local_470;
          if (iVar12 == 0) {
            (**(code **)(*plVar5 + 0x10))();
            plVar15 = local_470;
          }
        }
      }
joined_r0x01411724:
      local_470 = plVar15;
      if (plVar15 != (long *)0x0) {
        pcVar17 = *(code **)(*plVar15 + 0x20);
        goto LAB_01411730;
      }
    }
    else {
      if (iVar12 == 0) {
        local_478 = strlen((char *)&local_468);
        if ((byte)local_468 != 0) {
          pbVar19 = pbVar14;
          bVar7 = (byte)local_468;
          do {
            plVar15 = (long *)(((ulong)plVar15 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (bVar7 != 0);
        }
        ppuStack_480 = &local_468;
        local_470 = (long *)0x0;
        if (plVar20 != (long *)0x0) {
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        local_490 = plVar20;
        local_488 = plVar15;
        FUN_011845f4(lVar13,&local_488,&local_490,&UNK_03a7bb40 + lVar23 * 8,10);
        plVar15 = local_470;
        if (local_490 != (long *)0x0) {
          plVar15 = local_490 + 10;
          do {
            iVar12 = (int)*plVar15 + -1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar9) {
              *(int *)plVar15 = iVar12;
              cVar8 = ExclusiveMonitorsStatus();
            }
            plVar5 = local_490;
          } while (cVar8 != '\0');
          goto joined_r0x0141171c;
        }
        goto joined_r0x01411724;
      }
      if (plVar21 != (long *)0x0) {
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      local_478 = strlen((char *)&local_468);
      if ((byte)local_468 != 0) {
        pbVar19 = pbVar14;
        bVar7 = (byte)local_468;
        do {
          plVar15 = (long *)(((ulong)plVar15 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar7 != 0);
      }
      ppuStack_480 = &local_468;
      local_470 = (long *)0x0;
      local_488 = plVar15;
      if (plVar20 == (long *)0x0) {
        local_4b0 = (long *)0x0;
        plVar15 = (long *)plVar21[0x38];
        if (plVar15 == (long *)0x0) goto LAB_01411908;
LAB_01411420:
        plVar5 = plVar15 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar9) {
            *(int *)plVar5 = (int)*plVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar18 = plVar20[0x16];
        if (lVar18 != 0) {
          plVar16 = *(long **)(lVar18 + 0x270);
          if (plVar16 != *(long **)(lVar18 + 0x278)) {
            iVar12 = 0;
            do {
              plVar4 = (long *)puVar10;
              if (*plVar16 != 0) {
                plVar4 = (long *)(*plVar16 + 0x58);
              }
              if (*plVar4 == 0x1e0b5b1836ed2624) goto LAB_01411480;
              plVar16 = plVar16 + 1;
              iVar12 = iVar12 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar16);
          }
        }
        iVar12 = 0;
LAB_01411480:
        FUN_02c2e33c(plVar20,iVar12,plVar15);
        do {
          iVar12 = (int)*plVar5 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar9) {
            *(int *)plVar5 = iVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar12 != 0) {
          plVar15 = (long *)plVar21[0x37];
          goto joined_r0x01411974;
        }
        (**(code **)(*plVar15 + 0x10))(plVar15);
        plVar15 = (long *)plVar21[0x37];
        if (plVar15 != (long *)0x0) goto LAB_014114a8;
LAB_014117f0:
        FUN_010c7198(0,0,*(undefined8 *)(&UNK_03a7bb40 + lVar23 * 8));
      }
      else {
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar15 = (long *)plVar21[0x38];
        local_4b0 = plVar20;
        if (plVar15 != (long *)0x0) goto LAB_01411420;
LAB_01411908:
        lVar18 = plVar20[0x16];
        if (lVar18 != 0) {
          plVar15 = *(long **)(lVar18 + 0x270);
          if (plVar15 != *(long **)(lVar18 + 0x278)) {
            iVar12 = 0;
            do {
              plVar5 = (long *)puVar10;
              if (*plVar15 != 0) {
                plVar5 = (long *)(*plVar15 + 0x58);
              }
              if (*plVar5 == 0x1e0b5b1836ed2624) goto LAB_01411964;
              plVar15 = plVar15 + 1;
              iVar12 = iVar12 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar15);
          }
        }
        iVar12 = 0;
LAB_01411964:
        FUN_02c2e33c(plVar20,iVar12,0);
        plVar15 = (long *)plVar21[0x37];
joined_r0x01411974:
        if (plVar15 == (long *)0x0) goto LAB_014117f0;
LAB_014114a8:
        lVar18 = plVar15[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        FUN_010c7198(plVar15,0,*(undefined8 *)(&UNK_03a7bb40 + lVar23 * 8));
        lVar18 = plVar15[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar12 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
      }
      lVar18 = plVar21[0x38];
      lVar6 = plVar21[0x39];
      lVar22 = plVar21[0x37];
      *(undefined4 *)(lVar22 + 0x124) = 0;
      *(undefined2 *)(lVar22 + 0x128) = 0;
      *(undefined4 *)(lVar22 + 300) = 0;
      *(undefined4 *)(lVar22 + 0x134) = 0;
      FUN_02c33414(lVar22,lVar18);
      if (*(char *)(lVar6 + 0x7c) != '\0') {
        **(undefined2 **)(lVar6 + 0x58) = 0;
        *(undefined2 *)(lVar6 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar22,lVar6,lVar18,0,0);
      FUN_0283ce7c(plVar21,&local_488,plVar21[0x39],10);
      if (plVar20 != (long *)0x0) {
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *(int *)plVar2 = iVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar20 + 0x10))(local_4b0);
        }
      }
      if (local_470 != (long *)0x0) {
        (**(code **)(*local_470 + 0x20))();
      }
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *(int *)plVar3 = iVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 == 0) {
        pcVar17 = *(code **)(*plVar21 + 0x10);
        plVar15 = plVar21;
LAB_01411730:
        (*pcVar17)(plVar15);
      }
    }
    lVar23 = lVar23 + 1;
    if (lVar23 == 7) {
      if (plVar21 != (long *)0x0) {
        do {
          iVar12 = (int)*plVar3 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *(int *)plVar3 = iVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      if (plVar20 != (long *)0x0) {
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *(int *)plVar2 = iVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
      return;
    }
  } while( true );
}


