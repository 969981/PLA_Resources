/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d52d24; name: FUN_01d52d24
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01d52d24(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  long *local_d0;
  long *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_a0;
  long *local_98;
  long *local_90;
  undefined8 *local_88 [2];
  long *local_78;
  long *local_70 [2];
  
  puVar10 = PTR_DAT_0437a0f0;
  puVar9 = PTR_DAT_0437a0e8;
  puVar24 = (undefined8 *)PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar22 = *(long *)(param_1 + 0x80);
  if ((lVar22 != 0) && (*(int *)(lVar22 + 0xc) != 0)) {
    piVar1 = (int *)(lVar22 + 0xc);
    iVar12 = *(int *)(lVar22 + 0xc);
    do {
      plVar29 = *(long **)(lVar22 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *puVar24 = uVar14;
          __cxa_guard_release(puVar6);
        }
        *(undefined8 **)puVar10 = puVar24;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar29 == (long *)0x0) goto LAB_01d52e58;
        if (plVar29 == (long *)puVar10) break;
        plVar29 = (long *)*plVar29;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar8 = PTR_DAT_043796e8;
        puVar7 = PTR_DAT_043796e0;
        if (cVar2 == '\0') {
          lVar22 = *(long *)(lVar22 + 0x18);
          if (lVar22 != 0) {
            lVar26 = *(long *)(param_1 + 0x90);
            if ((lVar26 == 0) || (*(int *)(lVar26 + 0xc) == 0)) goto LAB_01d52dc8;
            piVar1 = (int *)(lVar26 + 0xc);
            iVar12 = *(int *)(lVar26 + 0xc);
            goto LAB_01d52ec8;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01d52e58:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_01d52ec8:
  plVar29 = *(long **)(lVar26 + 0x10);
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      uVar14 = FUN_0087f8f0();
      *puVar24 = uVar14;
      __cxa_guard_release(puVar6);
    }
    *(undefined8 **)puVar8 = puVar24;
    __cxa_guard_release(puVar7);
  }
  while( true ) {
    if (plVar29 == (long *)0x0) goto LAB_01d52dc8;
    if (plVar29 == (long *)puVar8) break;
    plVar29 = (long *)*plVar29;
  }
  iVar11 = *piVar1;
  if (iVar11 == iVar12) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar26 = *(long *)(lVar26 + 0x18);
      plVar29 = (long *)(lVar26 + -0x50);
      if (lVar26 != 0) {
        if (((*PTR_DAT_0437a780 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a780);
        }
        *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
        FUN_01e654fc(&local_c8);
        if (local_c8 == (long *)0x0) {
          local_78 = (long *)0x0;
        }
        else {
          FUN_01523304(&local_78);
          plVar21 = local_c8;
          if (local_c8 != (long *)0x0) {
            plVar23 = local_c8 + 1;
            do {
              iVar12 = (int)*plVar23 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar3) {
                *(int *)plVar23 = iVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 == 0) {
              local_c8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_88[0] = (undefined8 *)*plVar21;
              FUN_02a44274(lVar15 + 0xd8,local_88);
            }
          }
        }
        if (local_78 != (long *)0x0) {
          FUN_0199c304(local_88,plVar29);
          if (local_88[0] != (undefined8 *)0x0) {
            FUN_009acf14(&local_90);
            puVar20 = local_88[0];
            if (local_90 != (long *)0x0) {
              local_c8 = *(long **)(lVar22 + 0x40);
              local_c0 = *(long *)(lVar22 + 0x48);
              FUN_015222cc(local_70,*(undefined8 *)(param_1 + 8),&local_c8);
              uVar17 = local_78[0x79];
              local_98 = local_70[0];
              if (uVar17 == 0) {
LAB_01d53184:
                FUN_01d54550();
              }
              else {
                uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
                uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
                uVar16 = *(ulong *)(*(long *)(param_1 + 0x138) + 0xb8);
                uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar18 < 2) {
                  uVar19 = uVar16 & uVar17 - 1;
                }
                else {
                  uVar19 = uVar16;
                  if (uVar17 <= uVar16) {
                    uVar19 = 0;
                    if (uVar17 != 0) {
                      uVar19 = uVar16 / uVar17;
                    }
                    uVar19 = uVar16 - uVar19 * uVar17;
                  }
                }
                puVar20 = *(undefined8 **)(local_78[0x78] + uVar19 * 8);
                if ((puVar20 == (undefined8 *)0x0) ||
                   (puVar24 = (undefined8 *)*puVar20, puVar24 == (undefined8 *)0x0))
                goto LAB_01d53184;
                if (uVar18 < 2) {
                  do {
                    if (puVar24[1] == uVar16) {
                      if (puVar24[2] == uVar16) goto LAB_01d53188;
                    }
                    else if ((puVar24[1] & uVar17 - 1) != uVar19) break;
                    puVar24 = (undefined8 *)*puVar24;
                  } while (puVar24 != (undefined8 *)0x0);
                  goto LAB_01d53184;
                }
                while( true ) {
                  uVar18 = puVar24[1];
                  if (uVar18 != uVar16) {
                    if (uVar17 <= uVar18) {
                      uVar4 = 0;
                      if (uVar17 != 0) {
                        uVar4 = uVar18 / uVar17;
                      }
                      uVar18 = uVar18 - uVar4 * uVar17;
                    }
                    if (uVar18 == uVar19) goto LAB_01d53144;
                    goto LAB_01d53184;
                  }
                  if (puVar24[2] == uVar16) break;
LAB_01d53144:
                  puVar24 = (undefined8 *)*puVar24;
                  if (puVar24 == (undefined8 *)0x0) goto LAB_01d53184;
                }
              }
LAB_01d53188:
              plVar23 = (long *)puVar24[4];
              plVar21 = (long *)puVar24[6];
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x18))(plVar21);
              }
              plVar27 = (long *)puVar24[8];
              plVar28 = (long *)puVar24[10];
              if (plVar28 == (long *)0x0) {
                plVar25 = (long *)puVar24[0x11];
              }
              else {
                (**(code **)(*plVar28 + 0x18))(plVar28);
                plVar25 = (long *)puVar24[0x11];
              }
              if (plVar25 != (long *)0x0) {
                (**(code **)(*plVar25 + 0x18))(plVar25);
              }
              local_70[0] = plVar23;
              FUN_009f1b84(&local_c8,local_70);
              plVar23 = local_98;
              plVar13 = (long *)local_98[0xf];
              local_98[0xf] = 0;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x20))();
              }
              plVar13 = local_c8;
              local_c8 = (long *)0x0;
              plVar23[0xf] = (long)plVar13;
              plVar23[0x10] = local_c0;
              plVar23[0x11] = local_b8;
              plVar13 = (long *)plVar23[0x13];
              plVar23[0x12] = local_b0;
              plVar23[0x13] = 0;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x20))();
              }
              lVar15 = local_a8;
              local_a8 = 0;
              plVar23[0x13] = lVar15;
              *(undefined4 *)(plVar23 + 0x14) = local_a0;
              if (local_c8 != (long *)0x0) {
                (**(code **)(*local_c8 + 0x20))();
              }
              local_70[0] = plVar27;
              FUN_009f1b84(&local_c8,local_70);
              plVar23 = local_98;
              plVar27 = (long *)local_98[0x15];
              local_98[0x15] = 0;
              if (plVar27 != (long *)0x0) {
                (**(code **)(*plVar27 + 0x20))();
              }
              plVar27 = local_c8;
              local_c8 = (long *)0x0;
              plVar23[0x15] = (long)plVar27;
              plVar23[0x16] = local_c0;
              plVar23[0x17] = local_b8;
              plVar27 = (long *)plVar23[0x19];
              plVar23[0x18] = local_b0;
              plVar23[0x19] = 0;
              if (plVar27 != (long *)0x0) {
                (**(code **)(*plVar27 + 0x20))();
              }
              lVar15 = local_a8;
              local_a8 = 0;
              plVar23[0x19] = lVar15;
              *(undefined4 *)(plVar23 + 0x1a) = local_a0;
              if (local_c8 != (long *)0x0) {
                (**(code **)(*local_c8 + 0x20))();
              }
              lVar15 = *(long *)(param_1 + 0x138);
              local_98[0x35] = *(long *)(lVar15 + 0x78);
              local_98[0x34] = *(long *)(lVar15 + 0x70);
              lVar15 = *(long *)(param_1 + 0x138);
              local_98[0x37] = *(long *)(lVar15 + 0x88);
              local_98[0x36] = *(long *)(lVar15 + 0x80);
              lVar15 = *(long *)(param_1 + 0x138);
              local_98[0x39] = *(long *)(lVar15 + 0x98);
              local_98[0x38] = *(long *)(lVar15 + 0x90);
              plVar23 = (long *)local_90[0x10];
              if (plVar23 != (long *)0x0) {
                lVar15 = plVar23[0xb];
                if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01d52e58;
                if (*(long *)(lVar15 + 0x10) == 0) {
                  uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                  *(undefined8 *)(lVar15 + 0x10) = uVar14;
                }
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              local_150 = &LAB_01d5455c;
              local_148 = FUN_01d54ce8;
              local_140 = &LAB_01d54cec;
              local_138 = &LAB_01d54cf8;
              alStack_130[0] = param_1;
              FUN_01522350(&local_d0,plVar23,1,&local_98,&local_150,0);
              pcVar5 = local_148;
              if (local_d0 != (long *)0x0) {
                lVar15 = local_d0[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
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
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_d0 + 0x20))();
                  pcVar5 = local_148;
                  local_148 = (code *)0x0;
                }
              }
              if (pcVar5 != (code *)0x0) {
                local_140 = (undefined1 *)0x0;
                local_138 = (undefined1 *)0x0;
                local_150 = (undefined1 *)0x0;
                local_148 = (code *)0x0;
                (*pcVar5)(alStack_130);
              }
              if (plVar23 != (long *)0x0) {
                lVar15 = plVar23[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
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
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*plVar23 + 0x20))(plVar23);
                }
              }
              *(undefined1 *)(param_1 + 0x150) = 0;
              if (plVar25 != (long *)0x0) {
                (**(code **)(*plVar25 + 0x20))(plVar25);
              }
              if (plVar28 != (long *)0x0) {
                (**(code **)(*plVar28 + 0x20))(plVar28);
              }
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x20))(plVar21);
              }
              if (local_98 != (long *)0x0) {
                lVar15 = local_98[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
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
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_98 + 0x20))();
                }
              }
              puVar20 = local_88[0];
              if (local_90 != (long *)0x0) {
                lVar15 = local_90[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
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
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_90 + 0x20))();
                  puVar20 = local_88[0];
                }
              }
            }
            local_88[0] = puVar20;
            if (puVar20 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar20 + 1);
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
                puVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_c8 = (long *)*puVar20;
                FUN_02a44274(lVar15 + 0xd8,&local_c8);
              }
            }
          }
          if (local_78 != (long *)0x0) {
            lVar15 = local_78[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
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
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
        }
        lVar26 = *(long *)(lVar26 + 8);
        piVar1 = (int *)(lVar26 + 0xc);
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
          *(undefined8 *)(lVar26 + 0x18) = 0;
          (**(code **)(*plVar29 + 0x20))(plVar29);
        }
      }
      goto LAB_01d52dc8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar12 = iVar11;
  if (iVar11 == 0) {
LAB_01d52dc8:
    lVar26 = *(long *)(lVar22 + 8);
    piVar1 = (int *)(lVar26 + 0xc);
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
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*(long *)(lVar22 + -0x50) + 0x20))();
    }
    return;
  }
  goto LAB_01d52ec8;
}


