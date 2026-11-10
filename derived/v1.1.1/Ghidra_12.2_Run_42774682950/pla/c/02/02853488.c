/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02853488; name: FUN_02853488
 */


void FUN_02853488(long param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  local_80 = *(undefined8 *)PTR_DAT_0437a0d8;
  local_78 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  local_70 = *(undefined8 *)(PTR_DAT_0437a0d8 + 0x10);
  local_68 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  if (param_3 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar9 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar9;
    plVar12 = *(long **)(lVar9 + 0x280);
    if (plVar12 != (long *)0x0) {
      lVar9 = plVar12[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02853bf8;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    iVar6 = FUN_010da868(plVar12,param_2);
    local_80 = *(undefined8 *)(param_1 + 0xe8);
    puVar15 = *(undefined1 **)(param_1 + 0x68);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    local_70 = *(undefined8 *)(param_1 + 0xf8);
    plVar13 = *(long **)(param_1 + 0x100);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (local_68 != (long *)0x0) {
      lVar9 = *local_68;
      local_68 = plVar13;
      (**(code **)(lVar9 + 0x20))();
      plVar13 = local_68;
    }
    local_68 = plVar13;
    FUN_02c4fb44(&local_60,param_2);
    iVar7 = FUN_02c4fc60(&local_60,0x1b);
    local_60 = *(undefined8 *)(param_1 + 0x448);
    local_58 = *(undefined8 *)(param_1 + 0x450);
    local_50 = *(undefined8 *)(param_1 + 0x458);
    plVar13 = *(long **)(param_1 + 0x460);
    local_48 = plVar13;
    if (plVar13 == (long *)0x0) {
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_60);
      if (iVar6 == iVar7) {
        uVar16 = 0x3f800000;
      }
      else {
        uVar16 = 0;
      }
      FUN_0283b748(uVar16,*(undefined8 *)(param_1 + 8),&local_60);
    }
    else {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_60);
      if (iVar6 == iVar7) {
        uVar16 = 0x3f800000;
      }
      else {
        uVar16 = 0;
      }
      FUN_0283b748(uVar16,*(undefined8 *)(param_1 + 8),&local_60);
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if (plVar12 != (long *)0x0) {
      lVar9 = plVar12[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        goto LAB_028537dc;
      }
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar9 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar9;
    plVar13 = *(long **)(lVar9 + 0x238);
    if (plVar13 == (long *)0x0) {
      iVar6 = FUN_0111d778(0,param_2);
    }
    else {
      lVar9 = plVar13[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02853bf8;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      iVar6 = FUN_0111d778(plVar13,param_2);
      lVar9 = plVar13[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    local_80 = *(undefined8 *)(param_1 + 0x108);
    puVar15 = *(undefined1 **)(param_1 + 0x70);
    local_78 = *(undefined8 *)(param_1 + 0x110);
    local_70 = *(undefined8 *)(param_1 + 0x118);
    plVar13 = *(long **)(param_1 + 0x120);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (local_68 != (long *)0x0) {
      lVar9 = *local_68;
      local_68 = plVar13;
      (**(code **)(lVar9 + 0x20))();
      plVar13 = local_68;
    }
    local_68 = plVar13;
    local_60 = *(undefined8 *)(param_1 + 0x448);
    local_58 = *(undefined8 *)(param_1 + 0x450);
    local_50 = *(undefined8 *)(param_1 + 0x458);
    plVar13 = *(long **)(param_1 + 0x460);
    local_48 = plVar13;
    if (plVar13 == (long *)0x0) {
      if (param_3 == 1) goto LAB_02853700;
LAB_028537b0:
      plVar12 = plVar13;
    }
    else {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      if (param_3 != 1) goto LAB_028537b0;
LAB_02853700:
      local_60 = *(undefined8 *)(param_1 + 0x468);
      local_58 = *(undefined8 *)(param_1 + 0x470);
      local_50 = *(undefined8 *)(param_1 + 0x478);
      plVar12 = *(long **)(param_1 + 0x480);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      local_48 = plVar12;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_60);
    if (iVar6 == 999) {
      uVar16 = 0x3f800000;
    }
    else {
      uVar16 = 0;
    }
    FUN_0283b748(uVar16,*(undefined8 *)(param_1 + 8),&local_60);
    if (plVar12 != (long *)0x0) {
LAB_028537dc:
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (puVar15 != &DAT_cbf29ce484222645) {
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
    if (plVar13 == (long *)0x0) {
      FUN_02c395d0(0,0,iVar6,3,0,1);
      plVar13 = *(long **)(param_1 + 0x10);
    }
    else {
      lVar9 = plVar13[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_02853bf8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c395d0(plVar13,0,iVar6,3,0,1);
      lVar9 = plVar13[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
        plVar13 = *(long **)(param_1 + 0x10);
      }
      else {
        plVar13 = *(long **)(param_1 + 0x10);
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar12 == (long *)0x0) {
      lVar9 = plVar13[0x16];
      if (lVar9 != 0) {
        plVar12 = *(long **)(lVar9 + 0x270);
        if (plVar12 != *(long **)(lVar9 + 0x278)) {
          iVar6 = 0;
          do {
            puVar3 = (undefined8 *)PTR_DAT_04379c88;
            if (*plVar12 != 0) {
              puVar3 = (undefined8 *)(*plVar12 + 0x58);
            }
            if ((undefined1 *)*puVar3 == puVar15) goto LAB_02853b70;
            plVar12 = plVar12 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar9 + 0x278) != plVar12);
        }
      }
      iVar6 = 0;
LAB_02853b70:
      FUN_02c2e33c(plVar13,iVar6,0);
    }
    else {
      plVar2 = plVar12 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar9 = plVar13[0x16];
      if (lVar9 != 0) {
        plVar10 = *(long **)(lVar9 + 0x270);
        if (plVar10 != *(long **)(lVar9 + 0x278)) {
          iVar6 = 0;
          do {
            puVar3 = (undefined8 *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              puVar3 = (undefined8 *)(*plVar10 + 0x58);
            }
            if ((undefined1 *)*puVar3 == puVar15) goto LAB_02853910;
            plVar10 = plVar10 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar9 + 0x278) != plVar10);
        }
      }
      iVar6 = 0;
LAB_02853910:
      FUN_02c2e33c(plVar13,iVar6,plVar12);
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    lVar11 = *(long *)(param_1 + 8);
    uVar8 = *(undefined8 *)(lVar11 + 0x1c0);
    lVar9 = *(long *)(lVar11 + 0x1c8);
    lVar14 = *(long *)(lVar11 + 0x1b8);
    *(undefined4 *)(lVar14 + 0x124) = 0;
    *(undefined2 *)(lVar14 + 0x128) = 0;
    *(undefined4 *)(lVar14 + 300) = 0;
    *(undefined4 *)(lVar14 + 0x134) = 0;
    FUN_02c33414(lVar14,uVar8);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      **(undefined2 **)(lVar9 + 0x58) = 0;
      *(undefined2 *)(lVar9 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar14,lVar9,uVar8,0,0);
    FUN_0283ce7c(lVar11,&local_80,*(undefined8 *)(lVar11 + 0x1c8),10);
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + 10;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


