/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f65918; name: FUN_01f65918
 */


/* WARNING: Removing unreachable block (ram,0x01f667b8) */

void FUN_01f65918(long param_1,long *param_2,int *param_3,code *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined *puVar24;
  long *local_198;
  long *local_190;
  long *local_188;
  long *local_180;
  code *local_178;
  undefined *local_170;
  long *local_168;
  undefined1 auStack_160 [96];
  long *local_100;
  undefined8 uStack_f8;
  long *local_70;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  FUN_017e9e98(&local_188);
  if (local_188 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    plVar23 = (long *)0x0;
    local_190 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_190);
    if (local_190 != (long *)0x0) {
      if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
         (uVar16 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar16 == 0)) {
        uVar13 = 0;
        lVar15 = *(long *)(param_1 + 0x68);
      }
      else {
        uVar13 = *(undefined8 *)((long)param_3 + uVar16);
        lVar15 = *(long *)(param_1 + 0x68);
      }
      if (lVar15 == 0) {
        plVar23 = (long *)0x0;
        local_198 = (long *)0x0;
        goto joined_r0x01f65bec;
      }
      FUN_009acf14(&local_198);
      if (local_198 != (long *)0x0) {
        local_100 = (long *)0x0;
        uStack_f8 = 0;
        FUN_00b645bc(&local_100,local_198 + 0xd);
        plVar23 = local_100;
        puVar8 = PTR_DAT_0437a0f0;
        if (local_100 == (long *)0x0) {
          plVar23 = (long *)0x0;
          goto joined_r0x01f66834;
        }
        if (*(int *)((long)local_100 + 0xc) != 0) {
          piVar1 = (int *)((long)local_100 + 0xc);
          iVar12 = *(int *)((long)local_100 + 0xc);
          do {
            puVar20 = (undefined8 *)plVar23[2];
            if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar11 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar8 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a0e8);
            }
            plVar21 = (long *)0x0;
            if (puVar20 == (undefined8 *)0x0) goto LAB_01f65d04;
            while (puVar20 != (undefined8 *)puVar8) {
              puVar20 = (undefined8 *)*puVar20;
              if (puVar20 == (undefined8 *)0x0) {
                plVar21 = (long *)0x0;
                goto LAB_01f65d04;
              }
            }
            iVar11 = *piVar1;
            if (iVar11 == iVar12) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar15 = plVar23[3];
                plVar21 = (long *)0x0;
                if (lVar15 != 0) {
                  plVar21 = (long *)(lVar15 + -0x50);
                }
                goto LAB_01f65d04;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar11;
          } while (iVar11 != 0);
        }
        plVar21 = (long *)0x0;
