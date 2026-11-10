/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d3fd8; name: FUN_029d3fd8
 */


bool FUN_029d3fd8(long param_1,long *param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  char cVar18;
  char cVar19;
  long lVar20;
  char cVar21;
  long lVar22;
  char cVar23;
  char cVar24;
  long lVar25;
  char cVar26;
  ulong uVar27;
  ulong uVar28;
  int local_100;
  undefined4 local_fc;
  undefined1 uStack_f8;
  char acStack_f7 [7];
  int local_f0 [2];
  undefined5 local_e8;
  undefined1 local_e3;
  int local_e0;
  undefined4 uStack_dc;
  undefined5 uStack_d8;
  undefined1 local_d3;
  int local_d0;
  undefined4 uStack_cc;
  undefined5 uStack_c8;
  undefined1 local_c3;
  int local_c0;
  undefined4 uStack_bc;
  undefined5 uStack_b8;
  undefined1 local_b3;
  int local_b0;
  undefined4 uStack_ac;
  undefined5 uStack_a8;
  undefined1 local_a3;
  undefined4 local_a0;
  char local_9c;
  char local_9b;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint uStack_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  byte local_7d;
  byte local_7c;
  undefined1 local_7b;
  byte local_7a;
  long local_78;
  long lStack_70;
  
  _uStack_f8 = 0;
  local_f0[0] = 0;
  acStack_f7[4] = 1;
  local_f0[1] = 0;
  local_e8 = 0;
  local_e3 = 1;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  local_d3 = 1;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  local_c3 = 1;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_b3 = 1;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_a3 = 1;
  local_100 = 0;
  local_fc = 0;
  lVar25 = param_2[1];
  uVar27 = (ulong)*(byte *)(lVar25 + 0x30);
  if (uVar27 != 0) {
    uVar28 = 0;
    uVar15 = 0;
    lVar17 = param_2[2];
    lVar20 = *param_2;
    uVar11 = uVar27;
    do {
      if ((uVar15 & 0xff) < (uint)uVar11) {
        lVar22 = *(long *)(lVar25 + uVar28 * 8);
      }
      else {
        lVar22 = 0;
      }
      local_98 = **(undefined4 **)(lVar20 + 0x58);
      local_94 = (uint)*(byte *)((long)*(undefined4 **)(lVar20 + 0x58) + 0x1036);
      uVar2 = *(ushort *)(lVar17 + 0x70);
      uVar11 = (ulong)uVar2;
      bVar4 = (uVar2 | 1) != 0x38b;
      uVar14 = 0;
      if (uVar11 < 0x38a && bVar4) {
        uVar14 = (uint)*(byte *)(lVar17 + 0x369);
      }
      uVar9 = (ulong)uVar14;
      if (uVar14 < 0x1c) {
        uVar16 = 0;
        if (uVar11 < 0x38a && bVar4) {
          uVar16 = uVar11;
        }
        lVar12 = *(&DAT_043f23a0)[uVar16 * 4];
        uVar11 = (&DAT_043f23a0)[uVar16 * 4][1] - lVar12 >> 3;
        if ((uVar11 <= uVar9) || (*(long *)(lVar12 + uVar9 * 8) == 0)) goto LAB_029d4108;
      }
      else {
LAB_029d4108:
        uVar9 = 0;
        lVar12 = *DAT_043f23a0;
        uVar11 = DAT_043f23a0[1] - lVar12 >> 3;
      }
      if (uVar11 <= uVar9) goto LAB_029d4b94;
      piVar10 = *(int **)(lVar12 + uVar9 * 8);
      if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x43) ||
         (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x21], uVar11 == 0)) {
        local_90 = 0;
      }
      else {
        local_90 = (uint)*(ushort *)((long)piVar10 + uVar11);
      }
      local_8c = FUN_029506a8(lVar17,0xf);
      local_88 = FUN_029506a8(lVar22,0xf);
      uStack_84 = (uint)*(byte *)(lVar22 + 0x36a);
      uVar11 = (ulong)*(byte *)(lVar17 + 0x26d);
      local_80 = 0;
      if (uVar11 != 0) {
        pcVar13 = (char *)(lVar17 + 0x26e);
        do {
          if (*pcVar13 == *(char *)(lVar22 + 0x7d)) {
            local_80 = 1;
            goto LAB_029d41ac;
          }
          uVar11 = uVar11 - 1;
          pcVar13 = pcVar13 + 1;
        } while (uVar11 != 0);
        local_80 = 0;
      }
