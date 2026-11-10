/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b69958; name: FUN_01b69958
 */


void FUN_01b69958(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar13 = *(long *)(param_1 + 0x1f0);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar14 = *(int *)(lVar13 + 0xc);
    do {
      plVar15 = *(long **)(lVar13 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
        uVar11 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar11;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01b6997c;
        if (plVar15 == (long *)puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar14) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01b699c4;
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 != 0) {
          plVar15 = (long *)(lVar13 + -0x50);
          FUN_02c91f14(plVar15);
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar14 + -1 != 0) break;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
          lVar13 = *(long *)(param_1 + 0x230);
          if (lVar13 == 0) {
            return;
          }
          goto LAB_01b69a74;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01b699c4:
      iVar14 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01b6997c:
  lVar13 = *(long *)(param_1 + 0x230);
  if (lVar13 != 0) {
LAB_01b69a74:
    puVar9 = PTR_DAT_0437a258;
    puVar8 = PTR_DAT_0437a250;
    puVar7 = PTR_DAT_043795e0;
    puVar6 = PTR_DAT_043795d8;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    if (*(int *)(lVar13 + 0xc) != 0) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar14 = *(int *)(lVar13 + 0xc);
      do {
        plVar15 = *(long **)(lVar13 + 0x10);
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar11;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar7 = puVar5;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) {
            return;
          }
          if (plVar15 == (long *)puVar9) break;
          plVar15 = (long *)*plVar15;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar14) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x18);
            if (lVar13 == 0) {
              return;
            }
            plVar12 = (long *)(lVar13 + -0x50);
            for (plVar15 = *(long **)(lVar13 + 0x270); plVar15 != (long *)0x0;
                plVar15 = (long *)*plVar15) {
              *(uint *)(plVar15 + 3) = *(uint *)(plVar15 + 3) | 4;
              FUN_01839500(plVar12);
            }
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b69ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar12 + 0x20))(plVar12);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar10;
      } while (iVar10 != 0);
    }
  }
  return;
}


