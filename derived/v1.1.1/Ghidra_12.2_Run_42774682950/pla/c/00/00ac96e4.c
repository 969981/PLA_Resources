/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ac96e4; name: FUN_00ac96e4
 */


void FUN_00ac96e4(long param_1,undefined1 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  if (*(char *)(param_1 + 0x21b) != '\0') {
    *(undefined1 *)(param_1 + 0x219) = 1;
    lVar12 = *(long *)(param_1 + 0x208);
    *(undefined1 *)(param_1 + 0x218) = param_2;
    puVar8 = PTR_DAT_04379e90;
    puVar7 = PTR_DAT_04379e88;
    puVar6 = PTR_DAT_043795e0;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar9 = *(int *)(lVar12 + 0xc);
      do {
        plVar13 = *(long **)(lVar12 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
            if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar5 = uVar11;
              __cxa_guard_release(puVar4);
            }
            *(undefined **)puVar6 = puVar5;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00ac971c;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
              iVar9 = FUN_01a81e54(plVar13);
              *(bool *)(param_1 + 0x21a) = iVar9 != 0;
              lVar12 = *(long *)(lVar12 + 8);
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00ac9840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar13 + 0x20))(plVar13);
                return;
              }
              return;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_00ac971c:
    *(undefined1 *)(param_1 + 0x21a) = 0;
  }
  return;
}


