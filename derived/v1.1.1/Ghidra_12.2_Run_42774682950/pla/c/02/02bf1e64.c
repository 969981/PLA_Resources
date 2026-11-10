/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf1e64; name: FUN_02bf1e64
 */


void FUN_02bf1e64(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 local_70;
  short local_68 [4];
  
  plVar18 = (long *)**(undefined8 **)(param_1 + 0x28);
  if (plVar18 != (long *)(*(undefined8 **)(param_1 + 0x28))[1]) {
    do {
      plVar15 = (long *)*plVar18;
      if (*(int *)((long)plVar15 + 0x7c) == 2) {
        cVar2 = *(char *)((long)plVar15 + 0x79);
        if ((char)plVar15[0xf] != cVar2) {
          *(char *)(plVar15 + 0xf) = cVar2;
          if (cVar2 == '\0') {
            pcVar8 = *(code **)(*plVar15 + 0x90);
          }
          else {
            pcVar8 = *(code **)(*plVar15 + 0x88);
          }
          (*pcVar8)(plVar15);
        }
LAB_02bf1eac:
        plVar18 = plVar18 + 1;
      }
      else {
        if (*(int *)((long)plVar15 + 0x7c) != 4) goto LAB_02bf1eac;
        if (((plVar15[0x1b] != -1) &&
            (FUN_02bf2c6c(param_1), *(char *)((long)plVar15 + 0xf5) != '\0')) &&
           ((short)plVar15[0x1c] != -1)) {
          local_68[0] = (short)plVar15[0x1c];
          nn::os::LockMutex((MutexType *)(param_1 + 0x128));
          plVar21 = *(long **)(param_1 + 0x88);
          *(undefined1 *)(param_1 + 0x108) = 1;
          lVar13 = plVar21[1];
          plVar15 = plVar21 + 3;
          if (lVar13 == plVar21[2]) {
            uVar11 = plVar21[4];
            lVar13 = lVar13 - *plVar21 >> 1;
            uVar6 = lVar13 + 1;
            if (0x7ffffffffffffffe < uVar11) {
              uVar11 = 0x7fffffffffffffff;
            }
            if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar9 = plVar21[2] - *plVar21;
            if (uVar6 <= uVar9) {
              uVar6 = uVar9;
            }
            if (uVar11 >> 1 <= (ulong)((long)uVar9 >> 1)) {
              uVar6 = uVar11;
            }
            if (uVar6 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar6 << 1,2);
              if (lVar10 == 0) {
                (**(code **)(*(long *)*plVar15 + 0xb8))();
              }
            }
            lVar13 = lVar10 + lVar13 * 2;
            FUN_02bfc138(plVar15,lVar13,local_68);
            lVar22 = *plVar21;
            lVar19 = plVar21[1];
            lVar20 = lVar13;
            if (lVar19 != lVar22) {
              do {
                lVar12 = *plVar15;
                if (((*PTR_DAT_04379520 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), iVar4 != 0)) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
                lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                if (lVar5 == 0) {
                  *(undefined2 *)(lVar20 + -2) = *(undefined2 *)(lVar19 + -2);
                }
                else {
                  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
                  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
                  *(undefined2 *)(lVar20 + -2) = *(undefined2 *)(lVar19 + -2);
                  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
                }
                lVar19 = lVar19 + -2;
                lVar20 = lVar20 + -2;
              } while (lVar22 != lVar19);
              lVar22 = *plVar21;
            }
            *plVar21 = lVar20;
            plVar21[1] = lVar13 + 2;
            lVar13 = plVar21[2];
            plVar21[2] = lVar10 + uVar6 * 2;
            if (lVar22 != 0) {
              plVar15 = (long *)*plVar15;
              uVar6 = (**(code **)(*plVar15 + 0xc0))(plVar15);
              if ((uVar6 & 1) != 0) {
                lVar10 = tpidr_el0;
                if (*(char *)(lVar10 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar10 + 0x38d488) = 1;
                  *(undefined8 *)(lVar10 + 0x38d478) = 0;
                  *(undefined8 *)(lVar10 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar10 + 0x38d480)) {
                  FUN_02bcc824(plVar15,lVar22,lVar13 - lVar22,2);
                  goto LAB_02bf2180;
                }
              }
              (**(code **)(*plVar15 + 0x18))(plVar15,lVar22,lVar13 - lVar22,2);
            }
          }
          else {
            FUN_02bfc138(plVar15,lVar13,local_68);
            plVar21[1] = plVar21[1] + 2;
          }
LAB_02bf2180:
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
        }
        lVar13 = *(long *)(param_1 + 0x28);
        plVar15 = plVar18 + 1;
        plVar17 = *(long **)(lVar13 + 8);
        plVar21 = plVar18;
        plVar7 = plVar18;
        if (plVar15 != plVar17) {
          do {
            plVar7 = (long *)*plVar21;
            *plVar21 = 0;
            if (plVar7 != (long *)0x0) {
              lVar10 = plVar7[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar4 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))();
              }
            }
            lVar10 = *plVar15;
            plVar16 = plVar15 + 1;
            *plVar15 = 0;
            plVar7 = plVar21 + 1;
            *plVar21 = lVar10;
            plVar15 = plVar16;
            plVar21 = plVar7;
          } while (plVar16 != plVar17);
          plVar15 = *(long **)(lVar13 + 8);
          goto LAB_02bf2268;
        }
        do {
          plVar15 = plVar15 + -1;
          plVar21 = (long *)*plVar15;
          if (plVar21 != (long *)0x0) {
            lVar10 = plVar21[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))();
            }
          }
