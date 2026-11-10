/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f72278; name: FUN_01f72278
 */


/* WARNING: Removing unreachable block (ram,0x01f73148) */

void FUN_01f72278(long param_1,long *param_2,int *param_3,code *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *local_198;
  long *local_190;
  long *local_188;
  long *local_180;
  code *local_178;
  long *local_170;
  int *local_168;
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
         (uVar18 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar18 == 0)) {
        uVar15 = 0;
        lVar17 = *(long *)(param_1 + 0x68);
      }
      else {
        uVar15 = *(undefined8 *)((long)param_3 + uVar18);
        lVar17 = *(long *)(param_1 + 0x68);
      }
      if (lVar17 == 0) {
        plVar23 = (long *)0x0;
        local_198 = (long *)0x0;
        goto joined_r0x01f7254c;
      }
      FUN_009acf14(&local_198);
      if (local_198 != (long *)0x0) {
        local_100 = (long *)0x0;
        uStack_f8 = 0;
        FUN_00b645bc(&local_100,local_198 + 0xd);
        plVar23 = local_100;
        puVar9 = PTR_DAT_0437a0f0;
        if (local_100 == (long *)0x0) {
          plVar23 = (long *)0x0;
          goto joined_r0x01f731c4;
        }
        if (*(int *)((long)local_100 + 0xc) != 0) {
          piVar1 = (int *)((long)local_100 + 0xc);
          iVar14 = *(int *)((long)local_100 + 0xc);
          do {
            puVar21 = (undefined8 *)plVar23[2];
            if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar13 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                uVar16 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar9 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a0e8);
            }
            plVar8 = (long *)0x0;
            plVar24 = local_100;
            if (puVar21 == (undefined8 *)0x0) goto joined_r0x01f72670;
            while (puVar21 != (undefined8 *)puVar9) {
              puVar21 = (undefined8 *)*puVar21;
              if (puVar21 == (undefined8 *)0x0) {
                plVar8 = (long *)0x0;
                goto joined_r0x01f72670;
              }
            }
            iVar13 = *piVar1;
            if (iVar13 == iVar14) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar17 = plVar23[3];
                plVar8 = (long *)0x0;
                if (lVar17 != 0) {
                  plVar8 = (long *)(lVar17 + -0x50);
                }
                goto joined_r0x01f72670;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar14 = iVar13;
          } while (iVar13 != 0);
        }
        plVar8 = (long *)0x0;
        plVar24 = local_100;
