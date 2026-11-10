/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c34cd0; name: FUN_01c34cd0
 */


void FUN_01c34cd0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long *local_68;
  long *local_58;
  
  uVar9 = (**(code **)(*param_1 + 0x108))();
  if ((uVar9 & 1) != 0) {
    lVar12 = param_1[0x3f];
    *(undefined4 *)(param_1 + 0x4d) = 3;
    puVar7 = PTR_DAT_0437a0f0;
    puVar6 = PTR_DAT_0437a0e8;
    puVar5 = PTR_DAT_043794d8;
    puVar4 = PTR_DAT_043794d0;
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
      piVar1 = (int *)(lVar12 + 0xc);
      iVar13 = *(int *)(lVar12 + 0xc);
      do {
        plVar14 = *(long **)(lVar12 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01c34d14;
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x18);
            if (lVar12 != 0) {
              *(undefined1 *)((long)param_1 + 0x295) = 1;
              plVar14 = *(long **)(lVar12 + 0x200);
              if (plVar14 == (long *)0x0) goto LAB_01c34e54;
              lVar11 = plVar14[0xb];
              if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
                if (*(long *)(lVar11 + 0x10) == 0) {
                  uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
                  *(undefined8 *)(lVar11 + 0x10) = uVar10;
                }
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
LAB_01c34e54:
                lVar11 = param_1[0xb];
                local_58 = param_1;
                if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
                  if (*(long *)(lVar11 + 0x10) == 0) {
                    uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
                    *(undefined8 *)(lVar11 + 0x10) = uVar10;
                  }
                  piVar1 = (int *)(lVar11 + 0xc);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = *piVar1 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  FUN_01850a3c(plVar14,&local_58);
                  if (local_58 != (long *)0x0) {
                    lVar11 = local_58[0xb];
                    piVar1 = (int *)(lVar11 + 0xc);
                    do {
                      iVar13 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar13 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar13 + -1 == 0) {
                      *(undefined8 *)(lVar11 + 0x18) = 0;
                      (**(code **)(*local_58 + 0x20))();
                    }
                  }
                  if (plVar14 != (long *)0x0) {
                    lVar11 = plVar14[0xb];
                    piVar1 = (int *)(lVar11 + 0xc);
                    do {
                      iVar13 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar13 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar13 + -1 == 0) {
                      *(undefined8 *)(lVar11 + 0x18) = 0;
                      (**(code **)(*plVar14 + 0x20))(plVar14);
                    }
                  }
                  FUN_016c24d0(&local_68,param_1 + 0x47);
                  if (local_68 != (long *)0x0) {
                    lVar11 = local_68[0xb];
                    piVar1 = (int *)(lVar11 + 0xc);
                    *(undefined1 *)((long)local_68 + 0x366) = 0;
                    do {
                      iVar13 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar13 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar13 + -1 == 0) {
                      *(undefined8 *)(lVar11 + 0x18) = 0;
                      (**(code **)(*local_68 + 0x20))();
                    }
                  }
                  lVar11 = *(long *)(lVar12 + 8);
                  piVar1 = (int *)(lVar11 + 0xc);
                  do {
                    iVar13 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar13 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar11 + 0x18) = 0;
                    (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
                    return;
                  }
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01c34d14:
    *(undefined1 *)((long)param_1 + 0x295) = 0;
  }
  return;
}


