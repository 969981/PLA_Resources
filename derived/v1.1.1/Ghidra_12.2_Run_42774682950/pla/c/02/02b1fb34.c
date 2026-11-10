/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1fb34; name: FUN_02b1fb34
 */


/* WARNING: Removing unreachable block (ram,0x02b1fc4c) */

ulong FUN_02b1fb34(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong *puVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  undefined8 uVar31;
  ulong *puVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long lVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *unaff_x27;
  long *plVar44;
  float fVar45;
  long *local_a0;
  uint local_94;
  ulong local_90;
  long *local_88;
  undefined8 *local_80;
  long local_78;
  long lStack_70;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xf8) == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_1 + 0xf8) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b1fbac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b1fbac:
  local_94 = 0;
  uVar16 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + (uVar16 / 0x12) * 8);
  uVar16 = uVar16 % 0x12;
  plVar43 = (long *)(lVar10 + uVar16 * 0xd8);
  puVar32 = (ulong *)(plVar43 + 8);
  plVar36 = plVar43 + 7;
  uVar15 = (uint)*puVar32;
  if (uVar15 != 0) {
    uVar24 = 0;
    lVar22 = 0x1a8;
    do {
      uVar29 = *(ulong *)(*plVar36 + (uVar24 >> 6) * 8);
      uVar28 = 1L << (uVar24 & 0x3f);
      if ((uVar28 & uVar29) == 0) {
        *(ulong *)(*plVar36 + (uVar24 >> 6) * 8) = uVar28 | uVar29;
        *(undefined1 *)(*plVar43 + lVar22) = 1;
        if (local_94 < uVar15) goto LAB_02b20b98;
        break;
      }
      uVar24 = uVar24 + 1;
      lVar22 = lVar22 + 0x1b0;
      local_94 = (uint)uVar24;
    } while ((*puVar32 & 0xffffffff) != uVar24);
  }
  local_a0 = *(long **)(param_1 + 8);
  lVar22 = lVar10 + uVar16 * 0xd8;
  puVar30 = (ulong *)(lVar22 + 8);
  uVar24 = *puVar30;
  puVar20 = (ulong *)(lVar22 + 0x10);
  puVar2 = (undefined8 *)(lVar22 + 0x18);
  if (uVar24 < *puVar20) {
    FUN_02b2409c(puVar2,uVar24,&local_a0);
    *puVar30 = *puVar30 + 0x1b0;
  }
  else {
    lVar22 = (long)(uVar24 - *plVar43) >> 4;
    uVar24 = *(ulong *)(lVar10 + uVar16 * 0xd8 + 0x20);
    if (0x7ffffffffffffffe < uVar24) {
      uVar24 = 0x7fffffffffffffff;
    }
    uVar28 = lVar22 * -0x7b425ed097b425ed + 1;
    if (uVar24 < uVar28) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar33 = (long)(*puVar20 - *plVar43) >> 4;
    uVar29 = lVar33 * 0x97b425ed097b426;
    if (uVar28 <= uVar29) {
      uVar28 = uVar29;
    }
    if ((ulong)(lVar33 * -0x7b425ed097b425ed) < uVar24 >> 1) {
      uVar24 = uVar28;
    }
    if (uVar24 == 0) {
      lVar33 = 0;
    }
    else {
      lVar33 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar24 * 0x1b0,0x10);
      if (lVar33 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    plVar37 = (long *)(lVar33 + lVar22 * 0x10);
    FUN_02b2409c(puVar2,plVar37,&local_a0);
    plVar14 = (long *)*plVar43;
    if ((long *)*puVar30 == plVar14) {
      plVar26 = plVar37;
      plVar35 = plVar14;
    }
    else {
      plVar35 = plVar37;
      plVar39 = (long *)*puVar30;
      do {
        uVar31 = *puVar2;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar8 = PTR_DAT_04379528;
          if (iVar9 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar22 != 0) {
          if (0xf < *(ulong *)(lVar22 + 0x80)) {
LAB_02b21214:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = uVar31;
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
        }
        plVar17 = plVar39 + -0x36;
        plVar26 = plVar35 + -0x36;
        *plVar26 = *plVar17;
        plVar35[-0x35] = plVar39[-0x35];
        plVar35[-0x34] = plVar39[-0x34];
        plVar11 = (long *)plVar39[-0x33];
        plVar35[-0x33] = (long)plVar11;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))();
        }
        plVar35[-0x32] = plVar39[-0x32];
        plVar35[-0x31] = plVar39[-0x31];
        plVar35[-0x30] = plVar39[-0x30];
        plVar11 = (long *)plVar39[-0x2f];
        plVar35[-0x2f] = (long)plVar11;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))();
        }
        lVar34 = plVar39[-0x29];
        plVar35[-0x2b] = plVar39[-0x2b];
        plVar35[-0x29] = lVar34;
        plVar13 = plVar35 + -0x28;
        plVar19 = plVar35 + -0x21;
        plVar11 = plVar39 + -0x22;
        plVar35[-0x2d] = plVar39[-0x2d];
        plVar35[-0x2e] = plVar39[-0x2e];
        lVar34 = plVar39[-0x2c];
        plVar35[-0x2a] = plVar39[-0x2a];
        plVar35[-0x2c] = lVar34;
        lVar38 = plVar39[-0x25];
        lVar34 = plVar39[-0x26];
        lVar25 = plVar39[-0x24];
        lVar27 = plVar39[-0x23];
        plVar42 = plVar35 + -0x27;
        *plVar42 = 0;
        *plVar13 = 0;
        plVar35[-0x23] = lVar27;
        plVar35[-0x26] = lVar34;
        plVar35[-0x24] = lVar25;
        plVar35[-0x25] = lVar38;
        local_88 = (long *)plVar39[-0x21];
        local_80 = (undefined8 *)plVar39[-0x20];
        local_78 = plVar39[-0x1f];
        lStack_70 = plVar39[-0x1e];
        plVar21 = plVar35 + -0x22;
        *plVar21 = 0;
        plVar35[-0x20] = (long)local_80;
        plVar35[-0x1f] = local_78;
        plVar35[-0x1e] = lStack_70;
        *plVar19 = (long)local_88;
        plVar35[-0x1d] = 0;
        *(int *)(plVar35 + -0x1c) = (int)plVar39[-0x1c];
        FUN_00af3164(plVar13,plVar39[-0x27]);
        plVar40 = plVar39;
        for (plVar44 = (long *)*plVar11; plVar44 != (long *)0x0; plVar44 = (long *)*plVar44) {
          plVar40 = (long *)plVar44[2];
          plVar41 = (long *)*plVar42;
          if (plVar41 == (long *)0x0) {
LAB_02b20110:
            plVar18 = (long *)(**(code **)(*(long *)*plVar19 + 0x10))((long *)*plVar19,0x38,8);
            if (plVar18 == (long *)0x0) {
              (**(code **)(*(long *)*plVar19 + 0xb8))();
            }
            unaff_x27 = (long *)*plVar19;
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar8 = PTR_DAT_04379528;
              if (iVar9 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar34 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar34 != 0) {
              if (0xf < *(ulong *)(lVar34 + 0x80)) goto LAB_02b21214;
              *(long **)(lVar34 + *(ulong *)(lVar34 + 0x80) * 8) = unaff_x27;
              *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + 1;
            }
            plVar18[2] = plVar44[2];
            plVar18[3] = plVar44[3];
            plVar18[4] = plVar44[4];
            plVar12 = (long *)plVar44[5];
            plVar18[5] = (long)plVar12;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))();
            }
            *(undefined4 *)(plVar18 + 6) = *(undefined4 *)(plVar44 + 6);
            if (lVar34 != 0) {
              *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + -1;
            }
            *plVar18 = 0;
            plVar18[1] = (long)plVar40;
            if ((plVar41 == (long *)0x0) ||
               (*(float *)(plVar35 + -0x1c) * (float)plVar41 < (float)(plVar35[-0x1d] + 1))) {
              uVar28 = (ulong)(plVar41 < (long *)0x3 || ((ulong)plVar41 & (long)plVar41 - 1U) != 0)
                       | (long)plVar41 << 1;
              uVar29 = (ulong)((float)(plVar35[-0x1d] + 1) / *(float *)(plVar35 + -0x1c));
              if (uVar29 <= uVar28) {
                uVar29 = uVar28;
              }
              FUN_00af3164(plVar13,uVar29);
              plVar41 = (long *)*plVar42;
              if (((ulong)plVar41 & (long)plVar41 - 1U) == 0) {
                plVar11 = (long *)((long)plVar41 - 1U & (ulong)plVar40);
              }
              else if (plVar40 < plVar41) {
                plVar11 = plVar40;
              }
              else {
                uVar28 = 0;
                if (plVar41 != (long *)0x0) {
                  uVar28 = (ulong)plVar40 / (ulong)plVar41;
                }
                plVar11 = (long *)((long)plVar40 - uVar28 * (long)plVar41);
              }
            }
            plVar12 = *(long **)(*plVar13 + (long)plVar11 * 8);
            if (plVar12 == (long *)0x0) {
              *plVar18 = *plVar21;
              *plVar21 = (long)plVar18;
              *(long **)(*plVar13 + (long)plVar11 * 8) = plVar21;
              if (*plVar18 != 0) {
                plVar12 = *(long **)(*plVar18 + 8);
                if (((ulong)plVar41 & (long)plVar41 - 1U) == 0) {
                  plVar12 = (long *)((ulong)plVar12 & (long)plVar41 - 1U);
                }
                else if (plVar41 <= plVar12) {
                  uVar28 = 0;
                  if (plVar41 != (long *)0x0) {
                    uVar28 = (ulong)plVar12 / (ulong)plVar41;
                  }
                  plVar12 = (long *)((long)plVar12 - uVar28 * (long)plVar41);
                }
                plVar12 = (long *)(*plVar13 + (long)plVar12 * 8);
                goto LAB_02b1ffcc;
              }
            }
            else {
              *plVar18 = *plVar12;
LAB_02b1ffcc:
              *plVar12 = (long)plVar18;
            }
            plVar35[-0x1d] = plVar35[-0x1d] + 1;
          }
          else {
            uVar28 = (long)plVar41 - ((ulong)plVar41 >> 1 & 0x5555555555555555);
            uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
            uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar28 < 2) {
              plVar11 = (long *)((long)plVar41 - 1U & (ulong)plVar40);
            }
            else {
              plVar11 = plVar40;
              if (plVar41 <= plVar40) {
                uVar29 = 0;
                if (plVar41 != (long *)0x0) {
                  uVar29 = (ulong)plVar40 / (ulong)plVar41;
                }
                plVar11 = (long *)((long)plVar40 - uVar29 * (long)plVar41);
              }
            }
            plVar18 = *(long **)(*plVar13 + (long)plVar11 * 8);
            if (plVar18 == (long *)0x0) goto LAB_02b20110;
            if (uVar28 < 2) {
              do {
                plVar18 = (long *)*plVar18;
                if ((plVar18 == (long *)0x0) ||
                   ((long *)plVar18[1] != plVar40 &&
                    (long *)((ulong)plVar18[1] & (long)plVar41 - 1U) != plVar11)) goto LAB_02b20110;
              } while ((long *)plVar18[2] != plVar40);
            }
            else {
              do {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_02b20110;
                plVar12 = (long *)plVar18[1];
                if (plVar12 != plVar40) {
                  if (plVar41 <= plVar12) {
                    uVar28 = 0;
                    if (plVar41 != (long *)0x0) {
                      uVar28 = (ulong)plVar12 / (ulong)plVar41;
                    }
                    plVar12 = (long *)((long)plVar12 - uVar28 * (long)plVar41);
                  }
                  if (plVar12 != plVar11) goto LAB_02b20110;
                }
              } while ((long *)plVar18[2] != plVar40);
            }
          }
        }
        lVar34 = plVar39[-0x19];
        lVar25 = plVar39[-0x18];
        lVar38 = plVar39[-0x17];
        lVar27 = plVar39[-0x16];
        plVar44 = plVar35 + -0x1b;
        *plVar44 = 0;
        plVar35[-0x1a] = 0;
        plVar35[-0x17] = lVar38;
        plVar35[-0x16] = lVar27;
        plVar35[-0x19] = lVar34;
        plVar35[-0x18] = lVar25;
        local_88 = (long *)plVar39[-0x14];
        local_80 = (undefined8 *)plVar39[-0x13];
        local_78 = plVar39[-0x12];
        lStack_70 = plVar39[-0x11];
        plVar35[-0x15] = 0;
        plVar35[-0x10] = 0;
        plVar35[-0x12] = local_78;
        plVar35[-0x11] = lStack_70;
        plVar35[-0x14] = (long)local_88;
        plVar35[-0x13] = (long)local_80;
        *(int *)(plVar35 + -0xf) = (int)plVar39[-0xf];
        FUN_00af3840(plVar44,plVar39[-0x1a]);
        plVar11 = (long *)plVar39[-0x15];
        if (plVar11 != (long *)0x0) {
          plVar21 = plVar35 + -0x15;
          do {
            plVar40 = (long *)plVar11[2];
            plVar42 = (long *)plVar35[-0x1a];
            if (plVar42 == (long *)0x0) {
LAB_02b2048c:
              plVar19 = (long *)(**(code **)(*(long *)plVar35[-0x14] + 0x10))
                                          ((long *)plVar35[-0x14],0x40,0x10);
              if (plVar19 == (long *)0x0) {
                (**(code **)(*(long *)plVar35[-0x14] + 0xb8))();
              }
              lVar34 = plVar35[-0x14];
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar8 = PTR_DAT_04379528;
                if (iVar9 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              lVar38 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar38 != 0) {
                if (0xf < *(ulong *)(lVar38 + 0x80)) goto LAB_02b21214;
                *(long *)(lVar38 + *(ulong *)(lVar38 + 0x80) * 8) = lVar34;
                *(long *)(lVar38 + 0x80) = *(long *)(lVar38 + 0x80) + 1;
              }
              plVar19[2] = plVar11[2];
              plVar19[3] = plVar11[3];
              plVar19[4] = plVar11[4];
              plVar13 = (long *)plVar11[5];
              plVar19[5] = (long)plVar13;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x18))();
              }
              plVar19[7] = plVar11[7];
              plVar19[6] = plVar11[6];
              if (lVar38 != 0) {
                *(long *)(lVar38 + 0x80) = *(long *)(lVar38 + 0x80) + -1;
              }
              *plVar19 = 0;
              plVar19[1] = (long)plVar40;
              if ((plVar42 == (long *)0x0) ||
                 (*(float *)(plVar35 + -0xf) * (float)plVar42 < (float)(plVar35[-0x10] + 1))) {
                uVar28 = (ulong)(plVar42 < (long *)0x3 || ((ulong)plVar42 & (long)plVar42 - 1U) != 0
                                ) | (long)plVar42 << 1;
                uVar29 = (ulong)((float)(plVar35[-0x10] + 1) / *(float *)(plVar35 + -0xf));
                if (uVar29 <= uVar28) {
                  uVar29 = uVar28;
                }
                FUN_00af3840(plVar44,uVar29);
                plVar42 = (long *)plVar35[-0x1a];
                if (((ulong)plVar42 & (long)plVar42 - 1U) == 0) {
                  unaff_x27 = (long *)((long)plVar42 - 1U & (ulong)plVar40);
                }
                else if (plVar40 < plVar42) {
                  unaff_x27 = plVar40;
                }
                else {
                  uVar28 = 0;
                  if (plVar42 != (long *)0x0) {
                    uVar28 = (ulong)plVar40 / (ulong)plVar42;
                  }
                  unaff_x27 = (long *)((long)plVar40 - uVar28 * (long)plVar42);
                }
              }
              plVar13 = *(long **)(*plVar44 + (long)unaff_x27 * 8);
              if (plVar13 == (long *)0x0) {
                *plVar19 = *plVar21;
                *plVar21 = (long)plVar19;
                *(long **)(*plVar44 + (long)unaff_x27 * 8) = plVar21;
                if (*plVar19 != 0) {
                  plVar13 = *(long **)(*plVar19 + 8);
                  if (((ulong)plVar42 & (long)plVar42 - 1U) == 0) {
                    plVar13 = (long *)((ulong)plVar13 & (long)plVar42 - 1U);
                  }
                  else if (plVar42 <= plVar13) {
                    uVar28 = 0;
                    if (plVar42 != (long *)0x0) {
                      uVar28 = (ulong)plVar13 / (ulong)plVar42;
                    }
                    plVar13 = (long *)((long)plVar13 - uVar28 * (long)plVar42);
                  }
                  plVar13 = (long *)(*plVar44 + (long)plVar13 * 8);
                  goto LAB_02b20350;
                }
              }
              else {
                *plVar19 = *plVar13;
LAB_02b20350:
                *plVar13 = (long)plVar19;
              }
              plVar35[-0x10] = plVar35[-0x10] + 1;
            }
            else {
              uVar28 = (long)plVar42 - ((ulong)plVar42 >> 1 & 0x5555555555555555);
              uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
              uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar28 < 2) {
                unaff_x27 = (long *)((long)plVar42 - 1U & (ulong)plVar40);
              }
              else {
                unaff_x27 = plVar40;
                if (plVar42 <= plVar40) {
                  uVar29 = 0;
                  if (plVar42 != (long *)0x0) {
                    uVar29 = (ulong)plVar40 / (ulong)plVar42;
                  }
                  unaff_x27 = (long *)((long)plVar40 - uVar29 * (long)plVar42);
                }
              }
              plVar19 = *(long **)(*plVar44 + (long)unaff_x27 * 8);
              if (plVar19 == (long *)0x0) goto LAB_02b2048c;
              if (uVar28 < 2) {
                do {
                  plVar19 = (long *)*plVar19;
                  if ((plVar19 == (long *)0x0) ||
                     ((long *)plVar19[1] != plVar40 &&
                      (long *)((ulong)plVar19[1] & (long)plVar42 - 1U) != unaff_x27))
                  goto LAB_02b2048c;
                } while ((long *)plVar19[2] != plVar40);
              }
              else {
                do {
                  plVar19 = (long *)*plVar19;
                  if (plVar19 == (long *)0x0) goto LAB_02b2048c;
                  plVar13 = (long *)plVar19[1];
                  if (plVar13 != plVar40) {
                    if (plVar42 <= plVar13) {
                      uVar28 = 0;
                      if (plVar42 != (long *)0x0) {
                        uVar28 = (ulong)plVar13 / (ulong)plVar42;
                      }
                      plVar13 = (long *)((long)plVar13 - uVar28 * (long)plVar42);
                    }
                    if (plVar13 != unaff_x27) goto LAB_02b2048c;
                  }
                } while ((long *)plVar19[2] != plVar40);
              }
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        lVar34 = plVar39[-0xc];
        lVar25 = plVar39[-0xb];
        lVar38 = plVar39[-10];
        lVar27 = plVar39[-9];
        plVar44 = plVar35 + -0xe;
        *plVar44 = 0;
        plVar35[-0xd] = 0;
        plVar35[-10] = lVar38;
        plVar35[-9] = lVar27;
        plVar35[-0xc] = lVar34;
        plVar35[-0xb] = lVar25;
        local_88 = (long *)plVar39[-7];
        local_80 = (undefined8 *)plVar39[-6];
        local_78 = plVar39[-5];
        lStack_70 = plVar39[-4];
        plVar35[-8] = 0;
        plVar35[-3] = 0;
        plVar35[-5] = local_78;
        plVar35[-4] = lStack_70;
        plVar35[-7] = (long)local_88;
        plVar35[-6] = (long)local_80;
        *(int *)(plVar35 + -2) = (int)plVar39[-2];
        FUN_02b2423c(plVar44,plVar39[-0xd]);
        plVar11 = (long *)plVar39[-8];
        if (plVar11 != (long *)0x0) {
          plVar21 = plVar35 + -8;
          do {
            plVar42 = (long *)plVar11[2];
            unaff_x27 = (long *)plVar35[-0xd];
            if (unaff_x27 == (long *)0x0) {
LAB_02b2080c:
              plVar19 = (long *)(**(code **)(*(long *)plVar35[-7] + 0x10))
                                          ((long *)plVar35[-7],0x38,8);
              if (plVar19 == (long *)0x0) {
                (**(code **)(*(long *)plVar35[-7] + 0xb8))();
              }
              lVar34 = plVar35[-7];
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar8 = PTR_DAT_04379528;
                if (iVar9 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              lVar38 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar38 != 0) {
                if (0xf < *(ulong *)(lVar38 + 0x80)) goto LAB_02b21214;
                *(long *)(lVar38 + *(ulong *)(lVar38 + 0x80) * 8) = lVar34;
                *(long *)(lVar38 + 0x80) = *(long *)(lVar38 + 0x80) + 1;
              }
              plVar19[2] = plVar11[2];
              plVar19[3] = plVar11[3];
              plVar19[4] = plVar11[4];
              plVar13 = (long *)plVar11[5];
              plVar19[5] = (long)plVar13;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x18))();
              }
              lVar34 = plVar11[6];
              plVar19[6] = lVar34;
              if (lVar34 != 0) {
                piVar3 = (int *)(lVar34 + 0x50);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = *piVar3 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if (lVar38 != 0) {
                *(long *)(lVar38 + 0x80) = *(long *)(lVar38 + 0x80) + -1;
              }
              *plVar19 = 0;
              plVar19[1] = (long)plVar42;
              if ((unaff_x27 == (long *)0x0) ||
                 (*(float *)(plVar35 + -2) * (float)unaff_x27 < (float)(plVar35[-3] + 1))) {
                uVar28 = (ulong)(unaff_x27 < (long *)0x3 ||
                                ((ulong)unaff_x27 & (long)unaff_x27 - 1U) != 0) |
                         (long)unaff_x27 << 1;
                uVar29 = (ulong)((float)(plVar35[-3] + 1) / *(float *)(plVar35 + -2));
                if (uVar29 <= uVar28) {
                  uVar29 = uVar28;
                }
                FUN_02b2423c(plVar44,uVar29);
                unaff_x27 = (long *)plVar35[-0xd];
                if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                  plVar40 = (long *)((long)unaff_x27 - 1U & (ulong)plVar42);
                }
                else if (plVar42 < unaff_x27) {
                  plVar40 = plVar42;
                }
                else {
                  uVar28 = 0;
                  if (unaff_x27 != (long *)0x0) {
                    uVar28 = (ulong)plVar42 / (ulong)unaff_x27;
                  }
                  plVar40 = (long *)((long)plVar42 - uVar28 * (long)unaff_x27);
                }
              }
              plVar42 = *(long **)(*plVar44 + (long)plVar40 * 8);
              if (plVar42 == (long *)0x0) {
                *plVar19 = *plVar21;
                *plVar21 = (long)plVar19;
                *(long **)(*plVar44 + (long)plVar40 * 8) = plVar21;
                if (*plVar19 != 0) {
                  plVar42 = *(long **)(*plVar19 + 8);
                  if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
                    plVar42 = (long *)((ulong)plVar42 & (long)unaff_x27 - 1U);
                  }
                  else if (unaff_x27 <= plVar42) {
                    uVar28 = 0;
                    if (unaff_x27 != (long *)0x0) {
                      uVar28 = (ulong)plVar42 / (ulong)unaff_x27;
                    }
                    plVar42 = (long *)((long)plVar42 - uVar28 * (long)unaff_x27);
                  }
                  plVar42 = (long *)(*plVar44 + (long)plVar42 * 8);
                  goto LAB_02b206d0;
                }
              }
              else {
                *plVar19 = *plVar42;
LAB_02b206d0:
                *plVar42 = (long)plVar19;
              }
              plVar35[-3] = plVar35[-3] + 1;
            }
            else {
              uVar28 = (long)unaff_x27 - ((ulong)unaff_x27 >> 1 & 0x5555555555555555);
              uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
              uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar28 < 2) {
                plVar40 = (long *)((long)unaff_x27 - 1U & (ulong)plVar42);
              }
              else {
                plVar40 = plVar42;
                if (unaff_x27 <= plVar42) {
                  uVar29 = 0;
                  if (unaff_x27 != (long *)0x0) {
                    uVar29 = (ulong)plVar42 / (ulong)unaff_x27;
                  }
                  plVar40 = (long *)((long)plVar42 - uVar29 * (long)unaff_x27);
                }
              }
              plVar19 = *(long **)(*plVar44 + (long)plVar40 * 8);
              if (plVar19 == (long *)0x0) goto LAB_02b2080c;
              if (uVar28 < 2) {
                do {
                  plVar19 = (long *)*plVar19;
                  if ((plVar19 == (long *)0x0) ||
                     ((long *)plVar19[1] != plVar42 &&
                      (long *)((ulong)plVar19[1] & (long)unaff_x27 - 1U) != plVar40))
                  goto LAB_02b2080c;
                } while ((long *)plVar19[2] != plVar42);
              }
              else {
                do {
                  plVar19 = (long *)*plVar19;
                  if (plVar19 == (long *)0x0) goto LAB_02b2080c;
                  plVar13 = (long *)plVar19[1];
                  if (plVar13 != plVar42) {
                    if (unaff_x27 <= plVar13) {
                      uVar28 = 0;
                      if (unaff_x27 != (long *)0x0) {
                        uVar28 = (ulong)plVar13 / (ulong)unaff_x27;
                      }
                      plVar13 = (long *)((long)plVar13 - uVar28 * (long)unaff_x27);
                    }
                    if (plVar13 != plVar40) goto LAB_02b2080c;
                  }
                } while ((long *)plVar19[2] != plVar42);
              }
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        *(short *)(plVar35 + -1) = (short)plVar39[-1];
        if (lVar22 != 0) {
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
        }
        plVar35 = plVar26;
        plVar39 = plVar17;
      } while (plVar17 != plVar14);
      plVar14 = (long *)*puVar30;
      plVar35 = (long *)*plVar43;
    }
    *plVar43 = (long)plVar26;
    *puVar30 = (ulong)(plVar37 + 0x36);
    uVar28 = *puVar20;
    *puVar20 = lVar33 + uVar24 * 0x1b0;
    while (plVar14 != plVar35) {
      plVar14 = plVar14 + -0x36;
      FUN_02b22e7c(plVar14);
    }
    if (plVar35 != (long *)0x0) {
      plVar14 = (long *)*puVar2;
      uVar24 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar24 & 1) != 0) {
        lVar22 = tpidr_el0;
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar35,uVar28 - (long)plVar35,0x10);
          goto LAB_02b20b48;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar35,uVar28 - (long)plVar35,0x10);
    }
  }