joined_r0x01f72670:
        local_100 = plVar24;
        if (plVar24 != (long *)0x0) {
          plVar23 = plVar24 + 1;
          do {
            iVar14 = (int)*plVar23 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar5) {
              *(int *)plVar23 = iVar14;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 == 0) {
            plVar24[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_180 = (long *)*plVar24;
            FUN_02a44274(lVar17 + 0xd8,&local_180);
          }
        }
        if (plVar8 != (long *)0x0) {
          uVar18 = FUN_01845504(plVar8,uVar15);
          puVar10 = PTR_DAT_04379528;
          puVar9 = PTR_DAT_04379520;
          if ((uVar18 & 1) == 0) {
            plVar22 = *(long **)param_4;
            if (plVar22 == (long *)0x0) {
              if (((*PTR_DAT_04379520 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar11 = PTR_DAT_04379528,
                 iVar14 != 0)) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
              param_4 = (code *)nn::os::GetTlsValue(*(undefined4 *)puVar10);
              if (0xf < *(ulong *)(param_4 + 0x80)) {
LAB_01f731cc:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(param_4 + *(ulong *)(param_4 + 0x80) * 8) = param_2;
              *(long *)(param_4 + 0x80) = *(long *)(param_4 + 0x80) + 1;
              plVar22 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x170,0x10);
              if (plVar22 == (long *)0x0) {
                (**(code **)(*param_2 + 0xb8))(param_2);
              }
              FUN_01dc2a74(plVar22,param_3,param_2);
              *plVar22 = (long)&PTR_LAB_04250df0;
              plVar22[9] = (long)&PTR_LAB_04250e40;
              plVar22[10] = (long)&PTR_LAB_04250e88;
              plVar22[0x17] = (long)&DAT_cbf29ce484222645;
              plVar22[0x18] = (long)&DAT_03996322;
              plVar22[0x19] = 0;
              plVar22[0x1a] = 0;
              plVar22[0x1b] = (long)&DAT_cbf29ce484222645;
              plVar22[0x1c] = (long)&DAT_03996322;
              plVar22[0x1d] = 0;
              plVar22[0x1e] = 0;
              plVar22[0x1f] = (long)&DAT_cbf29ce484222645;
              plVar22[0x20] = (long)&DAT_03996322;
              plVar22[0x21] = 0;
              plVar22[0x22] = 0;
              FUN_01dc2f04(plVar22,param_3);
              plVar22[1] = (long)param_2;
              plVar22[2] = (long)plVar22;
              plVar22[3] = 0x170;
              plVar22[4] = 0x10;
              *(long *)(param_4 + 0x80) = *(long *)(param_4 + 0x80) + -1;
              plVar24 = param_2;
              if (plVar22 != (long *)0x0) goto LAB_01f7285c;
            }
            else {
LAB_01f7285c:
              param_3 = (int *)plVar22[0xb];
              if (*(undefined8 **)(param_3 + 6) == (undefined8 *)0x0) goto LAB_01f73044;
              if (*(long *)(param_3 + 4) == 0) {
                uVar15 = (**(code **)**(undefined8 **)(param_3 + 6))();
                *(undefined8 *)(param_3 + 4) = uVar15;
              }
              piVar1 = param_3 + 3;
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
              goto joined_r0x01f7295c;
            }
            lVar17 = local_198[0xf];
            local_170 = (long *)0x0;
            local_168 = (int *)0x0;
            local_180 = (long *)0x0;
            local_178 = (code *)0x0;
            if (*(char *)(lVar17 + 0x162) != '\0') goto LAB_01f72ce8;
            uVar18 = *(ulong *)(lVar17 + 0x70);
            if (uVar18 != 0) {
              uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
              uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
              uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar19 < 2) {
                uVar20 = (ulong)((uint)uVar18 - 1) & 0x17;
              }
              else {
                uVar20 = 0x17;
                if (uVar18 < 0x18) {
                  uVar3 = (uint)uVar18 & 0xff;
                  uVar6 = 0;
                  if ((uVar18 & 0xff) != 0) {
                    uVar6 = 0x17 / uVar3;
                  }
                  uVar20 = (ulong)(0x17 - uVar6 * uVar3);
                }
              }
              plVar23 = *(long **)(*(long *)(lVar17 + 0x68) + uVar20 * 8);
              if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0))
              {
                if (uVar19 < 2) {
                  do {
                    if (plVar23[1] == 0x17) {
                      if ((int)plVar23[2] == 0x17) goto LAB_01f72c80;
                    }
                    else if ((plVar23[1] & uVar18 - 1) != uVar20) break;
                    plVar23 = (long *)*plVar23;
                  } while (plVar23 != (long *)0x0);
                }
                else {
                  do {
                    uVar19 = plVar23[1];
                    if (uVar19 == 0x17) {
                      if ((int)plVar23[2] == 0x17) goto LAB_01f72c80;
                    }
                    else {
                      if (uVar18 <= uVar19) {
                        uVar7 = 0;
                        if (uVar18 != 0) {
                          uVar7 = uVar19 / uVar18;
                        }
                        uVar19 = uVar19 - uVar7 * uVar18;
                      }
                      if (uVar19 != uVar20) break;
                    }
                    plVar23 = (long *)*plVar23;
                  } while (plVar23 != (long *)0x0);
                }
              }
            }
            FUN_01f7c2e0();
LAB_01f72b3c:
            (**(code **)(*(long *)param_4 + 0x18))(param_4,plVar22,plVar24,param_3);
LAB_01f72b58:
            if ((char)param_2[0x71a91] == '\0') {
              *(undefined1 *)(param_2 + 0x71a91) = 1;
              param_2[0x71a8f] = 0;
              param_2[0x71a90] = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,param_2 + 0x1000f,&PTR_LOOP_0411a000);
            }
            iVar14 = (int)param_2[0x71a90] + -1;
            *(int *)(param_2 + 0x71a90) = iVar14;
            if (iVar14 == 0) {
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
          else {
            if (*(ushort *)((long)param_3 - (long)*param_3) < 0xb) {
              local_100 = (long *)0x0;
            }
            else {
              uVar18 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[5];
              local_100 = (long *)0x0;
              if (uVar18 != 0) {
                puVar2 = (uint *)((long)param_3 + uVar18);
                local_100 = (long *)((long)puVar2 + (ulong)*puVar2);
              }
            }
            FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
            (**(code **)(*local_180 + 0x18))(&local_100);
            if ((char)local_100 == '\0') {
              FUN_01847304(plVar8,uVar15);
              if ((char)local_100 != '\0') goto LAB_01f72a10;
            }
            else {
LAB_01f72a10:
              local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
            }
            plVar22 = local_180;
            local_180 = (long *)0x0;
            if (plVar22 != (long *)0x0) {
              FUN_02bcbe58(&local_100,0);
              (**(code **)(*plVar22 + 8))(plVar22);
              param_3 = local_168;
              plVar24 = local_170;
              param_4 = local_178;
              uVar18 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
              param_2 = (long *)tpidr_el0;
              if ((uVar18 & 1) == 0) goto LAB_01f72b3c;
              if ((char)param_2[0x71a91] == '\0') {
                *(undefined1 *)(param_2 + 0x71a91) = 1;
                param_2[0x71a8f] = 0;
                param_2[0x71a90] = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,param_2 + 0x1000f,&PTR_LOOP_0411a000);
              }
              if ((int)param_2[0x71a90] < 1) goto LAB_01f72b3c;
              FUN_02bcc824(param_4,plVar22,plVar24,param_3);
              goto LAB_01f72b58;
            }
          }
          plVar23 = (long *)0x0;
          goto LAB_01f73190;
        }
        plVar23 = (long *)0x0;
        if (local_198 == (long *)0x0) goto joined_r0x01f7254c;
        goto LAB_01f7251c;
      }
      plVar23 = (long *)0x0;
      if (local_190 == (long *)0x0) goto joined_r0x01f722f8;
      goto LAB_01f724a4;
    }
    plVar23 = (long *)0x0;
  }
  goto joined_r0x01f722f8;
