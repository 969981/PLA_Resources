/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b725cc; name: FUN_00b725cc
 */


void FUN_00b725cc(long *param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  ushort *puVar24;
  ulong uVar25;
  int *piVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  byte *unaff_x20;
  undefined8 *puVar31;
  long *plVar32;
  byte *pbVar33;
  uint *puVar34;
  uint *puVar35;
  long lVar36;
  long lVar37;
  undefined1 *local_e8;
  byte *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  ulong local_90;
  float local_88;
  undefined1 auStack_80 [32];
  
  plVar32 = *(long **)(param_2 + 0xa0);
  plVar10 = (long *)(**(code **)(*plVar32 + 0x10))(plVar32,0x160,8);
  puVar8 = PTR_DAT_04379528;
  puVar7 = PTR_DAT_04379520;
  if (plVar10 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar1 = PTR_DAT_04379528;
      if (iVar9 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00b73644:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar32;
    puVar1 = PTR_DAT_0437a508 + 0x10;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = (long)puVar1;
    plVar10[1] = 0;
    plVar10[6] = (long)puVar1;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    FUN_00b6de14(plVar10 + 0xc);
    FUN_00b6df04(plVar10 + 0x13);
    plVar10[0x22] = 0;
    plVar10[0x23] = 0;
    plVar10[0x20] = 0;
    plVar10[0x21] = 0;
    FUN_00b6e968(plVar10 + 0x24);
    plVar10[0x2b] = 0;
    *param_1 = (long)plVar10;
    param_1[1] = (long)plVar32;
    param_1[2] = 0x160;
    param_1[3] = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  puVar13 = *(uint **)(*(long *)(*(long *)(param_2 + 0x198) + 8) + 0x250);
  piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
  puVar24 = (ushort *)((long)piVar2 - (long)*piVar2);
  if (*puVar24 < 5) {
    piVar26 = (int *)0x0;
  }
  else {
    piVar26 = (int *)0x0;
    if ((ulong)puVar24[2] != 0) {
      puVar35 = (uint *)((long)piVar2 + (ulong)puVar24[2]);
      piVar26 = (int *)((long)puVar35 + (ulong)*puVar35);
    }
  }
  if (((6 < *(ushort *)((long)piVar26 - (long)*piVar26)) &&
      (uVar27 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[3], uVar27 != 0)) &&
     (puVar35 = (uint *)((long)piVar26 + uVar27), (long)puVar35 + (ulong)*puVar35 != 0)) {
    puVar35 = (uint *)((long)piVar2 + (ulong)puVar24[2]);
    uVar27 = (ulong)*puVar35;
    piVar2 = (int *)((long)puVar35 + uVar27);
    uVar25 = (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2));
    puVar35 = (uint *)((long)piVar2 + uVar25);
    uVar28 = (ulong)*puVar35;
    puVar35 = (uint *)((long)puVar35 + uVar28);
    puVar34 = puVar35 + 1;
    uVar29 = (ulong)*puVar35;
    if (uVar29 != 0) {
      lVar14 = *param_1;
      puVar31 = (undefined8 *)(lVar14 + 0x138);
      lVar11 = (long)puVar13 + uVar28 + uVar25 + uVar27 + (ulong)puVar24[2] + (ulong)*puVar13 + 9;
      puVar13 = puVar34;
      do {
        puVar17 = &DAT_cbf29ce484222645;
        puVar35 = puVar13 + 1;
        uVar3 = *puVar13;
        pbVar33 = (byte *)((long)puVar35 + (ulong)uVar3);
        local_d8 = (long *)strlen((char *)pbVar33);
        bVar4 = *pbVar33;
        if (bVar4 != 0) {
          pbVar19 = (byte *)(lVar11 + (ulong)uVar3);
          do {
            puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (bVar4 != 0);
        }
        local_d0 = (long *)0x0;
        uVar27 = *(ulong *)(lVar14 + 0x128);
        local_e8 = puVar17;
        local_e0 = pbVar33;
        if (uVar27 < *(ulong *)(lVar14 + 0x130)) {
          FUN_00b834f4(puVar31,uVar27,&local_e8);
          *(long *)(lVar14 + 0x128) = *(long *)(lVar14 + 0x128) + 0x20;
        }
        else {
          uVar25 = *(ulong *)(lVar14 + 0x140);
          lVar22 = (long)(uVar27 - *(long *)(lVar14 + 0x120)) >> 5;
          if (0x7ffffffffffffffe < uVar25) {
            uVar25 = 0x7fffffffffffffff;
          }
          uVar27 = lVar22 + 1;
          if (uVar25 < uVar27) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar18 = *(ulong *)(lVar14 + 0x130) - *(long *)(lVar14 + 0x120);
          if ((ulong)(lVar18 >> 5) < uVar25 >> 1) {
            uVar28 = lVar18 >> 4;
            uVar25 = uVar27;
            if (uVar27 <= uVar28) {
              uVar25 = uVar28;
            }
          }
          if (uVar25 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = (**(code **)(*(long *)*puVar31 + 0x10))((long *)*puVar31,uVar25 << 5,8);
            if (lVar18 == 0) {
              (**(code **)(*(long *)*puVar31 + 0xb8))();
            }
          }
          lVar37 = lVar18 + lVar22 * 0x20;
          FUN_00b834f4(puVar31,lVar37,&local_e8);
          lVar36 = *(long *)(lVar14 + 0x120);
          lVar22 = lVar37 + 0x20;
          lVar30 = *(long *)(lVar14 + 0x128);
          if (lVar30 == lVar36) {
            lVar30 = lVar36;
          }
          else {
            lVar37 = lVar37 + -0x20;
            FUN_00b835e0(puVar31,lVar37,lVar30 + -0x20);
            if (lVar30 + -0x20 != lVar36) {
              do {
                lVar37 = lVar37 + -0x20;
                FUN_00b835e0(puVar31,lVar37,lVar30 + -0x40);
                lVar30 = lVar30 + -0x20;
              } while (lVar36 + 0x20 != lVar30);
            }
            lVar36 = *(long *)(lVar14 + 0x120);
            lVar30 = *(long *)(lVar14 + 0x128);
          }
          *(long *)(lVar14 + 0x120) = lVar37;
          *(long *)(lVar14 + 0x128) = lVar22;
          lVar22 = *(long *)(lVar14 + 0x130);
          *(ulong *)(lVar14 + 0x130) = lVar18 + uVar25 * 0x20;
          if (lVar30 != lVar36) {
            if (*(long **)(lVar30 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar30 + -8) + 0x20))();
            }
            if (lVar30 + -0x20 != lVar36) {
              do {
                if (*(long **)(lVar30 + -0x28) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar30 + -0x28) + 0x20))();
                }
                lVar30 = lVar30 + -0x20;
              } while (lVar36 + 0x20 != lVar30);
            }
          }
          if (lVar36 != 0) {
            plVar10 = (long *)*puVar31;
            lVar22 = lVar22 - lVar36;
            uVar27 = (**(code **)(*plVar10 + 0xc0))(plVar10);
            if ((uVar27 & 1) != 0) {
              lVar18 = tpidr_el0;
              if (*(char *)(lVar18 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar18 + 0x38d488) = 1;
                *(undefined8 *)(lVar18 + 0x38d478) = 0;
                *(undefined8 *)(lVar18 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar18 + 0x38d480)) {
                FUN_02bcc824(plVar10,lVar36,lVar22,8);
                goto joined_r0x00b730cc;
              }
            }
            (**(code **)(*plVar10 + 0x18))(plVar10,lVar36,lVar22,8);
          }
        }
joined_r0x00b730cc:
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        unaff_x20 = &DAT_cbf29ce484222645;
        lVar11 = lVar11 + 4;
        puVar13 = puVar35;
      } while (puVar35 != puVar34 + uVar29);
    }
  }
  local_d8 = *(long **)(param_2 + 0xa0);
  local_e8 = (undefined1 *)0x0;
  local_e0 = (byte *)0x0;
  local_b8 = (long *)0x0;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1.0;
  local_d0 = (long *)0x666666666666666;
  uStack_c8 = 0;
  local_a8 = 0x666666666666666;
  local_a0 = 0;
  plVar10 = *(long **)(param_2 + 0x208);
  local_b0 = local_d8;
  if (plVar10 != (long *)0x0) {
    pbVar33 = (byte *)plVar10[2];
LAB_00b72888:
    do {
      pbVar19 = local_e0;
      plVar32 = (long *)(**(code **)(*local_b0 + 0x10))(local_b0,0x38,8);
      if (plVar32 == (long *)0x0) {
        (**(code **)(*local_b0 + 0xb8))();
      }
      plVar15 = local_b0;
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        FUN_008a62a4(puVar8);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar7);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
      if (lVar11 != 0) {
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00b73644;
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      }
      plVar32[2] = plVar10[2];
      lVar14 = plVar10[3];
      plVar10[3] = 0;
      plVar32[3] = lVar14;
      lVar22 = plVar10[6];
      lVar14 = plVar10[5];
      plVar32[4] = plVar10[4];
      plVar32[5] = lVar14;
      plVar32[6] = lVar22;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      *plVar32 = 0;
      plVar32[1] = (long)pbVar33;
      if (pbVar19 == (byte *)0x0) {
LAB_00b729c4:
        pbVar19 = (byte *)((ulong)(pbVar19 < (byte *)0x3 ||
                                  ((ulong)pbVar19 & (ulong)(pbVar19 + -1)) != 0) |
                          (long)pbVar19 << 1);
        pbVar20 = (byte *)(long)((float)(local_90 + 1) / local_88);
        if (pbVar20 <= pbVar19) {
          pbVar20 = pbVar19;
        }
        if (pbVar20 + -1 == (byte *)0x0) {
          pbVar20 = (byte *)0x2;
        }
        else if (((ulong)pbVar20 & (ulong)(pbVar20 + -1)) != 0) {
          pbVar20 = (byte *)std::__next_prime((ulong)pbVar20);
        }
        pbVar19 = local_e0;
        if (local_e0 < pbVar20) {
          pbVar12 = pbVar20;
LAB_00b72a20:
          FUN_00b836e4(&local_e8,pbVar12);
        }
        else if (pbVar20 < local_e0) {
          pbVar12 = (byte *)(long)((float)local_90 / local_88);
          if ((local_e0 < (byte *)0x3) ||
             (uVar27 = (long)local_e0 - ((ulong)local_e0 >> 1 & 0x5555555555555555),
             uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333),
             1 < (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
            pbVar12 = (byte *)std::__next_prime((ulong)pbVar12);
          }
          else if ((byte *)0x1 < pbVar12) {
            pbVar12 = (byte *)(1L << ((ulong)(uint)-(int)LZCOUNT(pbVar12 + -1) & 0x3f));
          }
          if (pbVar12 <= pbVar20) {
            pbVar12 = pbVar20;
          }
          if (pbVar12 < pbVar19) goto LAB_00b72a20;
        }
        pbVar19 = local_e0;
        if (((ulong)local_e0 & (ulong)(local_e0 + -1)) == 0) {
          unaff_x20 = (byte *)((ulong)(local_e0 + -1) & (ulong)pbVar33);
        }
        else if (pbVar33 < local_e0) {
          unaff_x20 = pbVar33;
        }
        else {
          uVar27 = 0;
          if (local_e0 != (byte *)0x0) {
            uVar27 = (ulong)pbVar33 / (ulong)local_e0;
          }
          unaff_x20 = pbVar33 + -(uVar27 * (long)local_e0);
        }
      }
      else if (local_88 * (float)pbVar19 < (float)(local_90 + 1)) goto LAB_00b729c4;
      plVar15 = *(long **)(local_e8 + (long)unaff_x20 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar32 = (long)local_b8;
        *(long ***)(local_e8 + (long)unaff_x20 * 8) = &local_b8;
        local_b8 = plVar32;
        if (*plVar32 != 0) {
          pbVar33 = *(byte **)(*plVar32 + 8);
          if (((ulong)pbVar19 & (ulong)(pbVar19 + -1)) == 0) {
            pbVar33 = (byte *)((ulong)pbVar33 & (ulong)(pbVar19 + -1));
          }
          else if (pbVar19 <= pbVar33) {
            uVar27 = 0;
            if (pbVar19 != (byte *)0x0) {
              uVar27 = (ulong)pbVar33 / (ulong)pbVar19;
            }
            pbVar33 = pbVar33 + -(uVar27 * (long)pbVar19);
          }
          plVar15 = (long *)(local_e8 + (long)pbVar33 * 8);
          goto LAB_00b72994;
        }
      }
      else {
        *plVar32 = *plVar15;
LAB_00b72994:
        *plVar15 = (long)plVar32;
      }
      local_90 = local_90 + 1;
      while( true ) {
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_00b72a58;
        pbVar33 = (byte *)plVar10[2];
        if (local_e0 == (byte *)0x0) break;
        uVar27 = (long)local_e0 - ((ulong)local_e0 >> 1 & 0x5555555555555555);
        uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
        uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar27 < 2) {
          unaff_x20 = (byte *)((ulong)pbVar33 & (ulong)(local_e0 + -1));
        }
        else {
          unaff_x20 = pbVar33;
          if (local_e0 <= pbVar33) {
            uVar25 = 0;
            if (local_e0 != (byte *)0x0) {
              uVar25 = (ulong)pbVar33 / (ulong)local_e0;
            }
            unaff_x20 = pbVar33 + -(uVar25 * (long)local_e0);
          }
        }
        plVar32 = *(long **)(local_e8 + (long)unaff_x20 * 8);
        if (plVar32 == (long *)0x0) break;
        if (uVar27 < 2) {
          do {
            plVar32 = (long *)*plVar32;
            if ((plVar32 == (long *)0x0) ||
               ((byte *)plVar32[1] != pbVar33 &&
                (byte *)((ulong)plVar32[1] & (ulong)(local_e0 + -1)) != unaff_x20))
            goto LAB_00b72888;
          } while ((byte *)plVar32[2] != pbVar33);
        }
        else {
          do {
            plVar32 = (long *)*plVar32;
            if (plVar32 == (long *)0x0) goto LAB_00b72888;
            pbVar19 = (byte *)plVar32[1];
            if (pbVar19 != pbVar33) {
              if (local_e0 <= pbVar19) {
                uVar27 = 0;
                if (local_e0 != (byte *)0x0) {
                  uVar27 = (ulong)pbVar19 / (ulong)local_e0;
                }
                pbVar19 = pbVar19 + -(uVar27 * (long)local_e0);
              }
              if (pbVar19 != unaff_x20) goto LAB_00b72888;
            }
          } while ((byte *)plVar32[2] != pbVar33);
        }
      }
    } while( true );
  }
