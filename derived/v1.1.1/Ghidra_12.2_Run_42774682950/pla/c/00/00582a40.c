/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00582a40; name: FUN_00582a40
 */


void FUN_00582a40(long param_1,byte *param_2,ulong *param_3)

{
  long *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  int *piVar8;
  bool bVar9;
  ostream *poVar10;
  long lVar11;
  undefined8 *puVar12;
  void *__src;
  size_t __n;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  void *__dest;
  long lVar21;
  byte *pbVar22;
  int *piVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  int *piVar27;
  int iVar28;
  undefined1 auVar29 [16];
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  char local_78 [8];
  int local_70 [4];
  
  bVar5 = *(byte *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x88) = 0;
  if ((bVar5 & 1) == 0) {
    uVar13 = (ulong)(bVar5 >> 1);
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x78);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  if (uVar13 != 0) {
                    /* try { // try from 00582a98 to 00582b63 has its CatchHandler @ 00583550 */
    uVar13 = FUN_005878d0((byte *)(param_1 + 0x70),&local_b8);
    if ((uVar13 & 1) == 0) {
      uVar13 = *(ulong *)(param_2 + 8);
      pbVar22 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar22 = param_2 + 1;
        uVar13 = (ulong)(*param_2 >> 1);
      }
      poVar10 = std::__put_character_sequence<char,std::char_traits<char>>
                          ((ostream *)PTR_clog_04374e40,(char *)pbVar22,uVar13);
      poVar10 = std::__put_character_sequence<char,std::char_traits<char>>
                          (poVar10,": Failed to parse \'",0x13);
      uVar13 = *(ulong *)(param_1 + 0x78);
      pcVar3 = *(char **)(param_1 + 0x80);
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        pcVar3 = (char *)(param_1 + 0x71);
        uVar13 = (ulong)(*(byte *)(param_1 + 0x70) >> 1);
      }
      poVar10 = std::__put_character_sequence<char,std::char_traits<char>>(poVar10,pcVar3,uVar13);
      std::__put_character_sequence<char,std::char_traits<char>>(poVar10,"\'\n",2);
    }
    else {
      uVar13 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        uVar13 = local_90;
      }
      if (uVar13 == 0) {
        if (*param_3 == 0) {
          pbVar22 = (byte *)(param_1 + 0x38);
        }
        else {
          pbVar22 = (byte *)(*(long *)(param_1 + 8) + *param_3 * 0x30 + -0x28);
        }
                    /* try { // try from 00582d80 to 00582d93 has its CatchHandler @ 00583520 */
        FUN_00582874(param_1,param_2,*(long *)(param_1 + 0x20) + (ulong)*pbVar22 * 0x30,local_a0,0,
                     &local_b8);
      }
      else {
        if (1 < *param_3) {
          plVar24 = (long *)(param_1 + 8);
          __dest = (void *)*plVar24;
          uVar13 = *param_3 + 0x321;
          if ((ulong)((*(long *)(param_1 + 0x18) - (long)__dest >> 4) * -0x5555555555555555) <
              uVar13) {
            lVar16 = *(long *)(param_1 + 0x10);
            lVar21 = uVar13 * 0x30;
            lVar11 = FUN_002e2e80(PTR_FUN_04373078,lVar21);
            __src = *(void **)(param_1 + 8);
            lVar16 = lVar11 + (lVar16 - (long)__dest);
            __n = *(long *)(param_1 + 0x10) - (long)__src;
            __dest = (void *)(lVar16 - __n);
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
              __src = (void *)*plVar24;
            }
            *(void **)(param_1 + 8) = __dest;
            *(long *)(param_1 + 0x10) = lVar16;
            *(long *)(param_1 + 0x18) = lVar11 + lVar21;
            if (__src != (void *)0x0) {
              FUN_002e2ea0(PTR_LAB_04373088);
              __dest = (void *)*plVar24;
            }
          }
          lVar16 = *(long *)(param_1 + 0x10) - (long)__dest >> 4;
          uVar14 = *param_3;
          uVar13 = uVar14 + 800;
          bVar9 = uVar13 < (ulong)(lVar16 * -0x5555555555555555);
          lVar16 = uVar13 + lVar16 * 0x5555555555555555;
          if (bVar9 || lVar16 == 0) {
            if (bVar9) {
              *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar13 * 0x30);
            }
          }
          else {
                    /* try { // try from 00582c38 to 00582c3f has its CatchHandler @ 00583550 */
            FUN_00586d70(plVar24,lVar16);
            uVar14 = *param_3;
            __dest = (void *)*plVar24;
          }
          *(undefined1 *)(param_1 + 0x88) = 1;
          pbVar22 = (byte *)((long)__dest + uVar14 * 0x30 + -0x58);
          piVar23 = (int *)(*(long *)(param_1 + 0x20) +
                           (ulong)*(byte *)((long)__dest + uVar14 * 0x30 + -0x28) * 0x30);
          piVar27 = (int *)(*(long *)(param_1 + 0x20) + (ulong)*pbVar22 * 0x30);
          cVar6 = (char)piVar23[10];
          piVar2 = piVar23;
          if (cVar6 == '\0') {
            piVar2 = piVar27;
          }
                    /* try { // try from 00582c9c to 00582ccb has its CatchHandler @ 00583530 */
          FUN_00582874(param_1,param_2,piVar2,local_80,1,&local_98);
          piVar2 = piVar27;
          if (cVar6 == '\0') {
            piVar2 = piVar23;
          }
          FUN_00582874(param_1,param_2,piVar2,local_a0,0,&local_b8);
          plVar1 = (long *)((long)__dest + uVar14 * 0x30 + -0x30);
          lVar16 = *plVar1;
          plVar20 = (long *)((long)__dest + uVar14 * 0x30 + -0x60);
          auVar29 = FUN_00586060(0x7b2,1,1,0,lVar16 / 0x3c,lVar16 % 0x3c);
          lVar16 = auVar29._8_8_;
          uVar13 = FUN_00586060(auVar29._0_8_,(long)auVar29[8],(lVar16 << 0x30) >> 0x38,
                                (lVar16 << 0x28) >> 0x38,
                                (long)*piVar23 / 0x3c + ((lVar16 << 0x20) >> 0x38),
                                (long)*piVar23 % 0x3c + ((lVar16 << 0x18) >> 0x38));
          *(ulong *)(param_1 + 0x90) = uVar13;
          if ((uVar13 & 3) == 0) {
            if ((long)uVar13 % 100 == 0) {
              uVar14 = (ulong)((long)uVar13 % 400 == 0);
            }
            else {
              uVar14 = 1;
            }
          }
          else {
            uVar14 = 0;
          }
          lVar11 = FUN_005868a0(uVar13,1,1,0x7b2,1,1);
          uVar19 = *param_3;
          lVar17 = (long)uVar13 % 400;
          lVar16 = lVar17 + 0x95f;
          lVar15 = SUB168(SEXT816(lVar16) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar16;
          lVar21 = lVar17 + 0x962;
          if (-1 < lVar16) {
            lVar21 = lVar16;
          }
          lVar16 = lVar17 + ((lVar15 >> 6) - (lVar15 >> 0x3f)) + (lVar21 >> 2) + lVar16 / 400 +
                   0x960;
          uVar13 = SUB168(SEXT816(lVar16) * SEXT816(0x4924924924924925),8);
          iVar28 = (*(int *)(&DAT_03a34098 +
                            (lVar16 + ((uVar13 >> 1) - ((long)uVar13 >> 0x3f)) * -7) * 4) + 1) % 7;
          lVar21 = *(long *)(param_1 + 8);
          lVar11 = lVar11 * 0x15180;
          plVar25 = (long *)(lVar21 + uVar19 * 0x30);
          auVar29 = FUN_00586060(0x7b2,1,1,0,*plVar20 / 0x3c,*plVar20 % 0x3c);
          lVar16 = auVar29._8_8_;
          uVar13 = FUN_00586060(auVar29._0_8_,(long)auVar29[8],(lVar16 << 0x30) >> 0x38,
                                (lVar16 << 0x28) >> 0x38,
                                (long)*piVar27 / 0x3c + ((lVar16 << 0x20) >> 0x38),
                                (long)*piVar27 % 0x3c + ((lVar16 << 0x18) >> 0x38));
          if (uVar13 == *(ulong *)(param_1 + 0x90)) {
            plVar24 = plVar25;
            plVar25 = plVar1;
          }
          else {
            lVar16 = *(long *)(param_1 + 8);
            if (*(long *)(param_1 + 0x10) - lVar16 == -0x30) {
              *(long *)(param_1 + 0x10) = lVar16;
            }
            else {
                    /* try { // try from 00582ff4 to 00583003 has its CatchHandler @ 00583510 */
              FUN_00586d70(plVar24,1);
              lVar16 = *plVar24;
            }
            uVar13 = *param_3;
            if (plVar25 != (long *)(lVar16 + uVar13 * 0x30)) {
                    /* try { // try from 005834e0 to 005834ff has its CatchHandler @ 00583510 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("tr == &transitions_[hdr.timecnt]",
                            "external/com_google_absl/absl/time/internal/cctz/src/time_zone_info.cc"
                            ,0x170,"ExtendTransitions");
            }
            piVar2 = &local_7c;
            if ((char)piVar23[10] != '\0') {
              piVar2 = local_70;
            }
            iVar4 = *piVar2;
            if (iVar4 == 2) {
              lVar17 = (long)*(char *)((long)piVar2 + 5);
              lVar15 = (long)(char)piVar2[1];
              if (lVar17 == 5) {
                lVar15 = lVar15 + 1;
              }
              lVar18 = (long)*(short *)(&DAT_03a340b4 + lVar15 * 2 + uVar14 * 0x1c);
              lVar15 = (lVar18 + iVar28) % 7;
              if (lVar17 == 5) {
                lVar18 = ~(((lVar15 - *(char *)((long)piVar2 + 6)) + 6) % 7) + lVar18;
              }
              else {
                lVar18 = lVar17 * 7 + lVar18 + ((*(char *)((long)piVar2 + 6) - lVar15) + 7) % 7 + -7
                ;
              }
            }
            else if (iVar4 == 1) {
              lVar18 = (long)piVar2[1];
            }
            else if (iVar4 == 0) {
              lVar18 = (long)piVar2[1] - (ulong)((uint)((long)piVar2[1] < 0x3c) | (uint)uVar14 ^ 1);
            }
            else {
              lVar18 = 0;
            }
            plVar24 = plVar25 + 6;
            *plVar25 = (lVar11 + lVar18 * 0x15180 + (long)piVar2[2]) - (long)*piVar23;
            lVar16 = lVar16 + uVar13 * 0x30;
            plVar20 = (long *)(lVar16 + -0x30);
            *(byte *)(lVar21 + uVar19 * 0x30 + 8) = *pbVar22;
            piVar23 = (int *)(*(long *)(param_1 + 0x20) + (ulong)*(byte *)(lVar16 + 8) * 0x30);
            piVar27 = (int *)(*(long *)(param_1 + 0x20) + (ulong)*(byte *)(lVar16 + -0x28) * 0x30);
            uVar13 = *(ulong *)(param_1 + 0x90);
          }
          lVar16 = uVar13 + 399;
          piVar8 = local_70;
          piVar2 = &local_7c;
          if ((char)piVar23[10] == '\0') {
            piVar8 = &local_7c;
            piVar2 = local_70;
          }
          do {
            uVar26 = 0;
            uVar19 = uVar13 + 1;
            if (((uVar19 & 3) == 0) && ((int)uVar14 == 0)) {
              if ((long)uVar19 % 100 == 0) {
                uVar26 = (ulong)((long)uVar19 % 400 == 0);
              }
              else {
                uVar26 = 1;
              }
            }
            lVar11 = lVar11 + (int)(&DAT_0388a658)[uVar14];
            iVar4 = *piVar8;
            iVar28 = ((&DAT_0388a878)[uVar14] + iVar28) % 7;
            if (iVar4 == 2) {
              lVar15 = (long)*(char *)((long)piVar8 + 5);
              lVar21 = (long)(char)piVar8[1];
              if (lVar15 == 5) {
                lVar21 = lVar21 + 1;
              }
              lVar17 = (long)*(short *)(&DAT_03a340b4 + lVar21 * 2 + uVar26 * 0x1c);
              lVar21 = (lVar17 + iVar28) % 7;
              if (lVar15 == 5) {
                lVar17 = ~(((lVar21 - *(char *)((long)piVar8 + 6)) + 6) % 7) + lVar17;
              }
              else {
                lVar17 = lVar15 * 7 + lVar17 + ((*(char *)((long)piVar8 + 6) - lVar21) + 7) % 7 + -7
                ;
              }
            }
            else if (iVar4 == 1) {
              lVar17 = (long)piVar8[1];
            }
            else if (iVar4 == 0) {
              lVar17 = (long)piVar8[1] - (ulong)((uint)((long)piVar8[1] < 0x3c) | (uint)uVar26 ^ 1);
            }
            else {
              lVar17 = 0;
            }
            *plVar24 = (lVar11 + lVar17 * 0x15180 + (long)piVar8[2]) - (long)*piVar23;
            *(char *)(plVar24 + 1) = (char)plVar20[1];
            iVar4 = *piVar2;
            if (iVar4 == 2) {
              lVar15 = (long)*(char *)((long)piVar2 + 5);
              lVar21 = (long)(char)piVar2[1];
              if (lVar15 == 5) {
                lVar21 = lVar21 + 1;
              }
              lVar17 = (long)*(short *)(&DAT_03a340b4 + lVar21 * 2 + uVar26 * 0x1c);
              lVar21 = (lVar17 + iVar28) % 7;
              if (lVar15 == 5) {
                lVar17 = ~(((lVar21 - *(char *)((long)piVar2 + 6)) + 6) % 7) + lVar17;
              }
              else {
                lVar17 = lVar15 * 7 + lVar17 + ((*(char *)((long)piVar2 + 6) - lVar21) + 7) % 7 + -7
                ;
              }
            }
            else if (iVar4 == 1) {
              lVar17 = (long)piVar2[1];
            }
            else if (iVar4 == 0) {
              lVar17 = (long)piVar2[1] - (ulong)((uint)((long)piVar2[1] < 0x3c) | (uint)uVar26 ^ 1);
            }
            else {
              lVar17 = 0;
            }
            plVar1 = plVar24 + 0xc;
            plVar24[6] = (lVar11 + lVar17 * 0x15180 + (long)piVar2[2]) - (long)*piVar27;
            *(char *)(plVar24 + 7) = (char)plVar25[1];
            bVar9 = (long)uVar13 < lVar16;
            uVar13 = uVar19;
            plVar24 = plVar1;
            uVar14 = uVar26;
          } while (bVar9);
          *(ulong *)(param_1 + 0x90) = uVar19;
          if (*(long **)(param_1 + 0x10) != plVar1) {
                    /* try { // try from 005834c0 to 005834df has its CatchHandler @ 00583500 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("tr == &transitions_[0] + transitions_.size()",
                          "external/com_google_absl/absl/time/internal/cctz/src/time_zone_info.cc",
                          0x188,"ExtendTransitions");
          }
          goto joined_r0x00582dbc;
        }
        uVar13 = *(ulong *)(param_2 + 8);
        pbVar22 = *(byte **)(param_2 + 0x10);
        if ((*param_2 & 1) == 0) {
          pbVar22 = param_2 + 1;
          uVar13 = (ulong)(*param_2 >> 1);
        }
        poVar10 = std::__put_character_sequence<char,std::char_traits<char>>
                            ((ostream *)PTR_clog_04374e40,(char *)pbVar22,uVar13);
        std::__put_character_sequence<char,std::char_traits<char>>
                  (poVar10,": Too few transitions for POSIX spec\n",0x25);
      }
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x10) + -0x30) < 0) {
    uVar7 = *(undefined1 *)(*(long *)(param_1 + 0x10) + -0x28);
                    /* try { // try from 00582da8 to 00582dab has its CatchHandler @ 00583540 */
    puVar12 = (undefined8 *)FUN_0058256c(param_1 + 8);
    *puVar12 = 0x7fffffff;
    *(undefined1 *)(puVar12 + 1) = uVar7;
  }
joined_r0x00582dbc:
  if ((local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  if ((local_b8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a8);
  }
  return;
}