LAB_02bf2268:
        } while (plVar15 != plVar7);
        *(long **)(lVar13 + 8) = plVar7;
      }
    } while (plVar18 != *(long **)(*(long *)(param_1 + 0x28) + 8));
  }
  puVar14 = *(undefined8 **)(param_1 + 0x48);
  plVar18 = (long *)*puVar14;
  if (plVar18 != (long *)puVar14[1]) {
    do {
      plVar15 = (long *)*plVar18;
      iVar4 = *(int *)((long)plVar15 + 0x7c);
      if (iVar4 == 2) {
        cVar2 = *(char *)((long)plVar15 + 0x79);
        if ((char)plVar15[0xf] != cVar2) {
          *(char *)(plVar15 + 0xf) = cVar2;
          if (cVar2 == '\0') {
            (**(code **)(*plVar15 + 0x90))();
          }
          else {
            (**(code **)(*plVar15 + 0x88))();
          }
        }
LAB_02bf22cc:
        plVar18 = plVar18 + 1;
      }
      else {
        if (iVar4 == 3) {
          lVar13 = plVar15[0x1a];
          plVar15 = *(long **)(param_1 + 8);
          plVar21 = (long *)(lVar13 + 0x38);
          if (*plVar21 != -1) {
            iVar4 = (**(code **)(*plVar15 + 0x100))(plVar15);
            if (iVar4 != 0) {
              (**(code **)(*plVar15 + 0xd8))(plVar15,plVar21,1,0);
            }
            *(undefined8 *)(lVar13 + 0x38) = 0xffffffffffffffff;
          }
          goto LAB_02bf22cc;
        }
        if (iVar4 != 4) goto LAB_02bf22cc;
        if (plVar15[0x66] != -1) {
          FUN_02bf2c6c(param_1);
          puVar14 = *(undefined8 **)(param_1 + 0x48);
        }
        plVar17 = (long *)puVar14[1];
        plVar15 = plVar18 + 1;
        plVar21 = plVar18;
        plVar7 = plVar18;
        if (plVar15 != plVar17) {
          do {
            plVar7 = (long *)*plVar21;
            *plVar21 = 0;
            if (plVar7 != (long *)0x0) {
              lVar13 = plVar7[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar4 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar4 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))();
              }
            }
            lVar13 = *plVar15;
            plVar16 = plVar15 + 1;
            *plVar15 = 0;
            plVar7 = plVar21 + 1;
            *plVar21 = lVar13;
            plVar15 = plVar16;
            plVar21 = plVar7;
          } while (plVar16 != plVar17);
          plVar15 = (long *)puVar14[1];
          goto LAB_02bf2408;
        }
        do {
          plVar15 = plVar15 + -1;
          plVar21 = (long *)*plVar15;
          if (plVar21 != (long *)0x0) {
            lVar13 = plVar21[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))();
            }
          }
LAB_02bf2408:
        } while (plVar15 != plVar7);
        puVar14[1] = plVar7;
      }
      puVar14 = *(undefined8 **)(param_1 + 0x48);
    } while (plVar18 != (long *)puVar14[1]);
  }
  if (*(char *)(param_1 + 0x108) != '\0') {
    *(undefined1 *)(param_1 + 0x108) = 0;
    puVar14 = (undefined8 *)**(long **)(param_1 + 0xe8);
    if (puVar14 != (undefined8 *)(*(long **)(param_1 + 0xe8))[1]) {
      do {
        local_70 = *puVar14;
        lVar13 = (**(code **)(**(long **)(param_1 + 8) + 0x2f0))();
        if (*(int *)(lVar13 + 0x34) != 0x7fffffff) {
          (**(code **)(**(long **)(param_1 + 8) + 0x308))();
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x2a0))(*(long **)(param_1 + 8),&local_70,1,0);
        puVar14 = puVar14 + 1;
      } while (puVar14 != *(undefined8 **)(*(long *)(param_1 + 0xe8) + 8));
    }
    if (0 < (int)((ulong)((*(long **)(param_1 + 0xa8))[1] - **(long **)(param_1 + 0xa8)) >> 3)) {
      (**(code **)(**(long **)(param_1 + 8) + 0xe0))();
    }
    if (0 < (int)((ulong)((*(long **)(param_1 + 200))[1] - **(long **)(param_1 + 200)) >> 1)) {
      (**(code **)(**(long **)(param_1 + 8) + 0x98))();
    }
    if (0 < (int)((ulong)((*(long **)(param_1 + 0x88))[1] - **(long **)(param_1 + 0x88)) >> 1)) {
      (**(code **)(**(long **)(param_1 + 8) + 0x88))();
    }
    (*(undefined8 **)(param_1 + 0xe8))[1] = **(undefined8 **)(param_1 + 0xe8);
    (*(undefined8 **)(param_1 + 0xa8))[1] = **(undefined8 **)(param_1 + 0xa8);
    (*(undefined8 **)(param_1 + 200))[1] = **(undefined8 **)(param_1 + 200);
    (*(undefined8 **)(param_1 + 0x88))[1] = **(undefined8 **)(param_1 + 0x88);
  }
  return;
}


