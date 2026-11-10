/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f1944; name: FUN_014f1944
 */


void FUN_014f1944(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,int param_6)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  FUN_014f0d54();
  puVar6 = PTR_DAT_0437a0d0;
  plVar12 = (long *)(param_3 + 0xe0);
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar7 = PTR_DAT_0437a0d8;
  if (param_6 == 0) {
    if (*plVar12 != *(long *)PTR_DAT_0437a0d8) {
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),plVar12);
      FUN_0283b748(0x3f800000,*(undefined8 *)(param_1 + 8),plVar12);
    }
    plVar12 = (long *)(param_3 + 0xc0);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    if (*plVar12 == *(long *)puVar7) {
      return;
    }
    lVar14 = *(long *)(param_1 + 0x10);
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar13 == (long *)0x0) {
      lVar11 = *(long *)(lVar14 + 0xb0);
      if (lVar11 != 0) {
        plVar13 = *(long **)(lVar11 + 0x270);
        if (plVar13 != *(long **)(lVar11 + 0x278)) {
          iVar8 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar13 != 0) {
              plVar3 = (long *)(*plVar13 + 0x58);
            }
            if (*plVar3 == -0x4b48512c3b7c58a3) goto LAB_014f1d84;
            plVar13 = plVar13 + 1;
            iVar8 = iVar8 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar13);
        }
      }
      goto LAB_014f1d80;
    }
    plVar3 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = *(long *)(lVar14 + 0xb0);
    if (lVar11 != 0) {
      plVar10 = *(long **)(lVar11 + 0x270);
      if (plVar10 != *(long **)(lVar11 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == -0x4b48512c3b7c58a3) goto LAB_014f1c2c;
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar10);
      }
    }
    iVar8 = 0;
LAB_014f1c2c:
    FUN_02c2e33c(lVar14,iVar8,plVar13);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (*plVar12 != *(long *)PTR_DAT_0437a0d8) {
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),plVar12);
      FUN_0283b748(0,*(undefined8 *)(param_1 + 8),plVar12);
    }
    plVar12 = (long *)(param_3 + 0xa0);
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    if (*plVar12 == *(long *)puVar7) {
      return;
    }
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
    if (plVar13 == (long *)0x0) {
      FUN_02c395d0(0,0,param_6,6,0,1);
    }
    else {
      lVar14 = plVar13[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c395d0(plVar13,0,param_6,6,0,1);
      lVar14 = plVar13[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    lVar14 = *(long *)(param_1 + 0x10);
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar13 == (long *)0x0) {
      lVar11 = *(long *)(lVar14 + 0xb0);
      if (lVar11 != 0) {
        plVar13 = *(long **)(lVar11 + 0x270);
        if (plVar13 != *(long **)(lVar11 + 0x278)) {
          iVar8 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar13 != 0) {
              plVar3 = (long *)(*plVar13 + 0x58);
            }
            if (*plVar3 == -0x6156897770dde127) goto LAB_014f1d84;
            plVar13 = plVar13 + 1;
            iVar8 = iVar8 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar13);
        }
      }
LAB_014f1d80:
      iVar8 = 0;
LAB_014f1d84:
      FUN_02c2e33c(lVar14,iVar8,0);
      goto LAB_014f1af4;
    }
    plVar3 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = *(long *)(lVar14 + 0xb0);
    if (lVar11 != 0) {
      plVar10 = *(long **)(lVar11 + 0x270);
      if (plVar10 != *(long **)(lVar11 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == -0x6156897770dde127) goto LAB_014f1ad8;
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar10);
      }
    }
    iVar8 = 0;
LAB_014f1ad8:
    FUN_02c2e33c(lVar14,iVar8,plVar13);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
LAB_014f1af4:
  lVar11 = *(long *)(param_1 + 8);
  uVar9 = *(undefined8 *)(lVar11 + 0x1c0);
  lVar14 = *(long *)(lVar11 + 0x1c8);
  lVar15 = *(long *)(lVar11 + 0x1b8);
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,uVar9);
  if (*(char *)(lVar14 + 0x7c) != '\0') {
    **(undefined2 **)(lVar14 + 0x58) = 0;
    *(undefined2 *)(lVar14 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar14,uVar9,0,0);
  FUN_0283ce7c(lVar11,plVar12,*(undefined8 *)(lVar11 + 0x1c8),10);
  return;
}


