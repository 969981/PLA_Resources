/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02578a10; name: FUN_02578a10
 */


void FUN_02578a10(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 local_90;
  char *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (param_1[0xc6] == param_1[199]) {
    return;
  }
  plVar14 = *(long **)(*(long *)(param_1[0xd] + 0xb0) + 0x18);
  puVar7 = param_1;
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    puVar7 = *(undefined8 **)(lVar12 + 0x18);
    if (puVar7 == (undefined8 *)0x0) goto LAB_02579310;
    if (*(long *)(lVar12 + 0x10) == 0) {
      puVar7 = (undefined8 *)(**(code **)*puVar7)();
      *(undefined8 **)(lVar12 + 0x10) = puVar7;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = (long *)plVar14[0xd];
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar12 = plVar14[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x20))(plVar14);
  }
  lVar12 = FUN_025788d4(puVar7,*(undefined4 *)
                                (param_1[0xc6] + (ulong)*(uint *)((long)param_1 + 0x6fc) * 8));
  plVar14 = (long *)param_1[0x59];
  if (lVar12 == 0) {
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar14[0x29];
    lVar12 = plVar14[0x2a];
    if ((lVar12 != 0) && (*plVar11 != 0x55e9408dd2c19f5)) {
      plVar10 = plVar11 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar11 = plVar10;
          break;
        }
        plVar2 = plVar11 + 6;
        plVar3 = plVar11 + 6;
        plVar11 = plVar2;
      } while (*plVar3 != 0x55e9408dd2c19f5);
    }
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) & 0xfe;
    if (plVar14 == (long *)0x0) {
LAB_02579194:
      plVar14 = (long *)param_1[0x59];
    }
    else {
      plVar11 = plVar14 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != 0) goto LAB_02579194;
      (**(code **)(*plVar14 + 0x10))(plVar14);
      plVar14 = (long *)param_1[0x59];
    }
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar14[0x29];
    lVar12 = plVar14[0x2a];
    if ((lVar12 != 0) && (*plVar11 != 0x751d2aa832fc528c)) {
      plVar10 = plVar11 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar11 = plVar10;
          break;
        }
        plVar2 = plVar11 + 6;
        plVar3 = plVar11 + 6;
        plVar11 = plVar2;
      } while (*plVar3 != 0x751d2aa832fc528c);
    }
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) & 0xfe;
    if (plVar14 == (long *)0x0) goto LAB_02578ef4;
    plVar11 = plVar14 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    FUN_0283d6dc(plVar14);
    FUN_0283d878(plVar14,"T_item_name_00");
    local_70 = 0x55e9408dd2c19f5;
    pcStack_68 = "pane_T_item_name_00";
    local_60 = 0x13;
    local_58 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_90 = 0x43d539bf80745870;
    local_88 = "field_info_item_change_04";
    uStack_80 = 0x19;
    local_78 = plVar13;
    FUN_01475170(param_1 + 0x30,&local_70,&local_78,&local_90,0,lVar12);
    if (local_78 != (long *)0x0) {
      plVar14 = local_78 + 10;
      do {
        iVar9 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = 0x751d2aa832fc528c;
    pcStack_68 = "pane_T_poke_lv_00";
    local_60 = 0x11;
    local_58 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar6 = FUN_02c5fb2c(lVar12);
    plVar14 = *(long **)(param_1[0x59] + 0x1c0);
    if (plVar14 == (long *)0x0) {
      lVar12 = plVar13[0x16];
      if (lVar12 != 0) {
        plVar14 = *(long **)(lVar12 + 0x270);
        if (plVar14 != *(long **)(lVar12 + 0x278)) {
          iVar9 = 0;
          do {
            plVar11 = (long *)PTR_DAT_04379c88;
            if (*plVar14 != 0) {
              plVar11 = (long *)(*plVar14 + 0x58);
            }
            if (*plVar11 == 0x31ca271c404221c) goto LAB_025792f0;
            plVar14 = plVar14 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar12 + 0x278) != plVar14);
        }
      }
      iVar9 = 0;
LAB_025792f0:
      FUN_02c2e33c(plVar13,iVar9,0);
    }
    else {
      plVar11 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar12 = plVar13[0x16];
      if (lVar12 != 0) {
        plVar10 = *(long **)(lVar12 + 0x270);
        if (plVar10 != *(long **)(lVar12 + 0x278)) {
          iVar9 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar3 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar3 == 0x31ca271c404221c) goto LAB_02578ca8;
            plVar10 = plVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar12 + 0x278) != plVar10);
        }
      }
      iVar9 = 0;