LAB_01f65d04:
        plVar23 = local_100;
        puVar8 = PTR_DAT_04379498;
        if (local_100 != (long *)0x0) {
          plVar22 = local_100 + 1;
          do {
            iVar12 = (int)*plVar22 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar5) {
              *(int *)plVar22 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            local_100[2] = 0;
            if (((*puVar8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_180 = (long *)*plVar23;
            FUN_02a44274(lVar15 + 0xd8,&local_180);
          }
        }
        if (plVar21 != (long *)0x0) {
          uVar16 = FUN_01845504(plVar21,uVar13);
          puVar24 = PTR_DAT_04379528;
          puVar8 = PTR_DAT_04379520;
          if ((uVar16 & 1) == 0) {
            plVar22 = *(long **)param_4;
            if (plVar22 == (long *)0x0) {
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar9 = PTR_DAT_04379528;
                if (iVar12 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              param_4 = (code *)nn::os::GetTlsValue(*(undefined4 *)puVar24);
              if (0xf < *(ulong *)(param_4 + 0x80)) {
LAB_01f6683c:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(param_4 + *(ulong *)(param_4 + 0x80) * 8) = param_2;
              *(long *)(param_4 + 0x80) = *(long *)(param_4 + 0x80) + 1;
              plVar22 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xf0,0x10);
              if (plVar22 == (long *)0x0) {
                (**(code **)(*param_2 + 0xb8))(param_2);
              }
              FUN_01c9973c(plVar22,param_3,param_2);
              plVar22[1] = (long)param_2;
              plVar22[2] = (long)plVar22;
              plVar22[3] = 0xf0;
              plVar22[4] = 0x10;
              *(long *)(param_4 + 0x80) = *(long *)(param_4 + 0x80) + -1;
              plVar23 = param_2;
              if (plVar22 != (long *)0x0) goto LAB_01f65ea0;
            }
            else {
LAB_01f65ea0:
              plVar23 = (long *)plVar22[0xb];
              if ((undefined8 *)plVar23[3] == (undefined8 *)0x0) goto LAB_01f666b4;
              if (plVar23[2] == 0) {
                lVar15 = (*(code *)**(undefined8 **)plVar23[3])();
                plVar23[2] = lVar15;
              }
              piVar1 = (int *)((long)plVar23 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            if ((char)plVar22[0x16] == '\0') {
              plVar23 = (long *)0x0;
              goto joined_r0x01f65fa0;
            }
            lVar15 = local_198[0xf];
            local_170 = (undefined *)0x0;
            local_168 = (long *)0x0;
            local_180 = (long *)0x0;
            local_178 = (code *)0x0;
            if (*(char *)(lVar15 + 0x162) != '\0') goto LAB_01f66328;
            uVar16 = *(ulong *)(lVar15 + 0x70);
            if (uVar16 != 0) {
              uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
              uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar17 < 2) {
                uVar18 = (ulong)((uint)uVar16 - 1) & 8;
              }
              else {
                uVar18 = 8;
                if (uVar16 < 9) {
                  uVar3 = (uint)uVar16 & 0xff;
                  uVar6 = 0;
                  if ((uVar16 & 0xff) != 0) {
                    uVar6 = 8 / uVar3;
                  }
                  uVar18 = (ulong)(8 - uVar6 * uVar3);
                }
              }
              plVar19 = *(long **)(*(long *)(lVar15 + 0x68) + uVar18 * 8);
              if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0))
              {
                if (uVar17 < 2) {
                  do {
                    if (plVar19[1] == 8) {
                      if ((int)plVar19[2] == 8) goto LAB_01f662c0;
                    }
                    else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
                    plVar19 = (long *)*plVar19;
                  } while (plVar19 != (long *)0x0);
                }
                else {
                  do {
                    uVar17 = plVar19[1];
                    if (uVar17 == 8) {
                      if ((int)plVar19[2] == 8) goto LAB_01f662c0;
                    }
                    else {
                      if (uVar16 <= uVar17) {
                        uVar7 = 0;
                        if (uVar16 != 0) {
                          uVar7 = uVar17 / uVar16;
                        }
                        uVar17 = uVar17 - uVar7 * uVar16;
                      }
                      if (uVar17 != uVar18) break;
                    }
                    plVar19 = (long *)*plVar19;
                  } while (plVar19 != (long *)0x0);
                }
              }
            }
            FUN_01f7c2e0();
            goto LAB_01f6617c;
          }
          if (*(ushort *)((long)param_3 - (long)*param_3) < 0xd) {
            local_100 = (long *)0x0;
          }
          else {
            uVar16 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[6];
            local_100 = (long *)0x0;
            if (uVar16 != 0) {
              puVar2 = (uint *)((long)param_3 + uVar16);
              local_100 = (long *)((long)puVar2 + (ulong)*puVar2);
            }
          }
          FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
          (**(code **)(*local_180 + 0x18))(&local_100);
          if ((char)local_100 == '\0') {
            FUN_01847304(plVar21,uVar13);
            if ((char)local_100 != '\0') goto LAB_01f66050;
          }
          else {
LAB_01f66050:
            local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
          }
          plVar22 = local_180;
          local_180 = (long *)0x0;
          if (plVar22 != (long *)0x0) {
            FUN_02bcbe58(&local_100,0);
            (**(code **)(*plVar22 + 8))(plVar22);
            plVar23 = local_168;
            puVar24 = local_170;
            param_4 = local_178;
            uVar16 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
            param_2 = (long *)tpidr_el0;
            if ((uVar16 & 1) == 0) {
LAB_01f6617c:
              (**(code **)(*(long *)param_4 + 0x18))(param_4,plVar22,puVar24,plVar23);
            }
            else {
              if ((char)param_2[0x71a91] == '\0') {
                *(undefined1 *)(param_2 + 0x71a91) = 1;
                param_2[0x71a8f] = 0;
                param_2[0x71a90] = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,param_2 + 0x1000f,&PTR_LOOP_0411a000);
              }
              if ((int)param_2[0x71a90] < 1) goto LAB_01f6617c;
              FUN_02bcc824(param_4,plVar22,puVar24,plVar23);
            }
            if ((char)param_2[0x71a91] == '\0') {
              *(undefined1 *)(param_2 + 0x71a91) = 1;
              param_2[0x71a8f] = 0;
              param_2[0x71a90] = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,param_2 + 0x1000f,&PTR_LOOP_0411a000);
            }
            iVar12 = (int)param_2[0x71a90] + -1;
            *(int *)(param_2 + 0x71a90) = iVar12;
            if (iVar12 == 0) {
              FUN_02bcc320();
              if ((char)param_2[0x71a91] == '\0') {
                *(undefined1 *)(param_2 + 0x71a91) = 1;
                param_2[0x71a8f] = 0;
                param_2[0x71a90] = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,param_2 + 0x1000f,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)((long)param_2 + 0x38d484) = 0;
            }
          }
          plVar23 = (long *)0x0;
          goto LAB_01f66800;
        }
        plVar23 = (long *)0x0;
        if (local_198 == (long *)0x0) goto joined_r0x01f65bec;
        goto LAB_01f65bbc;
      }
      plVar23 = (long *)0x0;
      if (local_190 == (long *)0x0) goto joined_r0x01f65998;
      goto LAB_01f65b44;
    }
    plVar23 = (long *)0x0;
  }
  goto joined_r0x01f65998;
