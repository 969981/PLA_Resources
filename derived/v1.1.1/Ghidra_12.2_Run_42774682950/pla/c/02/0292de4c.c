/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292de4c; name: FUN_0292de4c
 */


void FUN_0292de4c(long param_1,int *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  byte *pbVar16;
  int *piVar17;
  undefined4 uVar18;
  ulong uVar19;
  int *piVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ushort *puVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  long lVar28;
  byte *pbVar29;
  int *piVar30;
  long *plVar31;
  uint *puVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 *local_b0;
  byte *local_a8;
  size_t local_a0;
  long *local_98;
  undefined1 *local_90;
  byte *local_88;
  size_t local_80;
  long *local_78;
  
  FUN_02929420();
  uVar11 = (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2));
  puVar3 = (uint *)((long)param_2 + uVar11);
  uVar19 = (ulong)*puVar3;
  puVar3 = (uint *)((long)puVar3 + uVar19);
  puVar32 = puVar3 + 1;
  uVar22 = (ulong)*puVar3;
  if (uVar22 != 0) {
    puVar3 = puVar32 + uVar22;
    plVar1 = (long *)(param_1 + 0x20);
    plVar2 = (long *)(param_1 + 0x50);
    lVar28 = (long)param_2 + uVar19 + uVar11 + 9;
    do {
      piVar15 = (int *)((long)puVar32 + (ulong)*puVar32);
      puVar23 = (ushort *)((long)piVar15 - (long)*piVar15);
      if ((*puVar23 < 5) || (uVar11 = (ulong)puVar23[2], uVar11 == 0)) {
LAB_0292df20:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        plVar31 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        piVar17 = *(int **)PTR_DAT_0437a0d8;
        pbVar29 = *(byte **)(PTR_DAT_0437a0d8 + 8);
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x18))(plVar31);
        }