LAB_02b20b48:
  uVar24 = *puVar32;
  lVar22 = *(long *)(lVar10 + uVar16 * 0xd8 + 0x48);
  if (uVar24 == lVar22 * 0x40) {
    uVar29 = *(ulong *)(lVar10 + uVar16 * 0xd8 + 0x58);
    uVar28 = 0x7fffffffffffffff;
    if (uVar29 < 0x1ffffffffffffff) {
      uVar28 = uVar29 << 6;
    }
    if (uVar28 < uVar24 + 1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar24 < uVar28 >> 1) {
      uVar29 = lVar22 << 7;
      uVar28 = uVar24 + 0x40 & 0xffffffffffffffc0;
      if (uVar28 <= uVar29) {
        uVar28 = uVar29;
      }
    }
    FUN_00bb993c(plVar36,uVar28);
    uVar24 = *puVar32;
  }
  *puVar32 = uVar24 + 1;
  uVar28 = uVar24 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*plVar36 + uVar28) = *(ulong *)(*plVar36 + uVar28) | 1L << (uVar24 & 0x3f);
LAB_02b20b98:
  FUN_00947cf8(&local_88,*(undefined8 *)(param_2 + 8));
  plVar36 = local_88;
  if (local_88 == (long *)0x0) {
    lVar22 = *(long *)PTR_DAT_04379c88;
LAB_02b21228:
    lVar33 = *(long *)PTR_PTR_04379d00;
    if (local_88 != (long *)0x0) goto LAB_02b20bcc;
LAB_02b21238:
    lVar34 = 0;
  }
  else {
    lVar22 = local_88[0xb];
    if (local_88 == (long *)0x0) goto LAB_02b21228;
    lVar33 = local_88[0xc];
    if (local_88 == (long *)0x0) goto LAB_02b21238;
LAB_02b20bcc:
    lVar34 = local_88[0xd];
    (**(code **)(*local_88 + 0x18))(local_88);
  }
  plVar37 = (long *)(*plVar43 + (ulong)local_94 * 0x1b0);
  *plVar37 = lVar22;
  plVar37[1] = lVar33;
  plVar37[2] = lVar34;
  plVar37 = plVar37 + 3;
  plVar14 = (long *)*plVar37;
  *plVar37 = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  *plVar37 = (long)plVar36;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_00947cf8(&local_88,*(undefined8 *)(param_3 + 8));
  plVar36 = local_88;
  if (local_88 == (long *)0x0) {
    lVar22 = *(long *)PTR_DAT_04379c88;
LAB_02b21250:
    lVar33 = *(long *)PTR_PTR_04379d00;
    if (local_88 != (long *)0x0) goto LAB_02b20c58;
LAB_02b21260:
    lVar34 = 0;
  }
  else {
    lVar22 = local_88[0xb];
    if (local_88 == (long *)0x0) goto LAB_02b21250;
    lVar33 = local_88[0xc];
    if (local_88 == (long *)0x0) goto LAB_02b21260;
LAB_02b20c58:
    lVar34 = local_88[0xd];
    (**(code **)(*local_88 + 0x18))(local_88);
  }
  lVar38 = *plVar43 + (ulong)local_94 * 0x1b0;
  plVar14 = *(long **)(lVar38 + 0x38);
  *(long *)(lVar38 + 0x20) = lVar22;
  *(long *)(lVar38 + 0x28) = lVar33;
  *(long *)(lVar38 + 0x30) = lVar34;
  *(undefined8 *)(lVar38 + 0x38) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  *(long **)(lVar38 + 0x38) = plVar36;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  lVar22 = lVar10 + uVar16 * 0xd8;
  plVar36 = (long *)(lVar22 + 0x70);
  FUN_00947cf8(&local_a0,*(undefined8 *)(param_2 + 8));
  FUN_02ad3ecc(&local_88,plVar36,&local_a0,&local_94);
  plVar14 = local_88;
  uVar28 = local_88[2];
  local_88[1] = uVar28;
  puVar32 = (ulong *)(lVar22 + 0x78);
  uVar24 = *puVar32;
  if (uVar24 == 0) {
LAB_02b20e64:
    lVar22 = lVar10 + uVar16 * 0xd8;
    plVar37 = (long *)(lVar22 + 200);
    fVar45 = *(float *)(lVar22 + 0xd0);
    if ((uVar24 == 0) || (fVar45 * (float)uVar24 < (float)(*plVar37 + 1))) {
      uVar24 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar28 = (ulong)((float)(*plVar37 + 1) / fVar45);
      if (uVar28 <= uVar24) {
        uVar28 = uVar24;
      }
      FUN_02ad4084(plVar36,uVar28);
      uVar24 = *puVar32;
      uVar28 = plVar14[1];
    }
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar28 = uVar24 - 1 & uVar28;
    }
    else if (uVar24 <= uVar28) {
      uVar23 = 0;
      if (uVar24 != 0) {
        uVar23 = uVar28 / uVar24;
      }
      uVar28 = uVar28 - uVar23 * uVar24;
    }
    plVar26 = *(long **)(*plVar36 + uVar28 * 8);
    if (plVar26 == (long *)0x0) {
      plVar26 = (long *)(lVar10 + uVar16 * 0xd8 + 0xa0);
      *plVar14 = *plVar26;
      *plVar26 = (long)plVar14;
      *(long **)(*plVar36 + uVar28 * 8) = plVar26;
      if (*plVar14 != 0) {
        uVar16 = *(ulong *)(*plVar14 + 8);
        if (uVar29 < 2) {
          uVar16 = uVar16 & uVar24 - 1;
        }
        else if (uVar24 <= uVar16) {
          uVar28 = 0;
          if (uVar24 != 0) {
            uVar28 = uVar16 / uVar24;
          }
          uVar16 = uVar16 - uVar28 * uVar24;
        }
        plVar26 = (long *)(*plVar36 + uVar16 * 8);
        goto LAB_02b20f94;
      }
    }
    else {
      *plVar14 = *plVar26;
LAB_02b20f94:
      *plVar26 = (long)plVar14;
    }
    *plVar37 = *plVar37 + 1;
    local_88 = (long *)0x0;
  }
  else {
    uVar29 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
    uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
    uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar29 < 2) {
      uVar23 = uVar24 - 1 & uVar28;
    }
    else {
      uVar23 = uVar28;
      if (uVar24 <= uVar28) {
        uVar23 = 0;
        if (uVar24 != 0) {
          uVar23 = uVar28 / uVar24;
        }
        uVar23 = uVar28 - uVar23 * uVar24;
      }
    }
    plVar37 = *(long **)(*plVar36 + uVar23 * 8);
    if (plVar37 == (long *)0x0) goto LAB_02b20e64;
    if (uVar29 < 2) {
      do {
        plVar37 = (long *)*plVar37;
        if ((plVar37 == (long *)0x0) || ((plVar37[1] & uVar24 - 1) != uVar23)) goto LAB_02b20e64;
      } while (plVar37[2] != uVar28);
    }
    else {
      do {
        plVar37 = (long *)*plVar37;
        if (plVar37 == (long *)0x0) goto LAB_02b20e64;
        uVar29 = plVar37[1];
        if (uVar24 <= uVar29) {
          uVar7 = 0;
          if (uVar24 != 0) {
            uVar7 = uVar29 / uVar24;
          }
          uVar29 = uVar29 - uVar7 * uVar24;
        }
        if (uVar29 != uVar23) goto LAB_02b20e64;
      } while (plVar37[2] != uVar28);
    }
    local_88 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      if (((char)local_78 != '\0') && ((long *)plVar14[5] != (long *)0x0)) {
        (**(code **)(*(long *)plVar14[5] + 0x20))();
      }
      plVar36 = (long *)*local_80;
      uVar16 = (**(code **)(*plVar36 + 0xc0))(plVar36);
      if ((uVar16 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar36,plVar14,0x38,8);
          goto LAB_02b20fa8;
        }
      }
      (**(code **)(*plVar36 + 0x18))(plVar36,plVar14,0x38,8);
    }
  }
