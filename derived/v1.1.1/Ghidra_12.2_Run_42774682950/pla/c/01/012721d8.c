/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012721d8; name: FUN_012721d8
 */


void FUN_012721d8(long param_1,undefined4 param_2,ulong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar15 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = (long *)plVar12[0x38];
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  plVar14 = plVar12 + 10;
  do {
    iVar8 = (int)*plVar14 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *(int *)plVar14 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0127258c;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar14 = (long *)plVar12[0xd];
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar13 = plVar12[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = FUN_01261ae0(param_1 + 0x808,param_2);
    plVar12 = *(long **)(lVar13 + 8);
    if (plVar12 == (long *)0x0) {
      plVar16 = *(long **)(lVar13 + 0x10);
    }
    else {
      (**(code **)(*plVar12 + 0x18))(plVar12);
      plVar16 = *(long **)(lVar13 + 0x10);
    }
    plVar11 = (long *)PTR_PTR_04379d00;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plVar11 = plVar16 + 0xc;
    }
    pbVar10 = (byte *)*plVar11;
    puVar9 = &DAT_cbf29ce484222645;
    bVar4 = *pbVar10;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    lVar13 = plVar14[0x16];
    if (lVar13 != 0) {
      plVar11 = *(long **)(lVar13 + 0x270);
      if (plVar11 != *(long **)(lVar13 + 0x278)) {
        iVar8 = 0;
        do {
          puVar2 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            puVar2 = (undefined8 *)(*plVar11 + 0x58);
          }
          if ((undefined1 *)*puVar2 == puVar9) goto LAB_012723ac;
          plVar11 = plVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar13 + 0x278) != plVar11);
      }
    }
    iVar8 = 0;
LAB_012723ac:
    FUN_02c2e33c(plVar14,iVar8,plVar15);
    plVar15 = *(long **)(param_1 + 0x2c8);
    if (plVar15 != (long *)0x0) {
      plVar11 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar13 = (param_3 & 0xffffffff) * 0x60;
    local_70 = *(undefined8 *)(&DAT_042006e0 + lVar13);
    puStack_68 = (&PTR_s_pane_L_btn_list_00_T_name_item_0_042006e8)[(param_3 & 0xffffffff) * 0xc];
    local_60 = *(undefined8 *)(&DAT_042006f0 + lVar13);
    local_58 = (long *)0x0;
    lVar17 = plVar15[0x37];
    lVar13 = plVar15[0x38];
    lVar3 = plVar15[0x39];
    *(undefined4 *)(lVar17 + 0x124) = 0;
    *(undefined2 *)(lVar17 + 0x128) = 0;
    *(undefined4 *)(lVar17 + 300) = 0;
    *(undefined4 *)(lVar17 + 0x134) = 0;
    FUN_02c33414(lVar17,lVar13);
    if (*(char *)(lVar3 + 0x7c) != '\0') {
      **(undefined2 **)(lVar3 + 0x58) = 0;
      *(undefined2 *)(lVar3 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar17,lVar3,lVar13,0,0);
    FUN_0283ce7c(plVar15,&local_70,plVar15[0x39],10);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    plVar11 = plVar15 + 10;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    plVar12 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    return;
  }
LAB_0127258c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