LAB_0292df44:
        lVar12 = -(long)*piVar15;
        if (*pbVar29 == 0) goto LAB_0292e3c8;
        if ((*(ushort *)((long)piVar15 + lVar12) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar15 + lVar12))[3], uVar11 == 0)) {
          puVar21 = (undefined1 *)0x0;
          piVar30 = *(int **)(param_1 + 0x28);
          if (piVar30 != (int *)0x0) goto LAB_0292df90;
LAB_0292e068:
          plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x58) + 0x10))
                                     (*(long **)(param_1 + 0x58),0x30,8);
          if (plVar9 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x58) + 0xb8))();
          }
          uVar27 = *(undefined8 *)(param_1 + 0x58);
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar7 = PTR_DAT_04379528;
            if (iVar8 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar12 == 0) {
            plVar9[2] = (long)piVar17;
            FUN_0292f21c(plVar9 + 3,puVar21);
          }
          else {
            if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar27;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            plVar9[2] = (long)piVar17;
            FUN_0292f21c(plVar9 + 3,puVar21);
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          *plVar9 = 0;
          plVar9[1] = (long)piVar17;
          fVar33 = (float)(*(long *)(param_1 + 0x78) + 1);
          if ((piVar30 == (int *)0x0) || (*(float *)(param_1 + 0x80) * (float)piVar30 < fVar33)) {
            uVar11 = (ulong)(piVar30 < (int *)0x3 ||
                            ((ulong)piVar30 & (ulong)((long)piVar30 + -1)) != 0) |
                     (long)piVar30 << 1;
            uVar19 = (ulong)(fVar33 / *(float *)(param_1 + 0x80));
            if (uVar19 <= uVar11) {
              uVar19 = uVar11;
            }
            if (uVar19 - 1 == 0) {
              uVar19 = 2;
            }
            else if ((uVar19 & uVar19 - 1) != 0) {
              uVar19 = std::__next_prime(uVar19);
            }
            uVar11 = *(ulong *)(param_1 + 0x28);
            if (uVar11 < uVar19) {
              uVar22 = uVar19;
LAB_0292e18c:
              FUN_02930a9c(plVar1,uVar22);
            }
            else if (uVar19 < uVar11) {
              uVar22 = (ulong)((float)*(ulong *)(param_1 + 0x78) / *(float *)(param_1 + 0x80));
              if ((uVar11 < 3) ||
                 (uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
                 uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333),
                 1 < (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar22 = std::__next_prime(uVar22);
              }
              else if (1 < uVar22) {
                uVar22 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar22 - 1) & 0x3f);
              }
              if (uVar22 <= uVar19) {
                uVar22 = uVar19;
              }
              if (uVar22 < uVar11) goto LAB_0292e18c;
            }
            piVar30 = *(int **)(param_1 + 0x28);
            if (((ulong)piVar30 & (ulong)((long)piVar30 + -1)) == 0) {
              piVar15 = (int *)((ulong)((long)piVar30 + -1) & (ulong)piVar17);
            }
            else if (piVar17 < piVar30) {
              piVar15 = piVar17;
            }
            else {
              uVar11 = 0;
              if (piVar30 != (int *)0x0) {
                uVar11 = (ulong)piVar17 / (ulong)piVar30;
              }
              piVar15 = (int *)((long)piVar17 - uVar11 * (long)piVar30);
            }
          }
          plVar14 = *(long **)(*plVar1 + (long)piVar15 * 8);
          if (plVar14 == (long *)0x0) {
            *plVar9 = *plVar2;
            *plVar2 = (long)plVar9;
            *(long **)(*plVar1 + (long)piVar15 * 8) = plVar2;
            if (*plVar9 != 0) {
              piVar15 = *(int **)(*plVar9 + 8);
              if (((ulong)piVar30 & (ulong)((long)piVar30 + -1)) == 0) {
                piVar15 = (int *)((ulong)piVar15 & (ulong)((long)piVar30 + -1));
              }
              else if (piVar30 <= piVar15) {
                uVar11 = 0;
                if (piVar30 != (int *)0x0) {
                  uVar11 = (ulong)piVar15 / (ulong)piVar30;
                }
                piVar15 = (int *)((long)piVar15 - uVar11 * (long)piVar30);
              }
              plVar14 = (long *)(*plVar1 + (long)piVar15 * 8);
              goto LAB_0292e2c0;
            }
          }
          else {
            *plVar9 = *plVar14;
LAB_0292e2c0:
            *plVar14 = (long)plVar9;
          }
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
        }
        else {
          puVar4 = (uint *)((long)piVar15 + uVar11);
          puVar21 = (undefined1 *)((long)puVar4 + (ulong)*puVar4);
          piVar30 = *(int **)(param_1 + 0x28);
          if (piVar30 == (int *)0x0) goto LAB_0292e068;
LAB_0292df90:
          uVar11 = (long)piVar30 - ((ulong)piVar30 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            piVar15 = (int *)((ulong)((long)piVar30 + -1) & (ulong)piVar17);
          }
          else {
            piVar15 = piVar17;
            if (piVar30 <= piVar17) {
              uVar19 = 0;
              if (piVar30 != (int *)0x0) {
                uVar19 = (ulong)piVar17 / (ulong)piVar30;
              }
              piVar15 = (int *)((long)piVar17 - uVar19 * (long)piVar30);
            }
          }
          plVar9 = *(long **)(*plVar1 + (long)piVar15 * 8);
          if (plVar9 == (long *)0x0) goto LAB_0292e068;
          if (uVar11 < 2) {
            do {
              plVar9 = (long *)*plVar9;
              if ((plVar9 == (long *)0x0) ||
                 ((int *)plVar9[1] != piVar17 &&
                  (int *)((ulong)plVar9[1] & (ulong)((long)piVar30 + -1)) != piVar15))
              goto LAB_0292e068;
            } while ((int *)plVar9[2] != piVar17);
          }
          else {
            do {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_0292e068;
              piVar20 = (int *)plVar9[1];
              if (piVar20 != piVar17) {
                if (piVar30 <= piVar20) {
                  uVar11 = 0;
                  if (piVar30 != (int *)0x0) {
                    uVar11 = (ulong)piVar20 / (ulong)piVar30;
                  }
                  piVar20 = (int *)((long)piVar20 - uVar11 * (long)piVar30);
                }
                if (piVar20 != piVar15) goto LAB_0292e068;
              }
            } while ((int *)plVar9[2] != piVar17);
          }
        }
      }
      else {
        uVar19 = (ulong)*(uint *)((long)piVar15 + uVar11);
        puVar21 = (undefined1 *)((long)((long)piVar15 + uVar11) + uVar19);
        pbVar29 = puVar21 + 4;
        if (puVar21 == (undefined1 *)0x0) goto LAB_0292df20;
        bVar5 = *pbVar29;
        if (bVar5 != 0) {
          piVar17 = (int *)&DAT_cbf29ce484222645;
          pbVar16 = (byte *)(lVar28 + uVar19 + uVar11 + (ulong)*puVar32);
          do {
            piVar17 = (int *)(((ulong)piVar17 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (bVar5 != 0);
          plVar31 = (long *)0x0;
          goto LAB_0292df44;
        }
        plVar31 = (long *)0x0;
        lVar12 = -(long)*piVar15;
LAB_0292e3c8:
        if ((*(ushort *)((long)piVar15 + lVar12) < 7) ||
           (uVar11 = (ulong)((ushort *)((long)piVar15 + lVar12))[3], uVar11 == 0)) {
          piVar15 = (int *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar15 + uVar11);
          piVar15 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
        puVar23 = (ushort *)((long)piVar15 - (long)*piVar15);
        uVar6 = *puVar23;
        if (uVar6 < 5) {
          uVar34 = 0;
LAB_0292e4dc:
          uVar36 = 0;
          uVar35 = 0;
LAB_0292e4f4:
          uVar10 = 4;
          uVar37 = 0;
LAB_0292e484:
          uVar18 = 4;
        }
        else {
          uVar34 = 0;
          if ((ulong)puVar23[2] != 0) {
            uVar34 = *(undefined4 *)((long)piVar15 + (ulong)puVar23[2]);
          }
          if (uVar6 < 7) goto LAB_0292e4dc;
          uVar35 = 0;
          if ((ulong)puVar23[3] != 0) {
            uVar35 = *(undefined4 *)((long)piVar15 + (ulong)puVar23[3]);
          }
          if (uVar6 < 9) {
            uVar36 = 0;
            goto LAB_0292e4f4;
          }
          uVar36 = 0;
          if ((ulong)puVar23[4] != 0) {
            uVar36 = *(undefined4 *)((long)piVar15 + (ulong)puVar23[4]);
          }
          if (uVar6 < 0xb) goto LAB_0292e4f4;
          uVar37 = 0;
          if ((ulong)puVar23[5] != 0) {
            uVar37 = *(undefined4 *)((long)piVar15 + (ulong)puVar23[5]);
          }
          if (uVar6 < 0xd) {
            uVar10 = 4;
            goto LAB_0292e484;
          }
          if ((ulong)puVar23[6] != 0) {
            uVar10 = *(undefined4 *)((long)piVar15 + (ulong)puVar23[6]);
            if (0xe < uVar6) goto LAB_0292e47c;
            goto LAB_0292e484;
          }
          uVar10 = 4;
          if (uVar6 < 0xf) goto LAB_0292e484;
LAB_0292e47c:
          if ((ulong)puVar23[7] == 0) goto LAB_0292e484;
          uVar18 = *(undefined4 *)((long)piVar15 + (ulong)puVar23[7]);
        }
        *(undefined4 *)(param_1 + 8) = uVar34;
        *(undefined4 *)(param_1 + 0xc) = uVar35;
        *(undefined4 *)(param_1 + 0x10) = uVar36;
        *(undefined4 *)(param_1 + 0x14) = uVar37;
        *(undefined4 *)(param_1 + 0x18) = uVar10;
        *(undefined4 *)(param_1 + 0x1c) = uVar18;
      }
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 0x20))(plVar31);
      }
      puVar32 = puVar32 + 1;
      lVar28 = lVar28 + 4;
    } while (puVar32 != puVar3);
  }
  uVar11 = (ulong)*(ushort *)((long)param_3 + (4 - (long)*param_3));
  puVar3 = (uint *)((long)param_3 + uVar11);
  uVar19 = (ulong)*puVar3;
  puVar3 = (uint *)((long)puVar3 + uVar19);
  puVar32 = puVar3 + 1;
  uVar22 = (ulong)*puVar3;
  if (uVar22 == 0) {
    return;
  }
  puVar3 = puVar32 + uVar22;
  plVar1 = (long *)(param_1 + 0x178);
  lVar28 = (long)param_3 + uVar19 + uVar11 + 9;
  plVar2 = (long *)(param_1 + 0x1e0);
