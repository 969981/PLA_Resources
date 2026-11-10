/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c01a0; name: FUN_018c01a0
 */


void FUN_018c01a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  ushort uVar7;
  ulong uVar8;
  undefined4 uVar9;
  int iVar10;
  size_t sVar11;
  size_t sVar12;
  size_t sVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  ushort *puVar27;
  ulong uVar28;
  undefined1 *puVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 local_94;
  ulong local_88;
  
  puVar15 = *(uint **)(*(long *)(param_1 + 0x130) + 0x250);
  piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar15 = puVar4 + 1;
  uVar16 = (ulong)*puVar4;
  if (uVar16 != 0) {
    puVar4 = puVar15 + uVar16;
    plVar1 = (long *)(param_1 + 0x3c0);
    plVar2 = (long *)(param_1 + 0x3f0);
    do {
      puVar29 = &DAT_cbf29ce484222645;
      piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
      puVar27 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar7 = *puVar27;
      uVar16 = (ulong)uVar7;
      if (uVar7 < 5) {
        local_88 = 0;
        lVar23 = 0;
      }
      else {
        if ((ulong)puVar27[2] == 0) {
          local_88 = 0;
        }
        else {
          local_88 = *(ulong *)((long)piVar3 + (ulong)puVar27[2]);
        }
        if ((uVar7 < 7) || ((ulong)puVar27[3] == 0)) {
          lVar23 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar3 + (ulong)puVar27[3]);
          lVar23 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      sVar11 = strlen((char *)(lVar23 + 4));
      bVar6 = *(byte *)(lVar23 + 4);
      puVar26 = puVar29;
      if (bVar6 != 0) {
        pbVar19 = (byte *)(lVar23 + 5);
        do {
          puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar6 != 0);
      }
      if ((uVar7 < 9) || ((ulong)puVar27[4] == 0)) {
        lVar22 = 0;
      }
      else {
        puVar5 = (uint *)((long)piVar3 + (ulong)puVar27[4]);
        lVar22 = (long)puVar5 + (ulong)*puVar5;
      }
      sVar12 = strlen((char *)(lVar22 + 4));
      bVar6 = *(byte *)(lVar22 + 4);
      puVar25 = puVar29;
      if (bVar6 != 0) {
        pbVar19 = (byte *)(lVar22 + 5);
        do {
          puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar6 != 0);
      }
      if (uVar7 < 0x11) {
        local_94 = 0;
        lVar24 = 0;
      }
      else {
        if ((ulong)puVar27[8] == 0) {
          local_94 = 0;
        }
        else {
          local_94 = *(undefined4 *)((long)piVar3 + (ulong)puVar27[8]);
        }
        if ((uVar7 < 0x13) || ((ulong)puVar27[9] == 0)) {
          lVar24 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar3 + (ulong)puVar27[9]);
          lVar24 = (long)puVar5 + (ulong)*puVar5;
        }
      }
      sVar13 = strlen((char *)(lVar24 + 4));
      bVar6 = *(byte *)(lVar24 + 4);
      if (bVar6 != 0) {
        puVar29 = &DAT_cbf29ce484222645;
        pbVar19 = (byte *)(lVar24 + 5);
        do {
          puVar29 = (undefined1 *)(((ulong)puVar29 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar6 != 0);
      }
      uVar32 = 0;
      uVar31 = 0;
      uVar33 = 0;
      if (uVar7 < 0xb) {
LAB_018c03c8:
        uVar28 = *(ulong *)(param_1 + 0x3c8);
        uVar9 = uVar33;
        if (uVar28 != 0) goto LAB_018c03d0;
LAB_018c042c:
        plVar17 = (long *)(**(code **)(**(long **)(param_1 + 0x3f8) + 0x10))
                                    (*(long **)(param_1 + 0x3f8),0x90,8);
        if (plVar17 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x3f8) + 0xb8))();
        }
        uVar21 = *(undefined8 *)(param_1 + 0x3f8);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), iVar10 != 0)) {
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
          *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar21;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        }
        plVar17[2] = local_88;
        plVar17[3] = (long)puVar26;
        plVar17[4] = lVar23 + 4;
        *(undefined4 *)(plVar17 + 0xc) = uVar31;
        plVar17[5] = sVar11;
        plVar17[6] = 0;
        plVar17[7] = (long)puVar25;
        plVar17[8] = lVar22 + 4;
        plVar17[9] = sVar12;
        plVar17[10] = 0;
        *(undefined4 *)(plVar17 + 0xb) = local_94;
        *(undefined4 *)((long)plVar17 + 0x5c) = 1;
        *(undefined4 *)((long)plVar17 + 100) = uVar32;
        *(undefined4 *)(plVar17 + 0xd) = uVar33;
        plVar17[0x10] = sVar13;
        plVar17[0x11] = 0;
        plVar17[0xe] = (long)puVar29;
        plVar17[0xf] = lVar24 + 4;
        if (lVar14 != 0) {
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        *plVar17 = 0;
        plVar17[1] = local_88;
        fVar30 = (float)(*(long *)(param_1 + 0x418) + 1);
        if ((uVar28 == 0) || (*(float *)(param_1 + 0x420) * (float)uVar28 < fVar30)) {
          uVar16 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
          uVar28 = (ulong)(fVar30 / *(float *)(param_1 + 0x420));
          if (uVar28 <= uVar16) {
            uVar28 = uVar16;
          }
          FUN_018c4958(plVar1,uVar28);
          uVar28 = *(ulong *)(param_1 + 0x3c8);
          if ((uVar28 & uVar28 - 1) == 0) {
            uVar16 = uVar28 - 1 & local_88;
          }
          else {
            uVar16 = local_88;
            if (uVar28 <= local_88) {
              uVar16 = 0;
              if (uVar28 != 0) {
                uVar16 = local_88 / uVar28;
              }
              uVar16 = local_88 - uVar16 * uVar28;
            }
          }
        }
        plVar18 = *(long **)(*plVar1 + uVar16 * 8);
        if (plVar18 == (long *)0x0) {
          *plVar17 = *plVar2;
          *plVar2 = (long)plVar17;
          *(long **)(*plVar1 + uVar16 * 8) = plVar2;
          if (*plVar17 != 0) {
            uVar16 = *(ulong *)(*plVar17 + 8);
            if ((uVar28 & uVar28 - 1) == 0) {
              uVar16 = uVar16 & uVar28 - 1;
            }
            else if (uVar28 <= uVar16) {
              uVar20 = 0;
              if (uVar28 != 0) {
                uVar20 = uVar16 / uVar28;
              }
              uVar16 = uVar16 - uVar20 * uVar28;
            }
            plVar18 = (long *)(*plVar1 + uVar16 * 8);
            goto LAB_018c0578;
          }
        }
        else {
          *plVar17 = *plVar18;
LAB_018c0578:
          *plVar18 = (long)plVar17;
        }
        *(long *)(param_1 + 0x418) = *(long *)(param_1 + 0x418) + 1;
      }
      else {
        uVar31 = 0;
        if ((ulong)puVar27[5] != 0) {
          uVar31 = *(undefined4 *)((long)piVar3 + (ulong)puVar27[5]);
        }
        if (uVar7 < 0xd) {
          uVar32 = 0;
        }
        else {
          uVar32 = 0;
          if ((ulong)puVar27[6] != 0) {
            uVar32 = *(undefined4 *)((long)piVar3 + (ulong)puVar27[6]);
          }
          if ((0xe < uVar7) && ((ulong)puVar27[7] != 0)) {
            uVar33 = *(undefined4 *)((long)piVar3 + (ulong)puVar27[7]);
            goto LAB_018c03c8;
          }
        }
        uVar33 = 0;
        uVar28 = *(ulong *)(param_1 + 0x3c8);
        uVar9 = 0;
        if (uVar28 == 0) goto LAB_018c042c;
LAB_018c03d0:
        uVar33 = uVar9;
        uVar16 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar20 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          uVar16 = uVar28 - 1 & local_88;
        }
        else {
          uVar16 = local_88;
          if (uVar28 <= local_88) {
            uVar16 = 0;
            if (uVar28 != 0) {
              uVar16 = local_88 / uVar28;
            }
            uVar16 = local_88 - uVar16 * uVar28;
          }
        }
        plVar17 = *(long **)(*plVar1 + uVar16 * 8);
        if (plVar17 == (long *)0x0) goto LAB_018c042c;
        if (uVar20 < 2) {
          do {
            plVar17 = (long *)*plVar17;
            if ((plVar17 == (long *)0x0) ||
               (plVar17[1] != local_88 && (plVar17[1] & uVar28 - 1) != uVar16)) goto LAB_018c042c;
          } while (plVar17[2] != local_88);
        }
        else {
          do {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_018c042c;
            uVar20 = plVar17[1];
            if (uVar20 != local_88) {
              if (uVar28 <= uVar20) {
                uVar8 = 0;
                if (uVar28 != 0) {
                  uVar8 = uVar20 / uVar28;
                }
                uVar20 = uVar20 - uVar8 * uVar28;
              }
              if (uVar20 != uVar16) goto LAB_018c042c;
            }
          } while (plVar17[2] != local_88);
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar4);
  }
  return;
}


