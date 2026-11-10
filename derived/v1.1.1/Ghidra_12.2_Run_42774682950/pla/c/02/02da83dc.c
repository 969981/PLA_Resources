/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da83dc; name: FUN_02da83dc
 */


void FUN_02da83dc(long param_1)

{
  void **ppvVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  size_t __n;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  void *pvVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  void *pvVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 local_120;
  uint local_118;
  void *local_110;
  void *local_108;
  void *local_100;
  long *local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  long local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long local_a0;
  ulong local_98;
  ulong local_90;
  int local_88 [2];
  int local_80 [2];
  ulong local_78;
  int local_70 [4];
  
  if ((((*(char *)(param_1 + 0x90) != '\0') && (*(long *)(param_1 + 0x78) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x78) + 0xc) != 0)) &&
     ((plVar21 = *(long **)(param_1 + 0x88), plVar21 != (long *)0x0 &&
      (*(long *)PTR_DAT_04377550 != 0)))) {
    bVar8 = *(byte *)(param_1 + 0x70);
    iVar9 = FUN_0082ad44();
    if (((iVar9 == 1) && ((bVar8 < 2 && (*(long *)PTR_DAT_043773c0 != 0)))) &&
       (plVar10 = (long *)FUN_00847ad0(*(long *)PTR_DAT_043773c0 + 0x10,(&DAT_04408a80)[bVar8],0x7c)
       , plVar10 != (long *)0x0)) {
      uVar20 = 0;
      ppvVar1 = (void **)(param_1 + 0xa0);
      puVar2 = (undefined8 *)(param_1 + 0xb8);
      do {
        uVar25 = 1L << (uVar20 & 0x3f);
        if ((*(ulong *)(param_1 + 0x98) & uVar25) != 0) {
          local_d8 = (undefined8 *)CONCAT71(local_d8._1_7_,(char)uVar20);
          lVar11 = (**(code **)(*plVar21 + 0x30))(plVar21,&local_d8);
          if (lVar11 != 0) {
            if (DAT_04408e40 == 0) {
              local_98 = 0;
              local_a0 = 0;
            }
            else {
              local_a0 = DAT_04408e40;
              local_98 = DAT_04408e60;
            }
            local_90 = 0;
            plStack_c0 = *(long **)(param_1 + 8);
            local_c8 = 0;
            local_a8 = 0;
            local_d8 = (undefined8 *)0x0;
            local_d0 = (undefined8 *)0x0;
            local_110 = (void *)0x0;
            local_108 = (void *)0x0;
            local_100 = (void *)0x0;
            local_b8 = 0x1555555555555555;
            uStack_b0 = 0;
            local_f8 = (long *)*puVar2;
            local_f0 = *(ulong *)(param_1 + 0xc0);
            local_e8 = *(undefined8 *)(param_1 + 200);
            local_e0 = *(undefined8 *)(param_1 + 0xd0);
            pvVar23 = *(void **)(param_1 + 0xa0);
            pvVar19 = *(void **)(param_1 + 0xa8);
            lVar22 = (long)pvVar19 - (long)pvVar23;
            if (lVar22 != 0) {
              uVar26 = local_f0;
              if (0x7ffffffffffffffe < local_f0) {
                uVar26 = 0x7fffffffffffffff;
              }
              if (uVar26 < (ulong)((lVar22 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              pvVar12 = (void *)(**(code **)(*local_f8 + 0x10))(local_f8,lVar22,8);
              if (pvVar12 == (void *)0x0) {
                (**(code **)(*local_f8 + 0xb8))();
              }
              local_100 = (void *)((long)pvVar12 + (lVar22 >> 3) * 8);
              pvVar23 = *(void **)(param_1 + 0xa0);
              pvVar19 = *(void **)(param_1 + 0xa8);
              local_110 = pvVar12;
              local_108 = pvVar12;
              if (pvVar23 != pvVar19) {
                do {
                  FUN_02daa34c(&local_f8,local_108,pvVar23);
                  pvVar23 = (void *)((long)pvVar23 + 0x18);
                  local_108 = (void *)((long)local_108 + 0x18);
                } while (pvVar19 != pvVar23);
                pvVar23 = *(void **)(param_1 + 0xa0);
                pvVar19 = *(void **)(param_1 + 0xa8);
              }
            }
            if (pvVar19 != pvVar23) {
              lVar22 = 0;
              uVar26 = 0;
              do {
                if (*(char *)((long)pvVar23 + lVar22 + 0x10) == '\0') {
LAB_02da86c0:
                  uVar17 = *(ulong *)((long)pvVar23 + lVar22 + 8);
                  if ((uVar17 & uVar25) != 0) {
                    *(ulong *)((long)pvVar23 + lVar22 + 8) = uVar17 & ~uVar25;
                    local_120 = *(undefined8 *)((long)*ppvVar1 + lVar22);
                    local_118 = local_118 & 0xffffff00;
                    FUN_02da9594(&local_d8,&local_120);
                    pvVar23 = *ppvVar1;
                  }
                }
                else {
                  uVar17 = *(ulong *)((long)pvVar23 + lVar22 + 8);
                  if ((uVar17 & uVar25) == 0) {
                    *(ulong *)((long)pvVar23 + lVar22 + 8) = uVar17 | uVar25;
                    local_120 = *(undefined8 *)((long)*ppvVar1 + lVar22);
                    local_118 = CONCAT31(local_118._1_3_,1);
                    FUN_02da9594(&local_d8,&local_120);
                    pvVar23 = *ppvVar1;
                    if (*(char *)((long)pvVar23 + lVar22 + 0x10) == '\0') goto LAB_02da86c0;
                  }
                }
                uVar26 = uVar26 + 1;
                lVar22 = lVar22 + 0x18;
              } while (uVar26 < (ulong)((*(long *)(param_1 + 0xa8) - (long)pvVar23 >> 3) *
                                       -0x5555555555555555));
            }
            if (local_d8 == local_d0) {
              bVar8 = 4;
              pvVar23 = local_110;
              plVar24 = local_f8;
            }
            else {
              uVar15 = (int)((ulong)((long)local_d0 - (long)local_d8) >> 2) * -0x55555555;
              uVar18 = 0xffffff80;
              if (0xff < (uVar15 & 0xffff)) {
                uVar18 = 0xffffff81;
              }
              uVar3 = uVar15;
              if (0x7f < (uVar15 & 0xffff)) {
                uVar3 = uVar18;
              }
              local_70[0] = CONCAT22(local_70[0]._2_2_,(short)uVar15);
              lVar22 = FUN_02761670(uVar3);
              if (local_98 < lVar22 + local_90 + 2) {
                local_120 = CONCAT44(local_120._4_4_,0xd);
                puVar5 = local_d8;
                puVar6 = local_d0;
              }
              else {
                *(undefined1 *)(local_a0 + local_90) = 0xb9;
                local_90 = local_90 + 1;
                local_120 = 1;
                FUN_027619cc(&local_78,&local_120,&local_a0);
                if ((int)local_78 == 0) {
                  FUN_02761f78(&local_120,local_70,&local_a0);
                  puVar5 = local_d8;
                  puVar6 = local_d0;
                }
                else {
                  local_120 = CONCAT44(local_120._4_4_,(int)local_78);
                  local_78 = local_78 & 0xffffffff00000000;
                  puVar5 = local_d8;
                  puVar6 = local_d0;
                }
              }
              for (; puVar7 = local_d0, puVar5 != local_d0;
                  puVar5 = (undefined8 *)((long)puVar5 + 0xc)) {
                local_120 = *puVar5;
                uVar15 = (uint)local_120;
                local_118 = *(uint *)(puVar5 + 1);
                uVar18 = 0xffffff81;
                if (0xffff < uVar15) {
                  uVar18 = 0xffffff82;
                }
                uVar3 = 0x80;
                if (0xff < uVar15) {
                  uVar3 = uVar18;
                }
                if (uVar15 < 0x80) {
                  uVar3 = uVar15;
                }
                local_d0 = puVar6;
                lVar22 = FUN_02761670(uVar3);
                uVar18 = 0xffffff81;
                if (0xffff < local_120._4_4_) {
                  uVar18 = 0xffffff82;
                }
                uVar15 = 0x80;
                if (0xff < local_120._4_4_) {
                  uVar15 = uVar18;
                }
                if (local_120._4_4_ < 0x80) {
                  uVar15 = local_120._4_4_;
                }
                lVar13 = FUN_02761670(uVar15);
                lVar14 = FUN_02761670((undefined1)local_118);
                if (lVar22 + lVar13 + lVar14 + local_90 + 4 <= local_98) {
                  *(undefined1 *)(local_a0 + local_90) = 0xb9;
                  local_90 = local_90 + 1;
                  local_78 = 2;
                  FUN_027619cc(local_88,&local_78,&local_a0);
                  if (local_88[0] == 0) {
                    *(undefined1 *)(local_a0 + local_90) = 0xb9;
                    local_90 = local_90 + 1;
                    local_78 = 2;
                    FUN_027619cc(local_70,&local_78,&local_a0);
                    if (local_70[0] == 0) {
                      FUN_02761ec4(&local_78,&local_120,&local_a0);
                      if (((int)local_78 == 0) &&
                         (FUN_02761ec4(local_80,(ulong)&local_120 | 4,&local_a0), local_80[0] == 0))
                      {
                        *(undefined1 *)(local_a0 + local_90) = (undefined1)local_118;
                        local_90 = local_90 + 1;
                        goto LAB_02da87d8;
                      }
                    }
                    local_80[0] = 0;
                  }
                  else {
                    local_88[0] = 0;
                  }
                }
LAB_02da87d8:
                puVar6 = local_d0;
                local_d0 = puVar7;
              }
              local_d0 = puVar6;
              (**(code **)(*plVar10 + 0x60))
                        (&local_120,plVar10,lVar11,DAT_04408e40,local_90 & 0xffffffff);
              bVar8 = (int)local_120 != 0;
              pvVar23 = local_110;
              plVar24 = local_f8;
              if ((ppvVar1 != &local_110) && ((int)local_120 != 0)) {
                plVar24 = (long *)*puVar2;
                if (plVar24 == local_f8) {
                  lVar11 = *(long *)(param_1 + 0xb0);
                  pvVar23 = *(void **)(param_1 + 0xa0);
                }
                else {
                  lVar11 = *(long *)(param_1 + 0xa0);
                  *(long *)(param_1 + 0xa8) = lVar11;
                  lVar22 = *(long *)(param_1 + 0xb0) - lVar11;
                  uVar25 = (**(code **)(*plVar24 + 0xc0))(plVar24);
                  if ((uVar25 & 1) == 0) {
LAB_02da89e8:
                    (**(code **)(*plVar24 + 0x18))(plVar24,lVar11,lVar22,8);
                  }
                  else {
                    lVar13 = tpidr_el0;
                    if (*(char *)(lVar13 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar13 + 0x38d488) = 1;
                      *(undefined8 *)(lVar13 + 0x38d478) = 0;
                      *(undefined8 *)(lVar13 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02da89e8;
                    FUN_02bcc824(plVar24,lVar11,lVar22,8);
                  }
                  *(undefined8 *)(param_1 + 0xa8) = 0;
                  *(undefined8 *)(param_1 + 0xb0) = 0;
                  pvVar23 = (void *)0x0;
                  lVar11 = 0;
                  *ppvVar1 = (void *)0x0;
                }
                pvVar12 = local_108;
                pvVar19 = local_110;
                lVar22 = lVar11 - (long)pvVar23;
                *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_e0;
                *(ulong *)(param_1 + 0xc0) = local_f0;
                *(undefined8 *)(param_1 + 200) = local_e8;
                *puVar2 = local_f8;
                uVar25 = ((long)local_108 - (long)local_110 >> 3) * -0x5555555555555555;
                if ((ulong)((lVar22 >> 3) * -0x5555555555555555) < uVar25) {
                  if (pvVar23 != (void *)0x0) {
                    *(void **)(param_1 + 0xa8) = pvVar23;
                    plVar24 = *(long **)(param_1 + 0xb8);
                    uVar26 = (**(code **)(*plVar24 + 0xc0))(plVar24);
                    if ((uVar26 & 1) == 0) {
LAB_02da8adc:
                      (**(code **)(*plVar24 + 0x18))(plVar24,pvVar23,lVar22,8);
                    }
                    else {
                      lVar11 = tpidr_el0;
                      if (*(char *)(lVar11 + 0x38d488) == '\0') {
                        *(undefined1 *)(lVar11 + 0x38d488) = 1;
                        *(undefined8 *)(lVar11 + 0x38d478) = 0;
                        *(undefined8 *)(lVar11 + 0x38d480) = 0;
                        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
                      }
                      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02da8adc;
                      FUN_02bcc824(plVar24,pvVar23,lVar22,8);
                    }
                    *(undefined8 *)(param_1 + 0xa8) = 0;
                    *(undefined8 *)(param_1 + 0xb0) = 0;
                    lVar11 = 0;
                    *ppvVar1 = (void *)0x0;
                  }
                  uVar26 = *(ulong *)(param_1 + 0xc0);
                  if (0x7ffffffffffffffe < uVar26) {
                    uVar26 = 0x7fffffffffffffff;
                  }
                  if (uVar26 < uVar25) {
LAB_02da8f50:
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar17 = uVar26;
                  if ((ulong)((lVar11 >> 3) * -0x5555555555555555) < uVar26 >> 1) {
                    uVar16 = (lVar11 >> 3) * 0x5555555555555556;
                    uVar17 = uVar25;
                    if (uVar25 <= uVar16) {
                      uVar17 = uVar16;
                    }
                    if (uVar26 < uVar17) goto LAB_02da8f50;
                  }
                  lVar11 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar17 * 0x18,8);
                  if (lVar11 == 0) {
                    (**(code **)(*(long *)*puVar2 + 0xb8))();
                  }
                  *(long *)(param_1 + 0xa0) = lVar11;
                  *(long *)(param_1 + 0xa8) = lVar11;
                  *(ulong *)(param_1 + 0xb0) = lVar11 + uVar17 * 0x18;
                  for (; pvVar19 != pvVar12; pvVar19 = (void *)((long)pvVar19 + 0x18)) {
                    FUN_02daa34c(puVar2,lVar11,pvVar19);
                    lVar11 = *(long *)(param_1 + 0xa8) + 0x18;
                    *(long *)(param_1 + 0xa8) = lVar11;
                  }
LAB_02da8c50:
                  bVar8 = 1;
                  pvVar23 = local_110;
                  plVar24 = local_f8;
                }
                else {
                  lVar11 = *(long *)(param_1 + 0xa8) - (long)pvVar23;
                  uVar26 = (lVar11 >> 3) * -0x5555555555555555;
                  pvVar19 = (void *)((long)local_110 + lVar11);
                  pvVar4 = pvVar19;
                  if (uVar25 <= uVar26) {
                    pvVar4 = local_108;
                  }
                  __n = (long)pvVar4 - (long)local_110;
                  if (__n != 0) {
                    memmove(pvVar23,local_110,__n);
                  }
                  if (uVar26 < uVar25) {
                    if (pvVar4 != pvVar12) {
                      lVar11 = *(long *)(param_1 + 0xa8);
                      do {
                        FUN_02daa34c(puVar2,lVar11,pvVar19);
                        pvVar19 = (void *)((long)pvVar19 + 0x18);
                        lVar11 = *(long *)(param_1 + 0xa8) + 0x18;
                        *(long *)(param_1 + 0xa8) = lVar11;
                      } while (pvVar12 != pvVar19);
                      goto LAB_02da8c50;
                    }
                  }
                  else {
                    *(void **)(param_1 + 0xa8) = (void *)((long)pvVar23 + ((long)__n >> 3) * 8);
                  }
                  bVar8 = 1;
                  pvVar23 = local_110;
                  plVar24 = local_f8;
                }
              }
            }
            local_110 = pvVar23;
            local_f8 = plVar24;
            if (pvVar23 != (void *)0x0) {
              lVar11 = (long)local_100 - (long)pvVar23;
              local_108 = pvVar23;
              uVar25 = (**(code **)(*plVar24 + 0xc0))(plVar24);
              if ((uVar25 & 1) != 0) {
                lVar22 = tpidr_el0;
                if (*(char *)(lVar22 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar22 + 0x38d488) = 1;
                  *(undefined8 *)(lVar22 + 0x38d478) = 0;
                  *(undefined8 *)(lVar22 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar22 + 0x38d480)) {
                  FUN_02bcc824(plVar24,pvVar23,lVar11,8);
                  goto LAB_02da8ce4;
                }
              }
              (**(code **)(*plVar24 + 0x18))(plVar24,pvVar23,lVar11,8);
            }
LAB_02da8ce4:
            plVar24 = plStack_c0;
            puVar5 = local_d8;
            if (local_d8 != (undefined8 *)0x0) {
              local_d0 = local_d8;
              lVar11 = local_c8 - (long)local_d8;
              uVar25 = (**(code **)(*plStack_c0 + 0xc0))(plStack_c0);
              if ((uVar25 & 1) != 0) {
                lVar22 = tpidr_el0;
                if (*(char *)(lVar22 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar22 + 0x38d488) = 1;
                  *(undefined8 *)(lVar22 + 0x38d478) = 0;
                  *(undefined8 *)(lVar22 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar22 + 0x38d480)) {
                  FUN_02bcc824(plVar24,puVar5,lVar11,4);
                  goto LAB_02da84d0;
                }
              }
              (**(code **)(*plVar24 + 0x18))(plVar24,puVar5,lVar11,4);
            }
LAB_02da84d0:
            if ((bVar8 | 4) != 4) {
              return;
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 2);
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
  return;
}