LAB_0292e58c:
  uVar11 = (ulong)*puVar32;
  piVar15 = (int *)((long)puVar32 + uVar11);
  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
     (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0292e5c8:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_90 = *(undefined1 **)PTR_DAT_0437a0d8;
    local_78 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    local_88 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_80 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    uVar22 = (ulong)*(uint *)((long)piVar15 + uVar19);
    lVar12 = (long)((long)piVar15 + uVar19) + uVar22;
    pbVar29 = (byte *)(lVar12 + 4);
    if (lVar12 == 0) goto LAB_0292e5c8;
    local_80 = strlen((char *)pbVar29);
    bVar5 = *pbVar29;
    if (bVar5 == 0) {
      local_90 = &DAT_cbf29ce484222645;
    }
    else {
      local_90 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)(lVar28 + uVar22 + uVar19 + uVar11);
      do {
        local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar5 != 0);
    }
    local_78 = (long *)0x0;
    local_88 = pbVar29;
  }
  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 0xb) ||
     (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[5], uVar19 == 0)) {
LAB_0292e634:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_b0 = *(undefined1 **)PTR_DAT_0437a0d8;
    local_98 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    local_a8 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_a0 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
  }
  else {
    uVar22 = (ulong)*(uint *)((long)piVar15 + uVar19);
    lVar12 = (long)((long)piVar15 + uVar19) + uVar22;
    pbVar29 = (byte *)(lVar12 + 4);
    if (lVar12 == 0) goto LAB_0292e634;
    local_a0 = strlen((char *)pbVar29);
    bVar5 = *pbVar29;
    if (bVar5 == 0) {
      local_b0 = &DAT_cbf29ce484222645;
    }
    else {
      lVar12 = uVar11 + uVar19 + uVar22;
      local_b0 = &DAT_cbf29ce484222645;
      do {
        local_b0 = (undefined1 *)(((ulong)local_b0 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *(byte *)(lVar28 + lVar12);
        lVar12 = lVar12 + 1;
      } while (bVar5 != 0);
    }
    local_98 = (long *)0x0;
    local_a8 = pbVar29;
  }
  if (*(ushort *)((long)piVar15 - (long)*piVar15) < 0xd) {
    piVar17 = (int *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[6];
    piVar17 = (int *)0x0;
    if (uVar11 != 0) {
      puVar4 = (uint *)((long)piVar15 + uVar11);
      piVar17 = (int *)((long)puVar4 + (ulong)*puVar4);
    }
  }
  puVar23 = (ushort *)((long)piVar17 - (long)*piVar17);
  uVar6 = *puVar23;
  if (uVar6 < 5) {
    local_d0 = 0;
LAB_0292ea80:
    local_c8 = 0;
    uStack_cc = 0;
LAB_0292ea98:
    local_c0 = 4;
    uStack_c4 = 0;
LAB_0292e724:
    uVar34 = 4;
  }
  else {
    local_d0 = 0;
    if ((ulong)puVar23[2] != 0) {
      local_d0 = *(undefined4 *)((long)piVar17 + (ulong)puVar23[2]);
    }
    if (uVar6 < 7) goto LAB_0292ea80;
    uStack_cc = 0;
    if ((ulong)puVar23[3] != 0) {
      uStack_cc = *(undefined4 *)((long)piVar17 + (ulong)puVar23[3]);
    }
    if (uVar6 < 9) {
      local_c8 = 0;
      goto LAB_0292ea98;
    }
    local_c8 = 0;
    if ((ulong)puVar23[4] != 0) {
      local_c8 = *(undefined4 *)((long)piVar17 + (ulong)puVar23[4]);
    }
    if (uVar6 < 0xb) goto LAB_0292ea98;
    uStack_c4 = 0;
    if ((ulong)puVar23[5] != 0) {
      uStack_c4 = *(undefined4 *)((long)piVar17 + (ulong)puVar23[5]);
    }
    if (uVar6 < 0x15) {
      local_c0 = 4;
      goto LAB_0292e724;
    }
    if ((ulong)puVar23[10] != 0) {
      local_c0 = *(undefined4 *)((long)piVar17 + (ulong)puVar23[10]);
      if (0x16 < uVar6) goto LAB_0292e71c;
      goto LAB_0292e724;
    }
    local_c0 = 4;
    if (uVar6 < 0x17) goto LAB_0292e724;
LAB_0292e71c:
    if ((ulong)puVar23[0xb] == 0) goto LAB_0292e724;
    uVar34 = *(undefined4 *)((long)piVar17 + (ulong)puVar23[0xb]);
  }
  uStack_bc = (undefined2)uVar34;
  uStack_ba = (undefined2)((uint)uVar34 >> 0x10);
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xd) {
    local_b8 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[6];
    local_b8 = false;
    if (uVar11 != 0) {
      local_b8 = *(char *)((long)piVar17 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xf) {
    local_b7 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[7];
    local_b7 = false;
    if (uVar11 != 0) {
      local_b7 = *(char *)((long)piVar17 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x11) {
    local_b6 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[8];
    local_b6 = false;
    if (uVar11 != 0) {
      local_b6 = *(char *)((long)piVar17 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x13) {
    local_b5 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[9];
    local_b5 = false;
    if (uVar11 != 0) {
      local_b5 = *(char *)((long)piVar17 + uVar11) != '\0';
    }
  }
  if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x19) {
    local_b4 = false;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0xc];
    local_b4 = false;
    if (uVar11 != 0) {
      local_b4 = *(char *)((long)piVar17 + uVar11) != '\0';
    }
  }
  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0x1b) ||
     (uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0xd], uVar11 == 0)) {
    local_b3 = false;
  }
  else {
    local_b3 = *(char *)((long)piVar17 + uVar11) != '\0';
  }
  puVar23 = (ushort *)((long)piVar15 - (long)*piVar15);
  uVar6 = *puVar23;
  if (4 < uVar6) {
    if ((ulong)puVar23[2] != 0) {
      iVar8 = *(int *)((long)piVar15 + (ulong)puVar23[2]);
      if (iVar8 != 2) {
        if (iVar8 == 1) {
          if ((8 < uVar6) && ((ulong)puVar23[4] != 0)) {
            iVar8 = *(int *)((long)piVar15 + (ulong)puVar23[4]);
            if (iVar8 == 2) {
              puVar21 = *(undefined1 **)(param_1 + 0x180);
              if (puVar21 != (undefined1 *)0x0) {
                uVar11 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
                uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
                uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar11 < 2) {
                  puVar24 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)local_90);
                }
                else {
                  puVar24 = local_90;
                  if (puVar21 <= local_90) {
                    uVar19 = 0;
                    if (puVar21 != (undefined1 *)0x0) {
                      uVar19 = (ulong)local_90 / (ulong)puVar21;
                    }
                    puVar24 = local_90 + -(uVar19 * (long)puVar21);
                  }
                }
                plVar31 = *(long **)(*plVar1 + (long)puVar24 * 8);
                if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)
                   ) {
                  if (uVar11 < 2) {
                    do {
                      if ((undefined1 *)plVar31[1] == local_90) {
                        if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f09c;
                      }
                      else if ((undefined1 *)((ulong)plVar31[1] & (ulong)(puVar21 + -1)) != puVar24)
                      break;
                      plVar31 = (long *)*plVar31;
                    } while (plVar31 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar26 = (undefined1 *)plVar31[1];
                      if (puVar26 == local_90) {
                        if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f09c;
                      }
                      else {
                        if (puVar21 <= puVar26) {
                          uVar11 = 0;
                          if (puVar21 != (undefined1 *)0x0) {
                            uVar11 = (ulong)puVar26 / (ulong)puVar21;
                          }
                          puVar26 = puVar26 + -(uVar11 * (long)puVar21);
                        }
                        if (puVar26 != puVar24) break;
                      }
                      plVar31 = (long *)*plVar31;
                    } while (plVar31 != (long *)0x0);
                  }
                }
              }
              plVar31 = plVar1;
              goto LAB_0292efa0;
            }
            if (iVar8 == 1) {
              puVar21 = *(undefined1 **)(param_1 + 0x180);
              if (puVar21 != (undefined1 *)0x0) {
                uVar11 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
                uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
                uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar11 < 2) {
                  puVar24 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)local_90);
                }
                else {
                  puVar24 = local_90;
                  if (puVar21 <= local_90) {
                    uVar19 = 0;
                    if (puVar21 != (undefined1 *)0x0) {
                      uVar19 = (ulong)local_90 / (ulong)puVar21;
                    }
                    puVar24 = local_90 + -(uVar19 * (long)puVar21);
                  }
                }
                plVar31 = *(long **)(*plVar1 + (long)puVar24 * 8);
                if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)
                   ) {
                  if (uVar11 < 2) {
                    do {
                      if ((undefined1 *)plVar31[1] == local_90) {
                        if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f0a4;
                      }
                      else if ((undefined1 *)((ulong)plVar31[1] & (ulong)(puVar21 + -1)) != puVar24)
                      break;
                      plVar31 = (long *)*plVar31;
                    } while (plVar31 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar26 = (undefined1 *)plVar31[1];
                      if (puVar26 == local_90) {
                        if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f0a4;
                      }
                      else {
                        if (puVar21 <= puVar26) {
                          uVar11 = 0;
                          if (puVar21 != (undefined1 *)0x0) {
                            uVar11 = (ulong)puVar26 / (ulong)puVar21;
                          }
                          puVar26 = puVar26 + -(uVar11 * (long)puVar21);
                        }
                        if (puVar26 != puVar24) break;
                      }
                      plVar31 = (long *)*plVar31;
                    } while (plVar31 != (long *)0x0);
                  }
                }
              }
              plVar31 = plVar1;
              goto LAB_0292f058;
            }
            if (iVar8 != 0) goto joined_r0x0292f074;
          }
          puVar21 = *(undefined1 **)(param_1 + 0x180);
          if (puVar21 != (undefined1 *)0x0) {
            uVar11 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
            uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
            uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar11 < 2) {
              puVar24 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)local_90);
            }
            else {
              puVar24 = local_90;
              if (puVar21 <= local_90) {
                uVar19 = 0;
                if (puVar21 != (undefined1 *)0x0) {
                  uVar19 = (ulong)local_90 / (ulong)puVar21;
                }
                puVar24 = local_90 + -(uVar19 * (long)puVar21);
              }
            }
            plVar31 = *(long **)(*plVar1 + (long)puVar24 * 8);
            if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
              if (uVar11 < 2) {
                do {
                  if ((undefined1 *)plVar31[1] == local_90) {
                    if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292ed9c;
                  }
                  else if ((undefined1 *)((ulong)plVar31[1] & (ulong)(puVar21 + -1)) != puVar24)
                  break;
                  plVar31 = (long *)*plVar31;
                } while (plVar31 != (long *)0x0);
              }
              else {
                do {
                  puVar26 = (undefined1 *)plVar31[1];
                  if (puVar26 == local_90) {
                    if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292ed9c;
                  }
                  else {
                    if (puVar21 <= puVar26) {
                      uVar11 = 0;
                      if (puVar21 != (undefined1 *)0x0) {
                        uVar11 = (ulong)puVar26 / (ulong)puVar21;
                      }
                      puVar26 = puVar26 + -(uVar11 * (long)puVar21);
                    }
                    if (puVar26 != puVar24) break;
                  }
                  plVar31 = (long *)*plVar31;
                } while (plVar31 != (long *)0x0);
              }
            }
          }
          plVar31 = plVar1;
          goto LAB_0292ebe8;
        }
        if (iVar8 != 0) goto joined_r0x0292f074;
        goto LAB_0292e878;
      }
      if ((8 < uVar6) && ((ulong)puVar23[4] != 0)) {
        iVar8 = *(int *)((long)piVar15 + (ulong)puVar23[4]);
        if (iVar8 != 2) {
          if (iVar8 == 1) {
            puVar21 = *(undefined1 **)(param_1 + 0x1e8);
            if (puVar21 != (undefined1 *)0x0) {
              uVar11 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
              uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
              uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar11 < 2) {
                puVar24 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)local_90);
              }
              else {
                puVar24 = local_90;
                if (puVar21 <= local_90) {
                  uVar19 = 0;
                  if (puVar21 != (undefined1 *)0x0) {
                    uVar19 = (ulong)local_90 / (ulong)puVar21;
                  }
                  puVar24 = local_90 + -(uVar19 * (long)puVar21);
                }
              }
              puVar25 = *(undefined8 **)(*plVar2 + (long)puVar24 * 8);
              if ((puVar25 != (undefined8 *)0x0) &&
                 (plVar31 = (long *)*puVar25, plVar31 != (long *)0x0)) {
                if (uVar11 < 2) {
                  do {
                    if ((undefined1 *)plVar31[1] == local_90) {
                      if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f0a4;
                    }
                    else if ((undefined1 *)((ulong)plVar31[1] & (ulong)(puVar21 + -1)) != puVar24)
                    break;
                    plVar31 = (long *)*plVar31;
                  } while (plVar31 != (long *)0x0);
                }
                else {
                  do {
                    puVar26 = (undefined1 *)plVar31[1];
                    if (puVar26 == local_90) {
                      if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f0a4;
                    }
                    else {
                      if (puVar21 <= puVar26) {
                        uVar11 = 0;
                        if (puVar21 != (undefined1 *)0x0) {
                          uVar11 = (ulong)puVar26 / (ulong)puVar21;
                        }
                        puVar26 = puVar26 + -(uVar11 * (long)puVar21);
                      }
                      if (puVar26 != puVar24) break;
                    }
                    plVar31 = (long *)*plVar31;
                  } while (plVar31 != (long *)0x0);
                }
              }
            }
            plVar31 = plVar2;
