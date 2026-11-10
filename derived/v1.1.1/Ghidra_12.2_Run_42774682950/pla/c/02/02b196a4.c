/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b196a4; name: FUN_02b196a4
 */


void FUN_02b196a4(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  int *piVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  undefined4 uVar36;
  ulong local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  long *local_100;
  ulong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  long *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  lVar25 = *(long *)(param_2 + 8);
  lVar10 = *(long *)(lVar25 + 0x278) - *(long *)(lVar25 + 0x270);
  if (lVar10 == 0) {
    return;
  }
  uVar6 = *(undefined8 *)PTR_DAT_0437a120;
  uVar8 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
  uVar7 = *(undefined8 *)PTR_DAT_04379570;
  uVar9 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  uVar18 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x80);
  do {
    iVar17 = (int)uVar18;
    lVar29 = (long)iVar17;
    uVar14 = FUN_02b1f8b0(*(undefined8 *)(param_1 + 0x58),
                          *(long *)(lVar25 + 0x270) + (long)iVar17 * 0x130);
    if ((uVar14 & 0xff) == 0) {
      uVar14 = FUN_02b18f84(param_1,param_2,uVar18);
    }
    local_100 = *(long **)(param_1 + 8);
    local_160 = 0;
    local_158 = 0;
    local_110 = 0;
    local_108 = 0;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_f8 = 0x666666666666666;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c0 = 0x3ffffffffffffff;
    uStack_b8 = 0;
    local_b0 = 0;
    lVar25 = *(long *)(*(long *)(param_2 + 8) + 0x270);
    local_120 = *(char *)(lVar25 + lVar29 * 0x130 + 0x70) != '\0';
    local_180 = uVar6;
    local_178 = uVar8;
    local_170 = uVar7;
    local_168 = uVar9;
    local_150 = uVar6;
    local_148 = uVar8;
    local_140 = uVar7;
    uStack_138 = uVar9;
    if ((bool)local_120) {
      lVar19 = *(long *)(param_1 + 0x58);
      uVar18 = (*(long *)(lVar19 + 0xa8) + *(long *)(lVar19 + 0xa0)) - 1;
      lVar19 = *(long *)(*(long *)(*(long *)(lVar19 + 0x68) + (uVar18 / 0x12) * 8) +
                        (uVar18 % 0x12) * 0xd8) + ((long)uVar14 >> 0x20) * 0x1b0;
      local_178 = *(undefined8 *)(lVar19 + 0x48);
      local_158 = *(undefined8 *)(lVar19 + 0x68);
      local_168 = *(undefined8 *)(lVar19 + 0x58);
      local_180 = *(undefined8 *)(lVar19 + 0x40);
      local_170 = *(undefined8 *)(lVar19 + 0x50);
      local_160 = *(undefined8 *)(lVar19 + 0x60);
      lVar19 = lVar25 + lVar29 * 0x130;
      local_148 = *(undefined8 *)(lVar19 + 0x48);
      local_140 = *(undefined8 *)(lVar19 + 0x50);
      uStack_138 = *(undefined8 *)(lVar19 + 0x58);
      local_130 = *(undefined8 *)(lVar19 + 0x60);
      uStack_128 = *(undefined8 *)(lVar19 + 0x68);
      local_150 = *(undefined8 *)(lVar19 + 0x40);
    }
    lVar19 = lVar25 + lVar29 * 0x130;
    plVar32 = (long *)(lVar19 + 0x80);
    plVar35 = (long *)*plVar32;
    plVar34 = (long *)(lVar19 + 0x88);
    plVar30 = (long *)*plVar34;
    lVar19 = tpidr_el0;
    local_190[0] = uVar14;
    local_c8 = local_100;
    if (plVar35 != plVar30) {
      do {
        FUN_02b22400(*(undefined8 *)(param_1 + 0x58),local_190,plVar35,auStack_90);
        plVar1 = local_100;
        plVar26 = (long *)*plVar32;
        plVar20 = (long *)*plVar34;
        plVar16 = plVar26;
        if ((plVar26 != plVar20) && (*plVar26 != *plVar35)) {
          do {
            plVar16 = plVar16 + 4;
            if (plVar20 == plVar16) {
              plVar16 = plVar20;
              goto LAB_02b199c0;
            }
          } while (*plVar16 != *plVar35);
        }
LAB_02b199c0:
        uVar18 = 0xffffffff;
        if (plVar20 != plVar16) {
          uVar18 = (ulong)((long)plVar16 - (long)plVar26) >> 5 & 0xffffffff;
        }
        uVar36 = 0;
        piVar28 = *(int **)(lVar25 + lVar29 * 0x130 + 0x78);
        puVar21 = (uint *)((long)piVar28 + (ulong)*(ushort *)((long)piVar28 + (10 - (long)*piVar28))
                          );
        puVar21 = (uint *)((long)puVar21 + uVar18 * 4 + (ulong)*puVar21 + 4);
        piVar28 = (int *)((long)puVar21 + (ulong)*puVar21);
        if (6 < *(ushort *)((long)piVar28 - (long)*piVar28)) {
          uVar18 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[3];
          uVar36 = 0;
          if (uVar18 != 0) {
            uVar36 = *(undefined4 *)((long)piVar28 + uVar18);
          }
        }
        local_a0 = CONCAT44(local_a0._4_4_,uVar36);
        if (local_110 < local_108) {
          FUN_02b1b1f4(local_100,local_110,plVar35,auStack_90,&local_a0);
          local_110 = local_110 + 0x28;
        }
        else {
          lVar27 = (long)(local_110 - local_118) >> 3;
          uVar18 = local_f8;
          if (0x7ffffffffffffffe < local_f8) {
            uVar18 = 0x7fffffffffffffff;
          }
          uVar14 = lVar27 * -0x3333333333333333 + 1;
          if (uVar18 < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar22 = (long)(local_108 - local_118) >> 3;
          if ((ulong)(lVar22 * -0x3333333333333333) < uVar18 >> 1) {
            uVar23 = lVar22 * -0x6666666666666666;
            uVar18 = uVar14;
            if (uVar14 <= uVar23) {
              uVar18 = uVar23;
            }
          }
          if (uVar18 == 0) {
            lVar22 = 0;
          }
          else {
            lVar22 = (**(code **)(*local_100 + 0x10))(local_100,uVar18 * 0x28,8);
            if (lVar22 == 0) {
              (**(code **)(*plVar1 + 0xb8))(plVar1);
            }
          }
          uVar23 = lVar22 + lVar27 * 8;
          FUN_02b1b1f4(plVar1,uVar23,plVar35,auStack_90,&local_a0);
          uVar14 = local_110;
          if (local_110 == local_118) {
            local_110 = local_118;
            uVar14 = uVar23;
            uVar31 = local_118;
          }
          else {
            lVar27 = 0;
            lVar33 = local_118 - local_110;
            do {
              plVar16 = local_100;
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar11 = PTR_DAT_04379528;
                if (iVar13 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar15 != 0) {
                if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02b1a458;
                *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar16;
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              }
              lVar3 = uVar14 + lVar27;
              lVar4 = uVar23 + lVar27;
              *(undefined8 *)(lVar4 + -0x28) = *(undefined8 *)(lVar3 + -0x28);
              *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)(lVar3 + -0x20);
              *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
              plVar16 = *(long **)(lVar3 + -0x10);
              *(long **)(lVar4 + -0x10) = plVar16;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x18))();
              }
              *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar3 + -8);
              if (lVar15 != 0) {
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
              }
              lVar27 = lVar27 + -0x28;
            } while (lVar33 != lVar27);
            uVar14 = uVar23 + lVar27;
            uVar31 = local_118;
          }
          uVar12 = local_108;
          local_108 = lVar22 + uVar18 * 0x28;
          uVar23 = uVar23 + 0x28;
          uVar18 = local_110;
          local_118 = uVar14;
          plVar16 = local_100;
          while( true ) {
            local_110 = uVar23;
            local_100 = plVar16;
            if (uVar18 == uVar31) break;
            plVar1 = (long *)(uVar18 - 0x10);
            uVar18 = uVar18 - 0x28;
            uVar23 = local_110;
            if ((long *)*plVar1 != (long *)0x0) {
              (**(code **)(*(long *)*plVar1 + 0x20))();
              uVar23 = local_110;
              plVar16 = local_100;
            }
          }
          if (uVar31 != 0) {
            uVar18 = (**(code **)(*plVar16 + 0xc0))(plVar16);
            if ((uVar18 & 1) != 0) {
              if (*(char *)(lVar19 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar19 + 0x38d488) = 1;
                *(undefined8 *)(lVar19 + 0x38d478) = 0;
                *(undefined8 *)(lVar19 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar19 + 0x38d480)) {
                FUN_02bcc824(plVar16,uVar31,uVar12 - uVar31,8);
                goto LAB_02b19950;
              }
            }
            (**(code **)(*plVar16 + 0x18))(plVar16,uVar31,uVar12 - uVar31,8);
          }
        }
