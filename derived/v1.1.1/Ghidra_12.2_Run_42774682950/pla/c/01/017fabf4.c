/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017fabf4; name: thunk_FUN_017faa8c
 */


void thunk_FUN_017faa8c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  
  *(undefined4 *)(param_1 + 0x10a0) = 1;
  puVar7 = PTR_DAT_0437a668;
  puVar6 = PTR_DAT_0437a660;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar10 = *(long *)(param_1 + 0x70);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar12 = *(int *)(lVar10 + 0xc);
    do {
      plVar13 = *(long **)(lVar10 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar6 = puVar5;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == (long *)puVar6) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            return;
          }
          FUN_01e42f90(1,7,0);
          lVar11 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x017fab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


