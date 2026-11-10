/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b69c14; name: FUN_01b69c14
 */


void FUN_01b69c14(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  
  puVar6 = PTR_DAT_0437a6e0;
  puVar5 = PTR_DAT_0437a6d8;
  lVar14 = *(long *)(param_1 + 0x1f0);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar15 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
        uVar13 = FUN_00ad3750();
        *(undefined8 *)puVar6 = uVar13;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01b69c38;
        if (plVar16 == (long *)puVar6) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar15) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            plVar16 = (long *)(lVar14 + -0x50);
            lVar12 = FUN_02c90d14(plVar16);
            if (((lVar12 == 0) || (*(int *)(lVar12 + 0x17c) < 1)) ||
               (*(char *)(lVar12 + 0xc) == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            lVar14 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
            if (bVar4) {
              return;
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01b69c38:
  puVar10 = PTR_DAT_0437a258;
  puVar9 = PTR_DAT_0437a250;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x230);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar15 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) {
          return;
        }
        if (plVar16 == (long *)puVar10) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar15) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) {
            return;
          }
          plVar16 = (long *)(lVar14 + -0x50);
          FUN_01836814(plVar16,0);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b69e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar16 + 0x20))(plVar16);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar11;
    } while (iVar11 != 0);
  }
  return;
}


