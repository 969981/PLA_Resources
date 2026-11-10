/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b74620; name: FUN_02b74620
 */


void FUN_02b74620(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  size_t sVar11;
  size_t sVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined1 *puVar25;
  uint *puVar26;
  long *plVar27;
  ushort *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  
  param_1[7] = 0;
  puVar6 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar15 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04285b48;
  param_1[1] = lVar15;
  param_1[9] = (long)&PTR_LAB_04285b80;
  plVar27 = param_1 + 0xb;
  *plVar27 = 0;
  param_1[0xc] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar15 = DAT_043f1798;
  lVar8 = tpidr_el0;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x20), *(long *)(lVar8 + 0x20) == 0)) {
    *(long *)(lVar8 + 0x20) = DAT_043f1798;
    lVar9 = lVar15;
  }
  param_1[0xf] = 0;
  param_1[0xd] = lVar9;
  param_1[0xe] = 0x2aaaaaaaaaaaaaa;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar15 = DAT_043f1798;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x20), *(long *)(lVar8 + 0x20) == 0)) {
    *(long *)(lVar8 + 0x20) = DAT_043f1798;
    lVar9 = lVar15;
  }
  param_1[0x12] = lVar9;
  param_1[0x13] = 0x2aaaaaaaaaaaaaa;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  piVar16 = (int *)*param_2;
  puVar2 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (6 - (long)*piVar16)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar26 = puVar2 + 1;
  uVar17 = (ulong)*puVar2;
  if (uVar17 != 0) {
    puVar2 = puVar26 + uVar17;
    plVar1 = param_1 + 0x11;
    do {
      piVar16 = (int *)((long)puVar26 + (ulong)*puVar26);
      puVar28 = (ushort *)((long)piVar16 - (long)*piVar16);
      uVar5 = *puVar28;
      puVar29 = (undefined1 *)(ulong)uVar5;
      if ((uVar5 < 5) || ((ulong)puVar28[2] == 0)) {
        lVar8 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar16 + (ulong)puVar28[2]);
        lVar8 = (long)puVar3 + (ulong)*puVar3;
      }
      sVar10 = strlen((char *)(lVar8 + 4));
      bVar4 = *(byte *)(lVar8 + 4);
      puVar30 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar30 = &DAT_cbf29ce484222645;
        pbVar21 = (byte *)(lVar8 + 5);
        do {
          puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (bVar4 != 0);
      }
      if ((uVar5 < 7) || ((ulong)puVar28[3] == 0)) {
        lVar15 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar16 + (ulong)puVar28[3]);
        lVar15 = (long)puVar3 + (ulong)*puVar3;
      }
      sVar11 = strlen((char *)(lVar15 + 4));
      bVar4 = *(byte *)(lVar15 + 4);
      puVar25 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar25 = &DAT_cbf29ce484222645;
        pbVar21 = (byte *)(lVar15 + 5);
        do {
          puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (bVar4 != 0);
      }
      if ((uVar5 < 9) || ((ulong)puVar28[4] == 0)) {
        lVar9 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar16 + (ulong)puVar28[4]);
        lVar9 = (long)puVar3 + (ulong)*puVar3;
      }
      sVar12 = strlen((char *)(lVar9 + 4));
      bVar4 = *(byte *)(lVar9 + 4);
      puVar31 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar31 = &DAT_cbf29ce484222645;
        pbVar21 = (byte *)(lVar9 + 5);
        do {
          puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (bVar4 != 0);
      }
      puVar32 = (undefined1 *)param_1[0xc];
      if (puVar32 == (undefined1 *)0x0) {
LAB_02b74a78:
        plVar19 = (long *)(**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],0x70,8)
        ;
        if (plVar19 == (long *)0x0) {
          (**(code **)(*(long *)param_1[0x12] + 0xb8))();
        }
        lVar24 = param_1[0x12];
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar24;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        plVar19[2] = (long)puVar30;
        plVar19[3] = lVar8 + 4;
        plVar19[4] = sVar10;
        plVar19[5] = 0;
        plVar19[6] = (long)puVar25;
        plVar19[7] = lVar15 + 4;
        plVar19[8] = sVar11;
        plVar19[9] = 0;
        plVar19[10] = (long)puVar31;
        plVar19[0xb] = lVar9 + 4;
        plVar19[0xc] = sVar12;
        plVar19[0xd] = 0;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        *plVar19 = 0;
        plVar19[1] = (long)puVar30;
        if ((puVar32 == (undefined1 *)0x0) ||
           (*(float *)(param_1 + 0x17) * (float)puVar32 < (float)(param_1[0x16] + 1))) {
          uVar17 = (ulong)(puVar32 < (undefined1 *)0x3 ||
                          ((ulong)puVar32 & (ulong)(puVar32 + -1)) != 0) | (long)puVar32 << 1;
          uVar23 = (ulong)((float)(param_1[0x16] + 1) / *(float *)(param_1 + 0x17));
          if (uVar23 <= uVar17) {
            uVar23 = uVar17;
          }
          if (uVar23 - 1 == 0) {
            uVar23 = 2;
          }
          else if ((uVar23 & uVar23 - 1) != 0) {
            uVar23 = std::__next_prime(uVar23);
          }
          uVar17 = param_1[0xc];
          if (uVar17 < uVar23) {
            uVar14 = uVar23;
LAB_02b74bc4:
            FUN_02b753e8(plVar27,uVar14);
          }
          else if (uVar23 < uVar17) {
            uVar14 = (ulong)((float)(ulong)param_1[0x16] / *(float *)(param_1 + 0x17));
            if ((uVar17 < 3) ||
               (uVar20 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
               uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333),
               1 < (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar14 = std::__next_prime(uVar14);
            }
            else if (1 < uVar14) {
              uVar14 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar14 - 1) & 0x3f);
            }
            if (uVar14 <= uVar23) {
              uVar14 = uVar23;
            }
            if (uVar14 < uVar17) goto LAB_02b74bc4;
          }
          puVar32 = (undefined1 *)param_1[0xc];
          if (((ulong)puVar32 & (ulong)(puVar32 + -1)) == 0) {
            puVar29 = (undefined1 *)((ulong)(puVar32 + -1) & (ulong)puVar30);
          }
          else if (puVar30 < puVar32) {
            puVar29 = puVar30;
          }
          else {
            uVar17 = 0;
            if (puVar32 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar30 / (ulong)puVar32;
            }
            puVar29 = puVar30 + -(uVar17 * (long)puVar32);
          }
        }
        plVar18 = *(long **)(*plVar27 + (long)puVar29 * 8);
        if (plVar18 == (long *)0x0) {
          *plVar19 = *plVar1;
          *plVar1 = (long)plVar19;
          *(long **)(*plVar27 + (long)puVar29 * 8) = plVar1;
          if (*plVar19 != 0) {
            puVar29 = *(undefined1 **)(*plVar19 + 8);
            if (((ulong)puVar32 & (ulong)(puVar32 + -1)) == 0) {
              puVar29 = (undefined1 *)((ulong)puVar29 & (ulong)(puVar32 + -1));
            }
            else if (puVar32 <= puVar29) {
              uVar17 = 0;
              if (puVar32 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar29 / (ulong)puVar32;
              }
              puVar29 = puVar29 + -(uVar17 * (long)puVar32);
            }
            plVar18 = (long *)(*plVar27 + (long)puVar29 * 8);
            goto LAB_02b74810;
          }
        }
        else {
          *plVar19 = *plVar18;
LAB_02b74810:
          *plVar18 = (long)plVar19;
        }
        param_1[0x16] = param_1[0x16] + 1;
      }
      else {
        uVar17 = (long)puVar32 - ((ulong)puVar32 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          puVar29 = (undefined1 *)((ulong)(puVar32 + -1) & (ulong)puVar30);
        }
        else {
          puVar29 = puVar30;
          if (puVar32 <= puVar30) {
            uVar23 = 0;
            if (puVar32 != (undefined1 *)0x0) {
              uVar23 = (ulong)puVar30 / (ulong)puVar32;
            }
            puVar29 = puVar30 + -(uVar23 * (long)puVar32);
          }
        }
        plVar19 = *(long **)(*plVar27 + (long)puVar29 * 8);
        if (plVar19 == (long *)0x0) goto LAB_02b74a78;
        if (uVar17 < 2) {
          do {
            plVar19 = (long *)*plVar19;
            if ((plVar19 == (long *)0x0) ||
               ((undefined1 *)plVar19[1] != puVar30 &&
                (undefined1 *)((ulong)plVar19[1] & (ulong)(puVar32 + -1)) != puVar29))
            goto LAB_02b74a78;
          } while ((undefined1 *)plVar19[2] != puVar30);
        }
        else {
          do {
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) goto LAB_02b74a78;
            puVar22 = (undefined1 *)plVar19[1];
            if (puVar22 != puVar30) {
              if (puVar32 <= puVar22) {
                uVar17 = 0;
                if (puVar32 != (undefined1 *)0x0) {
                  uVar17 = (ulong)puVar22 / (ulong)puVar32;
                }
                puVar22 = puVar22 + -(uVar17 * (long)puVar32);
              }
              if (puVar22 != puVar29) goto LAB_02b74a78;
            }
          } while ((undefined1 *)plVar19[2] != puVar30);
        }
      }
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar2);
  }
  return;
}