LAB_0292f058:
            auVar38 = FUN_0292f328(plVar31,&local_90,param_1);
            if ((auVar38._8_8_ & 0xff) != 0) {
              plVar31 = (long *)(auVar38._0_8_ + 0x38);
              goto LAB_0292e9d0;
            }
          }
          else if (iVar8 == 0) goto LAB_0292e964;
          goto joined_r0x0292f074;
        }
        puVar21 = *(undefined1 **)(param_1 + 0x1e8);
        if (puVar21 != (undefined1 *)0x0) {
          uVar11 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            puVar24 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)local_90);
          }
          else {
            puVar24 = local_90;
            if (puVar21 <= local_90) {
              uVar19 = 0;
              if (puVar21 != (undefined1 *)0x0) {
                uVar19 = (ulong)local_90 / (ulong)puVar21;
              }
              puVar24 = local_90 + -(uVar19 * (long)puVar21);
            }
          }
          puVar25 = *(undefined8 **)(*plVar2 + (long)puVar24 * 8);
          if ((puVar25 != (undefined8 *)0x0) && (plVar31 = (long *)*puVar25, plVar31 != (long *)0x0)
             ) {
            if (uVar11 < 2) {
              do {
                if ((undefined1 *)plVar31[1] == local_90) {
                  if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f09c;
                }
                else if ((undefined1 *)((ulong)plVar31[1] & (ulong)(puVar21 + -1)) != puVar24)
                break;
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
            else {
              do {
                puVar26 = (undefined1 *)plVar31[1];
                if (puVar26 == local_90) {
                  if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292f09c;
                }
                else {
                  if (puVar21 <= puVar26) {
                    uVar11 = 0;
                    if (puVar21 != (undefined1 *)0x0) {
                      uVar11 = (ulong)puVar26 / (ulong)puVar21;
                    }
                    puVar26 = puVar26 + -(uVar11 * (long)puVar21);
                  }
                  if (puVar26 != puVar24) break;
                }
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
          }
        }
        plVar31 = plVar2;
LAB_0292efa0:
        auVar38 = FUN_0292f328(plVar31,&local_90,param_1);
        if ((auVar38._8_8_ & 0xff) == 0) goto joined_r0x0292f074;
        plVar31 = (long *)(auVar38._0_8_ + 0xa0);
        goto LAB_0292e9d0;
      }
LAB_0292e964:
      puVar21 = *(undefined1 **)(param_1 + 0x1e8);
      if (puVar21 != (undefined1 *)0x0) {
        uVar11 = (long)puVar21 - ((ulong)puVar21 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar24 = (undefined1 *)((ulong)(puVar21 + -1) & (ulong)local_90);
        }
        else {
          puVar24 = local_90;
          if (puVar21 <= local_90) {
            uVar19 = 0;
            if (puVar21 != (undefined1 *)0x0) {
              uVar19 = (ulong)local_90 / (ulong)puVar21;
            }
            puVar24 = local_90 + -(uVar19 * (long)puVar21);
          }
        }
        puVar25 = *(undefined8 **)(*plVar2 + (long)puVar24 * 8);
        if ((puVar25 != (undefined8 *)0x0) && (plVar31 = (long *)*puVar25, plVar31 != (long *)0x0))
        {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar31[1] == local_90) {
                if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292ed9c;
              }
              else if ((undefined1 *)((ulong)plVar31[1] & (ulong)(puVar21 + -1)) != puVar24) break;
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
          else {
            do {
              puVar26 = (undefined1 *)plVar31[1];
              if (puVar26 == local_90) {
                if ((undefined1 *)plVar31[2] == local_90) goto LAB_0292ed9c;
              }
              else {
                if (puVar21 <= puVar26) {
                  uVar11 = 0;
                  if (puVar21 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar26 / (ulong)puVar21;
                  }
                  puVar26 = puVar26 + -(uVar11 * (long)puVar21);
                }
                if (puVar26 != puVar24) break;
              }
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
        }
      }
      plVar31 = plVar2;
LAB_0292ebe8:
      auVar38 = FUN_0292f328(plVar31,&local_90,param_1);
      lVar12 = auVar38._0_8_;
      if ((auVar38._8_8_ & 0xff) != 0) {
        *(ulong *)(lVar12 + 0x2e) =
             CONCAT17(local_b3,CONCAT16(local_b4,CONCAT15(local_b5,CONCAT14(local_b6,CONCAT13(
                                                  local_b7,CONCAT12(local_b8,uStack_ba))))));
        *(ulong *)(lVar12 + 0x18) = CONCAT44(uStack_cc,local_d0);
        *(ulong *)(lVar12 + 0x20) = CONCAT44(uStack_c4,local_c8);
        *(ulong *)(lVar12 + 0x28) = CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
      }
      goto joined_r0x0292f074;
    }
LAB_0292e878:
    if ((uVar6 < 9) || ((ulong)puVar23[4] == 0)) goto LAB_0292e888;
    iVar8 = *(int *)((long)piVar15 + (ulong)puVar23[4]);
    if (iVar8 == 2) {
      plVar31 = (long *)(param_1 + 0x110);
    }
    else {
      if (iVar8 != 1) {
        if (iVar8 != 0) goto joined_r0x0292f074;
        goto LAB_0292e888;
      }
      plVar31 = (long *)(param_1 + 0xa8);
    }
    goto LAB_0292e9d0;
  }
LAB_0292e888:
  *(ulong *)(param_1 + 0x9e) =
       CONCAT17(local_b3,CONCAT16(local_b4,CONCAT15(local_b5,CONCAT14(local_b6,CONCAT13(local_b7,
                                                  CONCAT12(local_b8,uStack_ba))))));
  *(ulong *)(param_1 + 0x88) = CONCAT44(uStack_cc,local_d0);
  *(ulong *)(param_1 + 0x90) = CONCAT44(uStack_c4,local_c8);
  *(ulong *)(param_1 + 0x98) = CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
  goto joined_r0x0292f074;
LAB_0292f0a4:
  plVar31 = plVar31 + 7;
  goto LAB_0292e9d0;
LAB_0292f09c:
  plVar31 = plVar31 + 0x14;
LAB_0292e9d0:
  FUN_02930244(plVar31,&local_b0,&local_d0);
joined_r0x0292f074:
  if (local_98 != (long *)0x0) {
LAB_0292f078:
    (**(code **)(*local_98 + 0x20))();
  }
LAB_0292f084:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar32 = puVar32 + 1;
  lVar28 = lVar28 + 4;
  if (puVar32 == puVar3) {
    return;
  }
  goto LAB_0292e58c;
LAB_0292ed9c:
  *(ulong *)((long)plVar31 + 0x2e) =
       CONCAT17(local_b3,CONCAT16(local_b4,CONCAT15(local_b5,CONCAT14(local_b6,CONCAT13(local_b7,
                                                  CONCAT12(local_b8,uStack_ba))))));
  plVar31[3] = CONCAT44(uStack_cc,local_d0);
  plVar31[4] = CONCAT44(uStack_c4,local_c8);
  plVar31[5] = CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
  if (local_98 == (long *)0x0) goto LAB_0292f084;
  goto LAB_0292f078;
}