LAB_02b19950:
        plVar35 = plVar35 + 4;
      } while (plVar35 != plVar30);
    }
    lVar27 = lVar25 + lVar29 * 0x130;
    plVar34 = (long *)(lVar27 + 0xb8);
    plVar35 = (long *)*plVar34;
    plVar32 = (long *)(lVar27 + 0xc0);
    plVar30 = (long *)*plVar32;
    if (plVar35 != plVar30) {
      do {
        FUN_02b2256c(*(undefined8 *)(param_1 + 0x58),local_190,plVar35,auStack_90);
        plVar1 = local_c8;
        plVar26 = (long *)*plVar34;
        plVar20 = (long *)*plVar32;
        plVar16 = plVar26;
        if ((plVar26 != plVar20) && (*plVar26 != *plVar35)) {
          do {
            plVar16 = plVar16 + 4;
            if (plVar20 == plVar16) {
              plVar16 = plVar20;
              goto LAB_02b19e30;
            }
          } while (*plVar16 != *plVar35);
        }
LAB_02b19e30:
        uVar18 = 0xffffffff;
        if (plVar20 != plVar16) {
          uVar18 = (ulong)((long)plVar16 - (long)plVar26) >> 5 & 0xffffffff;
        }
        piVar28 = *(int **)(lVar25 + lVar29 * 0x130 + 0x78);
        puVar21 = (uint *)((long)piVar28 +
                          (ulong)*(ushort *)((long)piVar28 + (0xc - (long)*piVar28)));
        puVar21 = (uint *)((long)puVar21 + uVar18 * 4 + (ulong)*puVar21 + 4);
        piVar28 = (int *)((long)puVar21 + (ulong)*puVar21);
        puVar5 = (undefined8 *)
                 ((long)piVar28 + (ulong)*(ushort *)((long)piVar28 + (6 - (long)*piVar28)));
        local_a0 = *puVar5;
        uStack_98 = puVar5[1];
        if (local_d8 < local_d0) {
          FUN_02b1b314(local_c8,local_d8,plVar35,auStack_90,&local_a0);
          local_d8 = local_d8 + 0x40;
        }
        else {
          lVar27 = (long)(local_d8 - local_e0) >> 6;
          uVar18 = lVar27 + 1;
          uVar14 = local_c0;
          if (0x7ffffffffffffffe < local_c0) {
            uVar14 = 0x7fffffffffffffff;
          }
          if (uVar14 < uVar18) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)(local_d0 - local_e0) >> 6) < uVar14 >> 1) {
            uVar23 = (long)(local_d0 - local_e0) >> 5;
            uVar14 = uVar18;
            if (uVar18 <= uVar23) {
              uVar14 = uVar23;
            }
          }
          if (uVar14 == 0) {
            lVar22 = 0;
          }
          else {
            lVar22 = (**(code **)(*local_c8 + 0x10))(local_c8,uVar14 << 6,0x10);
            if (lVar22 == 0) {
              (**(code **)(*plVar1 + 0xb8))(plVar1);
            }
          }
          uVar18 = lVar22 + lVar27 * 0x40;
          FUN_02b1b314(plVar1,uVar18,plVar35,auStack_90,&local_a0);
          uVar23 = local_d8;
          if (local_d8 == local_e0) {
            local_d8 = local_e0;
            uVar23 = uVar18;
            uVar31 = local_e0;
          }
          else {
            lVar33 = 0;
            lVar27 = local_e0 - local_d8;
            do {
              plVar16 = local_c8;
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar11 = PTR_DAT_04379528;
                if (iVar13 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar15 != 0) {
                if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_02b1a458:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar16;
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              }
              lVar3 = uVar23 + lVar33;
              lVar4 = uVar18 + lVar33;
              *(undefined8 *)(lVar4 + -0x40) = *(undefined8 *)(lVar3 + -0x40);
              *(undefined8 *)(lVar4 + -0x38) = *(undefined8 *)(lVar3 + -0x38);
              *(undefined8 *)(lVar4 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
              plVar16 = *(long **)(lVar3 + -0x28);
              *(long **)(lVar4 + -0x28) = plVar16;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x18))();
              }
              uVar24 = *(undefined8 *)(lVar3 + -8);
              *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
              *(undefined8 *)(lVar4 + -8) = uVar24;
              uVar24 = *(undefined8 *)(lVar3 + -0x20);
              *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar3 + -0x10);
              *(undefined8 *)(lVar4 + -0x20) = uVar24;
              if (lVar15 != 0) {
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
              }
              lVar33 = lVar33 + -0x40;
            } while (lVar27 != lVar33);
            uVar23 = uVar18 + lVar33;
            uVar31 = local_e0;
          }
          uVar12 = local_d0;
          local_d0 = lVar22 + uVar14 * 0x40;
          uVar14 = uVar18 + 0x40;
          uVar18 = local_d8;
          local_e0 = uVar23;
          plVar16 = local_c8;
          while( true ) {
            local_d8 = uVar14;
            local_c8 = plVar16;
            if (uVar18 == uVar31) break;
            plVar1 = (long *)(uVar18 - 0x28);
            uVar18 = uVar18 - 0x40;
            uVar14 = local_d8;
            if ((long *)*plVar1 != (long *)0x0) {
              (**(code **)(*(long *)*plVar1 + 0x20))();
              uVar14 = local_d8;
              plVar16 = local_c8;
            }
          }
          if (uVar31 != 0) {
            uVar18 = (**(code **)(*plVar16 + 0xc0))(plVar16);
            if ((uVar18 & 1) != 0) {
              if (*(char *)(lVar19 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar19 + 0x38d488) = 1;
                *(undefined8 *)(lVar19 + 0x38d478) = 0;
                *(undefined8 *)(lVar19 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar19 + 0x38d480)) {
                FUN_02bcc824(plVar16,uVar31,uVar12 - uVar31,0x10);
                goto LAB_02b19dc0;
              }
            }
            (**(code **)(*plVar16 + 0x18))(plVar16,uVar31,uVar12 - uVar31,0x10);
          }
        }
