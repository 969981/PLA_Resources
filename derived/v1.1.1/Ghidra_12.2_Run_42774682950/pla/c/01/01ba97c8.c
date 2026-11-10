/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba97c8; name: FUN_01ba97c8
 */


void FUN_01ba97c8(long *param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined1 uVar22;
  ulong *puVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = (long)&DAT_cbf29ce484222645;
  param_1[3] = (long)&DAT_cbf29ce484222645;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = (long)&DAT_cbf29ce484222645;
  param_1[9] = (long)&DAT_cbf29ce484222645;
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if ((*(char *)(param_2 + 0x390) == '\0') || (lVar24 = *(long *)(param_2 + 0x488), lVar24 == 0)) {
    uVar22 = 0;
  }
  else if (*(int *)(lVar24 + 0xc) == 0) {
LAB_01ba9c94:
    uVar22 = 0;
  }
  else {
    piVar14 = (int *)(lVar24 + 0xc);
    iVar10 = *(int *)(lVar24 + 0xc);
    do {
      puVar26 = *(undefined8 **)(lVar24 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar26 == (undefined8 *)0x0) goto LAB_01ba9c94;
      while (puVar26 != (undefined8 *)puVar8) {
        puVar26 = (undefined8 *)*puVar26;
        uVar22 = 0;
        if (puVar26 == (undefined8 *)0x0) goto LAB_01ba9834;
      }
      iVar9 = *piVar14;
      if (iVar9 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar24 = *(long *)(lVar24 + 0x18);
          if (lVar24 != 0) {
            local_78 = (long *)0x0;
            uStack_70 = 0;
            FUN_008802f0(&local_78,*(long *)(lVar24 + 0x58) + 0x58);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_00ca524c(&local_88,&local_78);
            plVar21 = local_78;
            if (local_78 != (long *)0x0) {
              plVar25 = local_78 + 1;
              do {
                iVar10 = (int)*plVar25 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar3) {
                  *(int *)plVar25 = iVar10;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 == 0) {
                local_78[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar12 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar12;
                local_68 = (long *)*plVar21;
                FUN_02a44274(lVar12 + 0xd8,&local_68);
              }
            }
            if (local_88 == (long *)0x0) {
              local_68 = (long *)0x0;
LAB_01ba9978:
              if (local_68 != (long *)0x0) goto LAB_01ba9980;
LAB_01ba9f94:
              uVar22 = 0;
            }
            else {
              FUN_00ca554c(&local_68);
              plVar21 = local_88;
              if (local_88 == (long *)0x0) goto LAB_01ba9978;
              plVar25 = local_88 + 1;
              do {
                iVar10 = (int)*plVar25 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar3) {
                  *(int *)plVar25 = iVar10;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 != 0) goto LAB_01ba9978;
              local_88[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_78 = (long *)*plVar21;
              FUN_02a44274(lVar12 + 0xd8,&local_78);
              if (local_68 == (long *)0x0) goto LAB_01ba9f94;
LAB_01ba9980:
              if (local_68[0xd] == 0) {
                puVar13 = (ulong *)PTR_DAT_04379c88;
              }
              else {
                puVar13 = (ulong *)(local_68[0xd] + 0x58);
              }
              puVar23 = (ulong *)(param_1 + 8);
              *puVar23 = *puVar13;
              piVar14 = *(int **)(*param_1 + 0x310);
              if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
                 (uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar16 == 0)) {
                lVar12 = 0;
              }
              else {
                lVar12 = *(long *)((long)piVar14 + uVar16);
              }
              param_1[2] = lVar12;
              if (((*PTR_DAT_04379558 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              lVar12 = *(long *)PTR_DAT_04379560;
              *(long *)PTR_DAT_04379568 = lVar12;
              plVar21 = *(long **)(lVar12 + 0x300);
              if (plVar21 == (long *)0x0) {
                uVar22 = 0;
              }
              else {
                lVar12 = plVar21[0xb];
                if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar12 + 0x10) == 0) {
                  uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                  *(undefined8 *)(lVar12 + 0x10) = uVar11;
                }
                piVar14 = (int *)(lVar12 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                  if (bVar3) {
                    *piVar14 = *piVar14 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                uVar16 = *puVar23;
                if (plVar21[0x11] == uVar16) {
                  lVar12 = 0;
LAB_01ba9b6c:
                  if ((int)plVar21[lVar12 * 10 + 0xe] == 0) goto LAB_01ba9a74;
                  if (*(long *)(*param_1 + 0x280) == 0) goto LAB_01ba9a94;
                  FUN_01934508(&local_78);
                  if (local_78 != (long *)0x0) {
                    FUN_0192ca0c(&local_88,local_78,puVar23);
                    if (local_88 == (long *)0x0) {
                      bVar3 = true;
                      if (local_78 != (long *)0x0) goto LAB_01ba9c10;
LAB_01ba9c2c:
                      if (bVar3) goto LAB_01ba9a98;
                    }
                    else {
                      param_1[4] = plVar21[lVar12 * 10 + 0x14];
                      param_1[5] = plVar21[lVar12 * 10 + 0x15];
                      *(int *)(param_1 + 6) = (int)plVar21[lVar12 * 10 + 0x16];
                      *(undefined4 *)((long)param_1 + 0x34) =
                           *(undefined4 *)((long)plVar21 + lVar12 * 0x50 + 0xb4);
                      puVar17 = (ushort *)((long)local_88 - (long)(int)*local_88);
                      if ((*puVar17 < 0x13) || (uVar16 = (ulong)puVar17[9], uVar16 == 0)) {
                        uVar22 = 0;
                      }
                      else {
                        uVar22 = (undefined1)*(undefined4 *)((long)local_88 + uVar16);
                      }
                      bVar3 = false;
                      *(undefined1 *)(param_1 + 7) = uVar22;
                      if (local_78 == (long *)0x0) goto LAB_01ba9c2c;
LAB_01ba9c10:
                      lVar12 = local_78[0xb];
                      piVar14 = (int *)(lVar12 + 0xc);
                      do {
                        iVar10 = *piVar14;
                        cVar2 = '\x01';
                        bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                        if (bVar1) {
                          *piVar14 = iVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar10 + -1 != 0) goto LAB_01ba9c2c;
                      *(undefined8 *)(lVar12 + 0x18) = 0;
                      (**(code **)(*local_78 + 0x20))();
                      if (bVar3) goto LAB_01ba9a98;
                    }
                    uVar16 = *puVar23;
                    goto LAB_01ba9a74;
                  }
LAB_01ba9a98:
                  uVar22 = 0;
                }
                else {
                  if (plVar21[0x1b] == uVar16) {
                    lVar12 = 1;
                    goto LAB_01ba9b6c;
                  }
                  if (plVar21[0x25] == uVar16) {
                    lVar12 = 2;
                    goto LAB_01ba9b6c;
                  }
                  if (plVar21[0x2f] == uVar16) {
                    lVar12 = 3;
                    goto LAB_01ba9b6c;
                  }
                  if (plVar21[0x39] == uVar16) {
                    lVar12 = 4;
                    goto LAB_01ba9b6c;
                  }
LAB_01ba9a74:
                  if (plVar21[0x40] == uVar16) {
                    plVar25 = plVar21 + 0x40;
LAB_01ba9a84:
                    if (*(long *)(*param_1 + 0x280) == 0) {
LAB_01ba9a94:
                      local_78 = (long *)0x0;
                      goto LAB_01ba9a98;
                    }
                    FUN_01934508(&local_78);
                    puVar5 = PTR_DAT_0437a780;
                    if (local_78 == (long *)0x0) goto LAB_01ba9a98;
                    if (((*PTR_DAT_0437a780 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_0437a780);
                    }
                    puVar7 = PTR_DAT_0437a790;
                    puVar6 = PTR_DAT_0437a788;
                    lVar12 = *(long *)PTR_DAT_0437a788;
                    *(long *)PTR_DAT_0437a790 = lVar12;
                    lVar12 = *(long *)(lVar12 + 0x78);
                    uVar16 = *(ulong *)(lVar12 + 0x908);
                    if (uVar16 == 0) {
LAB_01ba9dcc:
                      if (((*puVar5 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                        FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_0437a780);
                      }
                      *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
joined_r0x01baa330:
                      bVar3 = true;
                    }
                    else {
                      uVar18 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
                      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
                      uVar15 = *puVar23;
                      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38;
                      if (uVar18 < 2) {
                        uVar19 = uVar16 - 1 & uVar15;
                      }
                      else {
                        uVar19 = uVar15;
                        if (uVar16 <= uVar15) {
                          uVar19 = 0;
                          if (uVar16 != 0) {
                            uVar19 = uVar15 / uVar16;
                          }
                          uVar19 = uVar15 - uVar19 * uVar16;
                        }
                      }
                      plVar20 = *(long **)(*(long *)(lVar12 + 0x900) + uVar19 * 8);
                      if ((plVar20 == (long *)0x0) ||
                         (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0)) goto LAB_01ba9dcc;
                      if (1 < uVar18) {
                        do {
                          uVar18 = plVar20[1];
                          if (uVar18 == uVar15) {
                            if (plVar20[2] == uVar15) goto LAB_01ba9e34;
                          }
                          else {
                            if (uVar16 <= uVar18) {
                              uVar4 = 0;
                              if (uVar16 != 0) {
                                uVar4 = uVar18 / uVar16;
                              }
                              uVar18 = uVar18 - uVar4 * uVar16;
                            }
                            if (uVar18 != uVar19) break;
                          }
                          plVar20 = (long *)*plVar20;
                        } while (plVar20 != (long *)0x0);
                        goto LAB_01ba9dcc;
                      }
                      while( true ) {
                        if (plVar20[1] != uVar15) {
                          if ((plVar20[1] & uVar16 - 1) == uVar19) goto LAB_01ba9dac;
                          goto LAB_01ba9dcc;
                        }
                        if (plVar20[2] == uVar15) break;
LAB_01ba9dac:
                        plVar20 = (long *)*plVar20;
                        if (plVar20 == (long *)0x0) goto LAB_01ba9dcc;
                      }
LAB_01ba9e34:
                      if (((*puVar5 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
                        FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_0437a780);
                      }
                      *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
                      lVar12 = *(long *)(*param_1 + 0x290);
                      if (plVar25[0xf] != lVar12) {
                        if (plVar25[0x21] == lVar12) {
                          lVar12 = 1;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x33] == lVar12) {
                          lVar12 = 2;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x45] == lVar12) {
                          lVar12 = 3;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x57] == lVar12) {
                          lVar12 = 4;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x69] == lVar12) {
                          lVar12 = 5;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x7b] == lVar12) {
                          lVar12 = 6;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x8d] == lVar12) {
                          lVar12 = 7;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x9f] == lVar12) {
                          lVar12 = 8;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0xb1] == lVar12) {
                          lVar12 = 9;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0xc3] == lVar12) {
                          lVar12 = 10;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0xd5] == lVar12) {
                          lVar12 = 0xb;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0xe7] == lVar12) {
                          lVar12 = 0xc;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0xf9] == lVar12) {
                          lVar12 = 0xd;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x10b] == lVar12) {
                          lVar12 = 0xe;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x11d] == lVar12) {
                          lVar12 = 0xf;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x12f] == lVar12) {
                          lVar12 = 0x10;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x141] == lVar12) {
                          lVar12 = 0x11;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x153] == lVar12) {
                          lVar12 = 0x12;
                          goto LAB_01ba9e60;
                        }
                        if (plVar25[0x165] == lVar12) {
                          lVar12 = 0x13;
                          goto LAB_01ba9e60;
                        }
                        if (*(char *)((long)param_1 + 0xb) != '\0') goto LAB_01ba9eac;
                        param_1[2] = (long)&DAT_cbf29ce484222645;
                        param_1[3] = (long)&DAT_cbf29ce484222645;
                        goto joined_r0x01baa330;
                      }
                      lVar12 = 0;
LAB_01ba9e60:
                      param_1[2] = plVar25[lVar12 * 0x12 + 9];
                      param_1[3] = plVar25[lVar12 * 0x12 + 10];
                      param_1[4] = plVar25[lVar12 * 0x12 + 0xc];
                      param_1[5] = plVar25[lVar12 * 0x12 + 0xd];
                      *(int *)(param_1 + 6) = (int)plVar25[lVar12 * 0x12 + 0xe];
                      *(undefined4 *)((long)param_1 + 0x34) =
                           *(undefined4 *)((long)plVar25 + lVar12 * 0x90 + 0x74);
                      param_1[9] = plVar25[lVar12 * 0x12 + 0xb];
                      *(undefined1 *)((long)param_1 + 0xb) = 1;
LAB_01ba9eac:
                      piVar14 = (int *)plVar20[3];
                      if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0x21) ||
                         (uVar16 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0x10],
                         uVar16 == 0)) {
                        uVar22 = 0;
                      }
                      else {
                        uVar22 = (undefined1)*(undefined4 *)((long)piVar14 + uVar16);
                      }
                      *(undefined1 *)(param_1 + 7) = uVar22;
                      FUN_01bad44c();
                      bVar3 = false;
                    }
                    if (local_78 != (long *)0x0) {
                      lVar12 = local_78[0xb];
                      piVar14 = (int *)(lVar12 + 0xc);
                      do {
                        iVar10 = *piVar14;
                        cVar2 = '\x01';
                        bVar1 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                        if (bVar1) {
                          *piVar14 = iVar10 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar10 + -1 == 0) {
                        *(undefined8 *)(lVar12 + 0x18) = 0;
                        (**(code **)(*local_78 + 0x20))();
                      }
                    }
                    if (bVar3) goto LAB_01ba9a98;
                  }
                  else {
                    if (plVar21[0x1b0] == uVar16) {
                      plVar25 = plVar21 + 0x1b0;
                      goto LAB_01ba9a84;
                    }
                    if (plVar21[800] == uVar16) {
                      plVar25 = plVar21 + 800;
                      goto LAB_01ba9a84;
                    }
                    if (plVar21[0x490] == uVar16) {
                      plVar25 = plVar21 + 0x490;
                      goto LAB_01ba9a84;
                    }
                    if (plVar21[0x600] == uVar16) {
                      plVar25 = plVar21 + 0x600;
                      goto LAB_01ba9a84;
                    }
                  }
                  uVar22 = 1;
                }
                lVar12 = plVar21[0xb];
                piVar14 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar14;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                  if (bVar3) {
                    *piVar14 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar21 + 0x20))(plVar21);
                }
              }
              if (local_68 != (long *)0x0) {
                lVar12 = local_68[0xb];
                piVar14 = (int *)(lVar12 + 0xc);
                do {
                  iVar10 = *piVar14;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                  if (bVar3) {
                    *piVar14 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
            }
            lVar12 = *(long *)(lVar24 + 8);
            piVar14 = (int *)(lVar12 + 0xc);
            do {
              iVar10 = *piVar14;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*(long *)(lVar24 + -0x50) + 0x20))((long *)(lVar24 + -0x50));
            }
            break;
          }
          goto LAB_01ba9c94;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar22 = 0;
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01ba9834:
  *(undefined1 *)(param_1 + 1) = uVar22;
  return;
}


