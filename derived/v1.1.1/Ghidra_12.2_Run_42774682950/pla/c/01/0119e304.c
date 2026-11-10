/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119e304; name: FUN_0119e304
 */


void FUN_0119e304(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  iVar3 = *(int *)(param_1 + 0x6d8);
  iVar9 = 0;
  if (iVar3 != 2) {
    iVar9 = iVar3;
  }
  puVar10 = (undefined8 *)FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar9 * 0x28);
  lVar13 = puVar10[0x116];
  piVar1 = (int *)(lVar13 + 0x20);
  if (*(int *)(lVar13 + 0x28) != 0) {
    piVar1 = (int *)(lVar13 + 0x24);
  }
  uVar5 = *(int *)(lVar13 + 0x14) + *piVar1 * *(int *)(lVar13 + 0x10);
  if (iVar3 == 0) {
    if (**(int **)(param_1 + 0x1648) != 0) goto LAB_0119e524;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (puVar10 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      puVar10 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar13 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar13;
    plVar14 = *(long **)(lVar13 + 0x280);
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0xb];
      puVar10 = *(undefined8 **)(lVar13 + 0x18);
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        puVar10 = (undefined8 *)(**(code **)*puVar10)();
        *(undefined8 **)(lVar13 + 0x10) = puVar10;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    iVar9 = *(int *)(param_1 + 0x16c4);
    uVar8 = FUN_010dac08(puVar10,iVar9);
    if (iVar9 == 0) {
      plVar15 = plVar14 + 0xd;
joined_r0x0119e598:
      if (uVar8 <= uVar5) goto LAB_0119e59c;
LAB_0119e3f4:
      uVar5 = *(uint *)((long)plVar15 + (ulong)uVar5 * 4);
      if ((uVar5 & 0xffff) == 0) {
        if (plVar14 == (long *)0x0) goto LAB_0119e524;
        lVar13 = plVar14[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 + -1 != 0) goto LAB_0119e524;
LAB_0119e5bc:
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      else {
        if (plVar14 != (long *)0x0) {
          lVar13 = plVar14[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar9 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        if (0xffff < uVar5) {
          puVar11 = &DAT_03a79698;
          uVar12 = 3;
          goto LAB_0119e534;
        }
      }
    }
    else {
      if (iVar9 == 1) {
        plVar15 = (long *)((long)plVar14 + 0xaf4);
        if (uVar5 < uVar8) goto LAB_0119e3f4;
      }
      else if (iVar9 == 2) {
        plVar15 = (long *)((long)plVar14 + 0xc84);
        goto joined_r0x0119e598;
      }
LAB_0119e59c:
      if (plVar14 != (long *)0x0) {
        lVar13 = plVar14[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 + -1 == 0) goto LAB_0119e5bc;
      }
    }
LAB_0119e524:
    puVar11 = &DAT_03a796c8;
LAB_0119e52c:
    uVar12 = 2;
  }
  else {
    if (**(int **)(param_1 + 0x1648) == 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar13 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar13;
      plVar14 = *(long **)(lVar13 + 0xd0);
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
      plVar15 = (long *)plVar14[0xb];
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar2 = plVar14 + 10;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))();
        bVar4 = *(byte *)(plVar15 + 0x11);
      }
      else {
        bVar4 = *(byte *)(plVar15 + 0x11);
      }
      if (plVar15 != (long *)0x0) {
        plVar14 = plVar15 + 10;
        do {
          iVar9 = (int)*plVar14 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *(int *)plVar14 = iVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      if (uVar5 < bVar4) {
        puVar11 = &DAT_03a796e8;
        goto LAB_0119e52c;
      }
    }
    puVar11 = &DAT_03a79708;
    uVar12 = 1;
  }
LAB_0119e534:
  FUN_011a0de4(param_1,puVar11,uVar12);
  return;
}


