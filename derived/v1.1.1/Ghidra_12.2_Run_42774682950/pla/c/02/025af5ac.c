/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025af5ac; name: FUN_025af5ac
 */


void FUN_025af5ac(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  undefined *puVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  ushort *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  byte *pbVar29;
  ushort *puVar30;
  undefined1 *puVar31;
  uint *puVar32;
  undefined1 *puVar33;
  ulong uVar34;
  long *plVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined8 local_128;
  undefined1 auStack_120 [24];
  long *local_108;
  undefined1 auStack_100 [32];
  long *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long *local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long *local_a0 [2];
  
  if ((*param_2 != 0) && (FUN_00ca554c(local_a0), local_a0[0] != (long *)0x0)) {
    lVar16 = FUN_018b895c(local_a0[0],&DAT_cbf29ce484222645);
    puVar22 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
    piVar3 = (int *)((long)puVar22 + (ulong)*puVar22);
    puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    puVar22 = puVar4 + 1;
    uVar23 = (ulong)*puVar4;
    if (uVar23 != 0) {
      puVar4 = puVar22 + uVar23;
      plVar1 = (long *)(param_1 + 0x68);
      plVar2 = (long *)(param_1 + 0x98);
      do {
        piVar3 = (int *)((long)puVar22 + (ulong)*puVar22);
        local_c0 = *(long **)(param_1 + 8);
        local_c8 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_b8 = 0x7ffffffffffffff;
        uStack_b0 = 0;
        local_a8 = 0;
        lVar24 = (long)*piVar3;
        puVar5 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (10 - lVar24)));
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        puVar32 = puVar5 + 1;
        uVar23 = (ulong)*puVar5;
        lVar16 = tpidr_el0;
        if (uVar23 != 0) {
          puVar5 = puVar32 + uVar23;
          do {
            piVar6 = (int *)((long)puVar32 + (ulong)*puVar32);
            if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0xd) {
              lVar24 = 0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[6];
              lVar24 = 0;
              if (uVar23 != 0) {
                puVar7 = (uint *)((long)piVar6 + uVar23);
                lVar24 = (long)puVar7 + (ulong)*puVar7;
              }
            }
            FUN_00947cf8(&local_e0,lVar24 + 4);
            puVar25 = (ushort *)((long)piVar6 - (long)*piVar6);
            piVar8 = (int *)((long)((long)piVar6 + (ulong)puVar25[3]) +
                            (ulong)*(uint *)((long)piVar6 + (ulong)puVar25[3]));
            puVar30 = (ushort *)((long)piVar8 - (long)*piVar8);
            uVar10 = *puVar30;
            uVar38 = 0;
            uVar37 = 0;
            uVar39 = 0;
            if (4 < uVar10) {
              uVar37 = 0;
              if ((ulong)puVar30[2] != 0) {
                uVar37 = *(undefined4 *)((long)piVar8 + (ulong)puVar30[2]);
              }
              if (uVar10 < 7) {
                uVar38 = 0;
              }
              else {
                uVar38 = 0;
                if ((ulong)puVar30[3] != 0) {
                  uVar38 = *(undefined4 *)((long)piVar8 + (ulong)puVar30[3]);
                }
                if ((8 < uVar10) && ((ulong)puVar30[4] != 0)) {
                  uVar39 = *(undefined4 *)((long)piVar8 + (ulong)puVar30[4]);
                  goto LAB_025af7ac;
                }
              }
              uVar39 = 0;
            }
LAB_025af7ac:
            uVar40 = 0;
            uVar41 = 0;
            if (8 < *puVar25) {
              uVar40 = 0;
              if ((ulong)puVar25[4] != 0) {
                uVar40 = *(undefined4 *)((long)piVar6 + (ulong)puVar25[4]);
              }
              if ((*puVar25 < 0xb) || ((ulong)puVar25[5] == 0)) {
                uVar41 = 0;
              }
              else {
                uVar41 = *(undefined4 *)((long)piVar6 + (ulong)puVar25[5]);
              }
            }
            FUN_02a47560(auStack_120,&local_e0);
            uVar14 = FUN_01085f94(auStack_120);
            if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
              local_128 = 0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2];
              local_128 = 0;
              if (uVar23 != 0) {
                local_128 = *(undefined8 *)((long)piVar6 + uVar23);
              }
            }
            FUN_0108c148(uVar37,uVar38,uVar39,uVar40,uVar41,auStack_100,uVar14,&local_128);
            if (local_d0 < local_c8) {
              FUN_00bff84c(&local_c0,local_d0,auStack_100);
              local_d0 = local_d0 + 0x20;
              uVar23 = local_c8;
            }
            else {
              lVar24 = (long)(local_d0 - local_d8) >> 5;
              uVar23 = lVar24 + 1;
              uVar21 = local_b8;
              if (0x7ffffffffffffffe < local_b8) {
                uVar21 = 0x7fffffffffffffff;
              }
              if (uVar21 < uVar23) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)(local_c8 - local_d8) >> 5) < uVar21 >> 1) {
                uVar26 = (long)(local_c8 - local_d8) >> 4;
                uVar21 = uVar23;
                if (uVar23 <= uVar26) {
                  uVar21 = uVar26;
                }
              }
              if (uVar21 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = (**(code **)(*local_c0 + 0x10))(local_c0,uVar21 << 5,8);
                if (lVar17 == 0) {
                  (**(code **)(*local_c0 + 0xb8))();
                }
              }
              uVar26 = lVar17 + lVar24 * 0x20;
              uVar23 = lVar17 + uVar21 * 0x20;
              FUN_00bff84c(&local_c0,uVar26,auStack_100);
              uVar27 = local_d8;
              uVar21 = uVar26 + 0x20;
              uVar34 = local_d0;
              if (local_d0 != local_d8) {
                do {
                  uVar26 = uVar26 - 0x20;
                  uVar34 = uVar34 - 0x20;
                  FUN_00bff84c(&local_c0,uVar26,uVar34);
                } while (uVar27 != uVar34);
                uVar27 = local_d8;
              }
              plVar35 = local_c0;
              local_d8 = uVar26;
              local_d0 = uVar21;
              if (uVar27 != 0) {
                lVar24 = local_c8 - uVar27;
                local_c8 = uVar23;
                uVar23 = (**(code **)(*local_c0 + 0xc0))(local_c0);
                if ((uVar23 & 1) != 0) {
                  if (*(char *)(lVar16 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar16 + 0x38d488) = 1;
                    *(undefined8 *)(lVar16 + 0x38d478) = 0;
                    *(undefined8 *)(lVar16 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar16 + 0x38d480)) {
                    FUN_02bcc824(plVar35,uVar27,lVar24,8);
                    uVar23 = local_c8;
                    goto joined_r0x025aff7c;
                  }
                }
                (**(code **)(*plVar35 + 0x18))(plVar35,uVar27,lVar24,8);
                uVar23 = local_c8;
              }
            }
