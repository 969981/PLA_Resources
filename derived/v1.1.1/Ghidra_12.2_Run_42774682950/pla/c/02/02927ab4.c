/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02927ab4; name: FUN_02927ab4
 */


void FUN_02927ab4(long param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  int *piVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  undefined1 *unaff_x22;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  long *local_138;
  undefined7 local_130;
  undefined4 uStack_129;
  long *local_120;
  undefined1 auStack_118 [184];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  uVar9 = (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2));
  puVar4 = (uint *)((long)param_2 + uVar9);
  uVar14 = (ulong)*puVar4;
  puVar4 = (uint *)((long)puVar4 + uVar14);
  puVar21 = puVar4 + 1;
  uVar17 = (ulong)*puVar4;
  if (uVar17 != 0) {
    puVar4 = puVar21 + uVar17;
    plVar1 = (long *)(param_1 + 0x68);
    puVar2 = (undefined8 *)(param_1 + 0xe8);
    lVar15 = (long)param_2 + uVar14 + uVar9 + 9;
    plVar3 = (long *)(param_1 + 0x98);
    do {
      piVar5 = (int *)((long)puVar21 + (ulong)*puVar21);
      if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar9 == 0)) {
LAB_02927bb4:
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar24 = *(undefined1 **)PTR_DAT_0437a0d8;
        plVar18 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
      }
      else {
        uVar14 = (ulong)*(uint *)((long)piVar5 + uVar9);
        lVar19 = (long)((long)piVar5 + uVar9) + uVar14;
        if (lVar19 == 0) goto LAB_02927bb4;
        bVar6 = *(byte *)(lVar19 + 4);
        if (bVar6 == 0) {
          plVar18 = (long *)0x0;
          puVar24 = &DAT_cbf29ce484222645;
        }
        else {
          puVar24 = &DAT_cbf29ce484222645;
          pbVar13 = (byte *)(lVar15 + uVar14 + uVar9 + (ulong)*puVar21);
          do {
            puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar6) * 0x100000001b3);
            plVar18 = (long *)0x0;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 != 0);
        }
      }
      FUN_0292c178(&local_138,*(undefined8 *)(param_1 + 0x3d0),piVar5);
      puVar22 = *(undefined1 **)(param_1 + 0x70);
      if (puVar22 == (undefined1 *)0x0) {
LAB_02927cc8:
        plVar25 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                                    (*(long **)(param_1 + 0xa0),0xe8,8);
        if (plVar25 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
        }
        uVar23 = *(undefined8 *)(param_1 + 0xa0);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar7 = PTR_DAT_04379528;
          if (iVar8 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar19 != 0) {
          if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar23;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        }
        plVar25[2] = (long)puVar24;
        plVar25[3] = (long)local_138;
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x18))();
        }
        *(undefined4 *)((long)plVar25 + 0x27) = uStack_129;
        plVar25[4] = CONCAT17((undefined1)uStack_129,local_130);
        plVar25[6] = (long)local_120;
        if (local_120 != (long *)0x0) {
          (**(code **)(*local_120 + 0x18))();
        }
        memcpy(plVar25 + 7,auStack_118,0xb0);
        if (lVar19 != 0) {
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        }
        *plVar25 = 0;
        plVar25[1] = (long)puVar24;
        fVar27 = (float)(*(long *)(param_1 + 0xc0) + 1);
        if ((puVar22 == (undefined1 *)0x0) || (*(float *)(param_1 + 200) * (float)puVar22 < fVar27))
        {
          uVar9 = (ulong)(puVar22 < (undefined1 *)0x3 ||
                         ((ulong)puVar22 & (ulong)(puVar22 + -1)) != 0) | (long)puVar22 << 1;
          uVar14 = (ulong)(fVar27 / *(float *)(param_1 + 200));
          if (uVar14 <= uVar9) {
            uVar14 = uVar9;
          }
          if (uVar14 - 1 == 0) {
            uVar14 = 2;
          }
          else if ((uVar14 & uVar14 - 1) != 0) {
            uVar14 = std::__next_prime(uVar14);
          }
          uVar9 = *(ulong *)(param_1 + 0x70);
          if (uVar9 < uVar14) {
            uVar17 = uVar14;
LAB_02927e24:
            FUN_0292b168(plVar1,uVar17);
          }
          else if (uVar14 < uVar9) {
            uVar17 = (ulong)((float)*(ulong *)(param_1 + 0xc0) / *(float *)(param_1 + 200));
            if ((uVar9 < 3) ||
               (uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
               uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
               1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar17 = std::__next_prime(uVar17);
            }
            else if (1 < uVar17) {
              uVar17 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar17 - 1) & 0x3f);
            }
            if (uVar17 <= uVar14) {
              uVar17 = uVar14;
            }
            if (uVar17 < uVar9) goto LAB_02927e24;
          }
          puVar22 = *(undefined1 **)(param_1 + 0x70);
          if (((ulong)puVar22 & (ulong)(puVar22 + -1)) == 0) {
            unaff_x22 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)puVar24);
          }
          else if (puVar24 < puVar22) {
            unaff_x22 = puVar24;
          }
          else {
            uVar9 = 0;
            if (puVar22 != (undefined1 *)0x0) {
              uVar9 = (ulong)puVar24 / (ulong)puVar22;
            }
            unaff_x22 = puVar24 + -(uVar9 * (long)puVar22);
          }
        }
        plVar12 = *(long **)(*plVar1 + (long)unaff_x22 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar25 = *plVar3;
          *plVar3 = (long)plVar25;
          *(long **)(*plVar1 + (long)unaff_x22 * 8) = plVar3;
          if (*plVar25 != 0) {
            puVar24 = *(undefined1 **)(*plVar25 + 8);
            if (((ulong)puVar22 & (ulong)(puVar22 + -1)) == 0) {
              puVar24 = (undefined1 *)((ulong)puVar24 & (ulong)(puVar22 + -1));
            }
            else if (puVar22 <= puVar24) {
              uVar9 = 0;
              if (puVar22 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar24 / (ulong)puVar22;
              }
              puVar24 = puVar24 + -(uVar9 * (long)puVar22);
            }
            plVar12 = (long *)(*plVar1 + (long)puVar24 * 8);
            goto LAB_02927f5c;
          }
        }
        else {
          *plVar25 = *plVar12;
LAB_02927f5c:
          *plVar12 = (long)plVar25;
        }
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
      }
      else {
        uVar9 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          unaff_x22 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)puVar24);
        }
        else {
          unaff_x22 = puVar24;
          if (puVar22 <= puVar24) {
            uVar14 = 0;
            if (puVar22 != (undefined1 *)0x0) {
              uVar14 = (ulong)puVar24 / (ulong)puVar22;
            }
            unaff_x22 = puVar24 + -(uVar14 * (long)puVar22);
          }
        }
        plVar25 = *(long **)(*plVar1 + (long)unaff_x22 * 8);
        if (plVar25 == (long *)0x0) goto LAB_02927cc8;
        if (uVar9 < 2) {
          do {
            plVar25 = (long *)*plVar25;
            if ((plVar25 == (long *)0x0) ||
               ((undefined1 *)plVar25[1] != puVar24 &&
                (undefined1 *)((ulong)plVar25[1] & (ulong)(puVar22 + -1)) != unaff_x22))
            goto LAB_02927cc8;
          } while ((undefined1 *)plVar25[2] != puVar24);
        }
        else {
          do {
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_02927cc8;
            puVar10 = (undefined1 *)plVar25[1];
            if (puVar10 != puVar24) {
              if (puVar22 <= puVar10) {
                uVar9 = 0;
                if (puVar22 != (undefined1 *)0x0) {
                  uVar9 = (ulong)puVar10 / (ulong)puVar22;
                }
                puVar10 = puVar10 + -(uVar9 * (long)puVar22);
              }
              if (puVar10 != unaff_x22) goto LAB_02927cc8;
            }
          } while ((undefined1 *)plVar25[2] != puVar24);
        }
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
      local_138 = plVar25 + 3;
      uVar9 = *(ulong *)(param_1 + 0xd8);
      if (uVar9 < *(ulong *)(param_1 + 0xe0)) {
        FUN_0292b5c4(puVar2,uVar9,&local_138);
        *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 8;
      }
      else {
        uVar14 = *(ulong *)(param_1 + 0xf0);
        lVar19 = (long)(uVar9 - *(long *)(param_1 + 0xd0)) >> 3;
        uVar9 = lVar19 + 1;
        if (0x7ffffffffffffffe < uVar14) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 < uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = *(ulong *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd0);
        if ((ulong)(lVar16 >> 3) < uVar14 >> 1) {
          uVar17 = lVar16 >> 2;
          uVar14 = uVar9;
          if (uVar9 <= uVar17) {
            uVar14 = uVar17;
          }
        }
        if (uVar14 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar14 << 3,8);
          if (lVar16 == 0) {
            (**(code **)(*(long *)*puVar2 + 0xb8))();
          }
        }
        lVar20 = lVar16 + lVar19 * 8;
        unaff_x22 = (undefined1 *)(lVar16 + uVar14 * 8);
        FUN_0292b5c4(puVar2,lVar20,&local_138);
        lVar16 = *(long *)(param_1 + 0xd0);
        lVar26 = *(long *)(param_1 + 0xd8);
        lVar19 = lVar20 + 8;
        if (lVar26 != lVar16) {
          do {
            lVar20 = lVar20 + -8;
            lVar26 = lVar26 + -8;
            FUN_0292b5c4(puVar2,lVar20,lVar26);
          } while (lVar16 != lVar26);
          lVar16 = *(long *)(param_1 + 0xd0);
        }
        lVar26 = *(long *)(param_1 + 0xe0);
        *(long *)(param_1 + 0xd0) = lVar20;
        *(long *)(param_1 + 0xd8) = lVar19;
        *(undefined1 **)(param_1 + 0xe0) = unaff_x22;
        if (lVar16 != 0) {
          plVar18 = (long *)*puVar2;
          lVar26 = lVar26 - lVar16;
          uVar9 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar9 & 1) != 0) {
            unaff_x22 = (undefined1 *)tpidr_el0;
            if (unaff_x22[0x38d488] == '\0') {
              unaff_x22[0x38d488] = 1;
              *(undefined8 *)(unaff_x22 + 0x38d478) = 0;
              *(undefined8 *)(unaff_x22 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,unaff_x22 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(unaff_x22 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar16,lVar26,8);
              goto LAB_02927b64;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar16,lVar26,8);
        }
      }
LAB_02927b64:
      puVar21 = puVar21 + 1;
      lVar15 = lVar15 + 4;
    } while (puVar21 != puVar4);
  }
  FUN_0292b6a0(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return;
}


