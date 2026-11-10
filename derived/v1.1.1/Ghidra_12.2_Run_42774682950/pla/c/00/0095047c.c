/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095047c; name: FUN_0095047c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095047c(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined1 in_q3 [16];
  undefined8 uVar25;
  long local_88 [2];
  long *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_58;
  
  uVar25 = in_q3._8_8_;
  uVar24 = in_q3._0_8_;
  if ((*(char *)(*(long *)(param_1 + 0xa0) + 0x212) != '\0') &&
     (uVar18 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 0x90) + 0x98)),
     (uVar18 & 1) != 0)) {
    local_78 = (long *)CONCAT44(local_78._4_4_,1);
    FUN_0099d470(&local_58,*(undefined8 *)(param_1 + 200),&local_78);
    lVar21 = local_58[0x1a];
    lVar22 = *(long *)(param_1 + 0xa0);
    *(long *)(lVar22 + 0x118) = local_58[0x1b];
    *(long *)(lVar22 + 0x110) = lVar21;
    lVar21 = local_58[0x18];
    lVar22 = *(long *)(param_1 + 0xa0);
    *(long *)(lVar22 + 0x128) = local_58[0x19];
    *(long *)(lVar22 + 0x120) = lVar21;
    lVar22 = FUN_0095934c(local_58 + 0x1e,&local_78);
    if (lVar22 == 0) {
LAB_00950724:
      lVar22 = *(long *)(param_1 + 0xd8);
      pbVar6 = PTR_DAT_043794d0;
      puVar7 = (undefined8 *)PTR_DAT_043794d8;
      pbVar8 = PTR_DAT_043796e0;
      puVar9 = (undefined8 *)PTR_DAT_043796e8;
    }
    else {
      plVar20 = *(long **)(lVar22 + 0x5e8);
      if (plVar20 != (long *)0x0) {
        plVar2 = plVar20 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(long *)(plVar20[0x13] + 8) == 0) {
        uVar14 = FUN_02c5e31c(plVar20);
        uVar14 = uVar14 & 0xffff;
      }
      else {
        uVar14 = FUN_02c66e84();
      }
      uVar15 = FUN_02c66e84(plVar20[0x13]);
      if (uVar14 <= uVar15) {
        uVar15 = uVar14;
      }
      FUN_02c788b4(plVar20[0x13],uVar15);
      plVar2 = plVar20 + 10;
      do {
        iVar16 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 != 0) goto LAB_00950724;
      (**(code **)(*plVar20 + 0x10))(plVar20);
      lVar22 = *(long *)(param_1 + 0xd8);
      pbVar6 = PTR_DAT_043794d0;
      puVar7 = (undefined8 *)PTR_DAT_043794d8;
      pbVar8 = PTR_DAT_043796e0;
      puVar9 = (undefined8 *)PTR_DAT_043796e8;
    }
    PTR_DAT_043794d0 = pbVar6;
    PTR_DAT_043794d8 = (undefined *)puVar7;
    PTR_DAT_043796e0 = pbVar8;
    PTR_DAT_043796e8 = (undefined *)puVar9;
    if ((lVar22 != 0) && (*(int *)(lVar22 + 0xc) != 0)) {
      piVar1 = (int *)(lVar22 + 0xc);
      iVar16 = *(int *)(lVar22 + 0xc);
      do {
        puVar23 = *(undefined8 **)(lVar22 + 0x10);
        if (((*pbVar8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar8), iVar17 != 0)) {
          if (((*pbVar6 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar6), iVar17 != 0)) {
            uVar19 = FUN_0087f8f0();
            *puVar7 = uVar19;
            __cxa_guard_release(pbVar6);
          }
          *puVar9 = puVar7;
          __cxa_guard_release(pbVar8);
        }
        while( true ) {
          if (puVar23 == (undefined8 *)0x0) goto joined_r0x00950b50;
          if (puVar23 == puVar9) break;
          puVar23 = (undefined8 *)*puVar23;
        }
        iVar17 = *piVar1;
        if (iVar17 == iVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar22 = *(long *)(lVar22 + 0x18);
            if (lVar22 != 0) {
              plVar20 = (long *)(lVar22 + -0x50);
              FUN_019a0f18(&local_78,plVar20);
              if (local_78 == (long *)0x0) {
                local_68 = (long *)0x0;
              }
              else {
                FUN_009597b8(&local_68);
                plVar2 = local_78;
                if (local_78 != (long *)0x0) {
                  plVar3 = local_78 + 1;
                  do {
                    iVar16 = (int)*plVar3 + -1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar5) {
                      *(int *)plVar3 = iVar16;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar16 == 0) {
                    local_78[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar21 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar21;
                    local_88[0] = *plVar2;
                    FUN_02a44274(lVar21 + 0xd8,local_88);
                  }
                }
              }
              if ((local_68 != (long *)0x0) && (thunk_FUN_017faa8c(), local_68 != (long *)0x0)) {
                lVar21 = local_68[0xb];
                piVar1 = (int *)(lVar21 + 0xc);
                do {
                  iVar16 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar16 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar16 + -1 == 0) {
                  *(undefined8 *)(lVar21 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
              lVar22 = *(long *)(lVar22 + 8);
              piVar1 = (int *)(lVar22 + 0xc);
              do {
                iVar16 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar16 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar16 + -1 == 0) {
                *(undefined8 *)(lVar22 + 0x18) = 0;
                (**(code **)(*plVar20 + 0x20))(plVar20);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = iVar17;
      } while (iVar17 != 0);
    }
joined_r0x00950b50:
    if (local_58 != (long *)0x0) {
      lVar22 = local_58[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  uVar18 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 0x90) + 0x98));
  if ((uVar18 & 1) != 0) {
    local_88[0] = CONCAT44(local_88[0]._4_4_,1);
    FUN_0099d470(&local_78,*(undefined8 *)(param_1 + 200),local_88);
    if (local_78 != (long *)0x0) {
      lVar22 = FUN_0095934c(local_78 + 0x1e,local_88);
      if (lVar22 != 0) {
        plVar20 = (long *)(*(code *)**(undefined8 **)(lVar22 + 0x50))((undefined8 *)(lVar22 + 0x50))
        ;
        if (((*PTR_DAT_04379e58 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379e58), puVar10 = PTR_DAT_043795b0, iVar16 != 0)
           ) {
          if (((*PTR_DAT_043795a8 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_043795a8), puVar11 = PTR_DAT_043795c0,
             iVar16 != 0)) {
            if (((*PTR_DAT_043795b8 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_043795b8), puVar12 = PTR_DAT_043795d0,
               iVar16 != 0)) {
              if (((*PTR_DAT_043795c8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_043795c8), puVar13 = PTR_DAT_043795e0,
                 iVar16 != 0)) {
                if (((*PTR_DAT_043795d8 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar16 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
                    uVar19 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar19;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)puVar13 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043795d8);
                }
                *(undefined **)puVar12 = puVar13;
                __cxa_guard_release(PTR_DAT_043795c8);
              }
              *(undefined **)puVar11 = puVar12;
              __cxa_guard_release(PTR_DAT_043795b8);
            }
            *(undefined **)puVar10 = puVar11;
            __cxa_guard_release(PTR_DAT_043795a8);
          }
          *(undefined **)PTR_DAT_04379e60 = puVar10;
          __cxa_guard_release(PTR_DAT_04379e58);
        }
        for (; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
          if (plVar20 == (long *)PTR_DAT_04379e60) {
            if (*(int *)(*(long *)(param_1 + 0xa0) + 0x54) == 1) {
              uVar19 = 2;
            }
            else {
              uVar19 = 3;
            }
            FUN_01ae0e20(lVar22,uVar19);
            break;
          }
        }
      }
      if (local_78 != (long *)0x0) {
        lVar22 = local_78[0xb];
        piVar1 = (int *)(lVar22 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
    }
  }
  puVar13 = PTR_DAT_043796e8;
  puVar12 = PTR_DAT_043796e0;
  puVar11 = PTR_DAT_043794d8;
  puVar10 = PTR_DAT_043794d0;
  plVar20 = *(long **)(param_1 + 0x98);
  if (*(char *)((long)plVar20 + 0x34a) == '\0') goto LAB_00950608;
  lVar22 = *(long *)(param_1 + 0xd8);
  if ((lVar22 != 0) && (*(int *)(lVar22 + 0xc) != 0)) {
    piVar1 = (int *)(lVar22 + 0xc);
    iVar16 = *(int *)(lVar22 + 0xc);
    do {
      plVar20 = *(long **)(lVar22 + 0x10);
      if (((*puVar12 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar12), iVar17 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar10), iVar17 != 0)) {
          uVar19 = FUN_0087f8f0();
          *(undefined8 *)puVar11 = uVar19;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)puVar13 = puVar11;
        __cxa_guard_release(puVar12);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto LAB_009504d4;
        if (plVar20 == (long *)puVar13) break;
        plVar20 = (long *)*plVar20;
      }
      iVar17 = *piVar1;
      if (iVar17 == iVar16) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00950c74;
        lVar22 = *(long *)(lVar22 + 0x18);
        if (lVar22 != 0) {
          plVar20 = *(long **)(lVar22 + 0x48);
          if (plVar20 == (long *)0x0) goto LAB_00950cf4;
          lVar21 = plVar20[0xb];
          if (*(undefined8 **)(lVar21 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar21 + 0x10) == 0) {
              uVar19 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
              *(undefined8 *)(lVar21 + 0x10) = uVar19;
            }
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_00950cf4:
            lVar21 = *(long *)(lVar22 + 8);
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar16 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar16 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*(long *)(lVar22 + -0x50) + 0x20))();
            }
            goto joined_r0x00950d44;
          }
          goto LAB_00950d1c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_00950c74:
      iVar16 = iVar17;
    } while (iVar17 != 0);
  }
LAB_009504d4:
  plVar20 = _DAT_00000098;
  if (_DAT_00000098 == (long *)0x0) {
joined_r0x00950d44:
    if (plVar20 != (long *)0x0) goto LAB_00950518;
  }
  else {
    lVar22 = _DAT_00000098[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
LAB_00950d1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar19;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00950518:
    FUN_00956dac(&local_78,plVar20 + 0x35);
    lVar22 = FUN_0095992c(local_78 + 0x1e,local_88);
    if (local_78 != (long *)0x0) {
      lVar21 = local_78[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar16 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (lVar22 != 0) {
      FUN_00956dac(&local_78,lVar22 + 0x1a8);
      (**(code **)(*local_78 + 0x40))();
      lVar21 = *(long *)(param_1 + 0xa0);
      *(undefined8 *)(lVar21 + 0x238) = uVar25;
      *(undefined8 *)(lVar21 + 0x230) = uVar24;
      if (local_78 != (long *)0x0) {
        lVar21 = local_78[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      FUN_00956dac(&local_78,lVar22 + 0x1a8);
      lVar21 = local_78[0x18];
      lVar22 = *(long *)(param_1 + 0xa0);
      *(long *)(lVar22 + 0x248) = local_78[0x19];
      *(long *)(lVar22 + 0x240) = lVar21;
      if (local_78 != (long *)0x0) {
        lVar22 = local_78[0xb];
        piVar1 = (int *)(lVar22 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
    }
    lVar22 = plVar20[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  plVar20 = *(long **)(param_1 + 0x98);
LAB_00950608:
  if (*(char *)((long)plVar20 + 0x354) != '\0') {
    local_70 = *(undefined8 *)(param_1 + 0xa0);
    local_78 = plVar20;
    FUN_00dac178(local_88,*(undefined8 *)(param_1 + 8));
    plVar20 = (long *)FUN_00dac2fc(local_88,&local_78);
    (**(code **)(*plVar20 + 0x10))();
    thunk_FUN_00daf734(local_88);
  }
  return;
}