LAB_00b72a58:
  lVar11 = *param_1;
  FUN_00ae2200(lVar11 + 8,param_2 + 0x170);
  plVar10 = *(long **)(lVar11 + 0x18);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  if (plVar10 != (long *)0x0) {
    plVar32 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *(int *)plVar32 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  uVar16 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_2 + 0x180) = 0;
  plVar10 = *(long **)(lVar11 + 0x20);
  *(undefined8 *)(lVar11 + 0x18) = uVar16;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  if (plVar10 != (long *)0x0) {
    plVar32 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *(int *)plVar32 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  uVar16 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_2 + 0x188) = 0;
  plVar10 = *(long **)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x20) = uVar16;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  if (plVar10 != (long *)0x0) {
    lVar14 = plVar10[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  uVar16 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(lVar11 + 0x28) = uVar16;
  lVar11 = *(long *)(param_2 + 0x198);
  lVar14 = *param_1;
  FUN_00ae2200(lVar14 + 0x38,lVar11 + 8);
  plVar10 = *(long **)(lVar14 + 0x48);
  *(undefined8 *)(lVar14 + 0x48) = 0;
  if (plVar10 != (long *)0x0) {
    plVar32 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *(int *)plVar32 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  uVar16 = *(undefined8 *)(lVar11 + 0x18);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  plVar10 = *(long **)(lVar14 + 0x50);
  *(undefined8 *)(lVar14 + 0x48) = uVar16;
  *(undefined8 *)(lVar14 + 0x50) = 0;
  if (plVar10 != (long *)0x0) {
    plVar32 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *(int *)plVar32 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  uVar16 = *(undefined8 *)(lVar11 + 0x20);
  *(undefined8 *)(lVar11 + 0x20) = 0;
  plVar10 = *(long **)(lVar14 + 0x58);
  *(undefined8 *)(lVar14 + 0x50) = uVar16;
  *(undefined8 *)(lVar14 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    lVar22 = plVar10[0xb];
    piVar2 = (int *)(lVar22 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  uVar16 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(undefined8 *)(lVar14 + 0x58) = uVar16;
  lVar11 = *param_1;
  plVar10 = (long *)(lVar11 + 0x60);
  if (*plVar10 != 0) {
    FUN_00b74e00(plVar10);
    lVar14 = *(long *)(lVar11 + 0x60);
    plVar32 = *(long **)(lVar11 + 0x78);
    lVar22 = *(long *)(lVar11 + 0x70) - lVar14;
    uVar27 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar27 & 1) == 0) {
LAB_00b73394:
      (**(code **)(*plVar32 + 0x18))(plVar32,lVar14,lVar22,8);
    }
    else {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_00b73394;
      FUN_02bcc824(plVar32,lVar14,lVar22,8);
    }
    *(undefined8 *)(lVar11 + 0x68) = 0;
    *(undefined8 *)(lVar11 + 0x70) = 0;
    *plVar10 = 0;
  }
  uVar16 = *(undefined8 *)(param_2 + 0x328);
  plVar10 = (long *)(lVar11 + 0x98);
  uVar21 = *(undefined8 *)(param_2 + 0x330);
  uVar23 = *(undefined8 *)(param_2 + 0x338);
  *(undefined4 *)(lVar11 + 0x90) = *(undefined4 *)(param_2 + 0x340);
  *(undefined8 *)(lVar11 + 0x80) = uVar21;
  *(undefined8 *)(lVar11 + 0x88) = uVar23;
  *(undefined8 *)(lVar11 + 0x78) = uVar16;
  *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_2 + 0x318) = 0;
  *(undefined8 *)(param_2 + 800) = 0;
  *(undefined8 *)(param_2 + 0x310) = 0;
  if (*(long *)(lVar11 + 0xf0) != 0) {
    FUN_00b6ea58(plVar10,*(undefined8 *)(lVar11 + 200));
    uVar27 = *(ulong *)(lVar11 + 0xa0);
    *(undefined8 *)(lVar11 + 200) = 0;
    if (uVar27 != 0) {
      uVar25 = uVar27 & 3;
      if (uVar27 - 1 < 3) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        do {
          lVar22 = lVar14 * 8;
          lVar14 = lVar14 + 4;
          *(undefined8 *)(*plVar10 + lVar22) = 0;
          *(undefined8 *)(*plVar10 + lVar22 + 8) = 0;
          *(undefined8 *)(*plVar10 + lVar22 + 0x10) = 0;
          *(undefined8 *)(*plVar10 + lVar22 + 0x18) = 0;
        } while (uVar27 - uVar25 != lVar14);
      }
      if (uVar25 != 0) {
        lVar14 = lVar14 << 3;
        do {
          *(undefined8 *)(*plVar10 + lVar14) = 0;
          uVar25 = uVar25 - 1;
          lVar14 = lVar14 + 8;
        } while (uVar25 != 0);
      }
    }
    *(undefined8 *)(lVar11 + 0xf0) = 0;
  }
  puVar17 = local_e8;
  local_e8 = (undefined1 *)0x0;
  lVar14 = *plVar10;
  *plVar10 = (long)puVar17;
  if (lVar14 != 0) {
    plVar32 = *(long **)(lVar11 + 0xa8);
    lVar22 = *(long *)(lVar11 + 0xa0) << 3;
    uVar27 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar27 & 1) != 0) {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar14,lVar22,8);
        goto LAB_00b72c88;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar14,lVar22,8);
  }