LAB_02b19dc0:
        plVar35 = plVar35 + 4;
      } while (plVar35 != plVar30);
    }
    uVar18 = *(ulong *)(param_1 + 0x70);
    if (uVar18 < *(ulong *)(param_1 + 0x78)) {
      FUN_02b1b044(puVar2,uVar18,local_190);
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 0xf0;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x88);
      lVar25 = (long)(uVar18 - *(long *)(param_1 + 0x68)) >> 4;
      if (0x7ffffffffffffffe < uVar14) {
        uVar14 = 0x7fffffffffffffff;
      }
      uVar18 = lVar25 * -0x1111111111111111 + 1;
      if (uVar14 < uVar18) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar29 = (long)(*(ulong *)(param_1 + 0x78) - *(long *)(param_1 + 0x68)) >> 4;
      uVar23 = lVar29 * -0x2222222222222222;
      if (uVar18 <= uVar23) {
        uVar18 = uVar23;
      }
      if ((ulong)(lVar29 * -0x1111111111111111) < uVar14 >> 1) {
        uVar14 = uVar18;
      }
      if (uVar14 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar14 * 0xf0,0x10);
        if (lVar29 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xb8))();
        }
      }
      lVar33 = lVar29 + lVar25 * 0x10;
      FUN_02b1b044(puVar2,lVar33,local_190);
      lVar27 = *(long *)(param_1 + 0x68);
      lVar22 = *(long *)(param_1 + 0x70);
      lVar25 = lVar33 + 0xf0;
      if (lVar22 == lVar27) {
        lVar22 = lVar27;
      }
      else {
        do {
          lVar33 = lVar33 + -0xf0;
          lVar22 = lVar22 + -0xf0;
          FUN_02b1b044(puVar2,lVar33,lVar22);
        } while (lVar27 != lVar22);
        lVar27 = *(long *)(param_1 + 0x68);
        lVar22 = *(long *)(param_1 + 0x70);
      }
      *(long *)(param_1 + 0x68) = lVar33;
      *(long *)(param_1 + 0x70) = lVar25;
      lVar25 = *(long *)(param_1 + 0x78);
      *(ulong *)(param_1 + 0x78) = lVar29 + uVar14 * 0xf0;
      while (lVar22 != lVar27) {
        lVar22 = lVar22 + -0xf0;
        FUN_02b1a474(lVar22);
      }
      if (lVar27 != 0) {
        plVar35 = (long *)*puVar2;
        lVar25 = lVar25 - lVar27;
        uVar18 = (**(code **)(*plVar35 + 0xc0))(plVar35);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(lVar19 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar19 + 0x38d488) = 1;
            *(undefined8 *)(lVar19 + 0x38d478) = 0;
            *(undefined8 *)(lVar19 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar19 + 0x38d480)) {
            FUN_02bcc824(plVar35,lVar27,lVar25,0x10);
            goto LAB_02b1a3a0;
          }
        }
        (**(code **)(*plVar35 + 0x18))(plVar35,lVar27,lVar25,0x10);
      }
    }
LAB_02b1a3a0:
    FUN_02b1a474(local_190);
    uVar18 = (ulong)(iVar17 + 1);
    if ((ulong)((lVar10 >> 4) * -0x79435e50d79435e5) <= uVar18) {
      return;
    }
    lVar25 = *(long *)(param_2 + 8);
  } while( true );
}


