/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01098500; name: FUN_01098500
 */


void FUN_01098500(long *param_1,int *param_2)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  ushort uVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  long *local_78;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  iVar8 = *param_2;
  if ((((iVar8 != 0) || (param_2[1] != 0)) || (param_2[2] != 0)) || (param_2[3] != 0)) {
    if ((char)param_2[0xf] == '\0') {
      iVar11 = param_2[4];
      plVar17 = (long *)*param_1;
      local_78 = plVar17;
      if (plVar17 == (long *)0x0) {
        FUN_01099430(&local_78,iVar8,(char)iVar11 != '\0');
      }
      else {
        plVar1 = plVar17 + 10;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_01099430(&local_78,iVar8,(char)iVar11 != '\0');
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 10;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      iVar8 = param_2[1];
      cVar3 = *(char *)((long)param_2 + 0x11);
      plVar17 = (long *)*param_1;
      local_78 = plVar17;
      if (plVar17 == (long *)0x0) {
        FUN_01099430(&local_78,iVar8,cVar3 != '\0');
      }
      else {
        plVar1 = plVar17 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_01099430(&local_78,iVar8,cVar3 != '\0');
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 10;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      iVar8 = param_2[2];
      cVar3 = *(char *)((long)param_2 + 0x12);
      plVar17 = (long *)*param_1;
      local_78 = plVar17;
      if (plVar17 == (long *)0x0) {
        FUN_01099430(&local_78,iVar8,cVar3 != '\0');
      }
      else {
        plVar1 = plVar17 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_01099430(&local_78,iVar8,cVar3 != '\0');
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 10;
          do {
            iVar8 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      iVar8 = param_2[3];
      cVar3 = *(char *)((long)param_2 + 0x13);
      param_1 = (long *)*param_1;
      local_78 = param_1;
      if (param_1 == (long *)0x0) {
        FUN_01099430(&local_78,iVar8,cVar3 != '\0');
        return;
      }
      plVar17 = param_1 + 10;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_01099430(&local_78,iVar8,cVar3 != '\0');
      if (param_1 == (long *)0x0) {
        return;
      }
      plVar17 = param_1 + 10;
      do {
        iVar8 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01099018;
    }
    FUN_02c60a58(*param_1,0);
    FUN_02c60a58(*param_1,1);
    FUN_02c60a58(*param_1,2);
    FUN_02c60a58(*param_1,3);
    iVar8 = *param_2;
    iVar11 = param_2[4];
    plVar17 = (long *)*param_1;
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((iVar8 == 0) || (iVar12 = FUN_02c6087c(plVar17,iVar8), iVar12 != 0)) {
      if (plVar17 != (long *)0x0) goto LAB_01098d94;
    }
    else {
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 10;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if ((char)iVar11 != '\0') {
        for (lVar13 = 0; (&DAT_03a84b1c)[lVar13] != iVar8; lVar13 = lVar13 + 2) {
          if (lVar13 == 0x3c) goto LAB_01098d78;
          if ((&DAT_03a84b20)[lVar13] == iVar8) {
            lVar13 = lVar13 + 1;
            break;
          }
        }
        FUN_02c870fc(plVar17[0x13],lVar13,1);
      }
LAB_01098d78:
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
LAB_01098d94:
        plVar1 = plVar17 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    iVar8 = param_2[1];
    cVar3 = *(char *)((long)param_2 + 0x11);
    plVar17 = (long *)*param_1;
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 10;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((iVar8 == 0) || (iVar11 = FUN_02c6087c(plVar17,iVar8), iVar11 != 0)) {
      if (plVar17 != (long *)0x0) goto LAB_01098e64;
    }
    else {
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (cVar3 != '\0') {
        for (lVar13 = 0; (&DAT_03a84b1c)[lVar13] != iVar8; lVar13 = lVar13 + 2) {
          if (lVar13 == 0x3c) goto LAB_01098e48;
          if ((&DAT_03a84b20)[lVar13] == iVar8) {
            lVar13 = lVar13 + 1;
            break;
          }
        }
        FUN_02c870fc(plVar17[0x13],lVar13,1);
      }
LAB_01098e48:
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
LAB_01098e64:
        plVar1 = plVar17 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    iVar8 = param_2[2];
    cVar3 = *(char *)((long)param_2 + 0x12);
    plVar17 = (long *)*param_1;
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 10;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((iVar8 == 0) || (iVar11 = FUN_02c6087c(plVar17,iVar8), iVar11 != 0)) {
      if (plVar17 != (long *)0x0) goto LAB_01098f34;
    }
    else {
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (cVar3 != '\0') {
        for (lVar13 = 0; (&DAT_03a84b1c)[lVar13] != iVar8; lVar13 = lVar13 + 2) {
          if (lVar13 == 0x3c) goto LAB_01098f18;
          if ((&DAT_03a84b20)[lVar13] == iVar8) {
            lVar13 = lVar13 + 1;
            break;
          }
        }
        FUN_02c870fc(plVar17[0x13],lVar13,1);
      }
LAB_01098f18:
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
LAB_01098f34:
        plVar1 = plVar17 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    iVar8 = param_2[3];
    cVar3 = *(char *)((long)param_2 + 0x13);
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) {
      plVar17 = param_1 + 10;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if ((iVar8 == 0) || (iVar11 = FUN_02c6087c(param_1,iVar8), iVar11 != 0)) {
      if (param_1 == (long *)0x0) {
        return;
      }
    }
    else {
      if (param_1 != (long *)0x0) {
        plVar17 = param_1 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (cVar3 != '\0') {
        for (lVar13 = 0; (&DAT_03a84b1c)[lVar13] != iVar8; lVar13 = lVar13 + 2) {
          if (lVar13 == 0x3c) goto LAB_01098fe8;
          if ((&DAT_03a84b20)[lVar13] == iVar8) {
            lVar13 = lVar13 + 1;
            break;
          }
        }
        FUN_02c870fc(param_1[0x13],lVar13,1);
      }
LAB_01098fe8:
      if (param_1 == (long *)0x0) {
        return;
      }
      plVar17 = param_1 + 10;
      do {
        iVar8 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*param_1 + 0x10))(param_1);
      }
    }
    plVar17 = param_1 + 10;
    do {
      iVar8 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01099018:
    if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01099044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
    return;
  }
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(*param_1 + 0x98),0);
  plVar17 = (long *)*param_1;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = FUN_02c6849c(plVar17[0x13]);
  uVar7 = FUN_02c6f924(plVar17[0x13]);
  uVar10 = FUN_02c5fb2c(plVar17);
  if (((int)uVar9 < 0x38a) && (uVar7 < 0x1c)) {
    lVar13 = *(&DAT_04400660)[(ulong)uVar9 * 4];
    uVar15 = (&DAT_04400660)[(ulong)uVar9 * 4][1] - lVar13 >> 3;
    if ((uVar15 <= uVar7) || (*(long *)(lVar13 + (ulong)uVar7 * 8) == 0)) goto LAB_010985f0;
    uVar16 = uVar7;
  }
  else {
LAB_010985f0:
    uVar16 = 0;
    lVar13 = *DAT_04400660;
    uVar15 = DAT_04400660[1] - lVar13 >> 3;
  }
  if (uVar15 <= uVar16) goto LAB_010992bc;
  piVar14 = *(int **)(lVar13 + (ulong)uVar16 * 8);
  puVar2 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (10 - (long)*piVar14)));
  uVar19 = (uint)*(byte *)((long)puVar2 + (ulong)*puVar2);
  if (uVar19 != 0) {
    uVar18 = 0;
    do {
      local_70 = &PTR_LAB_0428acc8;
      local_68 = uVar9;
      local_64 = uVar7;
      iVar11 = FUN_02c55e48(&local_70,uVar18);
      if (iVar11 == iVar8) {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar9;
        local_64 = uVar7;
        uVar9 = FUN_02c55cf4(&local_70,uVar18);
        bVar6 = (uVar9 & 0xffff) <= uVar10;
        goto joined_r0x01098694;
      }
      uVar18 = uVar18 + 1;
    } while (uVar19 != uVar18);
  }
  bVar6 = false;
joined_r0x01098694:
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  if (bVar6) {
    for (lVar13 = 0; (&DAT_03a84b1c)[lVar13] != iVar8; lVar13 = lVar13 + 2) {
      if (lVar13 == 0x3c) goto LAB_01098700;
      if ((&DAT_03a84b20)[lVar13] == iVar8) {
        lVar13 = lVar13 + 1;
        break;
      }
    }
    FUN_02c870fc(*(undefined8 *)(*param_1 + 0x98),lVar13,1);
  }
LAB_01098700:
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(*param_1 + 0x98),1);
  plVar17 = (long *)*param_1;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = FUN_02c6849c(plVar17[0x13]);
  uVar7 = FUN_02c6f924(plVar17[0x13]);
  uVar10 = FUN_02c5fb2c(plVar17);
  if (((int)uVar9 < 0x38a) && (uVar7 < 0x1c)) {
    lVar13 = *(&DAT_04400660)[(ulong)uVar9 * 4];
    uVar15 = (&DAT_04400660)[(ulong)uVar9 * 4][1] - lVar13 >> 3;
    if ((uVar15 <= uVar7) || (*(long *)(lVar13 + (ulong)uVar7 * 8) == 0)) goto LAB_010987a4;
    uVar16 = uVar7;
  }
  else {
LAB_010987a4:
    uVar16 = 0;
    lVar13 = *DAT_04400660;
    uVar15 = DAT_04400660[1] - lVar13 >> 3;
  }
  if (uVar15 <= uVar16) goto LAB_010992bc;
  piVar14 = *(int **)(lVar13 + (ulong)uVar16 * 8);
  puVar2 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (10 - (long)*piVar14)));
  uVar19 = (uint)*(byte *)((long)puVar2 + (ulong)*puVar2);
  if (uVar19 != 0) {
    uVar18 = 0;
    do {
      local_70 = &PTR_LAB_0428acc8;
      local_68 = uVar9;
      local_64 = uVar7;
      iVar11 = FUN_02c55e48(&local_70,uVar18);
      if (iVar11 == iVar8) {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar9;
        local_64 = uVar7;
        uVar9 = FUN_02c55cf4(&local_70,uVar18);
        bVar6 = (uVar9 & 0xffff) <= uVar10;
        goto joined_r0x01098840;
      }
      uVar18 = uVar18 + 1;
    } while (uVar19 != uVar18);
  }
  bVar6 = false;
joined_r0x01098840:
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  if (bVar6) {
    for (lVar13 = 0; (&DAT_03a84b1c)[lVar13] != iVar8; lVar13 = lVar13 + 2) {
      if (lVar13 == 0x3c) goto LAB_010988ac;
      if ((&DAT_03a84b20)[lVar13] == iVar8) {
        lVar13 = lVar13 + 1;
        break;
      }
    }
    FUN_02c870fc(*(undefined8 *)(*param_1 + 0x98),lVar13,1);
  }
LAB_010988ac:
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(*param_1 + 0x98),2);
  plVar17 = (long *)*param_1;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = FUN_02c6849c(plVar17[0x13]);
  uVar7 = FUN_02c6f924(plVar17[0x13]);
  uVar10 = FUN_02c5fb2c(plVar17);
  if (((int)uVar9 < 0x38a) && (uVar7 < 0x1c)) {
    lVar13 = *(&DAT_04400660)[(ulong)uVar9 * 4];
    uVar15 = (&DAT_04400660)[(ulong)uVar9 * 4][1] - lVar13 >> 3;
    if ((uVar15 <= uVar7) || (*(long *)(lVar13 + (ulong)uVar7 * 8) == 0)) goto LAB_01098950;
    uVar16 = uVar7;
  }
  else {
LAB_01098950:
    uVar16 = 0;
    lVar13 = *DAT_04400660;
    uVar15 = DAT_04400660[1] - lVar13 >> 3;
  }
  if (uVar15 <= uVar16) goto LAB_010992bc;
  piVar14 = *(int **)(lVar13 + (ulong)uVar16 * 8);
  puVar2 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (10 - (long)*piVar14)));
  uVar19 = (uint)*(byte *)((long)puVar2 + (ulong)*puVar2);
  if (uVar19 != 0) {
    uVar18 = 0;
    do {
      local_70 = &PTR_LAB_0428acc8;
      local_68 = uVar9;
      local_64 = uVar7;
      iVar11 = FUN_02c55e48(&local_70,uVar18);
      if (iVar11 == iVar8) {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar9;
        local_64 = uVar7;
        uVar9 = FUN_02c55cf4(&local_70,uVar18);
        bVar6 = (uVar9 & 0xffff) <= uVar10;
        goto joined_r0x010989ec;
      }
      uVar18 = uVar18 + 1;
    } while (uVar19 != uVar18);
  }
  bVar6 = false;