LAB_02578ca8:
      FUN_02c2e33c(plVar13,iVar9,plVar14);
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    plVar14 = *(long **)(param_1[0x59] + 0x1b8);
    if (plVar14 == (long *)0x0) {
      FUN_02c395d0(0,0,uVar6,3,0,1);
    }
    else {
      lVar12 = plVar14[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_02579310:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c395d0(plVar14,0,uVar6,3,0,1);
      lVar12 = plVar14[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    lVar15 = param_1[0x59];
    uVar8 = *(undefined8 *)(lVar15 + 0x1c0);
    lVar12 = *(long *)(lVar15 + 0x1c8);
    lVar16 = *(long *)(lVar15 + 0x1b8);
    *(undefined4 *)(lVar16 + 0x124) = 0;
    *(undefined2 *)(lVar16 + 0x128) = 0;
    *(undefined4 *)(lVar16 + 300) = 0;
    *(undefined4 *)(lVar16 + 0x134) = 0;
    FUN_02c33414(lVar16,uVar8);
    if (*(char *)(lVar12 + 0x7c) != '\0') {
      **(undefined2 **)(lVar12 + 0x58) = 0;
      *(undefined2 *)(lVar12 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar16,lVar12,uVar8,0,0);
    FUN_0283ce7c(lVar15,&local_70,*(undefined8 *)(lVar15 + 0x1c8),10);
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        iVar9 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar14 = (long *)param_1[0x59];
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar14[0x29];
    lVar12 = plVar14[0x2a];
    if ((lVar12 != 0) && (*plVar11 != 0x55e9408dd2c19f5)) {
      plVar10 = plVar11 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar11 = plVar10;
          break;
        }
        plVar2 = plVar11 + 6;
        plVar3 = plVar11 + 6;
        plVar11 = plVar2;
      } while (*plVar3 != 0x55e9408dd2c19f5);
    }
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) | 1;
    if (plVar14 == (long *)0x0) {
LAB_02578e68:
      plVar14 = (long *)param_1[0x59];
    }
    else {
      plVar11 = plVar14 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != 0) goto LAB_02578e68;
      (**(code **)(*plVar14 + 0x10))();
      plVar14 = (long *)param_1[0x59];
    }
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar14[0x29];
    lVar12 = plVar14[0x2a];
    if ((lVar12 != 0) && (*plVar11 != 0x751d2aa832fc528c)) {
      plVar10 = plVar11 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar11 = plVar10;
          break;
        }
        plVar2 = plVar11 + 6;
        plVar3 = plVar11 + 6;
        plVar11 = plVar2;
      } while (*plVar3 != 0x751d2aa832fc528c);
    }
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) | 1;
    if (plVar14 == (long *)0x0) goto LAB_02578ef4;
    plVar11 = plVar14 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_02578ef4:
  plVar14 = *(long **)(param_1[0x59] + 0x148);
  lVar12 = *(long *)(param_1[0x59] + 0x150);
  if ((lVar12 != 0) && (*plVar14 != 0x10035ac521675e66)) {
    plVar11 = plVar14 + lVar12 * 6;
    lVar12 = lVar12 * 0x30;
    do {
      lVar12 = lVar12 + -0x30;
      if (lVar12 == 0) {
        plVar14 = plVar11;
        break;
      }
      plVar3 = plVar14 + 6;
      plVar10 = plVar14 + 6;
      plVar14 = plVar3;
    } while (*plVar10 != 0x10035ac521675e66);
  }
  *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe;
  plVar14 = *(long **)(param_1[0x59] + 0x148);
  lVar12 = *(long *)(param_1[0x59] + 0x150);
  if ((lVar12 != 0) && (*plVar14 != 0x6fde0d306ea08902)) {
    plVar11 = plVar14 + lVar12 * 6;
    lVar12 = lVar12 * 0x30;
    do {
      lVar12 = lVar12 + -0x30;
      if (lVar12 == 0) {
        plVar14 = plVar11;
        break;
      }
      plVar3 = plVar14 + 6;
      plVar10 = plVar14 + 6;
      plVar14 = plVar3;
    } while (*plVar10 != 0x6fde0d306ea08902);
  }
  *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe;
  FUN_02579d04(param_1);
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


