/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5d248; name: FUN_02b5d248
 */


void FUN_02b5d248(long *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  undefined1 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  uint *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  ulong local_98;
  
  puVar15 = param_2 + 1;
  if (*param_2 != 0) {
    puVar1 = puVar15 + *param_2;
    uVar29 = 0;
    do {
      lVar20 = *param_1;
      if ((ulong)((param_1[1] - lVar20 >> 5) * -0x5555555555555555) <= uVar29) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar18 == 0)) {
        lVar31 = 0;
      }
      else {
        puVar28 = (uint *)((long)piVar2 + uVar18);
        lVar31 = (long)puVar28 + (ulong)*puVar28;
      }
      sVar11 = strlen((char *)(lVar31 + 4));
      bVar7 = *(byte *)(lVar31 + 4);
      puVar22 = &DAT_cbf29ce484222645;
      if (bVar7 != 0) {
        puVar22 = &DAT_cbf29ce484222645;
        pbVar24 = (byte *)(lVar31 + 5);
        do {
          puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (bVar7 != 0);
      }
      puVar27 = (undefined8 *)(lVar20 + uVar29 * 0x60);
      *puVar27 = puVar22;
      puVar27[1] = (char *)(lVar31 + 4);
      puVar27[2] = sVar11;
      plVar32 = puVar27 + 3;
      plVar12 = (long *)*plVar32;
      *plVar32 = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      *plVar32 = 0;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
        uVar17 = 0;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = *(undefined1 *)((long)piVar2 + uVar18);
        }
      }
      *(undefined1 *)(lVar20 + uVar29 * 0x60 + 0x58) = uVar17;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
        uVar17 = 0;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = *(undefined1 *)((long)piVar2 + uVar18);
        }
      }
      *(undefined1 *)(lVar20 + uVar29 * 0x60 + 0x59) = uVar17;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) {
        uVar17 = 0;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = *(undefined1 *)((long)piVar2 + uVar18);
        }
      }
      *(undefined1 *)(lVar20 + uVar29 * 0x60 + 0x5a) = uVar17;
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xf) {
        uVar17 = 0;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = *(undefined1 *)((long)piVar2 + uVar18);
        }
      }
      *(undefined1 *)(lVar20 + uVar29 * 0x60 + 0x5b) = uVar17;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
         (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar18 == 0)) {
        uVar21 = 0;
      }
      else {
        uVar21 = *(undefined4 *)((long)piVar2 + uVar18);
      }
      lVar31 = lVar20 + uVar29 * 0x60;
      plVar32 = (long *)(lVar31 + 0x20);
      lVar19 = *plVar32;
      *(undefined4 *)(lVar31 + 0x5c) = uVar21;
      puVar28 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
      local_98 = (ulong)*(uint *)((long)puVar28 + (ulong)*puVar28);
      plVar12 = (long *)(lVar31 + 0x28);
      lVar16 = *plVar12;
      lVar23 = lVar16 - lVar19 >> 3;
      lVar31 = lVar23 * -0x3333333333333333 - local_98;
      if ((ulong)(lVar23 * -0x3333333333333333) < local_98) {
        lVar25 = lVar20 + uVar29 * 0x60;
        plVar26 = (long *)(lVar25 + 0x30);
        puVar27 = (undefined8 *)(lVar25 + 0x38);
        if ((ulong)((*plVar26 - lVar16 >> 3) * -0x3333333333333333) <
            local_98 + lVar23 * 0x3333333333333333) {
          uVar18 = *(ulong *)(lVar20 + uVar29 * 0x60 + 0x40);
          if (0x7ffffffffffffffe < uVar18) {
            uVar18 = 0x7fffffffffffffff;
          }
          if (uVar18 < local_98) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = *plVar26 - lVar19 >> 3;
          if ((((ulong)(lVar20 * -0x3333333333333333) < uVar18 >> 1) &&
              (uVar18 = lVar20 * -0x6666666666666666, uVar18 < local_98)) ||
             (local_98 = uVar18, uVar18 != 0)) {
            lVar20 = (**(code **)(*(long *)*puVar27 + 0x10))((long *)*puVar27,local_98 * 0x28,8);
            if (lVar20 == 0) {
              (**(code **)(*(long *)*puVar27 + 0xb8))();
            }
          }
          else {
            local_98 = 0;
            lVar20 = 0;
          }
          lVar19 = lVar20 + lVar23 * 8;
          lVar16 = lVar19;
          do {
            FUN_02b5f614(puVar27,lVar16);
            lVar16 = lVar16 + 0x28;
            bVar9 = lVar31 != -1;
            lVar31 = lVar31 + 1;
          } while (bVar9);
          lVar31 = *plVar32;
          lVar23 = *plVar12;
          if (lVar23 == lVar31) {
            lVar23 = lVar31;
          }
          else {
            lVar25 = 0;
            do {
              uVar30 = *puVar27;
              if (((*PTR_DAT_04379520 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528,
                 iVar10 != 0)) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
              lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar13 != 0) {
                if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar30;
                *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              }
              lVar3 = lVar23 + lVar25;
              lVar4 = lVar19 + lVar25;
              *(undefined8 *)(lVar4 + -0x28) = *(undefined8 *)(lVar3 + -0x28);
              *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)(lVar3 + -0x20);
              *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
              plVar14 = *(long **)(lVar3 + -0x10);
              *(long **)(lVar4 + -0x10) = plVar14;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x18))();
              }
              *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(lVar3 + -8);
              if (lVar13 != 0) {
                *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
              }
              lVar25 = lVar25 + -0x28;
            } while (lVar31 - lVar23 != lVar25);
            lVar19 = lVar19 + lVar25;
            lVar31 = *plVar12;
            lVar23 = *plVar32;
          }
          *plVar32 = lVar19;
          *plVar12 = lVar16;
          lVar16 = *plVar26;
          *plVar26 = lVar20 + local_98 * 0x28;
          while (lVar31 != lVar23) {
            plVar12 = (long *)(lVar31 + -0x10);
            lVar31 = lVar31 + -0x28;
            if ((long *)*plVar12 != (long *)0x0) {
              (**(code **)(*(long *)*plVar12 + 0x20))();
            }
          }
          if (lVar23 != 0) {
            plVar12 = (long *)*puVar27;
            uVar18 = (**(code **)(*plVar12 + 0xc0))(plVar12);
            if ((uVar18 & 1) != 0) {
              lVar20 = tpidr_el0;
              if (*(char *)(lVar20 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar20 + 0x38d488) = 1;
                *(undefined8 *)(lVar20 + 0x38d478) = 0;
                *(undefined8 *)(lVar20 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar20 + 0x38d480)) {
                FUN_02bcc824(plVar12,lVar23,lVar16 - lVar23,8);
                goto LAB_02b5d7bc;
              }
            }
            (**(code **)(*plVar12 + 0x18))(plVar12,lVar23,lVar16 - lVar23,8);
          }
        }
        else {
          do {
            FUN_02b5f614(puVar27);
            bVar9 = lVar31 != -1;
            lVar31 = lVar31 + 1;
            *plVar12 = *plVar12 + 0x28;
          } while (bVar9);
        }
      }
      else if (lVar31 != 0) {
        lVar19 = lVar19 + local_98 * 0x28;
        while (lVar19 != lVar16) {
          plVar26 = (long *)(lVar16 + -0x10);
          lVar16 = lVar16 + -0x28;
          if ((long *)*plVar26 != (long *)0x0) {
            (**(code **)(*(long *)*plVar26 + 0x20))();
          }
        }
        *plVar12 = lVar19;
      }
