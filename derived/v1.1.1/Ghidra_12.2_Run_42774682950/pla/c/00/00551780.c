/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00551780; name: FUN_00551780
 */


bool FUN_00551780(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  int *piVar8;
  void *__s;
  void *__dest;
  ostream *this;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint *puVar20;
  long lVar21;
  size_t __n;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  int local_1ec;
  undefined1 local_1d8 [8];
  ostream aoStack_1d0 [264];
  uint local_c8 [2];
  long local_c0;
  long local_b0;
  uint local_a8;
  uint local_a0 [2];
  long local_98;
  int *local_88;
  uint local_80;
  void *local_78;
  void *local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    puVar6 = PTR_FUN_04373078;
    if (*(int *)(param_1 + 8) != 0) {
      lVar15 = (long)*(int *)(param_1 + 0x34) + 2;
      iVar25 = (int)lVar15;
      if (iVar25 < 65000) {
        iVar3 = *(int *)(param_1 + 0x14) * 4 + 4;
        lVar12 = *(long *)(param_1 + 0x80);
        lVar21 = (long)iVar3;
        lVar16 = lVar12 + 3;
        if (-1 < lVar12) {
          lVar16 = lVar12;
        }
        lVar12 = 0;
        if (lVar21 != 0) {
          lVar12 = (lVar16 >> 2) / lVar21;
        }
        if (lVar15 <= lVar12) {
          uVar9 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) + 1
          ;
          piVar8 = (int *)FUN_002e2e80(PTR_FUN_04373078,
                                       -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar9 << 3);
          iVar23 = *(int *)(param_1 + 0x10);
          __s = (void *)FUN_002e2e80(puVar6,(long)iVar23 << 2);
          memset(__s,0xff,(long)iVar23 << 2);
          local_70 = (void *)0x0;
          uStack_68 = 0;
          local_78 = (void *)0x0;
                    /* try { // try from 0055188c to 00551897 has its CatchHandler @ 005521ec */
          FUN_00552270(local_a0,iVar23);
                    /* try { // try from 00551898 to 005518a3 has its CatchHandler @ 005521d4 */
          FUN_00552270(local_c8,iVar23);
          uVar9 = *(uint *)(param_1 + 8);
          if (uVar9 != 0) {
            if ((int)uVar9 < 0) {
                    /* try { // try from 0055216c to 005521ab has its CatchHandler @ 005521c8 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,
                            "contains");
            }
            uVar13 = 0;
            if (local_88 != (int *)0x0) {
              uVar13 = local_80;
            }
            if ((int)uVar13 <= (int)uVar9) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde
                            ,"contains");
            }
            if ((((local_80 <= uVar9) || (local_88 == (int *)0x0)) ||
                (uVar13 = *(uint *)(local_98 + (long)(int)uVar9 * 4), local_a0[0] <= uVar13)) ||
               (local_88[(int)uVar13] != uVar9)) {
                    /* try { // try from 005518f8 to 00551903 has its CatchHandler @ 005521c8 */
              FUN_005527e0(local_a0,1);
              uVar9 = *(uint *)(param_1 + 8);
            }
          }
          *(undefined4 *)((long)__s + (long)(int)uVar9 * 4) = 0;
          local_1d8[0] = 0;
                    /* try { // try from 00551918 to 00551927 has its CatchHandler @ 005521d0 */
          FUN_00552374(&local_78,local_70,lVar21,local_1d8);
          if (local_a0[0] == 0) {
            local_1ec = 1;
LAB_00551ec4:
            __n = (size_t)(local_1ec * iVar3);
            *(size_t *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) - __n;
            __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,__n);
            lVar15 = *(long *)(param_1 + 0x70);
            *(void **)(param_1 + 0x70) = __dest;
            if (lVar15 != 0) {
              FUN_002e2ea0(PTR_LAB_04373088);
              __dest = *(void **)(param_1 + 0x70);
            }
            *(int *)(param_1 + 0x78) = local_1ec * iVar3;
            memmove(__dest,local_78,__n);
            bVar7 = true;
LAB_00551f18:
            FUN_00552710(local_c8);
            FUN_00552710(local_a0);
            if (local_78 != (void *)0x0) {
              local_70 = local_78;
              FUN_002e2ea0(PTR_LAB_04373088);
            }
            if (__s != (void *)0x0) {
              FUN_002e2ea0(PTR_LAB_04373088);
            }
            if (piVar8 == (int *)0x0) {
              return bVar7;
            }
            FUN_002e2ea0(PTR_LAB_04373088);
            return bVar7;
          }
          local_1ec = 1;
          piVar18 = local_88;
LAB_0055194c:
          iVar23 = *piVar18;
          lVar15 = (long)*(int *)((long)__s + (long)iVar23 * 4) * (long)iVar3;
          puVar20 = (uint *)((long)local_78 + lVar15);
          if (0 < *(int *)(param_1 + 0x14)) {
            lVar16 = 0;
            do {
              puVar20[lVar16 + 1] = 0x30;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)(param_1 + 0x14));
          }
          bVar7 = false;
          *puVar20 = 0x30;
          local_c8[0] = 0;
          uVar24 = 1;
          *piVar8 = iVar23;
          piVar8[1] = 0;
LAB_005519c0:
          uVar24 = (long)(int)uVar24 - 1;
          uVar9 = (piVar8 + uVar24 * 2)[1];
          uVar13 = piVar8[uVar24 * 2];
LAB_005519d4:
          uVar22 = uVar13;
          lVar16 = *(long *)(param_1 + 0x60);
          puVar2 = (uint *)(lVar16 + (long)(int)uVar22 * 8);
          uVar11 = *puVar2;
          if (6 < (uVar11 & 7) - 1) {
                    /* try { // try from 00551f8c to 00551fa3 has its CatchHandler @ 005521b0 */
            FUN_0054f038(local_1d8,"external/com_github_google_re2/re2/onepass.cc",0x1bf);
                    /* try { // try from 00551fa8 to 00551fc3 has its CatchHandler @ 005521b8 */
            this = std::__put_character_sequence<char,std::char_traits<char>>
                             (aoStack_1d0,"unhandled opcode: ",0x12);
            std::ostream::operator<<(this,*puVar2 & 7);
                    /* WARNING: Subroutine does not return */
            FUN_005503fc(local_1d8);
          }
          lVar12 = (long)(int)uVar22;
          iVar23 = (int)uVar24;
          switch(uVar11 & 7) {
          case 1:
            if ((uVar11 >> 3 & 1) != 0) {
                    /* try { // try from 0055208c to 0055216b has its CatchHandler @ 005521b4 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("!ip->last()","external/com_github_google_re2/re2/onepass.cc",0x1c5,
                            "IsOnePass");
            }
            uVar11 = uVar22 + 1;
            uVar13 = 0;
            if (uVar22 != 0xffffffff) {
              if ((int)uVar22 < -1) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,
                              "contains");
              }
              uVar13 = 0;
              if (local_b0 != 0) {
                uVar13 = local_a8;
              }
              if ((int)uVar13 <= (int)uVar11) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",
                              0xde,"contains");
              }
              if (((uVar11 < local_a8) && (local_b0 != 0)) &&
                 ((uVar13 = *(uint *)(local_c0 + (long)(int)uVar11 * 4), uVar13 < local_c8[0] &&
                  (*(uint *)(local_b0 + (long)(int)uVar13 * 4) == uVar11)))) break;
              FUN_005527e0(local_c8,1,uVar11);
              uVar13 = uVar11;
            }
            goto LAB_005519d4;
          case 2:
            uVar13 = uVar11 >> 4;
            uVar10 = (ulong)uVar13;
            iVar14 = *(int *)((long)__s + uVar10 * 4);
            if (iVar14 == -1) {
              if (iVar25 <= local_1ec) break;
              if (uVar13 == 0) {
                uVar10 = 0;
              }
              else {
                if ((local_88 == (int *)0x0) || ((int)local_80 <= (int)uVar13)) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",
                                0xde,"contains");
                }
                if (((local_80 <= uVar13) ||
                    (uVar11 = *(uint *)(local_98 + uVar10 * 4), local_a0[0] <= uVar11)) ||
                   (local_88[(int)uVar11] != uVar13)) {
                    /* try { // try from 00551b14 to 00551b1f has its CatchHandler @ 005521cc */
                  FUN_005527e0(local_a0,1);
                  uVar10 = (ulong)(*puVar2 >> 4);
                }
              }
              *(int *)((long)__s + uVar10 * 4) = local_1ec;
              local_1d8[0] = 0;
                    /* try { // try from 00551ca8 to 00551cb7 has its CatchHandler @ 005521c4 */
              FUN_00552374(&local_78,local_70,lVar21,local_1d8);
              puVar20 = (uint *)((long)local_78 + lVar15);
              uVar11 = *puVar2;
              iVar14 = local_1ec;
              local_1ec = local_1ec + 1;
            }
            if ((uVar11 & 7) != 2) {
                    /* try { // try from 0055202c to 0055204b has its CatchHandler @ 005521c0 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("(opcode()) == (kInstByteRange)",
                            "external/com_github_google_re2\\re2/prog.h",0x57,"lo");
            }
            lVar16 = lVar16 + lVar12 * 8;
            bVar4 = *(byte *)(lVar16 + 4);
            uVar19 = (uint)bVar4;
            uVar17 = uVar9 | iVar14 << 0x10;
            uVar13 = uVar17 | 0x40;
            if (!bVar7) {
              uVar13 = uVar17;
            }
            bVar5 = *(byte *)(lVar16 + 5);
            if (bVar4 <= bVar5) {
              do {
                lVar12 = (long)(int)uVar19;
                bVar4 = *(byte *)(param_1 + lVar12 + 0x98);
                do {
                  uVar19 = uVar19 + 1;
                  if (0xfe < lVar12) break;
                  pbVar1 = (byte *)(param_1 + 0x99 + lVar12);
                  lVar12 = lVar12 + 1;
                } while (*pbVar1 == bVar4);
                uVar17 = puVar20[(ulong)bVar4 + 1];
                if ((~uVar17 & 0x30) == 0) {
                  puVar20[(ulong)bVar4 + 1] = uVar13;
                  uVar11 = *puVar2;
                }
                else if (uVar17 != uVar13) goto LAB_00551eb8;
                if ((uVar11 & 7) != 2) {
                    /* try { // try from 00551f6c to 00551f8b has its CatchHandler @ 005521c0 */
                    /* WARNING: Subroutine does not return */
                  __assert_fail("(opcode()) == (kInstByteRange)",
                                "external/com_github_google_re2\\re2/prog.h",0x58,"hi");
                }
                bVar5 = *(byte *)(lVar16 + 5);
              } while ((int)uVar19 <= (int)(uint)bVar5);
            }
            if ((uVar11 & 7) != 2) {
                    /* try { // try from 00551fec to 0055202b has its CatchHandler @ 005521ac */
                    /* WARNING: Subroutine does not return */
              __assert_fail("(opcode()) == (kInstByteRange)",
                            "external/com_github_google_re2\\re2/prog.h",0x59,"foldcase");
            }
            if ((*(byte *)(lVar16 + 6) & 1) != 0) {
              bVar4 = *(byte *)(lVar16 + 4);
              uVar17 = (uint)bVar4;
              if (bVar4 < 0x62) {
                uVar17 = 0x61;
              }
              uVar19 = (uint)bVar5;
              iVar14 = uVar17 - 0x20;
              if (0x79 < uVar19) {
                uVar19 = 0x7a;
              }
              if (iVar14 <= (int)(uVar19 - 0x20)) {
                do {
                  bVar4 = *(byte *)(param_1 + iVar14 + 0x98);
                  lVar16 = (long)iVar14;
                  do {
                    lVar12 = lVar16;
                    if (0xfe < lVar12) break;
                    lVar16 = lVar12 + 1;
                  } while (*(byte *)(param_1 + 0x99 + lVar12) == bVar4);
                  uVar11 = puVar20[(ulong)bVar4 + 1];
                  if ((~uVar11 & 0x30) == 0) {
                    puVar20[(ulong)bVar4 + 1] = uVar13;
                  }
                  else if (uVar11 != uVar13) goto LAB_00551eb8;
                  iVar14 = (int)lVar12 + 1;
                } while ((int)lVar12 < (int)(uVar19 - 0x20));
                uVar11 = *puVar2;
              }
            }
            if ((uVar11 >> 3 & 1) != 0) goto switchD_00551a08_caseD_7;
            uVar11 = uVar22 + 1;
            uVar13 = 0;
            if (0xfffffffe < uVar22) goto LAB_005519d4;
            if ((int)uVar22 < -1) {
                    /* try { // try from 0055204c to 0055208b has its CatchHandler @ 005521ac */
                    /* WARNING: Subroutine does not return */
              __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,
                            "contains");
            }
            uVar13 = 0;
            if (local_b0 != 0) {
              uVar13 = local_a8;
            }
            if ((int)uVar13 <= (int)uVar11) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde
                            ,"contains");
            }
            if ((((local_a8 <= uVar11) || (local_b0 == 0)) ||
                (uVar13 = *(uint *)(local_c0 + (long)(int)uVar11 * 4), local_c8[0] <= uVar13)) ||
               (*(uint *)(local_b0 + (long)(int)uVar13 * 4) != uVar11)) {
                    /* try { // try from 00551e78 to 00551e87 has its CatchHandler @ 005521cc */
              FUN_005527e0(local_c8,1,uVar11);
              uVar13 = uVar11;
              goto LAB_005519d4;
            }
            break;
          default:
            if ((uVar11 >> 3 & 1) == 0) {
              uVar13 = uVar22 + 1;
              if (uVar22 != 0xffffffff) {
                if ((int)uVar22 < -1) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,
                                "contains");
                }
                uVar11 = 0;
                if (local_b0 != 0) {
                  uVar11 = local_a8;
                }
                if ((int)uVar11 <= (int)uVar13) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",
                                0xde,"contains");
                }
                if (((uVar13 < local_a8) && (local_b0 != 0)) &&
                   ((uVar11 = *(uint *)(local_c0 + (long)(int)uVar13 * 4), uVar11 < local_c8[0] &&
                    (*(uint *)(local_b0 + (long)(int)uVar11 * 4) == uVar13)))) break;
                    /* try { // try from 00551a64 to 00551a73 has its CatchHandler @ 005521fc */
                FUN_005527e0(local_c8,1,uVar13);
                uVar11 = *puVar2;
              }
              uVar24 = (ulong)(iVar23 + 1);
              piVar8[(long)iVar23 * 2] = uVar13;
              (piVar8 + (long)iVar23 * 2)[1] = uVar9;
            }
            if ((uVar11 & 7) == 4) {
              uVar13 = *(uint *)(lVar16 + lVar12 * 8 + 4);
LAB_00551c30:
              uVar9 = uVar13 | uVar9;
            }
            else if (((uVar11 & 7) == 3) &&
                    (uVar13 = *(uint *)(lVar16 + lVar12 * 8 + 4), (int)uVar13 < 10)) {
              uVar13 = 0x20 << (ulong)(uVar13 & 0x1f);
              goto LAB_00551c30;
            }
            uVar11 = uVar11 >> 4;
            uVar13 = 0;
            if (uVar11 == 0) goto LAB_005519d4;
            if ((local_b0 == 0) || ((int)local_a8 <= (int)uVar11)) {
                    /* try { // try from 00551fcc to 00551feb has its CatchHandler @ 005521b4 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde
                            ,"contains");
            }
            if (((local_a8 <= uVar11) ||
                (uVar13 = *(uint *)(local_c0 + (ulong)uVar11 * 4), local_c8[0] <= uVar13)) ||
               (*(uint *)(local_b0 + (long)(int)uVar13 * 4) != uVar11)) {
              FUN_005527e0(local_c8,1);
              uVar13 = *puVar2 >> 4;
              goto LAB_005519d4;
            }
            break;
          case 5:
            goto switchD_00551a08_caseD_5;
          case 7:
            goto switchD_00551a08_caseD_7;
          }
          goto LAB_00551eb8;
        }
      }
    }
    bVar7 = false;
  }
  else {
    bVar7 = *(long *)(param_1 + 0x70) != 0;
  }
  return bVar7;
switchD_00551a08_caseD_5:
  if (bVar7) goto LAB_00551eb8;
  *puVar20 = uVar9;
  if (((byte)*puVar2 >> 3 & 1) == 0) goto code_r0x00551b3c;
  bVar7 = true;
switchD_00551a08_caseD_7:
  if (iVar23 < 1) goto LAB_00551e8c;
  goto LAB_005519c0;
code_r0x00551b3c:
  uVar11 = uVar22 + 1;
  bVar7 = true;
  uVar13 = 0;
  if (0xfffffffe < uVar22) goto LAB_005519d4;
  if ((int)uVar22 < -1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,"contains");
  }
  uVar13 = 0;
  if (local_b0 != 0) {
    uVar13 = local_a8;
  }
  if ((int)uVar13 <= (int)uVar11) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde,
                  "contains");
  }
  if (((local_a8 <= uVar11) || (local_b0 == 0)) ||
     ((uVar13 = *(uint *)(local_c0 + (long)(int)uVar11 * 4), local_c8[0] <= uVar13 ||
      (*(uint *)(local_b0 + (long)(int)uVar13 * 4) != uVar11)))) {
    bVar7 = true;
                    /* try { // try from 00551ba0 to 00551c83 has its CatchHandler @ 005521fc */
    FUN_005527e0(local_c8,1,uVar11);
    uVar13 = uVar11;
    goto LAB_005519d4;
  }
LAB_00551eb8:
  bVar7 = false;
  goto LAB_00551f18;
LAB_00551e8c:
  piVar18 = piVar18 + 1;
  if (piVar18 == local_88 + (int)local_a0[0]) goto LAB_00551ec4;
  goto LAB_0055194c;
}


