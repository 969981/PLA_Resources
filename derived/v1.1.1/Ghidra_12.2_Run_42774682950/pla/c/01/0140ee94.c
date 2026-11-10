/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140ee94; name: FUN_0140ee94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0140ee94(long param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar4 = *(uint *)(lVar14 + 400);
  if (uVar4 != 0) {
    uVar16 = 0;
    piVar15 = (int *)(lVar14 + 0x20);
LAB_0140eee4:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar15 + -4) != 0) {
      puVar2 = (undefined8 *)(*(long *)(piVar15 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar2 != &DAT_304928236d5bcabe) || (*piVar15 != 10)) goto LAB_0140ef8c;
    if (((uint)uVar16 < 0x10) && (plVar11 = *(long **)(piVar15 + -2), plVar11 != (long *)0x0)) {
      lVar14 = plVar11[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar13;
      }
      piVar15 = (int *)(lVar14 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = *piVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar7 = (long *)plVar11[0xd];
      goto joined_r0x0140f280;
    }
  }
LAB_0140ef14:
  plVar11 = (long *)0x0;
  plVar7 = _DAT_00000068;
joined_r0x0140f280:
  if (plVar7 != (long *)0x0) {
    plVar12 = plVar7 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[0xb];
    piVar15 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar6) {
        *piVar15 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  if (param_2 == 0) {
    local_60 = 0x198a1bff7c604bac;
    pcStack_58 = "pane_T_h_research_task_00";
    local_50 = 0x19;
    local_48 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar11 = plVar7 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_68 = 0x2e73c0528ee824d9;
    local_38 = plVar7;
    FUN_011845f4(param_1 + 0x180,&local_60,&local_38,&local_68,10);
    if (local_38 != (long *)0x0) {
      plVar11 = local_38 + 10;
      do {
        iVar10 = (int)*plVar11 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    puVar9 = PTR_DAT_043729f0;
    puVar8 = PTR_DAT_043729e8;
    plVar11 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar14 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar14 == 0) || (*plVar11 == -0x535ece52ab5f17f6)) {
      plVar12 = plVar11;
    }
    else {
      lVar17 = lVar14 * 0x30;
      plVar18 = plVar11;
      do {
        lVar17 = lVar17 + -0x30;
        if (lVar17 == 0) goto LAB_0140f1d0;
        plVar1 = plVar18 + 6;
        plVar12 = plVar18 + 6;
        plVar18 = plVar18 + 6;
      } while (*plVar1 != -0x535ece52ab5f17f6);
    }
    if (plVar12 == plVar11 + lVar14 * 6) {
LAB_0140f1d0:
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)plVar12[4];
    }
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar10 != 0)) {
      *(undefined8 *)puVar9 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    if (plVar11 != (long *)0x0) {
      for (plVar12 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11); plVar12 != (long *)0x0;
          plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)puVar9) {
          *(byte *)(plVar11 + 0xb) = *(byte *)(plVar11 + 0xb) & 0xfe;
          break;
        }
      }
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar14 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar14 == 0) || (*plVar11 == 0xfe70421d5c24a3c)) {
      plVar12 = plVar11;
    }
    else {
      lVar17 = lVar14 * 0x30;
      plVar18 = plVar11;
      do {
        lVar17 = lVar17 + -0x30;
        if (lVar17 == 0) goto LAB_0140f1d8;
        plVar1 = plVar18 + 6;
        plVar12 = plVar18 + 6;
        plVar18 = plVar18 + 6;
      } while (*plVar1 != 0xfe70421d5c24a3c);
    }
    if (plVar12 == plVar11 + lVar14 * 6) {
LAB_0140f1d8:
      plVar11 = (long *)0x0;
      bVar3 = *puVar8;
    }
    else {
      plVar11 = (long *)plVar12[4];
      bVar3 = *puVar8;
    }
    if (((bVar3 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar10 != 0)) {
      *(undefined8 *)puVar9 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    if (plVar11 != (long *)0x0) {
      for (plVar12 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11); plVar12 != (long *)0x0;
          plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)puVar9) {
          *(byte *)(plVar11 + 0xb) = *(byte *)(plVar11 + 0xb) & 0xfe;
          break;
        }
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 10;
    do {
      iVar10 = (int)*plVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
LAB_0140ef8c:
  uVar16 = uVar16 + 1;
  piVar15 = piVar15 + 6;
  if (uVar4 == uVar16) goto LAB_0140ef14;
  goto LAB_0140eee4;
}


