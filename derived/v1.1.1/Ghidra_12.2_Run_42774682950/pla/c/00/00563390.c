/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00563390; name: FUN_00563390
 */


undefined4 FUN_00563390(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ostream *poVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 local_198;
  undefined8 local_190 [33];
  long local_88;
  long local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
                    /* try { // try from 005633c0 to 005633cf has its CatchHandler @ 00563844 */
  local_6c = param_2;
  local_68 = param_1;
  FUN_005638e4(&local_88,&local_68,&local_6c);
  puVar3 = PTR_LAB_04373088;
LAB_00563400:
  while( true ) {
    lVar19 = local_80;
    puVar17 = (undefined8 *)(local_80 + -0x20);
    puVar18 = (undefined8 *)*puVar17;
    if (puVar18 == *(undefined8 **)(local_80 + -0x18)) break;
    iVar2 = *(int *)(local_80 + -8);
    if ((int)((ulong)((long)*(undefined8 **)(local_80 + -0x18) - (long)puVar18) >> 3) * -0x55555555
        <= iVar2) {
      if (*(int *)(local_80 + -0x28) < 1) {
        uVar20 = 0;
      }
      else {
        uVar24 = 0;
        uVar22 = 0;
        do {
          uVar21 = (uint)uVar22;
          lVar8 = *(long *)(lVar19 + -0x30);
          uVar23 = (uint)uVar24;
          puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar23 * 8);
          puVar5 = (undefined8 *)puVar18[1];
          if (puVar9 < puVar5) {
            uVar11 = -(uVar22 >> 0x1f & 1) & 0xfffffff800000000 | (uVar22 & 0xffffffff) << 3;
            lVar13 = (long)(int)uVar23 << 3;
            do {
              *(undefined8 *)(lVar8 + uVar11) = *puVar9;
              lVar8 = *(long *)(lVar19 + -0x30);
              puVar5 = (undefined8 *)puVar18[1];
              lVar15 = lVar8 + lVar13;
              lVar13 = lVar13 + 8;
              puVar9 = (undefined8 *)(lVar15 + 8);
              uVar11 = uVar11 + 8;
              uVar21 = (int)uVar22 + 1;
              uVar22 = (ulong)uVar21;
              uVar23 = (int)uVar24 + 1;
              uVar24 = (ulong)uVar23;
            } while ((undefined8 *)(lVar8 + lVar13) < puVar5);
          }
          if (*(int *)(lVar19 + -0x24) - 1U < 2) {
            local_198 = *puVar18;
                    /* try { // try from 005634d8 to 005634f3 has its CatchHandler @ 00563864 */
            local_190[0] = FUN_0055ea08(puVar5,*(undefined4 *)((long)puVar18 + 0x14),param_3);
            uVar6 = FUN_0055e9f0(&local_198,2,param_3);
            *(undefined8 *)(*(long *)(lVar19 + -0x30) + (long)(int)uVar21 * 8) = uVar6;
          }
          else {
            if (*(int *)(lVar19 + -0x24) != 3) {
                    /* try { // try from 005637a0 to 005637b7 has its CatchHandler @ 0056382c */
              FUN_0054f038(&local_198,"external/com_github_google_re2/re2/parse.cc",0x3d1);
                    /* try { // try from 005637bc to 005637d3 has its CatchHandler @ 0056383c */
              poVar7 = std::__put_character_sequence<char,std::char_traits<char>>
                                 ((ostream *)local_190,"unknown round: ",0xf);
              std::ostream::operator<<(poVar7,*(int *)(lVar19 + -0x24));
              goto LAB_005637d4;
            }
            *(undefined8 *)(lVar8 + (long)(int)uVar21 * 8) = *puVar18;
          }
          piVar1 = (int *)(puVar18 + 2);
          puVar18 = puVar18 + 3;
          uVar23 = *piVar1 + uVar23;
          iVar2 = *(int *)(lVar19 + -0x28);
          uVar22 = (ulong)(uVar21 + 1);
          uVar24 = (ulong)uVar23;
          if ((puVar18 == *(undefined8 **)(lVar19 + -0x18)) && ((int)uVar23 < iVar2)) {
            uVar11 = (ulong)(int)uVar23;
            uVar22 = (ulong)(int)(uVar21 + 1);
            uVar10 = ~uVar11;
            uVar24 = (ulong)(iVar2 - uVar23) & 3;
            uVar12 = uVar22;
            uVar14 = uVar11;
            if ((iVar2 - uVar23 & 3) != 0) {
              do {
                uVar11 = uVar14 + 1;
                uVar22 = uVar12 + 1;
                uVar24 = uVar24 - 1;
                *(undefined8 *)(*(long *)(lVar19 + -0x30) + uVar12 * 8) =
                     *(undefined8 *)(*(long *)(lVar19 + -0x30) + uVar14 * 8);
                uVar12 = uVar22;
                uVar14 = uVar11;
              } while (uVar24 != 0);
            }
            uVar24 = uVar11;
            if (2 < uVar10 + (long)iVar2) {
              lVar8 = 0;
              lVar13 = uVar22 * 8;
              lVar15 = uVar11 * 8;
              do {
                lVar16 = lVar8 * 8;
                lVar8 = lVar8 + 4;
                *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar13 + lVar16) =
                     *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar15 + lVar16);
                *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar13 + lVar16 + 8) =
                     *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar15 + lVar16 + 8);
                *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar13 + lVar16 + 0x10) =
                     *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar15 + lVar16 + 0x10);
                *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar13 + lVar16 + 0x18) =
                     *(undefined8 *)(*(long *)(lVar19 + -0x30) + lVar15 + lVar16 + 0x18);
                uVar24 = uVar11 + lVar8;
              } while ((long)uVar24 < (long)iVar2);
              uVar22 = uVar22 + lVar8;
            }
          }
          uVar20 = (undefined4)uVar22;
        } while ((int)uVar24 < iVar2);
        puVar18 = (undefined8 *)*puVar17;
      }
      *(undefined8 **)(lVar19 + -0x18) = puVar18;
      *(undefined4 *)(lVar19 + -0x28) = uVar20;
      break;
    }
                    /* try { // try from 0056343c to 00563443 has its CatchHandler @ 00563854 */
    FUN_005638e4(&local_88,puVar18 + (long)iVar2 * 3 + 1,puVar18 + (long)iVar2 * 3 + 2);
  }
  lVar13 = local_80;
  lVar8 = local_88;
  iVar2 = *(int *)(lVar19 + -0x24);
  *(int *)(lVar19 + -0x24) = iVar2 + 1;
  puVar4 = PTR_LAB_04373088;
  switch(iVar2) {
  case 0:
                    /* try { // try from 0056366c to 0056370b has its CatchHandler @ 00563854 */
    FUN_00563ae4(*(undefined8 *)(lVar19 + -0x30),*(undefined4 *)(lVar19 + -0x28));
    break;
  case 1:
    FUN_00563e24(*(undefined8 *)(lVar19 + -0x30),*(undefined4 *)(lVar19 + -0x28));
    break;
  case 2:
    FUN_00564150(*(undefined8 *)(lVar19 + -0x30),*(undefined4 *)(lVar19 + -0x28),param_3,puVar17);
    break;
  case 3:
    uVar20 = *(undefined4 *)(lVar19 + -0x28);
    if (local_80 - local_88 == 0x30) {
      if (local_88 != 0) {
        if (local_80 != local_88) {
          lVar13 = *(long *)(local_80 + -0x20);
          lVar15 = local_80 + -0x30;
          lVar19 = local_80;
          if (lVar13 != 0) goto LAB_00563748;
          while (lVar19 = lVar15, lVar8 != lVar15) {
            while( true ) {
              lVar13 = *(long *)(lVar19 + -0x20);
              lVar15 = lVar19 + -0x30;
              if (lVar13 == 0) break;
LAB_00563748:
              *(long *)(lVar19 + -0x18) = lVar13;
              FUN_002e2ea0(puVar4);
              lVar19 = lVar15;
              if (lVar8 == lVar15) goto LAB_0056376c;
            }
          }
        }
LAB_0056376c:
        local_80 = lVar8;
        FUN_002e2ea0(PTR_LAB_04373088,local_88);
      }
      return uVar20;
    }
    if (*(long *)(local_80 + -0x20) != 0) {
      *(long *)(local_80 + -0x18) = *(long *)(local_80 + -0x20);
      FUN_002e2ea0(puVar3);
    }
    local_80 = lVar13 + -0x30;
    iVar2 = *(int *)(lVar13 + -0x38);
    *(undefined4 *)(*(long *)(lVar13 + -0x50) + (long)iVar2 * 0x18 + 0x14) = uVar20;
    *(int *)(lVar13 + -0x38) = iVar2 + 1;
    goto LAB_00563400;
  default:
                    /* try { // try from 005637dc to 005637f3 has its CatchHandler @ 0056381c */
    FUN_0054f038(&local_198,"external/com_github_google_re2/re2/parse.cc",0x3f8);
                    /* try { // try from 005637f8 to 0056380f has its CatchHandler @ 00563814 */
    poVar7 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)local_190,"unknown round: ",0xf);
    std::ostream::operator<<(poVar7,*(int *)(lVar19 + -0x24));
LAB_005637d4:
                    /* WARNING: Subroutine does not return */
    FUN_005503fc(&local_198);
  }
  if ((*(long *)(lVar19 + -0x20) == *(long *)(lVar19 + -0x18)) || (*(int *)(lVar19 + -0x24) == 3)) {
    *(int *)(lVar19 + -8) =
         (int)((ulong)(*(long *)(lVar19 + -0x18) - *(long *)(lVar19 + -0x20)) >> 3) * -0x55555555;
  }
  else {
    *(undefined4 *)(lVar19 + -8) = 0;
  }
  goto LAB_00563400;
}