LAB_00b72c88:
  pbVar33 = local_e0;
  *(byte **)(lVar11 + 0xa0) = local_e0;
  *(long **)(lVar11 + 0xa8) = local_d8;
  local_e0 = (byte *)0x0;
  *(undefined4 *)(lVar11 + 0xc0) = local_c0;
  *(long **)(lVar11 + 0xb0) = local_d0;
  *(undefined8 *)(lVar11 + 0xb8) = uStack_c8;
  *(undefined4 *)(lVar11 + 0xe8) = local_98;
  *(long **)(lVar11 + 0xd0) = local_b0;
  *(undefined8 *)(lVar11 + 0xd8) = local_a8;
  *(undefined8 *)(lVar11 + 0xe0) = local_a0;
  *(ulong *)(lVar11 + 0xf0) = local_90;
  *(float *)(lVar11 + 0xf8) = local_88;
  *(undefined8 *)(lVar11 + 200) = local_b8;
  if (local_90 != 0) {
    pbVar19 = (byte *)local_b8[1];
    if (((ulong)pbVar33 & (ulong)(pbVar33 + -1)) == 0) {
      pbVar19 = (byte *)((ulong)pbVar19 & (ulong)(pbVar33 + -1));
    }
    else if (pbVar33 <= pbVar19) {
      uVar27 = 0;
      if (pbVar33 != (byte *)0x0) {
        uVar27 = (ulong)pbVar19 / (ulong)pbVar33;
      }
      pbVar19 = pbVar19 + -(uVar27 * (long)pbVar33);
    }
    *(undefined8 **)(*plVar10 + (long)pbVar19 * 8) = (undefined8 *)(lVar11 + 200);
    local_90 = 0;
    local_b8 = (long *)0x0;
  }
  uVar16 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 0x148) = 0;
  puVar31 = *(undefined8 **)(lVar11 + 0x100);
  *(undefined8 *)(lVar11 + 0x100) = uVar16;
  if (puVar31 == (undefined8 *)0x0) goto LAB_00b72d20;
  FUN_02bcbe58(auStack_80,0);
  (**(code **)*puVar31)(puVar31);
  plVar10 = *(long **)(lVar11 + 0x108);
  uVar16 = *(undefined8 *)(lVar11 + 0x110);
  uVar21 = *(undefined8 *)(lVar11 + 0x118);
  uVar27 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar27 & 1) == 0) {
LAB_00b734ec:
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar31,uVar16,uVar21);
  }
  else {
    lVar14 = tpidr_el0;
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_00b734ec;
    FUN_02bcc824(plVar10,puVar31,uVar16,uVar21);
  }
  lVar14 = tpidr_el0;
  if (*(char *)(lVar14 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar14 + 0x38d488) = 1;
    *(undefined8 *)(lVar14 + 0x38d478) = 0;
    *(undefined8 *)(lVar14 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar14 + 0x38d480) + -1;
  *(int *)(lVar14 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar14 + 0x38d484) = 0;
  }
LAB_00b72d20:
  uVar16 = *(undefined8 *)(param_2 + 0x150);
  uVar21 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(lVar11 + 0x110) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(lVar11 + 0x118) = uVar21;
  plVar10 = *(long **)(lVar11 + 0x158);
  *(undefined8 *)(lVar11 + 0x108) = uVar16;
  *(undefined8 *)(lVar11 + 0x158) = 0;
  if (plVar10 != (long *)0x0) {
    plVar32 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar6) {
        *(int *)plVar32 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  uVar16 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(lVar11 + 0x158) = uVar16;
  FUN_00b6ea58(&local_e8,local_b8);
  plVar10 = local_d8;
  puVar17 = local_e8;
  local_e8 = (undefined1 *)0x0;
  if (puVar17 != (undefined1 *)0x0) {
    lVar11 = (long)local_e0 << 3;
    uVar27 = (**(code **)(*local_d8 + 0xc0))(local_d8);
    if ((uVar27 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar10,puVar17,lVar11,8);
        return;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar17,lVar11,8);
  }
  return;
}


