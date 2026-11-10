/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da9800; name: FUN_02da9800
 */


/* WARNING: Removing unreachable block (ram,0x02da9ad0) */
/* WARNING: Removing unreachable block (ram,0x02da9d2c) */

void FUN_02da9800(long param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  size_t __n;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_d8;
  char local_d0;
  ushort local_c8 [4];
  char *local_c0;
  ulong local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98;
  undefined1 local_90;
  int local_88 [2];
  long local_80;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  if (((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 0xc) != 0)) &&
     (plVar9 = *(long **)(param_1 + 0x88), plVar9 != (long *)0x0)) {
    local_a8 = param_2;
    uVar8 = (**(code **)(*plVar9 + 0x38))(plVar9,&local_a8);
    if ((uVar8 & 0xff) != 0xfd) {
      if (param_3 == (char *)0x0) {
        local_b8 = 0;
        local_c0 = (char *)0x0;
      }
      else {
        local_c0 = param_3;
        local_b8 = param_4 & 0xffffffff;
      }
      local_c8[0] = 0;
      local_b0 = 1;
      if (*param_3 == -0x47) {
        local_a0 = 0;
        FUN_02765cd8(&local_d8,&local_a0,&local_c0);
        if ((int)local_d8 == 0) {
          if (local_a0 != 1) {
            return;
          }
          FUN_027662fc(&local_80,local_c8,&local_c0);
          local_d8._0_4_ = (int)local_80;
        }
        if (((int)local_d8 == 0) && (local_c8[0] != 0)) {
          uVar15 = 1L << ((ulong)uVar8 & 0x3f);
          uVar14 = 0;
          puVar3 = (undefined8 *)(param_1 + 0xf0);
          do {
            local_d0 = '\0';
            local_d8 = 0;
            pcVar1 = local_c0 + local_b0;
            local_b0 = local_b0 + 1;
            if (*pcVar1 == -0x47) {
              local_80 = 0;
              FUN_02765cd8(local_88,&local_80,&local_c0);
              if (local_88[0] == 0) {
                if (local_80 == 2) {
                  pcVar1 = local_c0 + local_b0;
                  local_b0 = local_b0 + 1;
                  if (*pcVar1 == -0x47) {
                    local_a0 = 0;
                    FUN_02765cd8(local_70,&local_a0,&local_c0);
                    iVar7 = local_70[0];
                    if (local_70[0] == 0) {
                      if (local_a0 == 2) {
                        FUN_02766254(local_68,&local_d8,&local_c0);
                        iVar7 = local_68[0];
                        if (local_68[0] == 0) {
                          FUN_02766254(local_78,(ulong)&local_d8 | 4,&local_c0);
                        }
                        else {
                          local_68[0] = 0;
                          local_78[0] = iVar7;
                        }
                        if (local_78[0] != 0) {
                          iVar7 = local_78[0];
                          goto joined_r0x02da9bd8;
                        }
                        pbVar2 = (byte *)(local_c0 + local_b0);
                        local_b0 = local_b0 + 1;
                        if (1 < *pbVar2) goto LAB_02da9908;
                        local_d0 = *pbVar2 != 0;
                        goto LAB_02da99c0;
                      }
                      local_78[0] = 0;
                    }
                    else {
                      local_70[0] = 0;
joined_r0x02da9bd8:
                      local_78[0] = 0;
                      if (iVar7 == 0) {
LAB_02da99c0:
                        piVar5 = *(int **)(param_1 + 0xd8);
                        piVar6 = *(int **)(param_1 + 0xe0);
                        piVar16 = piVar5;
                        if (piVar5 == piVar6) {
LAB_02da9a4c:
                          if (piVar6 != piVar16) {
                            if (local_d0 == '\0') {
                              if (1 < (uVar8 & 0xff)) goto LAB_02da9df0;
                              uVar10 = *(ulong *)(piVar16 + 2);
                              *(ulong *)(piVar16 + 2) = uVar10 & ~uVar15;
                              if ((uVar10 & ~uVar15 & 3) == 0) {
                                __n = *(long *)(param_1 + 0xe0) - (long)(piVar16 + 6);
                                if (__n != 0) {
                                  memmove(piVar16,piVar16 + 6,__n);
                                }
                                *(int **)(param_1 + 0xe0) = piVar16 + ((long)__n >> 3) * 2;
                              }
                            }
                            else {
                              if (1 < (uVar8 & 0xff)) goto LAB_02da9df0;
                              *(ulong *)(piVar16 + 2) = *(ulong *)(piVar16 + 2) | uVar15;
                            }
                            goto LAB_02da9908;
                          }
                        }
                        else {
                          do {
                            if ((*piVar16 == (int)local_d8) &&
                               (piVar16[1] == (int)((ulong)local_d8 >> 0x20))) goto LAB_02da9a4c;
                            piVar16 = piVar16 + 6;
                          } while (piVar6 != piVar16);
                        }
                        local_a0 = local_d8;
                        local_98 = 0;
                        local_90 = 0;
                        if (local_d0 != '\0') {
                          if (1 < (uVar8 & 0xff)) {
LAB_02da9df0:
                    /* WARNING: Subroutine does not return */
                            FUN_02daa440();
                          }
                          local_98 = uVar15;
                        }
                        if (piVar6 == *(int **)(param_1 + 0xe8)) {
                          lVar13 = (long)piVar6 - (long)piVar5 >> 3;
                          uVar10 = *(ulong *)(param_1 + 0xf8);
                          if (0x7ffffffffffffffe < uVar10) {
                            uVar10 = 0x7fffffffffffffff;
                          }
                          uVar4 = lVar13 * -0x5555555555555555 + 1;
                          if (uVar10 < uVar4) {
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          lVar11 = (long)*(int **)(param_1 + 0xe8) - (long)piVar5 >> 3;
                          uVar12 = lVar11 * 0x5555555555555556;
                          if (uVar4 <= uVar12) {
                            uVar4 = uVar12;
                          }
                          if ((ulong)(lVar11 * -0x5555555555555555) < uVar10 >> 1) {
                            uVar10 = uVar4;
                          }
                          if (uVar10 == 0) {
                            lVar11 = 0;
                          }
                          else {
                            lVar11 = (**(code **)(*(long *)*puVar3 + 0x10))
                                               ((long *)*puVar3,uVar10 * 0x18,8);
                            if (lVar11 == 0) {
                              (**(code **)(*(long *)*puVar3 + 0xb8))();
                            }
                          }
                          lVar18 = lVar11 + lVar13 * 8;
                          FUN_02daa534(puVar3,lVar18,&local_a0);
                          lVar17 = *(long *)(param_1 + 0xd8);
                          lVar19 = *(long *)(param_1 + 0xe0);
                          lVar13 = lVar18 + 0x18;
                          if (lVar19 != lVar17) {
                            do {
                              lVar18 = lVar18 + -0x18;
                              lVar19 = lVar19 + -0x18;
                              FUN_02daa61c(puVar3,lVar18,lVar19);
                            } while (lVar17 != lVar19);
                            lVar17 = *(long *)(param_1 + 0xd8);
                          }
                          *(long *)(param_1 + 0xd8) = lVar18;
                          *(long *)(param_1 + 0xe0) = lVar13;
                          lVar13 = *(long *)(param_1 + 0xe8);
                          *(ulong *)(param_1 + 0xe8) = lVar11 + uVar10 * 0x18;
                          if (lVar17 != 0) {
                            plVar9 = (long *)*puVar3;
                            lVar13 = lVar13 - lVar17;
                            uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
                            if ((uVar10 & 1) != 0) {
                              lVar11 = tpidr_el0;
                              if (*(char *)(lVar11 + 0x38d488) == '\0') {
                                *(undefined1 *)(lVar11 + 0x38d488) = 1;
                                *(undefined8 *)(lVar11 + 0x38d478) = 0;
                                *(undefined8 *)(lVar11 + 0x38d480) = 0;
                                __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,
                                                    &PTR_LOOP_0411a000);
                              }
                              if (0 < *(int *)(lVar11 + 0x38d480)) {
                                FUN_02bcc824(plVar9,lVar17,lVar13,8);
                                goto LAB_02da9908;
                              }
                            }
                            (**(code **)(*plVar9 + 0x18))(plVar9,lVar17,lVar13,8);
                          }
                        }
                        else {
                          FUN_02daa534(puVar3,piVar6,&local_a0);
                          *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 0x18;
                        }
                      }
                    }
                  }
                  else {
                    local_78[0] = 0;
                  }
                }
              }
              else {
                local_88[0] = 0;
              }
            }
LAB_02da9908:
            uVar14 = uVar14 + 1;
          } while (uVar14 < local_c8[0]);
        }
      }
    }
  }
  return;
}