LAB_029d41ac:
      local_7f = 1;
      local_7e = *(short *)(lVar22 + 0x76) == 0xe7;
      local_7d = FUN_029ce528(lVar20,*(undefined8 *)(lVar22 + 0x60));
      local_7d = local_7d & 1;
      bVar1 = (byte)((ushort)*(undefined2 *)(lVar22 + 0x87) >> 8);
      local_7c = bVar1 >> 2 & 1;
      local_7a = bVar1 >> 1 & 1;
      local_7b = *(undefined1 *)(*(long *)(lVar20 + 0x58) + 0x1029);
      plVar8 = *(long **)(*(long *)(lVar20 + 0x58) + 0x1020);
      local_78 = lVar22;
      lStack_70 = lVar17;
      if (plVar8 == (long *)0x0) {
        FUN_029d4b98(&local_98,&local_a0);
      }
      else {
        (**(code **)(*plVar8 + 0x40))(plVar8,&local_98,&local_a0);
      }
      cVar19 = local_9c;
      lVar22 = uVar28 * 0x10;
      uVar28 = uVar28 + 1;
      *(undefined4 *)(acStack_f7 + lVar22 + -9) = local_a0;
      cVar21 = local_9b;
      acStack_f7[lVar22 + 3] = cVar19;
      acStack_f7[lVar22 + 2] = cVar21;
      if (uVar28 == uVar27) break;
      uVar11 = (ulong)*(byte *)(lVar25 + 0x30);
      uVar15 = uVar15 + 1;
    } while( true );
  }
  if ((char)param_2[3] != '\0') {
    lVar25 = param_2[1];
    bVar1 = *(byte *)(lVar25 + 0x30);
    if ((ulong)bVar1 != 0) {
      lVar17 = param_2[2];
      uVar27 = 0;
      pcVar13 = acStack_f7;
      iVar7 = local_100;
      do {
        if (iVar7 != 0) {
          if (((uint)uVar27 & 0xff) < (uint)*(byte *)(lVar25 + 0x30)) {
            lVar20 = *(long *)(lVar25 + uVar27 * 8);
          }
          else {
            lVar20 = 0;
          }
          uVar2 = *(ushort *)(lVar17 + 0x70);
          uVar28 = (ulong)uVar2;
          bVar4 = uVar28 < 0x38a;
          bVar5 = (uVar2 | 1) != 0x38b;
          uVar15 = 0;
          if (bVar4 && bVar5) {
            uVar15 = (uint)*(byte *)(lVar17 + 0x369);
          }
          uVar11 = (ulong)uVar15;
          if (uVar15 < 0x1c) {
            uVar9 = 0;
            if (bVar4 && bVar5) {
              uVar9 = uVar28;
            }
            lVar22 = *(&DAT_043f23a0)[uVar9 * 4];
            uVar9 = (&DAT_043f23a0)[uVar9 * 4][1] - lVar22 >> 3;
            if ((uVar9 <= uVar11) || (*(long *)(lVar22 + uVar11 * 8) == 0)) goto LAB_029d4364;
            uVar16 = (ulong)uVar15;
            if (uVar9 <= uVar16) goto LAB_029d4b94;
          }
          else {
LAB_029d4364:
            uVar16 = 0;
            lVar22 = *DAT_043f23a0;
            if (DAT_043f23a0[1] - lVar22 >> 3 == 0) {
LAB_029d4b94:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
          }
          piVar10 = *(int **)(lVar22 + uVar16 * 8);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x45) ||
             (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x22], uVar9 == 0)) {
            cVar19 = '\0';
            if (uVar15 < 0x1c) goto LAB_029d43bc;
LAB_029d4400:
            uVar16 = 0;
            lVar22 = *DAT_043f23a0;
            if (DAT_043f23a0[1] - lVar22 >> 3 == 0) goto LAB_029d4b94;
          }
          else {
            cVar19 = *(char *)((long)piVar10 + uVar9);
            if (0x1b < uVar15) goto LAB_029d4400;
LAB_029d43bc:
            uVar9 = 0;
            if (bVar4 && bVar5) {
              uVar9 = uVar28;
            }
            lVar22 = *(&DAT_043f23a0)[uVar9 * 4];
            uVar9 = (&DAT_043f23a0)[uVar9 * 4][1] - lVar22 >> 3;
            if ((uVar9 <= uVar11) || (*(long *)(lVar22 + uVar11 * 8) == 0)) goto LAB_029d4400;
            uVar16 = (ulong)uVar15;
            if (uVar9 <= uVar16) goto LAB_029d4b94;
          }
          piVar10 = *(int **)(lVar22 + uVar16 * 8);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x47) ||
             (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x23], uVar9 == 0)) {
            cVar21 = '\0';
            if (uVar15 < 0x1c) goto LAB_029d4458;
LAB_029d449c:
            uVar16 = 0;
            lVar22 = *DAT_043f23a0;
            if (DAT_043f23a0[1] - lVar22 >> 3 == 0) goto LAB_029d4b94;
          }
          else {
            cVar21 = *(char *)((long)piVar10 + uVar9);
            if (0x1b < uVar15) goto LAB_029d449c;
LAB_029d4458:
            uVar9 = 0;
            if (bVar4 && bVar5) {
              uVar9 = uVar28;
            }
            lVar22 = *(&DAT_043f23a0)[uVar9 * 4];
            uVar9 = (&DAT_043f23a0)[uVar9 * 4][1] - lVar22 >> 3;
            if ((uVar9 <= uVar11) || (*(long *)(lVar22 + uVar11 * 8) == 0)) goto LAB_029d449c;
            uVar16 = (ulong)uVar15;
            if (uVar9 <= uVar16) goto LAB_029d4b94;
          }
          piVar10 = *(int **)(lVar22 + uVar16 * 8);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x49) ||
             (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x24], uVar9 == 0)) {
            cVar24 = '\0';
            if (uVar15 < 0x1c) goto LAB_029d44f4;
LAB_029d4538:
            uVar16 = 0;
            lVar22 = *DAT_043f23a0;
            if (DAT_043f23a0[1] - lVar22 >> 3 == 0) goto LAB_029d4b94;
          }
          else {
            cVar24 = *(char *)((long)piVar10 + uVar9);
            if (0x1b < uVar15) goto LAB_029d4538;
LAB_029d44f4:
            uVar9 = 0;
            if (bVar4 && bVar5) {
              uVar9 = uVar28;
            }
            lVar22 = *(&DAT_043f23a0)[uVar9 * 4];
            uVar9 = (&DAT_043f23a0)[uVar9 * 4][1] - lVar22 >> 3;
            if ((uVar9 <= uVar11) || (*(long *)(lVar22 + uVar11 * 8) == 0)) goto LAB_029d4538;
            uVar16 = (ulong)uVar15;
            if (uVar9 <= uVar16) goto LAB_029d4b94;
          }
          piVar10 = *(int **)(lVar22 + uVar16 * 8);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x4f) ||
             (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x27], uVar9 == 0)) {
            cVar26 = '\0';
            if (uVar15 < 0x1c) goto LAB_029d4590;
LAB_029d45d4:
            uVar16 = 0;
            lVar22 = *DAT_043f23a0;
            if (DAT_043f23a0[1] - lVar22 >> 3 == 0) goto LAB_029d4b94;
          }
          else {
            cVar26 = *(char *)((long)piVar10 + uVar9);
            if (0x1b < uVar15) goto LAB_029d45d4;
LAB_029d4590:
            uVar9 = 0;
            if (bVar4 && bVar5) {
              uVar9 = uVar28;
            }
            lVar22 = *(&DAT_043f23a0)[uVar9 * 4];
            uVar9 = (&DAT_043f23a0)[uVar9 * 4][1] - lVar22 >> 3;
            if ((uVar9 <= uVar11) || (*(long *)(lVar22 + uVar11 * 8) == 0)) goto LAB_029d45d4;
            uVar16 = (ulong)uVar15;
            if (uVar9 <= uVar16) goto LAB_029d4b94;
          }
          piVar10 = *(int **)(lVar22 + uVar16 * 8);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x4b) ||
             (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x25], uVar9 == 0)) {
            cVar18 = '\0';
            if (uVar15 < 0x1c) goto LAB_029d462c;
LAB_029d4660:
            uVar11 = 0;
            lVar22 = *DAT_043f23a0;
            uVar28 = DAT_043f23a0[1] - lVar22 >> 3;
          }
          else {
            cVar18 = *(char *)((long)piVar10 + uVar9);
            if (0x1b < uVar15) goto LAB_029d4660;
LAB_029d462c:
            uVar9 = 0;
            if (bVar4 && bVar5) {
              uVar9 = uVar28;
            }
            lVar22 = *(&DAT_043f23a0)[uVar9 * 4];
            uVar28 = (&DAT_043f23a0)[uVar9 * 4][1] - lVar22 >> 3;
            if ((uVar28 <= uVar11) || (*(long *)(lVar22 + uVar11 * 8) == 0)) goto LAB_029d4660;
          }
          if (uVar28 <= uVar11) goto LAB_029d4b94;
          piVar10 = *(int **)(lVar22 + uVar11 * 8);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x4d) ||
             (uVar28 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x26], uVar28 == 0)) {
            cVar23 = '\0';
          }
          else {
            cVar23 = *(char *)((long)piVar10 + uVar28);
          }
          sVar3 = *(short *)(lVar20 + 0x76);
          if (sVar3 == 0x126) {
            if (((*PTR_DAT_043795f8 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_043795f8);
            }
            *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
            FUN_02c4fb44(&local_98,0x126);
            cVar6 = FUN_02c4fc60(&local_98,6);
            sVar3 = *(short *)(lVar20 + 0x76);
            cVar19 = cVar19 + cVar6;
LAB_029d4728:
            if (sVar3 == 0x121) {
              if (((*PTR_DAT_043795f8 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_043795f8);
              }
              *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
              FUN_02c4fb44(&local_98,0x121);
              cVar6 = FUN_02c4fc60(&local_98,6);
              sVar3 = *(short *)(lVar20 + 0x76);
              cVar21 = cVar21 + cVar6;
            }
            if (sVar3 == 0x122) {
              if (((*PTR_DAT_043795f8 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_043795f8);
              }
              *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
              FUN_02c4fb44(&local_98,0x122);
              cVar6 = FUN_02c4fc60(&local_98,6);
              sVar3 = *(short *)(lVar20 + 0x76);
              cVar24 = cVar24 + cVar6;
            }
            if (sVar3 == 0x125) {
              if (((*PTR_DAT_043795f8 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_043795f8);
              }
              *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
              FUN_02c4fb44(&local_98,0x125);
              cVar6 = FUN_02c4fc60(&local_98,6);
              sVar3 = *(short *)(lVar20 + 0x76);
              cVar26 = cVar26 + cVar6;
            }
            if (sVar3 == 0x123) {
              if (((*PTR_DAT_043795f8 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_043795f8);
              }
              *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
              FUN_02c4fb44(&local_98,0x123);
              cVar6 = FUN_02c4fc60(&local_98,6);
              sVar3 = *(short *)(lVar20 + 0x76);
              cVar18 = cVar18 + cVar6;
            }
            if (sVar3 == 0x124) {
              if (((*PTR_DAT_043795f8 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_043795f8);
              }
              *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
              FUN_02c4fb44(&local_98,0x124);
              cVar6 = FUN_02c4fc60(&local_98,6);
              cVar23 = cVar23 + cVar6;
              cVar6 = *(char *)(lVar20 + 0x2f2);
            }
            else {
              cVar6 = *(char *)(lVar20 + 0x2f2);
            }
          }
          else {
            if (sVar3 != 0xd7) goto LAB_029d4728;
            cVar19 = cVar19 << 1;
            cVar21 = cVar21 << 1;
            cVar24 = cVar24 << 1;
            cVar26 = cVar26 << 1;
            cVar18 = cVar18 << 1;
            cVar23 = cVar23 << 1;
            cVar6 = *(char *)(lVar20 + 0x2f2);
          }
          if (cVar6 != '\0') {
            cVar19 = cVar19 << 1;
            cVar21 = cVar21 << 1;
            cVar24 = cVar24 << 1;
            cVar26 = cVar26 << 1;
            cVar18 = cVar18 << 1;
            cVar23 = cVar23 << 1;
          }
          pcVar13[-5] = cVar19;
          pcVar13[-4] = cVar21;
          pcVar13[-3] = cVar24;
          pcVar13[-2] = cVar26;
          pcVar13[-1] = cVar18;
          *pcVar13 = cVar23;
        }
        uVar27 = uVar27 + 1;
        if (bVar1 == uVar27) break;
        iVar7 = *(int *)(pcVar13 + 7);
        pcVar13 = pcVar13 + 0x10;
      } while( true );
    }
  }
  lVar25 = 0;
  do {
    piVar10 = (int *)(param_1 + lVar25);
    *piVar10 = *piVar10 + *(int *)(acStack_f7 + lVar25 + -9);
    *(char *)(piVar10 + 1) = (char)piVar10[1] + acStack_f7[lVar25 + -5];
    *(char *)((long)piVar10 + 5) = *(char *)((long)piVar10 + 5) + acStack_f7[lVar25 + -4];
    *(char *)((long)piVar10 + 6) = *(char *)((long)piVar10 + 6) + acStack_f7[lVar25 + -3];
    *(char *)((long)piVar10 + 7) = *(char *)((long)piVar10 + 7) + acStack_f7[lVar25 + -2];
    *(char *)(piVar10 + 2) = (char)piVar10[2] + acStack_f7[lVar25 + -1];
    *(char *)((long)piVar10 + 9) = *(char *)((long)piVar10 + 9) + acStack_f7[lVar25];
    *(char *)((long)piVar10 + 10) = *(char *)((long)piVar10 + 10) + acStack_f7[lVar25 + 1];
    if (*(char *)((long)piVar10 + 0xb) == '\0') {
      *(char *)((long)piVar10 + 0xb) = acStack_f7[lVar25 + 2];
      cVar19 = acStack_f7[lVar25 + 3];
    }
    else {
      cVar19 = acStack_f7[lVar25 + 3];
    }
    if (cVar19 == '\0') {
      *(undefined1 *)((long)piVar10 + 0xd) = 0;
    }
    lVar25 = lVar25 + 0x10;
  } while (lVar25 != 0x60);
  if ((((local_100 == 0) && (local_f0[0] == 0)) && (local_e0 == 0)) &&
     ((local_d0 == 0 && (local_c0 == 0)))) {
    bVar4 = local_b0 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


