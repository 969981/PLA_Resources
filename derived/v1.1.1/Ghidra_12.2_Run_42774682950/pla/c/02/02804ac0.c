/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02804ac0; name: FUN_02804ac0
 */


void FUN_02804ac0(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar10 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar10;
  lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x2d10) + 8);
  if (lVar10 == 0) {
    plVar13 = (long *)0x0;
    plVar14 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar14 = *(long **)(lVar10 + 0x18);
    if (plVar14 != (long *)0x0) {
      lVar10 = plVar14[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar13 = (long *)plVar14[0xd];
    if (plVar13 != (long *)0x0) {
      plVar15 = plVar13 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lVar10 = plVar14[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      plVar14 = *(long **)(param_1 + 0x2c8);
    }
    else {
      plVar14 = *(long **)(param_1 + 0x2c8);
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar16 = &DAT_cbf29ce484222645;
  snprintf((char *)&local_80,0x40,"msg_ui_slidemenu_%02d",
           *(int *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x5b4));
  if ((byte)local_80 != 0) {
    pbVar11 = (byte *)((ulong)&local_80 | 1);
    bVar5 = (byte)local_80;
    do {
      puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar5 != 0);
  }
  plVar15 = (long *)plVar14[0x38];
  if (plVar15 == (long *)0x0) {
    lVar10 = plVar13[0x16];
    if (lVar10 != 0) {
      plVar15 = *(long **)(lVar10 + 0x270);
      if (plVar15 != *(long **)(lVar10 + 0x278)) {
        iVar8 = 0;
        do {
          puVar3 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar15 != 0) {
            puVar3 = (undefined8 *)(*plVar15 + 0x58);
          }
          if ((undefined1 *)*puVar3 == puVar16) goto LAB_02804e8c;
          plVar15 = plVar15 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar15);
      }
    }
    iVar8 = 0;
LAB_02804e8c:
    FUN_02c2e33c(plVar13,iVar8,0);
  }
  else {
    plVar2 = plVar15 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar10 = plVar13[0x16];
    if (lVar10 != 0) {
      plVar12 = *(long **)(lVar10 + 0x270);
      if (plVar12 != *(long **)(lVar10 + 0x278)) {
        iVar8 = 0;
        do {
          puVar3 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            puVar3 = (undefined8 *)(*plVar12 + 0x58);
          }
          if ((undefined1 *)*puVar3 == puVar16) goto LAB_02804c84;
          plVar12 = plVar12 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar12);
      }
    }
    iVar8 = 0;
LAB_02804c84:
    FUN_02c2e33c(plVar13,iVar8,plVar15);
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  local_90 = 0xf;
  local_88 = (long *)0x0;
  local_a0 = 0x73129179107f4232;
  pcStack_98 = "pane_T_title_00";
  lVar17 = plVar14[0x37];
  lVar10 = plVar14[0x38];
  lVar4 = plVar14[0x39];
  *(undefined4 *)(lVar17 + 0x124) = 0;
  *(undefined2 *)(lVar17 + 0x128) = 0;
  *(undefined4 *)(lVar17 + 300) = 0;
  *(undefined4 *)(lVar17 + 0x134) = 0;
  FUN_02c33414(lVar17,lVar10);
  if (*(char *)(lVar4 + 0x7c) != '\0') {
    **(undefined2 **)(lVar4 + 0x58) = 0;
    *(undefined2 *)(lVar4 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar17,lVar4,lVar10,0,0);
  FUN_0283ce7c(plVar14,&local_a0,plVar14[0x39],10);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  plVar15 = plVar14 + 10;
  do {
    iVar8 = (int)*plVar15 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *(int *)plVar15 = iVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