joined_r0x010989ec:
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  if (bVar6) {
    for (lVar13 = 0; (&DAT_03a84b1c)[lVar13] != iVar8; lVar13 = lVar13 + 2) {
      if (lVar13 == 0x3c) goto LAB_01098a58;
      if ((&DAT_03a84b20)[lVar13] == iVar8) {
        lVar13 = lVar13 + 1;
        break;
      }
    }
    FUN_02c870fc(*(undefined8 *)(*param_1 + 0x98),lVar13,1);
  }
LAB_01098a58:
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(*param_1 + 0x98),3);
  plVar17 = (long *)*param_1;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = FUN_02c6849c(plVar17[0x13]);
  uVar7 = FUN_02c6f924(plVar17[0x13]);
  uVar10 = FUN_02c5fb2c(plVar17);
  if (((int)uVar9 < 0x38a) && (uVar7 < 0x1c)) {
    lVar13 = *(&DAT_04400660)[(ulong)uVar9 * 4];
    uVar15 = (&DAT_04400660)[(ulong)uVar9 * 4][1] - lVar13 >> 3;
    if ((uVar15 <= uVar7) || (*(long *)(lVar13 + (ulong)uVar7 * 8) == 0)) goto LAB_01098afc;
    uVar16 = uVar7;
  }
  else {
LAB_01098afc:
    uVar16 = 0;
    lVar13 = *DAT_04400660;
    uVar15 = DAT_04400660[1] - lVar13 >> 3;
  }
  if (uVar15 <= uVar16) {
LAB_010992bc:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar14 = *(int **)(lVar13 + (ulong)uVar16 * 8);
  puVar2 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (10 - (long)*piVar14)));
  uVar19 = (uint)*(byte *)((long)puVar2 + (ulong)*puVar2);
  if (uVar19 != 0) {
    uVar18 = 0;
    do {
      local_70 = &PTR_LAB_0428acc8;
      local_68 = uVar9;
      local_64 = uVar7;
      iVar11 = FUN_02c55e48(&local_70,uVar18);
      if (iVar11 == iVar8) {
        local_70 = &PTR_LAB_0428acc8;
        local_68 = uVar9;
        local_64 = uVar7;
        uVar9 = FUN_02c55cf4(&local_70,uVar18);
        bVar6 = (uVar9 & 0xffff) <= uVar10;
        goto joined_r0x01098b98;
      }
      uVar18 = uVar18 + 1;
    } while (uVar19 != uVar18);
  }
  bVar6 = false;
joined_r0x01098b98:
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      if (!bVar6) {
        return;
      }
      goto LAB_01098bb8;
    }
  }
  if (!bVar6) {
    return;
  }
LAB_01098bb8:
  lVar13 = 0;
  do {
    if ((&DAT_03a84b1c)[lVar13] == iVar8) {
LAB_01098bf8:
      FUN_02c870fc(*(undefined8 *)(*param_1 + 0x98),lVar13,1);
      return;
    }
    if (lVar13 == 0x3c) {
      return;
    }
    if ((&DAT_03a84b20)[lVar13] == iVar8) {
      lVar13 = lVar13 + 1;
      goto LAB_01098bf8;
    }
    lVar13 = lVar13 + 2;
  } while( true );
}


