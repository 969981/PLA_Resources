/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117b018; name: FUN_0117b018
 */


void FUN_0117b018(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint *puVar19;
  float fVar20;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar12 = *(long **)(lVar9 + 0x288);
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0117b4f0;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar18 = param_3 + *(int *)(param_1 + 0x5bc) * 0x28;
  plVar13 = *(long **)(param_1 + 0x2c8);
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
  uVar17 = (ulong)param_3;
  lVar9 = (long)param_2;
  if (uVar18 < *(uint *)(param_1 + 0x5b8)) {
    if (999 < uVar18) {
      uVar18 = 0;
    }
    FUN_0284f014(*(long *)(param_1 + 0x448) + uVar17 * 0xd0,
                 (long)plVar12 + (ulong)uVar18 * 0x1c + 0x68,1);
    plVar11 = *(long **)(param_1 + 0x2c8);
    if (plVar11 != (long *)0x0) {
      plVar14 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar14 = (long *)plVar11[0x37];
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0117b4f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar19 = (uint *)((long)plVar12 + (ulong)uVar18 * 0x1c + 0x80);
    FUN_02c395d0(plVar14,0,*puVar19 & 0x7f,3,0,1);
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    plVar14 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    FUN_011797ec(param_1,0,0xdda56b936ec8f94b,&DAT_043badd8 + uVar17 * 0x10 + lVar9 * 0x280);
    if (*(char *)((long)plVar12 + (ulong)uVar18 * 0x1c + 0x74) == '\0') {
      fVar20 = 0.0;
    }
    else {
      fVar20 = 2.0;
    }
    if ((*puVar19 & 0x80) != 0) {
      fVar20 = fVar20 + 1.0;
    }
    puVar3 = &DAT_043bad98 + lVar9 * 0x280 + uVar17 * 0x10 + 0xc;
    FUN_0283b1e8(plVar13,puVar3);
    FUN_0283b748(fVar20,plVar13,puVar3);
    plVar11 = (long *)plVar13[0x29];
    lVar15 = plVar13[0x2a];
    lVar16 = (&DAT_043bad98)[(long)param_2 * 0x280 + uVar17 * 0x10];
    plVar14 = (long *)(&DAT_043bad98)[lVar9 * 0x280 + uVar17 * 0x10 + 3];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar6 = plVar11;
    if ((lVar15 != 0) && (*plVar11 != lVar16)) {
      lVar9 = lVar15 * 0x30;
      plVar10 = plVar11 + lVar15 * 6;
      do {
        lVar9 = lVar9 + -0x30;
        plVar6 = plVar10;
        if (lVar9 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar6 = plVar11;
      } while (*plVar1 != lVar16);
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) | 1;
  }
  else {
    lVar16 = (&DAT_043bad98)[(long)param_2 * 0x280 + uVar17 * 0x10];
    plVar11 = (long *)plVar13[0x29];
    lVar15 = plVar13[0x2a];
    plVar14 = (long *)(&DAT_043badb0)[uVar17 * 0x10 + lVar9 * 0x280];
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar6 = plVar11;
    if ((lVar15 != 0) && (*plVar11 != lVar16)) {
      lVar9 = lVar15 * 0x30;
      plVar10 = plVar11 + lVar15 * 6;
      do {
        lVar9 = lVar9 + -0x30;
        plVar6 = plVar10;
        if (lVar9 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar6 = plVar11;
      } while (*plVar1 != lVar16);
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    *(byte *)(plVar6[4] + 0x58) = *(byte *)(plVar6[4] + 0x58) & 0xfe;
  }
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0117b490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return;
    }
  }
  return;
}