LAB_01f662c0:
  lVar15 = plVar19[7];
  puVar20 = (undefined8 *)(lVar15 + 0x50);
  plVar23 = (long *)(**(code **)*puVar20)(puVar20);
  puVar9 = PTR_DAT_04382bf0;
  if (((*PTR_DAT_04382be8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04382be8), iVar12 != 0)) {
    uVar13 = FUN_01e35e7c();
    *(undefined8 *)puVar9 = uVar13;
    __cxa_guard_release(PTR_DAT_04382be8);
  }
  for (; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
    if (plVar23 == (long *)puVar9) {
      plVar23 = *(long **)(lVar15 + 0x68);
      if ((*puVar8 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar8 = PTR_DAT_04379528;
        if (iVar12 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar24);
      if (*(ulong *)(lVar15 + 0x80) < 0x10) {
        *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar23;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        lVar15 = (**(code **)(*plVar23 + 0x10))(plVar23,0x188,8);
        if (lVar15 == 0) {
          (**(code **)(*plVar23 + 0xb8))(plVar23);
                    /* WARNING: Subroutine does not return */
          FUN_00bd32e0(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0();
      }
      goto LAB_01f6683c;
    }
  }
LAB_01f66328:
  pcVar10 = local_178;
  local_70 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined *)0x0;
    local_168 = (long *)0x0;
    local_180 = (long *)0x0;
    local_178 = (code *)0x0;
    (*pcVar10)(auStack_160);
  }
  plVar23 = local_70;
  local_70 = (long *)0x0;
joined_r0x01f65fa0:
  if (plVar22 != (long *)0x0) {
    lVar15 = plVar22[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
LAB_01f66800:
  lVar15 = plVar21[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
joined_r0x01f66834:
  if (local_198 != (long *)0x0) {
LAB_01f65bbc:
    lVar15 = local_198[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
joined_r0x01f65bec:
  if (local_190 != (long *)0x0) {
LAB_01f65b44:
    lVar15 = local_190[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
joined_r0x01f65998:
  if (local_188 != (long *)0x0) {
    lVar15 = local_188[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
    }
  }
  if (plVar23 == (long *)0x0) {
    return;
  }
  lVar15 = plVar23[0xb];
  if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar13 = *(undefined8 *)(param_1 + 0x98);
    lVar15 = plVar23[0xb];
    local_100 = plVar23;
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_01cbc9e0(uVar13,&local_100,0);
      if (local_100 != (long *)0x0) {
        lVar15 = local_100[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
      lVar15 = plVar23[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
      lVar15 = plVar23[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
        return;
      }
      return;
    }
  }
LAB_01f666b4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