LAB_02b5d7bc:
      puVar5 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      puVar28 = puVar5 + 1;
      uVar18 = (ulong)*puVar5;
      if (uVar18 != 0) {
        lVar20 = 0;
        puVar5 = puVar28 + uVar18;
        do {
          piVar2 = (int *)((long)puVar28 + (ulong)*puVar28);
          lVar31 = *plVar32;
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
             (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar18 == 0)) {
            lVar16 = 0;
          }
          else {
            puVar6 = (uint *)((long)piVar2 + uVar18);
            lVar16 = (long)puVar6 + (ulong)*puVar6;
          }
          sVar11 = strlen((char *)(lVar16 + 4));
          bVar7 = *(byte *)(lVar16 + 4);
          puVar22 = &DAT_cbf29ce484222645;
          if (bVar7 != 0) {
            puVar22 = &DAT_cbf29ce484222645;
            pbVar24 = (byte *)(lVar16 + 5);
            do {
              puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (bVar7 != 0);
          }
          puVar27 = (undefined8 *)(lVar31 + lVar20 * 0x28);
          puVar27[2] = sVar11;
          *puVar27 = puVar22;
          puVar27[1] = (char *)(lVar16 + 4);
          plVar26 = puVar27 + 3;
          plVar12 = (long *)*plVar26;
          *plVar26 = 0;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x20))();
          }
          *plVar26 = 0;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
            uVar21 = 0;
          }
          else {
            uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
            uVar21 = 0;
            if (uVar18 != 0) {
              uVar21 = *(undefined4 *)((long)piVar2 + uVar18);
            }
          }
          lVar16 = lVar20 * 0x28;
          puVar28 = puVar28 + 1;
          lVar20 = lVar20 + 1;
          *(undefined4 *)(lVar31 + lVar16 + 0x20) = uVar21;
        } while (puVar28 != puVar5);
      }
      puVar15 = puVar15 + 1;
      uVar29 = uVar29 + 1;
    } while (puVar15 != puVar1);
  }
  return;
}


