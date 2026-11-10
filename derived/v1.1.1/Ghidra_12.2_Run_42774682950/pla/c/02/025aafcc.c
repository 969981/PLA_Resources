/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025aafcc; name: FUN_025aafcc
 */


void FUN_025aafcc(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined4 uVar18;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80 [2];
  undefined8 local_68;
  
  puVar10 = PTR_DAT_0437a550;
  puVar9 = PTR_DAT_0437a128;
  puVar8 = PTR_DAT_04379e90;
  puVar7 = PTR_DAT_04379e88;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d0;
  plVar17 = *(long **)(param_1 + 0x98);
  if (plVar17 == (long *)0x0) {
    return;
  }
  plVar16 = (long *)plVar17[3];
  do {
    if (plVar16 != (long *)0x0) {
      lVar14 = plVar16[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_025ab174:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar14 = plVar16[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_025ab174;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_01a73640(local_80,plVar16);
    puVar4 = local_80[0];
    if (local_80[0] != (undefined8 *)0x0) {
      if (*(int *)((long)local_80[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_80[0] + 0xc);
        iVar11 = *(int *)((long)local_80[0] + 0xc);
        do {
          plVar15 = (long *)puVar4[2];
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
                uVar13 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar8 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar15 == (long *)0x0) goto LAB_025ab24c;
            if (plVar15 == (long *)puVar8) break;
            plVar15 = (long *)*plVar15;
          }
          iVar12 = *piVar1;
          if (iVar12 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar14 = puVar4[3];
              local_88 = (long *)0x0;
              puVar4 = local_80[0];
              if (lVar14 != 0) {
                local_88 = (long *)(lVar14 + -0x50);
              }
              goto joined_r0x025ab214;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar12;
        } while (iVar12 != 0);
      }
LAB_025ab24c:
      local_88 = (long *)0x0;
      puVar4 = local_80[0];
joined_r0x025ab214:
      local_80[0] = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *puVar4;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      if (local_88 != (long *)0x0) {
        FUN_01a8b3f8(local_80,local_88);
        puVar4 = local_80[0];
        if (local_80[0] != (undefined8 *)0x0) {
          if (*(int *)((long)local_80[0] + 0xc) != 0) {
            piVar1 = (int *)((long)local_80[0] + 0xc);
            iVar11 = *(int *)((long)local_80[0] + 0xc);
            do {
              plVar15 = (long *)puVar4[2];
              if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
                uVar13 = FUN_00aa0310();
                *(undefined8 *)PTR_DAT_0437a558 = uVar13;
                __cxa_guard_release(puVar10);
              }
              while( true ) {
                if (plVar15 == (long *)0x0) goto LAB_025ab510;
                if (plVar15 == (long *)PTR_DAT_0437a558) break;
                plVar15 = (long *)*plVar15;
              }
              iVar12 = *piVar1;
              if (iVar12 == iVar11) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar14 = puVar4[3];
                  local_90 = (long *)0x0;
                  puVar4 = local_80[0];
                  if (lVar14 != 0) {
                    local_90 = (long *)(lVar14 + -0x50);
                  }
                  goto joined_r0x025ab430;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = iVar12;
            } while (iVar12 != 0);
          }
LAB_025ab510:
          local_90 = (long *)0x0;
          puVar4 = local_80[0];
joined_r0x025ab430:
          local_80[0] = puVar4;
          if (puVar4 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar4 + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              puVar4[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_68 = *puVar4;
              FUN_02a44274(lVar14 + 0xd8,&local_68);
            }
          }
          if (local_90 != (long *)0x0) {
            FUN_00a9ecd4(local_80,local_90);
            puVar4 = local_80[0];
            if (local_80[0] != (undefined8 *)0x0) {
              if (*(int *)((long)local_80[0] + 0xc) != 0) {
                piVar1 = (int *)((long)local_80[0] + 0xc);
                iVar11 = *(int *)((long)local_80[0] + 0xc);
                do {
                  plVar15 = (long *)puVar4[2];
                  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0))
                    {
                      if (((*puVar5 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
                        uVar13 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                        __cxa_guard_release(puVar5);
                      }
                      *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                      __cxa_guard_release(puVar6);
                    }
                    *(undefined **)PTR_DAT_0437a130 = PTR_DAT_043795e0;
                    __cxa_guard_release(puVar9);
                  }
                  while( true ) {
                    if (plVar15 == (long *)0x0) goto LAB_025ab680;
                    if (plVar15 == (long *)PTR_DAT_0437a130) break;
                    plVar15 = (long *)*plVar15;
                  }
                  iVar12 = *piVar1;
                  if (iVar12 == iVar11) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar11 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') {
                      lVar14 = puVar4[3];
                      local_98 = (long *)0x0;
                      puVar4 = local_80[0];
                      if (lVar14 != 0) {
                        local_98 = (long *)(lVar14 + -0x50);
                      }
                      goto joined_r0x025ab6ac;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar11 = iVar12;
                } while (iVar12 != 0);
              }
LAB_025ab680:
              local_98 = (long *)0x0;
              puVar4 = local_80[0];
joined_r0x025ab6ac:
              local_80[0] = puVar4;
              if (puVar4 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar4 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar11 + -1 == 0) {
                  puVar4[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar14;
                  local_68 = *puVar4;
                  FUN_02a44274(lVar14 + 0xd8,&local_68);
                }
              }
              if (local_98 != (long *)0x0) {
                uVar18 = *(undefined4 *)*param_2;
                if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar11 != 0)) {
                  FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_0437a0d0);
                }
                FUN_0289fdcc(uVar18,local_98,PTR_DAT_0437a0d8);
                lVar14 = local_98[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*local_98 + 0x20))();
                }
              }
            }
            lVar14 = local_90[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
            }
          }
        }
        lVar14 = local_88[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      lVar14 = plVar16[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
      lVar14 = plVar16[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) {
      return;
    }
    plVar16 = (long *)plVar17[3];
  } while( true );
}


