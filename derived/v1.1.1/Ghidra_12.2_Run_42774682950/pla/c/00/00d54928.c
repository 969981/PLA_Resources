/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d54928; name: FUN_00d54928
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d54928(long *param_1,int param_2,ulong param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *local_88;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  *(undefined1 *)((long)param_1 + 0x162c) = 0;
  if ((char)param_1[0x2c8] == '\0') {
    param_3 = param_3 & 0xffffffff;
    if ((int)param_1[0xdc] != 1) {
      if ((int)param_1[0xdc] == 2) {
        if (*(char *)((long)param_1 + 0x1621) != '\0') {
          if (*(char *)((long)param_1 + 0x1641) == '\0') {
            uVar12 = FUN_00d55520(param_1);
            if ((uVar12 & 1) != 0) {
              puVar11 = (undefined1 *)0x898ac1bbdbe7b512;
              FUN_00d55560(param_1);
              local_70 = 0x14;
              pcStack_78 = "PLAY_UI_COMMON_CATCH";
              goto LAB_00d55078;
            }
            FUN_00d55688(param_1);
          }
          else {
            FUN_00d5535c(param_1);
          }
          goto LAB_00d5506c;
        }
        if ((char)param_1[0xdf] == '\0') {
          FUN_00d55714(param_1);
          (**(code **)(*param_1 + 0x1c8))(param_1,1);
          local_70 = 0;
          puVar11 = &DAT_cbf29ce484222645;
          pcStack_78 = "";
          goto LAB_00d55078;
        }
        uVar12 = FUN_00d557c8(param_1);
        if ((uVar12 & 1) == 0) goto LAB_00d54d04;
        FUN_00d55928(param_1,1,1);
      }
      else {
        if ((char)param_1[0xdf] == '\0') {
          plVar7 = (long *)param_1[0x59];
          if (plVar7 != (long *)0x0) {
            plVar14 = plVar7 + 10;
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *(int *)plVar14 = (int)*plVar14 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar14 = (long *)plVar7[0x29];
          lVar9 = plVar7[0x2a];
          if ((lVar9 != 0) && (*plVar14 != 0x62f3434c9624b485)) {
            plVar8 = plVar14 + lVar9 * 6;
            lVar9 = lVar9 * 0x30;
            do {
              lVar9 = lVar9 + -0x30;
              if (lVar9 == 0) {
                plVar14 = plVar8;
                break;
              }
              plVar2 = plVar14 + 6;
              plVar1 = plVar14 + 6;
              plVar14 = plVar2;
            } while (*plVar1 != 0x62f3434c9624b485);
          }
          *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe;
          if (plVar7 != (long *)0x0) {
            plVar14 = plVar7 + 10;
            do {
              iVar5 = (int)*plVar14 + -1;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *(int *)plVar14 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          plVar7 = (long *)param_1[0x59];
          if (plVar7 != (long *)0x0) {
            plVar14 = plVar7 + 10;
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar6) {
                *(int *)plVar14 = (int)*plVar14 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar14 = (long *)plVar7[0x39];
          if (plVar14 != (long *)0x0) {
            plVar8 = plVar14 + 10;
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *(int *)plVar8 = (int)*plVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            do {
              iVar5 = (int)*plVar8 + -1;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *(int *)plVar8 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          local_80 = (undefined1 *)0x8ad48bca42a4661b;
          pcStack_78 = "context_menu_00";
          local_70 = 0xf;
          local_68 = (long *)0x0;
          lVar9 = FUN_00d472a0(param_1 + 0x30,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if ((lVar9 == 0) ||
             (lVar13 = *(long *)(*(long *)(param_1[(long)param_2 * 0xc + 199] + 0xa8) +
                                param_3 * 0x10), *(int *)(lVar13 + 0x2c) == 0)) {
            bVar6 = false;
          }
          else {
            plVar8 = (long *)FUN_0280a710(lVar9);
            if (plVar14 == (long *)0x0) {
              uVar12 = 0;
              do {
                piVar10 = (int *)(lVar13 + uVar12 * 4 + 0x2c);
                if (*piVar10 == 0) break;
                local_88 = (long *)0x0;
                (**(code **)(*param_1 + 0x188))
                          (param_1,param_2,param_3,lVar13,uVar12 & 0xffffffff,&local_88);
                plVar8 = local_88;
                if (local_88 != (long *)0x0) {
                  plVar14 = local_88 + 10;
                  do {
                    iVar5 = (int)*plVar14 + -1;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                    if (bVar6) {
                      *(int *)plVar14 = iVar5;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar5 == 0) {
                    plVar8 = (long *)(**(code **)(*local_88 + 0x10))();
                  }
                }
                lVar15 = *(long *)(lVar9 + uVar12 * 8 + 0x470);
                if (*(char *)(lVar15 + 0x7c) != '\0') {
                  plVar8 = (long *)FUN_02c30580(*(undefined8 *)(lVar15 + 0x58),_DAT_00000058,
                                                *(undefined2 *)(lVar15 + 0x78));
                  *(short *)(lVar15 + 0x7a) = (short)plVar8;
                }
                if (*(int *)(&DAT_03a78388 + (long)*piVar10 * 0x10) - 1U < 3) {
                  plVar8 = (long *)FUN_0280a5d8(lVar9,uVar12 & 0xffffffff,
                                                (&PTR_DAT_041eb6d8)
                                                [(int)(*(int *)(&DAT_03a78388 +
                                                               (long)*piVar10 * 0x10) - 1U)],1);
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 != 7);
            }
            else {
              uVar12 = 0;
              plVar1 = plVar14 + 10;
              do {
                piVar10 = (int *)(lVar13 + uVar12 * 4 + 0x2c);
                if (*piVar10 == 0) break;
                do {
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                local_88 = plVar14;
                (**(code **)(*param_1 + 0x188))
                          (param_1,param_2,param_3,lVar13,uVar12 & 0xffffffff,&local_88);
                plVar8 = local_88;
                if (local_88 != (long *)0x0) {
                  plVar2 = local_88 + 10;
                  do {
                    iVar5 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar6) {
                      *(int *)plVar2 = iVar5;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar5 == 0) {
                    plVar8 = (long *)(**(code **)(*local_88 + 0x10))();
                  }
                }
                do {
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = (int)*plVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar15 = *(long *)(lVar9 + uVar12 * 8 + 0x470);
                if (*(char *)(lVar15 + 0x7c) != '\0') {
                  plVar8 = (long *)FUN_02c30580(*(undefined8 *)(lVar15 + 0x58),plVar14[0xb],
                                                *(undefined2 *)(lVar15 + 0x78));
                  *(short *)(lVar15 + 0x7a) = (short)plVar8;
                }
                do {
                  iVar5 = (int)*plVar1 + -1;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = iVar5;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar5 == 0) {
                  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14);
                }
                if (*(int *)(&DAT_03a78388 + (long)*piVar10 * 0x10) - 1U < 3) {
                  plVar8 = (long *)FUN_0280a5d8(lVar9,uVar12 & 0xffffffff,
                                                (&PTR_DAT_041eb6d8)
                                                [(int)(*(int *)(&DAT_03a78388 +
                                                               (long)*piVar10 * 0x10) - 1U)],1);
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 != 7);
            }
            FUN_00d533f0(&local_80,plVar8,param_2,param_4);
            FUN_0280a8d0(lVar9,&local_80,uVar12 & 0xffffffff);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            local_80 = (undefined1 *)0x18ce7f774c54f7c9;
            pcStack_78 = "PLAY_UI_COMMON_MENU_OPEN";
            local_70 = 0x18;
            local_68 = (long *)0x0;
            FUN_028354b0(&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            bVar6 = true;
            *(undefined4 *)((long)param_1 + 0x5ac) = 4;
          }
          if (plVar7 != (long *)0x0) {
            plVar14 = plVar7 + 10;
            do {
              iVar5 = (int)*plVar14 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *(int *)plVar14 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          if (!bVar6) {
            lVar9 = param_1[0x88];
            if ((lVar9 != 0) && (*(char *)(lVar9 + 0x62) == '\0')) {
              *(undefined1 *)(lVar9 + 0x60) = 1;
              if (*(char *)(lVar9 + 0x61) != '\0') {
                FUN_0283351c(*(undefined8 *)(lVar9 + 0x58),0);
              }
              FUN_02831808(*(undefined8 *)(lVar9 + 0x58),0);
            }
            FUN_00d42438(param_1,0,1);
            param_1[0xb6] = 1;
          }
LAB_00d5506c:
          puVar11 = (undefined1 *)0xc1a949029450238f;
          local_70 = 0x15;
          pcStack_78 = "PLAY_UI_COMMON_DECIDE";
          goto LAB_00d55078;
        }
        uVar12 = FUN_00d564b4(param_1);
        if ((uVar12 & 1) == 0) goto LAB_00d54cbc;
      }
LAB_00d54b28:
      puVar11 = (undefined1 *)0x1f7e1ba02170001c;
      local_70 = 0x16;
      pcStack_78 = "PLAY_UI_COMMON_RELEASE";
      goto LAB_00d55078;
    }
    if (*(char *)((long)param_1 + 0x1641) != '\0') {
      uVar12 = FUN_00d55178(param_1,param_2,param_3,param_4);
      if ((uVar12 & 1) == 0) {
        (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3,param_4);
      }
      goto LAB_00d5506c;
    }
    uVar12 = FUN_00d55250(param_1);
    if ((uVar12 & 1) != 0) {
      bVar6 = (char)param_1[0xdf] != '\0';
      local_70 = 0x16;
      if (bVar6) {
        local_70 = 0x14;
      }
      pcStack_78 = "PLAY_UI_COMMON_RELEASE";
      if (bVar6) {
        pcStack_78 = "PLAY_UI_COMMON_CATCH";
      }
      puVar11 = (undefined1 *)0x1f7e1ba02170001c;
      if (bVar6) {
        puVar11 = (undefined1 *)0x898ac1bbdbe7b512;
      }
      goto LAB_00d55078;
    }
  }
  else {
    uVar12 = (**(code **)(*param_1 + 0x208))
                       (param_1,(int)param_1[0xdd],*(undefined2 *)((long)param_1 + 0x6ec),
                        *(undefined1 *)((long)param_1 + 0x6ee),
                        *(undefined1 *)((long)param_1 + 0x6ef));
    if ((uVar12 & 1) != 0) {
      *(undefined4 *)((long)param_1 + 0x5ac) = 10;
      goto LAB_00d54b28;
    }
LAB_00d54d04:
    lVar9 = param_1[0x88];
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x62) == '\0')) {
      *(undefined1 *)(lVar9 + 0x60) = 1;
      if (*(char *)(lVar9 + 0x61) != '\0') {
        FUN_0283351c(*(undefined8 *)(lVar9 + 0x58),0);
      }
      FUN_02831808(*(undefined8 *)(lVar9 + 0x58),0);
    }
  }
LAB_00d54cbc:
  puVar11 = (undefined1 *)0x9361c9d60afa3753;
  local_70 = 0x13;
  pcStack_78 = "PLAY_UI_COMMON_BEEP";
LAB_00d55078:
  if (*(char *)((long)param_1 + (long)param_2 + 0x1645) == '\0') {
    local_68 = (long *)0x0;
    local_80 = puVar11;
    FUN_028354b0(&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


