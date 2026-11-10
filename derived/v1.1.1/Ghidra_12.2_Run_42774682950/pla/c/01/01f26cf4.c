/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f26cf4; name: FUN_01f26cf4
 */


undefined8 FUN_01f26cf4(long param_1,ulong *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  
  puVar9 = PTR_DAT_04380750;
  puVar8 = PTR_DAT_04380748;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_1 + 0x68);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar20 = *(int *)(lVar12 + 0xc);
    do {
      plVar21 = *(long **)(lVar12 + 0x10);
      if ((*puVar8 & 1) == 0) goto LAB_01f26e78;
      while( true ) {
        while( true ) {
          if (plVar21 == (long *)0x0) {
            return 1;
          }
          if (plVar21 == (long *)puVar9) break;
          plVar21 = (long *)*plVar21;
        }
        iVar10 = *piVar1;
        if (iVar10 != iVar20) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f26d6c;
        lVar13 = *(long *)(lVar12 + 0x18);
        if (lVar13 == 0) {
          return 1;
        }
        uVar16 = *(ulong *)(param_1 + 0x98);
        if (uVar16 != 0) {
          uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          uVar15 = *param_2;
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar17 < 2) {
            uVar18 = uVar16 - 1 & uVar15;
          }
          else if (uVar15 < uVar16) {
            uVar18 = uVar15;
          }
          else {
            uVar18 = 0;
            if (uVar16 != 0) {
              uVar18 = uVar15 / uVar16;
            }
            uVar18 = uVar15 - uVar18 * uVar16;
          }
          plVar19 = *(long **)(*(long *)(param_1 + 0x90) + uVar18 * 8);
          if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
            if (uVar17 < 2) {
              do {
                if (plVar19[1] == uVar15) {
                  if (plVar19[2] == uVar15) goto LAB_01f26ee4;
                }
                else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
            else {
              do {
                uVar17 = plVar19[1];
                if (uVar17 == uVar15) {
                  if (plVar19[2] == uVar15) {
LAB_01f26ee4:
                    lVar14 = *(long *)(lVar13 + 8);
                    piVar1 = (int *)(lVar14 + 0xc);
                    lVar12 = plVar19[3];
                    lVar2 = plVar19[4];
                    do {
                      iVar20 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar20 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar20 + -1 == 0) {
                      *(undefined8 *)(lVar14 + 0x18) = 0;
                      (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))();
                    }
                    if (lVar2 == lVar12) {
                      return 1;
                    }
                    return 0;
                  }
                }
                else {
                  if (uVar16 <= uVar17) {
                    uVar5 = 0;
                    if (uVar16 != 0) {
                      uVar5 = uVar17 / uVar16;
                    }
                    uVar17 = uVar17 - uVar5 * uVar16;
                  }
                  if (uVar17 != uVar18) break;
                }
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
          }
        }
        FUN_01f28040();
LAB_01f26e78:
        iVar10 = __cxa_guard_acquire(puVar8);
        if (iVar10 != 0) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar11;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
      }
      ClearExclusiveLocal();
LAB_01f26d6c:
      iVar20 = iVar10;
    } while (iVar10 != 0);
  }
  return 1;
}


