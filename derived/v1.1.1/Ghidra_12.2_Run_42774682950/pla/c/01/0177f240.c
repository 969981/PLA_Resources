/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177f240; name: FUN_0177f240
 */


void FUN_0177f240(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  ushort uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  long local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar13 = *(uint **)(*(long *)(param_2 + 8) + 0x250);
  piVar1 = (int *)((long)puVar13 + (ulong)*puVar13);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar13 = puVar2 + 1;
  uVar14 = (ulong)*puVar2;
  if (uVar14 != 0) {
    puVar2 = puVar13 + uVar14;
    do {
      piVar1 = (int *)((long)puVar13 + (ulong)*puVar13);
      local_98 = *(long **)(param_1 + 8);
      local_a0 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_80 = 0;
      uVar25 = 0;
      local_90 = 0x7ffffffffffffff;
      uStack_88 = 0;
      if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
        uVar25 = 0;
        if (uVar14 != 0) {
          uVar25 = *(undefined4 *)((long)piVar1 + uVar14);
        }
      }
      uVar26 = 0;
      if (8 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
        uVar26 = 0;
        if (uVar14 != 0) {
          uVar26 = *(undefined4 *)((long)piVar1 + uVar14);
        }
      }
      _local_c0 = CONCAT44(uVar26,uVar25);
      uVar25 = 0;
      if (10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
        uVar25 = 0;
        if (uVar14 != 0) {
          uVar25 = *(undefined4 *)((long)piVar1 + uVar14);
        }
      }
      uVar26 = 0;
      if (0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
        uVar26 = 0;
        if (uVar14 != 0) {
          uVar26 = *(undefined4 *)((long)piVar1 + uVar14);
        }
      }
      _local_b8 = CONCAT44(uVar26,uVar25);
      lVar15 = (long)*piVar1;
      puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0xe - lVar15)));
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      puVar22 = puVar3 + 1;
      uVar28 = *puVar3;
      lVar8 = tpidr_el0;
      if (uVar28 != 0) {
        puVar3 = puVar22 + uVar28;
        lVar15 = 0;
        do {
          plVar9 = local_98;
          piVar4 = (int *)((long)puVar22 + (ulong)*puVar22);
          puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
          piVar6 = (int *)((long)puVar5 + (ulong)*puVar5);
          puVar18 = (ushort *)((long)piVar6 - (long)*piVar6);
          uVar7 = *puVar18;
          uVar26 = 0;
          uVar25 = 0;
          uVar28 = 0;
          if (4 < uVar7) {
            uVar25 = 0;
            if ((ulong)puVar18[2] != 0) {
              uVar25 = *(undefined4 *)((long)piVar6 + (ulong)puVar18[2]);
            }
            if (uVar7 < 7) {
              uVar26 = 0;
            }
            else {
              uVar26 = 0;
              if ((ulong)puVar18[3] != 0) {
                uVar26 = *(undefined4 *)((long)piVar6 + (ulong)puVar18[3]);
              }
              if ((8 < uVar7) && ((ulong)puVar18[4] != 0)) {
                uVar28 = *(uint *)((long)piVar6 + (ulong)puVar18[4]);
                goto LAB_0177f4a4;
              }
            }
            uVar28 = 0;
          }
LAB_0177f4a4:
          uVar27 = 0;
          local_e0 = CONCAT44(uVar26,uVar25);
          uVar25 = 0;
          uStack_d8 = (ulong)uVar28;
          uStack_c8 = 0;
          puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (6 - (long)*piVar4)));
          piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
          puVar18 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar7 = *puVar18;
          if (4 < uVar7) {
            uVar27 = 0;
            if ((ulong)puVar18[2] != 0) {
              uVar27 = *(undefined4 *)((long)piVar4 + (ulong)puVar18[2]);
            }
            if (uVar7 < 7) {
              uVar25 = 0;
            }
            else {
              uVar25 = 0;
              if ((ulong)puVar18[3] != 0) {
                uVar25 = *(undefined4 *)((long)piVar4 + (ulong)puVar18[3]);
              }
              if ((8 < uVar7) && ((ulong)puVar18[4] != 0)) {
                uStack_c8 = (ulong)*(uint *)((long)piVar4 + (ulong)puVar18[4]);
                goto LAB_0177f52c;
              }
            }
            uStack_c8 = 0;
          }