LAB_01f72c80:
  lVar17 = plVar23[7];
  puVar21 = (undefined8 *)(lVar17 + 0x50);
  plVar23 = (long *)(**(code **)*puVar21)(puVar21);
  puVar11 = PTR_DAT_04382d10;
  if (((*PTR_DAT_04382d08 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04382d08), iVar14 != 0)) {
    uVar15 = FUN_01e39520();
    *(undefined8 *)puVar11 = uVar15;
    __cxa_guard_release(PTR_DAT_04382d08);
  }
  for (; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
    if (plVar23 == (long *)puVar11) {
      plVar23 = *(long **)(lVar17 + 0x68);
      if (((*puVar9 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar14 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)puVar10);
      if (*(ulong *)(lVar17 + 0x80) < 0x10) {
        *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar23;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        lVar17 = (**(code **)(*plVar23 + 0x10))(plVar23,0x140,8);
        if (lVar17 == 0) {
          (**(code **)(*plVar23 + 0xb8))(plVar23);
                    /* WARNING: Subroutine does not return */
          FUN_00bd32e0(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0();
      }
      goto LAB_01f731cc;
    }
  }
LAB_01f72ce8:
  pcVar12 = local_178;
  local_70 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_170 = (long *)0x0;
    local_168 = (int *)0x0;
    local_180 = (long *)0x0;
    local_178 = (code *)0x0;
    (*pcVar12)(auStack_160);
  }
  plVar23 = local_70;
  local_70 = (long *)0x0;
joined_r0x01f7295c:
  if (plVar22 != (long *)0x0) {
    lVar17 = plVar22[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
LAB_01f73190:
  lVar17 = plVar8[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
joined_r0x01f731c4:
  if (local_198 != (long *)0x0) {
LAB_01f7251c:
    lVar17 = local_198[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
joined_r0x01f7254c:
  if (local_190 != (long *)0x0) {
LAB_01f724a4:
    lVar17 = local_190[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
joined_r0x01f722f8:
  if (local_188 != (long *)0x0) {
    lVar17 = local_188[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
    }
  }
  if (plVar23 == (long *)0x0) {
    return;
  }
  lVar17 = plVar23[0xb];
  if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar15 = *(undefined8 *)(param_1 + 0x98);
    lVar17 = plVar23[0xb];
    local_100 = plVar23;
    if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_01cbc9e0(uVar15,&local_100,0);
      if (local_100 != (long *)0x0) {
        lVar17 = local_100[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
      lVar17 = plVar23[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
      lVar17 = plVar23[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
        return;
      }
      return;
    }
  }
LAB_01f73044:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