joined_r0x025aff7c:
            local_c8 = uVar23;
            if (local_108 != (long *)0x0) {
              (**(code **)(*local_108 + 0x20))();
            }
            if (local_e0 != (long *)0x0) {
              (**(code **)(*local_e0 + 0x20))();
            }
            puVar32 = puVar32 + 1;
          } while (puVar32 != puVar5);
          lVar24 = (long)*piVar3;
        }
        if ((*(ushort *)((long)piVar3 - lVar24) < 5) ||
           (uVar23 = (ulong)((ushort *)((long)piVar3 - lVar24))[2], uVar23 == 0)) {
          lVar17 = 0;
        }
        else {
          puVar32 = (uint *)((long)piVar3 + uVar23);
          lVar17 = (long)puVar32 + (ulong)*puVar32;
        }
        bVar9 = *(byte *)(lVar17 + 4);
        puVar33 = &DAT_cbf29ce484222645;
        if (bVar9 != 0) {
          puVar33 = &DAT_cbf29ce484222645;
          pbVar29 = (byte *)(lVar17 + 5);
          do {
            puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar9) * 0x100000001b3);
            bVar9 = *pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (bVar9 != 0);
        }
        puVar25 = (ushort *)((long)piVar3 - (long)(int)lVar24);
        plVar35 = *(long **)(param_1 + 8);
        if ((*puVar25 < 0xd) || (uVar23 = (ulong)puVar25[6], uVar23 == 0)) {
          bVar13 = false;
        }
        else {
          bVar13 = *(char *)((long)piVar3 + uVar23) != '\0';
        }
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar12 = PTR_DAT_04379528;
          if (iVar15 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        puVar18 = (undefined1 *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(puVar18 + 0x80)) goto LAB_025b0214;
        *(long **)(puVar18 + *(ulong *)(puVar18 + 0x80) * 8) = plVar35;
        *(long *)(puVar18 + 0x80) = *(long *)(puVar18 + 0x80) + 1;
        plVar19 = (long *)(**(code **)(*plVar35 + 0x10))(plVar35,0x198,8);
        if (plVar19 == (long *)0x0) {
          (**(code **)(*plVar35 + 0xb8))(plVar35);
        }
        FUN_01089a98(plVar19,&local_d8,bVar13);
        *plVar19 = (long)&PTR_LAB_0425e3e8;
        plVar19[9] = (long)&PTR_LAB_0425e458;
        plVar19[10] = (long)&PTR_LAB_0425e4a0;
        nn::os::InitializeLightEvent((long)plVar19 + 0x154,0,1);
        plVar19[0x31] = 0;
        plVar19[0x32] = 0;
        plVar19[0x2c] = 0;
        plVar19[0x2f] = 0;
        plVar19[0x30] = 0;
        plVar19[0x2d] = 0;
        plVar19[0x2e] = 0;
        FUN_00cf98c8(plVar19 + 0x31,param_2 + 2);
        plVar19[3] = 0x198;
        plVar19[1] = (long)plVar35;
        plVar19[2] = (long)plVar19;
        plVar19[4] = 8;
        *(long *)(puVar18 + 0x80) = *(long *)(puVar18 + 0x80) + -1;
        if (plVar19 != (long *)0x0) {
          lVar24 = plVar19[0xb];
          if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar24 + 0x10) == 0) {
            uVar20 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
            *(undefined8 *)(lVar24 + 0x10) = uVar20;
          }
          piVar3 = (int *)(lVar24 + 0xc);
          do {
            cVar11 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = *piVar3 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
        }
        puVar31 = *(undefined1 **)(param_1 + 0x70);
        if (puVar31 == (undefined1 *)0x0) {
LAB_025afc30:
          plVar35 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                                      (*(long **)(param_1 + 0xa0),0x20,8);
          if (plVar35 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
          }
          uVar20 = *(undefined8 *)(param_1 + 0xa0);
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar12 = PTR_DAT_04379528;
            if (iVar15 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar24 == 0) {
            plVar35[2] = (long)puVar33;
            plVar35[3] = (long)plVar19;
          }
          else {
            if (0xf < *(ulong *)(lVar24 + 0x80)) {
LAB_025b0214:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar20;
            *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
            plVar35[2] = (long)puVar33;
            plVar35[3] = (long)plVar19;
            *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
          }
          *plVar35 = 0;
          plVar35[1] = (long)puVar33;
          fVar36 = (float)(*(long *)(param_1 + 0xc0) + 1);
          if ((puVar31 == (undefined1 *)0x0) ||
             (*(float *)(param_1 + 200) * (float)puVar31 < fVar36)) {
            uVar23 = (ulong)(puVar31 < (undefined1 *)0x3 ||
                            ((ulong)puVar31 & (ulong)(puVar31 + -1)) != 0) | (long)puVar31 << 1;
            uVar21 = (ulong)(fVar36 / *(float *)(param_1 + 200));
            if (uVar21 <= uVar23) {
              uVar21 = uVar23;
            }
            if (uVar21 - 1 == 0) {
              uVar21 = 2;
            }
            else if ((uVar21 & uVar21 - 1) != 0) {
              uVar21 = std::__next_prime(uVar21);
            }
            uVar23 = *(ulong *)(param_1 + 0x70);
            if (uVar23 < uVar21) {
              uVar26 = uVar21;
LAB_025afe80:
              FUN_025b0ab4(plVar1,uVar26);
            }
            else if (uVar21 < uVar23) {
              uVar26 = (ulong)((float)*(ulong *)(param_1 + 0xc0) / *(float *)(param_1 + 200));
              if ((uVar23 < 3) ||
                 (uVar27 = uVar23 - (uVar23 >> 1 & 0x5555555555555555),
                 uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333),
                 1 < (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar26 = std::__next_prime(uVar26);
              }
              else if (1 < uVar26) {
                uVar26 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar26 - 1) & 0x3f);
              }
              if (uVar26 <= uVar21) {
                uVar26 = uVar21;
              }
              if (uVar26 < uVar23) goto LAB_025afe80;
            }
            puVar31 = *(undefined1 **)(param_1 + 0x70);
            if (((ulong)puVar31 & (ulong)(puVar31 + -1)) == 0) {
              puVar18 = (undefined1 *)((ulong)(puVar31 + -1) & (ulong)puVar33);
            }
            else if (puVar33 < puVar31) {
              puVar18 = puVar33;
            }
            else {
              uVar23 = 0;
              if (puVar31 != (undefined1 *)0x0) {
                uVar23 = (ulong)puVar33 / (ulong)puVar31;
              }
              puVar18 = puVar33 + -(uVar23 * (long)puVar31);
            }
          }
          plVar19 = *(long **)(*plVar1 + (long)puVar18 * 8);
          if (plVar19 == (long *)0x0) {
            *plVar35 = *plVar2;
            *plVar2 = (long)plVar35;
            *(long **)(*plVar1 + (long)puVar18 * 8) = plVar2;
            if (*plVar35 != 0) {
              puVar33 = *(undefined1 **)(*plVar35 + 8);
              if (((ulong)puVar31 & (ulong)(puVar31 + -1)) == 0) {
                puVar33 = (undefined1 *)((ulong)puVar33 & (ulong)(puVar31 + -1));
              }
              else if (puVar31 <= puVar33) {
                uVar23 = 0;
                if (puVar31 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar33 / (ulong)puVar31;
                }
                puVar33 = puVar33 + -(uVar23 * (long)puVar31);
              }
              plVar19 = (long *)(*plVar1 + (long)puVar33 * 8);
              goto LAB_025afd38;
            }
          }
          else {
            *plVar35 = *plVar19;
LAB_025afd38:
            *plVar19 = (long)plVar35;
          }
          *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
          uVar23 = local_d8;
          plVar35 = local_c0;
        }
        else {
          uVar23 = (long)puVar31 - ((ulong)puVar31 >> 1 & 0x5555555555555555);
          uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar23 < 2) {
            puVar18 = (undefined1 *)((ulong)(puVar31 + -1) & (ulong)puVar33);
          }
          else {
            puVar18 = puVar33;
            if (puVar31 <= puVar33) {
              uVar21 = 0;
              if (puVar31 != (undefined1 *)0x0) {
                uVar21 = (ulong)puVar33 / (ulong)puVar31;
              }
              puVar18 = puVar33 + -(uVar21 * (long)puVar31);
            }
          }
          plVar35 = *(long **)(*plVar1 + (long)puVar18 * 8);
          if (plVar35 == (long *)0x0) goto LAB_025afc30;
          if (uVar23 < 2) {
            do {
              plVar35 = (long *)*plVar35;
              if ((plVar35 == (long *)0x0) ||
                 ((undefined1 *)plVar35[1] != puVar33 &&
                  (undefined1 *)((ulong)plVar35[1] & (ulong)(puVar31 + -1)) != puVar18))
              goto LAB_025afc30;
            } while ((undefined1 *)plVar35[2] != puVar33);
          }
          else {
            do {
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) goto LAB_025afc30;
              puVar28 = (undefined1 *)plVar35[1];
              if (puVar28 != puVar33) {
                if (puVar31 <= puVar28) {
                  uVar23 = 0;
                  if (puVar31 != (undefined1 *)0x0) {
                    uVar23 = (ulong)puVar28 / (ulong)puVar31;
                  }
                  puVar28 = puVar28 + -(uVar23 * (long)puVar31);
                }
                if (puVar28 != puVar18) goto LAB_025afc30;
              }
            } while ((undefined1 *)plVar35[2] != puVar33);
          }
          uVar23 = local_d8;
          plVar35 = local_c0;
          if (plVar19 != (long *)0x0) {
            lVar24 = plVar19[0xb];
            piVar3 = (int *)(lVar24 + 0xc);
            do {
              iVar15 = *piVar3;
              cVar11 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar13) {
                *piVar3 = iVar15 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar24 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
              uVar23 = local_d8;
              plVar35 = local_c0;
            }
          }
        }
        local_d8 = uVar23;
        local_c0 = plVar35;
        if (uVar23 != 0) {
          lVar24 = local_c8 - uVar23;
          local_d0 = uVar23;
          uVar21 = (**(code **)(*plVar35 + 0xc0))(plVar35);
          if ((uVar21 & 1) != 0) {
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar16 + 0x38d480)) {
              FUN_02bcc824(plVar35,uVar23,lVar24,8);
              goto LAB_025afdd8;
            }
          }
          (**(code **)(*plVar35 + 0x18))(plVar35,uVar23,lVar24,8);
        }
LAB_025afdd8:
        puVar22 = puVar22 + 1;
      } while (puVar22 != puVar4);
    }
    if (local_a0[0] != (long *)0x0) {
      lVar16 = local_a0[0][0xb];
      piVar3 = (int *)(lVar16 + 0xc);
      do {
        iVar15 = *piVar3;
        cVar11 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = iVar15 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_a0[0] + 0x20))();
      }
    }
  }
  return;
}