LAB_0177f52c:
          local_d0 = CONCAT44(uVar25,uVar27);
          if (lVar15 == local_a0) {
            uVar19 = local_a0 - local_b0 >> 5;
            uVar14 = uVar19 + 1;
            uVar24 = local_90;
            if (0x7ffffffffffffffe < local_90) {
              uVar24 = 0x7fffffffffffffff;
            }
            if (uVar24 < uVar14) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar19 < uVar24 >> 1) {
              uVar17 = local_a0 - local_b0 >> 4;
              uVar24 = uVar14;
              if (uVar14 <= uVar17) {
                uVar24 = uVar17;
              }
            }
            if (uVar24 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = (**(code **)(*local_98 + 0x10))(local_98,uVar24 << 5,0x10);
              if (lVar11 == 0) {
                (**(code **)(*plVar9 + 0xb8))(plVar9);
              }
            }
            lVar15 = lVar11 + uVar19 * 0x20;
            FUN_017858d8(&local_98,lVar15,&local_e0);
            lVar21 = local_b0;
            if (local_a8 == local_b0) {
              local_b0 = lVar15;
            }
            else {
              lVar20 = local_a8;
              lVar23 = lVar15;
              do {
                plVar9 = local_98;
                if (((*PTR_DAT_04379520 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), iVar10 != 0)) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
                lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                if (lVar12 == 0) {
                  uVar16 = *(undefined8 *)(lVar20 + -8);
                  *(undefined8 *)(lVar23 + -0x18) = *(undefined8 *)(lVar20 + -0x18);
                  *(undefined8 *)(lVar23 + -8) = uVar16;
                  uVar16 = *(undefined8 *)(lVar20 + -0x20);
                  *(undefined8 *)(lVar23 + -0x10) = *(undefined8 *)(lVar20 + -0x10);
                  *(undefined8 *)(lVar23 + -0x20) = uVar16;
                }
                else {
                  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar9;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                  uVar16 = *(undefined8 *)(lVar20 + -8);
                  *(undefined8 *)(lVar23 + -0x18) = *(undefined8 *)(lVar20 + -0x18);
                  *(undefined8 *)(lVar23 + -8) = uVar16;
                  uVar16 = *(undefined8 *)(lVar20 + -0x20);
                  *(undefined8 *)(lVar23 + -0x10) = *(undefined8 *)(lVar20 + -0x10);
                  *(undefined8 *)(lVar23 + -0x20) = uVar16;
                  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                }
                lVar20 = lVar20 + -0x20;
                lVar23 = lVar23 + -0x20;
              } while (lVar21 != lVar20);
              lVar21 = local_b0;
              local_b0 = lVar23;
            }
            plVar9 = local_98;
            lVar11 = lVar11 + uVar24 * 0x20;
            lVar15 = lVar15 + 0x20;
            local_a8 = lVar15;
            if (lVar21 != 0) {
              lVar20 = local_a0 - lVar21;
              local_a0 = lVar11;
              uVar14 = (**(code **)(*local_98 + 0xc0))(local_98);
              if ((uVar14 & 1) != 0) {
                if (*(char *)(lVar8 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar8 + 0x38d488) = 1;
                  *(undefined8 *)(lVar8 + 0x38d478) = 0;
                  *(undefined8 *)(lVar8 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar8 + 0x38d480)) {
                  FUN_02bcc824(plVar9,lVar21,lVar20,0x10);
                  lVar11 = local_a0;
                  goto LAB_0177f410;
                }
              }
              (**(code **)(*plVar9 + 0x18))(plVar9,lVar21,lVar20,0x10);
              lVar11 = local_a0;
            }
          }
          else {
            FUN_017858d8(&local_98,lVar15,&local_e0);
            lVar15 = local_a8 + 0x20;
            local_a8 = lVar15;
            lVar11 = local_a0;
          }
LAB_0177f410:
          local_a0 = lVar11;
          puVar22 = puVar22 + 1;
        } while (puVar22 != puVar3);
        lVar15 = (long)*piVar1;
      }
      if (*(ushort *)((long)piVar1 - lVar15) < 5) {
        local_e0 = 0;
      }
      else {
        uVar14 = (ulong)((ushort *)((long)piVar1 - lVar15))[2];
        local_e0 = 0;
        if (uVar14 != 0) {
          local_e0 = *(undefined8 *)((long)piVar1 + uVar14);
        }
      }
      FUN_017859e0(param_1 + 0xd0,&local_e0,&local_c0);
      plVar9 = local_98;
      lVar15 = local_b0;
      if (local_b0 != 0) {
        local_a8 = local_b0;
        lVar11 = local_a0 - local_b0;
        uVar14 = (**(code **)(*local_98 + 0xc0))(local_98);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar8 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar8 + 0x38d488) = 1;
            *(undefined8 *)(lVar8 + 0x38d478) = 0;
            *(undefined8 *)(lVar8 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar8 + 0x38d480)) {
            FUN_02bcc824(plVar9,lVar15,lVar11,0x10);
            goto LAB_0177f7dc;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar15,lVar11,0x10);
      }
LAB_0177f7dc:
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar2);
  }
  return;
}


