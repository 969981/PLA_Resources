/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b4330; name: FUN_016b4330
 */


void FUN_016b4330(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  size_t sVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  int *piVar26;
  int *piVar27;
  uint *puVar28;
  ushort *puVar29;
  int *piVar30;
  undefined1 *puVar31;
  long *plVar32;
  undefined1 *puVar33;
  float fVar34;
  
  lVar14 = *(long *)(param_1 + 0x60);
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x1e1) != '\0')) {
    piVar26 = (int *)((long)*(uint **)(lVar14 + 0x250) + (ulong)**(uint **)(lVar14 + 0x250));
    puVar3 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (4 - (long)*piVar26)));
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    puVar28 = puVar3 + 1;
    uVar15 = (ulong)*puVar3;
    if (uVar15 != 0) {
      puVar3 = puVar28 + uVar15;
      plVar1 = (long *)(param_1 + 0x88);
      plVar2 = (long *)(param_1 + 0xb8);
      do {
        puVar33 = &DAT_cbf29ce484222645;
        piVar26 = (int *)((long)puVar28 + (ulong)*puVar28);
        puVar29 = (ushort *)((long)piVar26 - (long)*piVar26);
        uVar6 = *puVar29;
        if ((uVar6 < 5) || ((ulong)puVar29[2] == 0)) {
          puVar20 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar26 + (ulong)puVar29[2]);
          puVar20 = (undefined1 *)((long)puVar4 + (ulong)*puVar4);
        }
        sVar8 = strlen(puVar20 + 4);
        bVar5 = puVar20[4];
        piVar27 = (int *)&DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          piVar27 = (int *)&DAT_cbf29ce484222645;
          pbVar18 = puVar20 + 5;
          do {
            piVar27 = (int *)(((ulong)piVar27 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar5 != 0);
        }
        if ((uVar6 < 7) || ((ulong)puVar29[3] == 0)) {
          puVar21 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar26 + (ulong)puVar29[3]);
          puVar21 = (undefined1 *)((long)puVar4 + (ulong)*puVar4);
        }
        sVar9 = strlen(puVar21 + 4);
        bVar5 = puVar21[4];
        puVar25 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar25 = &DAT_cbf29ce484222645;
          pbVar18 = puVar21 + 5;
          do {
            puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar5 != 0);
        }
        if ((uVar6 < 9) || ((ulong)puVar29[4] == 0)) {
          puVar22 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar26 + (ulong)puVar29[4]);
          puVar22 = (undefined1 *)((long)puVar4 + (ulong)*puVar4);
        }
        sVar10 = strlen(puVar22 + 4);
        bVar5 = puVar22[4];
        puVar31 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar31 = &DAT_cbf29ce484222645;
          pbVar18 = puVar22 + 5;
          do {
            puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar5 != 0);
        }
        if ((uVar6 < 0xb) || ((ulong)puVar29[5] == 0)) {
          puVar23 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar26 + (ulong)puVar29[5]);
          puVar23 = (undefined1 *)((long)puVar4 + (ulong)*puVar4);
        }
        sVar11 = strlen(puVar23 + 4);
        bVar5 = puVar23[4];
        if (bVar5 != 0) {
          puVar33 = &DAT_cbf29ce484222645;
          pbVar18 = puVar23 + 5;
          do {
            puVar33 = (undefined1 *)(((ulong)puVar33 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar5 != 0);
        }
        piVar30 = *(int **)(param_1 + 0x90);
        if (piVar30 == (int *)0x0) {
LAB_016b4658:
          plVar32 = (long *)(**(code **)(**(long **)(param_1 + 0xc0) + 0x10))
                                      (*(long **)(param_1 + 0xc0),0x90,8);
          if (plVar32 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0xc0) + 0xb8))();
          }
          uVar24 = *(undefined8 *)(param_1 + 0xc0);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar14 != 0) {
            if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar24;
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
          }
          plVar32[2] = (long)piVar27;
          plVar32[3] = (long)(puVar20 + 4);
          plVar32[4] = sVar8;
          plVar32[5] = 0;
          plVar32[8] = 0;
          plVar32[9] = 0;
          plVar32[0xc] = 0;
          plVar32[0xd] = 0;
          plVar32[0x10] = 0;
          plVar32[0x11] = 0;
          plVar32[6] = (long)&DAT_cbf29ce484222645;
          plVar32[7] = (long)&DAT_03996322;
          plVar32[10] = (long)&DAT_cbf29ce484222645;
          plVar32[0xb] = (long)&DAT_03996322;
          plVar32[0xe] = (long)&DAT_cbf29ce484222645;
          plVar32[0xf] = (long)&DAT_03996322;
          if (lVar14 != 0) {
            *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
          }
          *plVar32 = 0;
          plVar32[1] = (long)piVar27;
          fVar34 = (float)(*(long *)(param_1 + 0xe0) + 1);
          if ((piVar30 == (int *)0x0) || (*(float *)(param_1 + 0xe8) * (float)piVar30 < fVar34)) {
            uVar15 = (ulong)(piVar30 < (int *)0x3 ||
                            ((ulong)piVar30 & (ulong)((long)piVar30 + -1)) != 0) |
                     (long)piVar30 << 1;
            uVar19 = (ulong)(fVar34 / *(float *)(param_1 + 0xe8));
            if (uVar19 <= uVar15) {
              uVar19 = uVar15;
            }
            if (uVar19 - 1 == 0) {
              uVar19 = 2;
            }
            else if ((uVar19 & uVar19 - 1) != 0) {
              uVar19 = std::__next_prime(uVar19);
            }
            uVar15 = *(ulong *)(param_1 + 0x90);
            if (uVar15 < uVar19) {
              uVar13 = uVar19;
LAB_016b4878:
              FUN_016b5334(plVar1,uVar13);
            }
            else if (uVar19 < uVar15) {
              uVar13 = (ulong)((float)*(ulong *)(param_1 + 0xe0) / *(float *)(param_1 + 0xe8));
              if ((uVar15 < 3) ||
                 (uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
                 uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333),
                 1 < (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar13 = std::__next_prime(uVar13);
              }
              else if (1 < uVar13) {
                uVar13 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar13 - 1) & 0x3f);
              }
              if (uVar13 <= uVar19) {
                uVar13 = uVar19;
              }
              if (uVar13 < uVar15) goto LAB_016b4878;
            }
            piVar30 = *(int **)(param_1 + 0x90);
            if (((ulong)piVar30 & (ulong)((long)piVar30 + -1)) == 0) {
              piVar26 = (int *)((ulong)((long)piVar30 + -1) & (ulong)piVar27);
            }
            else if (piVar27 < piVar30) {
              piVar26 = piVar27;
            }
            else {
              uVar15 = 0;
              if (piVar30 != (int *)0x0) {
                uVar15 = (ulong)piVar27 / (ulong)piVar30;
              }
              piVar26 = (int *)((long)piVar27 - uVar15 * (long)piVar30);
            }
          }
          plVar12 = *(long **)(*plVar1 + (long)piVar26 * 8);
          if (plVar12 == (long *)0x0) {
            *plVar32 = *plVar2;
            *plVar2 = (long)plVar32;
            *(long **)(*plVar1 + (long)piVar26 * 8) = plVar2;
            if (*plVar32 != 0) {
              piVar26 = *(int **)(*plVar32 + 8);
              if (((ulong)piVar30 & (ulong)((long)piVar30 + -1)) == 0) {
                piVar26 = (int *)((ulong)piVar26 & (ulong)((long)piVar30 + -1));
              }
              else if (piVar30 <= piVar26) {
                uVar15 = 0;
                if (piVar30 != (int *)0x0) {
                  uVar15 = (ulong)piVar26 / (ulong)piVar30;
                }
                piVar26 = (int *)((long)piVar26 - uVar15 * (long)piVar30);
              }
              plVar12 = (long *)(*plVar1 + (long)piVar26 * 8);
              goto LAB_016b474c;
            }
          }
          else {
            *plVar32 = *plVar12;
LAB_016b474c:
            *plVar12 = (long)plVar32;
          }
          *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
        }
        else {
          uVar15 = (long)piVar30 - ((ulong)piVar30 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
          uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar15 < 2) {
            piVar26 = (int *)((ulong)((long)piVar30 + -1) & (ulong)piVar27);
          }
          else {
            piVar26 = piVar27;
            if (piVar30 <= piVar27) {
              uVar19 = 0;
              if (piVar30 != (int *)0x0) {
                uVar19 = (ulong)piVar27 / (ulong)piVar30;
              }
              piVar26 = (int *)((long)piVar27 - uVar19 * (long)piVar30);
            }
          }
          plVar32 = *(long **)(*plVar1 + (long)piVar26 * 8);
          if (plVar32 == (long *)0x0) goto LAB_016b4658;
          if (uVar15 < 2) {
            do {
              plVar32 = (long *)*plVar32;
              if ((plVar32 == (long *)0x0) ||
                 ((int *)plVar32[1] != piVar27 &&
                  (int *)((ulong)plVar32[1] & (ulong)((long)piVar30 + -1)) != piVar26))
              goto LAB_016b4658;
            } while ((int *)plVar32[2] != piVar27);
          }
          else {
            do {
              plVar32 = (long *)*plVar32;
              if (plVar32 == (long *)0x0) goto LAB_016b4658;
              piVar16 = (int *)plVar32[1];
              if (piVar16 != piVar27) {
                if (piVar30 <= piVar16) {
                  uVar15 = 0;
                  if (piVar30 != (int *)0x0) {
                    uVar15 = (ulong)piVar16 / (ulong)piVar30;
                  }
                  piVar16 = (int *)((long)piVar16 - uVar15 * (long)piVar30);
                }
                if (piVar16 != piVar26) goto LAB_016b4658;
              }
            } while ((int *)plVar32[2] != piVar27);
          }
        }
        plVar32[6] = (long)puVar25;
        plVar32[7] = (long)(puVar21 + 4);
        plVar12 = (long *)plVar32[9];
        plVar32[8] = sVar9;
        plVar32[9] = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        plVar32[10] = (long)puVar31;
        plVar32[0xb] = (long)(puVar22 + 4);
        plVar12 = (long *)plVar32[0xd];
        plVar32[0xc] = sVar10;
        plVar32[0xd] = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        plVar32[0xe] = (long)puVar33;
        plVar32[0xf] = (long)(puVar23 + 4);
        plVar12 = (long *)plVar32[0x11];
        plVar32[0x10] = sVar11;
        plVar32[0x11] = 0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        puVar28 = puVar28 + 1;
      } while (puVar28 != puVar3);
    }
  }
  return;
}


