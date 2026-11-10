/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191115c; name: FUN_0191115c
 */


void FUN_0191115c(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *local_128 [2];
  undefined8 *local_118 [2];
  long *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined2 local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  if ((*(byte *)(param_1 + 200) >> 5 & 1) == 0) {
    uVar15 = *(undefined8 *)(param_1 + 8);
    plVar14 = *(long **)(*param_3 + 0x5e8);
    if (plVar14 != (long *)0x0) {
      plVar17 = plVar14 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar16 = *(long *)(param_2 + 0x70);
    if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
      piVar1 = (int *)(lVar16 + 0xc);
      iVar11 = *(int *)(lVar16 + 0xc);
      do {
        plVar17 = *(long **)(lVar16 + 0x10);
        lVar13 = FUN_01913b5c();
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_019111b8;
          if (plVar17 == (long *)lVar13) break;
          plVar17 = (long *)*plVar17;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0191121c;
          lVar16 = *(long *)(lVar16 + 0x18);
          plVar17 = (long *)0x0;
          if (lVar16 != 0) {
            plVar17 = (long *)(lVar16 + -0x50);
          }
          if ((plVar14 != (long *)0x0) && (lVar16 != 0)) {
            FUN_01b75890(plVar17);
            uVar10 = FUN_02c50554();
            FUN_02c5d640(plVar14,uVar10);
            plVar18 = plVar14 + 10;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = (int)*plVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            local_78 = plVar14;
            FUN_010a0768(uVar15,&local_78,0,0);
            if (local_78 != (long *)0x0) {
              plVar19 = local_78 + 10;
              do {
                iVar11 = (int)*plVar19 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar4) {
                  *(int *)plVar19 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_78 + 0x10))();
              }
            }
            local_b0 = 0x100000000;
            uStack_a8 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_98 = 0;
            local_a0 = 0;
            local_80 = 0;
            local_d0 = 0;
            uStack_c8 = 0;
            local_e0 = 0;
            uStack_d8 = 0;
            local_f0 = 0;
            uStack_e8 = 0;
            local_100 = 0;
            uStack_f8 = 0;
            local_90 = &DAT_cbf29ce484222645;
            puStack_88 = &DAT_cbf29ce484222645;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = (int)*plVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            local_108 = plVar14;
            FUN_01906830(&local_100,&local_108,uVar15);
            if (local_108 != (long *)0x0) {
              plVar18 = local_108 + 10;
              do {
                iVar11 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 == 0) {
                (**(code **)(*local_108 + 0x10))();
              }
            }
            FUN_019084e4(&local_100,param_2 + 0xa0);
            uStack_a8._0_5_ = CONCAT14(1,(undefined4)uStack_a8);
            local_80 = CONCAT11(local_80._1_1_,1);
            iVar11 = FUN_01b9a164(*param_3);
            local_80 = CONCAT11(iVar11 == 1,(undefined1)local_80);
            local_a0 = CONCAT11(*(undefined1 *)(param_2 + 0xe4),(undefined1)local_a0);
            iVar11 = FUN_01907760(&local_100);
            if ((iVar11 == 0) &&
               (FUN_01a73650(local_118,*param_3), puVar5 = local_118[0], puVar9 = PTR_DAT_043794d0,
               puVar8 = PTR_DAT_043794c8, puVar7 = PTR_DAT_043794b8, puVar6 = PTR_DAT_043794b0,
               local_118[0] != (undefined8 *)0x0)) {
              if (*(int *)((long)local_118[0] + 0xc) == 0) {
LAB_01911604:
                plVar18 = (long *)0x0;
                puVar5 = local_118[0];
              }
              else {
                piVar1 = (int *)((long)local_118[0] + 0xc);
                iVar11 = *(int *)((long)local_118[0] + 0xc);
                while( true ) {
                  plVar18 = (long *)puVar5[2];
                  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                    if (((*PTR_DAT_043794c0 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
                      if (((*puVar9 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                        uVar15 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                        __cxa_guard_release(puVar9);
                      }
                      *(undefined **)puVar8 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_043794c0);
                    }
                    *(undefined **)puVar7 = puVar8;
                    __cxa_guard_release(puVar6);
                    if (plVar18 != (long *)0x0) goto LAB_01911464;
                    goto LAB_01911604;
                  }
                  while( true ) {
                    if (plVar18 == (long *)0x0) goto LAB_01911604;
LAB_01911464:
                    if (plVar18 == (long *)puVar7) break;
                    plVar18 = (long *)*plVar18;
                  }
                  iVar12 = *piVar1;
                  if (iVar12 == iVar11) break;
                  ClearExclusiveLocal();
LAB_0191144c:
                  iVar11 = iVar12;
                  if (iVar12 == 0) goto LAB_01911604;
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_0191144c;
                lVar16 = puVar5[3];
                plVar18 = (long *)0x0;
                puVar5 = local_118[0];
                if (lVar16 != 0) {
                  plVar18 = (long *)(lVar16 + -0x50);
                }
              }
              local_118[0] = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar5 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  puVar5[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = *puVar5;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              if (plVar18 != (long *)0x0) {
                lVar16 = FUN_008b2378(plVar18 + 0x1e,local_118);
                if (lVar16 != 0) {
                  if (((*PTR_DAT_04379618 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379618), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379618);
                  }
                  *(undefined8 *)PTR_DAT_04379628 = *(undefined8 *)PTR_DAT_04379620;
                  FUN_00ae4f84(local_118);
                  puVar5 = local_118[0];
                  puVar7 = PTR_DAT_04379638;
                  puVar6 = PTR_DAT_04379630;
                  if (local_118[0] != (undefined8 *)0x0) {
                    if (*(int *)((long)local_118[0] + 0xc) == 0) {
LAB_01911710:
                      plVar19 = (long *)0x0;
                      puVar5 = local_118[0];
                    }
                    else {
                      piVar1 = (int *)((long)local_118[0] + 0xc);
                      iVar11 = *(int *)((long)local_118[0] + 0xc);
                      while( true ) {
                        plVar19 = (long *)puVar5[2];
                        if (((*puVar6 & 1) == 0) &&
                           (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                          uVar15 = FUN_008b2784();
                          *(undefined8 *)puVar7 = uVar15;
                          __cxa_guard_release(puVar6);
                        }
                        while( true ) {
                          if (plVar19 == (long *)0x0) goto LAB_01911710;
                          if (plVar19 == (long *)puVar7) break;
                          plVar19 = (long *)*plVar19;
                        }
                        iVar12 = *piVar1;
                        if (iVar12 == iVar11) break;
                        ClearExclusiveLocal();
LAB_01911708:
                        iVar11 = iVar12;
                        if (iVar12 == 0) goto LAB_01911710;
                      }
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar11 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 != '\0') goto LAB_01911708;
                      lVar13 = puVar5[3];
                      plVar19 = (long *)0x0;
                      puVar5 = local_118[0];
                      if (lVar13 != 0) {
                        plVar19 = (long *)(lVar13 + -0x50);
                      }
                    }
                    local_118[0] = puVar5;
                    if (puVar5 != (undefined8 *)0x0) {
                      piVar1 = (int *)(puVar5 + 1);
                      do {
                        iVar11 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar11 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar11 + -1 == 0) {
                        puVar5[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar13 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar13;
                        local_70[0] = *puVar5;
                        FUN_02a44274(lVar13 + 0xd8,local_70);
                      }
                    }
                    if (plVar19 != (long *)0x0) {
                      FUN_00d0ad3c(local_128,lVar16);
                      FUN_00d0bcb0(plVar19,local_128);
                      if (local_128[0] != (long *)0x0) {
                        plVar2 = local_128[0] + 1;
                        do {
                          iVar11 = (int)*plVar2 + -1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar4) {
                            *(int *)plVar2 = iVar11;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar11 == 0) {
                          local_128[0][2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar16 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar16;
                          local_118[0] = (undefined8 *)*local_128[0];
                          FUN_02a44274(lVar16 + 0xd8,local_118);
                        }
                      }
                      lVar16 = plVar19[0xb];
                      piVar1 = (int *)(lVar16 + 0xc);
                      do {
                        iVar11 = *piVar1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar11 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar11 + -1 == 0) {
                        *(undefined8 *)(lVar16 + 0x18) = 0;
                        (**(code **)(*plVar19 + 0x20))(plVar19);
                      }
                    }
                  }
                }
                lVar16 = plVar18[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar18 + 0x20))(plVar18);
                }
              }
            }
            FUN_008a7624(&local_100);
LAB_01911398:
            lVar16 = plVar17[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 != 0) break;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
            if (plVar14 == (long *)0x0) {
              return;
            }
            goto LAB_019111bc;
          }
          if (lVar16 != 0) goto LAB_01911398;
          break;
        }
        ClearExclusiveLocal();
LAB_0191121c:
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_019111b8:
    if (plVar14 != (long *)0x0) {
LAB_019111bc:
      plVar17 = plVar14 + 10;
      do {
        iVar11 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  return;
}