LAB_02b20fa8:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  local_90 = (ulong)local_94 << 0x20 | 1;
  puVar2 = *(undefined8 **)(param_1 + 0x100);
  puVar4 = *(undefined8 **)(param_1 + 0x108);
  if (puVar2 != puVar4) {
    (*(code *)**(undefined8 **)*puVar2)
              ((undefined8 *)*puVar2,&local_90,*plVar43 + (ulong)local_94 * 0x1b0);
    while (puVar2 = puVar2 + 1, puVar2 != puVar4) {
      (*(code *)**(undefined8 **)*puVar2)
                ((undefined8 *)*puVar2,&local_90,*plVar43 + (ulong)local_94 * 0x1b0);
    }
  }
  do {
    lVar10 = *plVar1;
    lVar22 = *(long *)(param_1 + 0xf8);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0xf8) = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar10 || *(long *)(param_1 + 0xf8) != lVar22) {
      ClearExclusiveLocal();
      lVar10 = *plVar1;
      lVar22 = *(long *)(param_1 + 0xf8);
      goto LAB_02b211d4;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xf4) = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b21074:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return local_90;
LAB_02b211d4:
  do {
    lVar33 = *plVar1;
    if (lVar33 == lVar10 && *(long *)(param_1 + 0xf8) == lVar22) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xf4) = lVar22;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b211d4;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar10 = lVar33;
    lVar22 = *(long *)(param_1 + 0xf8);
  } while (!bVar6);
  goto LAB_02b21074;
}


