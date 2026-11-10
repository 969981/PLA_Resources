/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00127d70; name: FUN_00127d70
 */


undefined8
FUN_00127d70(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *__src;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  code *pcVar14;
  byte *pbVar16;
  byte *pbVar15;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined1 auStack_80 [32];
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar23 = *(uint **)(param_1 + 0x28);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  pbVar15 = *(byte **)(param_1 + 0x1c0);
  __src = *(undefined8 **)(param_1 + 0x38);
  local_60 = -8;
  uStack_5c = 0xfffffff8;
  uStack_58 = 0xfffffff8fffffff8;
  local_50 = 0xfffffff8fffffff8;
  local_48 = 0xfffffff8;
  puVar24 = puVar23 + *(long *)(param_1 + 0x30);
  if (0xf < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -2;
  }
  lVar18 = (long)param_3 - (long)param_2 >> 6;
  pbVar1 = pbVar15 + *(long *)(param_1 + 0x1c8);
  pbVar17 = pbVar1;
  if (lVar18 <= *(long *)(param_1 + 0x1c8)) {
    pbVar17 = pbVar15 + lVar18;
  }
  puVar26 = puVar2;
  if (pbVar15 < pbVar17) {
    pbVar16 = pbVar15;
    puVar22 = puVar23;
    do {
      while( true ) {
        puVar25 = puVar26;
        pbVar15 = pbVar16 + 1;
        bVar5 = *pbVar16;
        local_44 = *puVar25;
        uVar19 = (ulong)(bVar5 >> 3) & 3;
        puVar23 = puVar22 + 1;
        uVar7 = (ulong)*puVar22;
        if (uVar19 != 3) {
          puVar23 = puVar22;
          uVar7 = uVar19;
        }
        *param_2 = *__src;
        if (((8 < uVar7) && (param_2[1] = __src[1], 0x10 < uVar7)) &&
           (param_2[2] = __src[2], 0x18 < uVar7)) {
          if ((long)param_3 - (long)param_2 < (long)uVar7) {
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 == (code *)0x0) goto LAB_001282c4;
            pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
            pcVar12 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n";
            uVar11 = 700;
            goto LAB_001282bc;
          }
          lVar18 = 0x1f - uVar7;
          lVar21 = uVar7 - 0x18;
          if (lVar18 < 0) {
            lVar18 = -1;
          }
          uVar19 = lVar21 + lVar18;
          uVar4 = ((uint)(uVar19 >> 3) & 0x1fffffff) + 1;
          lVar18 = (long)(((long)param_3 - (long)param_2) - uVar7) >> 6;
          param_2 = param_2 + 3;
          __src = __src + 3;
          if ((uVar4 & 7) != 0) {
            lVar10 = -((ulong)uVar4 & 7);
            puVar8 = __src;
            puVar13 = param_2;
            do {
              __src = puVar8 + 1;
              lVar21 = lVar21 + -8;
              lVar10 = lVar10 + 1;
              param_2 = puVar13 + 1;
              *puVar13 = *puVar8;
              puVar8 = __src;
              puVar13 = param_2;
            } while (lVar10 != 0);
          }
          if (0x37 < uVar19) {
            do {
              *param_2 = *__src;
              param_2[1] = __src[1];
              param_2[2] = __src[2];
              param_2[3] = __src[3];
              param_2[4] = __src[4];
              param_2[5] = __src[5];
              param_2[6] = __src[6];
              puVar8 = __src + 7;
              lVar21 = lVar21 + -0x40;
              __src = __src + 8;
              param_2[7] = *puVar8;
              param_2 = param_2 + 8;
            } while (0 < lVar21);
          }
          pbVar17 = pbVar1;
          if (lVar18 <= (long)pbVar1 - (long)pbVar15) {
            pbVar17 = pbVar15 + lVar18;
          }
          uVar7 = (uVar7 - 0x20) - (uVar19 & 0xfffffffffffffff8);
        }
        puVar8 = (undefined8 *)((long)param_2 + uVar7);
        __src = (undefined8 *)((long)__src + uVar7);
        piVar20 = (int *)((ulong)auStack_80 | 0x20 | (ulong)(bVar5 >> 5) << 2);
        local_60 = *piVar20;
        uVar7 = (ulong)local_60;
        bVar6 = (ulong)(bVar5 >> 5) == 7;
        *(undefined8 *)(piVar20 + -1) = *(undefined8 *)(piVar20 + -2);
        *(undefined8 *)(piVar20 + -3) = *(undefined8 *)(piVar20 + -4);
        *(undefined8 *)(piVar20 + -5) = *(undefined8 *)(piVar20 + -6);
        *(undefined8 *)(piVar20 + -7) = *(undefined8 *)(piVar20 + -8);
        if (uVar7 < (ulong)(param_5 - (long)puVar8)) goto LAB_00128268;
        puVar13 = (undefined8 *)((long)puVar8 + uVar7);
        lVar18 = ((ulong)bVar5 & 7) + 2;
        pbVar16 = pbVar15;
        puVar22 = puVar23;
        if (lVar18 == 9) break;
        param_2 = (undefined8 *)((long)puVar8 + lVar18);
        *puVar8 = *puVar13;
LAB_00128014:
        puVar26 = puVar25 + bVar6;
        if (pbVar17 <= pbVar15) goto LAB_00128020;
      }
      if (puVar24 <= puVar23) goto LAB_00128354;
      puVar24 = puVar24 + -1;
      uVar4 = *puVar24;
      *puVar8 = *puVar13;
      uVar4 = uVar4 + 6;
      param_2 = (undefined8 *)((long)puVar8 + (ulong)uVar4);
      puVar8[1] = puVar13[1];
      if (uVar4 < 0x11) goto LAB_00128014;
      if ((ulong)((long)param_4 + (-8 - (long)puVar8)) < (ulong)uVar4) goto LAB_00128380;
      puVar8[2] = puVar13[2];
      for (puVar8 = puVar8 + 3; puVar8 < param_2; puVar8 = puVar8 + 1) {
        *puVar8 = *(undefined8 *)((long)puVar8 + uVar7);
      }
      lVar18 = (long)param_3 - (long)param_2 >> 6;
      pbVar17 = pbVar1;
      if (lVar18 <= (long)pbVar1 - (long)pbVar15) {
        pbVar17 = pbVar15 + lVar18;
      }
      puVar26 = puVar25 + bVar6;
    } while (pbVar15 < pbVar17);
LAB_00128020:
    puVar26 = puVar25 + bVar6;
  }
  if (pbVar15 < pbVar1) {
    puVar22 = puVar23;
    do {
      pbVar17 = pbVar15 + 1;
      bVar5 = *pbVar15;
      local_44 = *puVar26;
      uVar19 = (ulong)(bVar5 >> 3) & 3;
      puVar23 = puVar22 + 1;
      uVar7 = (ulong)*puVar22;
      if (uVar19 != 3) {
        puVar23 = puVar22;
        uVar7 = uVar19;
      }
      if ((long)param_3 - (long)param_2 < (long)uVar7) {
        FUN_0010a430();
        pcVar14 = *(code **)PTR_PTR_043722f8;
        if (pcVar14 == (code *)0x0) goto LAB_001282c4;
        pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
        pcVar12 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n";
        uVar11 = 0x27d;
        goto LAB_001282bc;
      }
      *param_2 = *__src;
      if (((8 < uVar7) && (param_2[1] = __src[1], 0x10 < uVar7)) &&
         (param_2[2] = __src[2], 0x18 < uVar7)) {
        lVar18 = 0x1f - uVar7;
        lVar21 = uVar7 - 0x18;
        if (lVar18 < 0) {
          lVar18 = -1;
        }
        uVar19 = lVar21 + lVar18;
        uVar4 = ((uint)(uVar19 >> 3) & 0x1fffffff) + 1;
        param_2 = param_2 + 3;
        __src = __src + 3;
        if ((uVar4 & 7) != 0) {
          lVar18 = -((ulong)uVar4 & 7);
          puVar8 = __src;
          puVar13 = param_2;
          do {
            __src = puVar8 + 1;
            lVar21 = lVar21 + -8;
            lVar18 = lVar18 + 1;
            param_2 = puVar13 + 1;
            *puVar13 = *puVar8;
            puVar8 = __src;
            puVar13 = param_2;
          } while (lVar18 != 0);
        }
        if (0x37 < uVar19) {
          do {
            *param_2 = *__src;
            param_2[1] = __src[1];
            param_2[2] = __src[2];
            param_2[3] = __src[3];
            param_2[4] = __src[4];
            param_2[5] = __src[5];
            param_2[6] = __src[6];
            puVar8 = __src + 7;
            lVar21 = lVar21 + -0x40;
            __src = __src + 8;
            param_2[7] = *puVar8;
            param_2 = param_2 + 8;
          } while (0 < lVar21);
        }
        uVar7 = (uVar7 - 0x20) - (uVar19 & 0xfffffffffffffff8);
      }
      puVar8 = (undefined8 *)((long)param_2 + uVar7);
      piVar20 = (int *)((ulong)auStack_80 | 0x20 | (ulong)(bVar5 >> 5) << 2);
      __src = (undefined8 *)((long)__src + uVar7);
      local_60 = *piVar20;
      uVar7 = (ulong)local_60;
      *(undefined8 *)(piVar20 + -1) = *(undefined8 *)(piVar20 + -2);
      *(undefined8 *)(piVar20 + -3) = *(undefined8 *)(piVar20 + -4);
      *(undefined8 *)(piVar20 + -5) = *(undefined8 *)(piVar20 + -6);
      *(undefined8 *)(piVar20 + -7) = *(undefined8 *)(piVar20 + -8);
      if (uVar7 < (ulong)(param_5 - (long)puVar8)) goto LAB_00128268;
      puVar13 = (undefined8 *)((long)puVar8 + uVar7);
      lVar18 = ((ulong)bVar5 & 7) + 2;
      if (lVar18 == 9) {
        if (puVar24 <= puVar23) goto LAB_00128354;
        puVar24 = puVar24 + -1;
        uVar4 = *puVar24;
        *puVar8 = *puVar13;
        uVar4 = uVar4 + 6;
        param_2 = (undefined8 *)((long)puVar8 + (ulong)uVar4);
        puVar8[1] = puVar13[1];
        if (0x10 < uVar4) {
          if ((ulong)((long)param_4 + (-8 - (long)puVar8)) < (ulong)uVar4) goto LAB_00128380;
          puVar8[2] = puVar13[2];
          for (puVar8 = puVar8 + 3; puVar8 < param_2; puVar8 = puVar8 + 1) {
            *puVar8 = *(undefined8 *)((long)puVar8 + uVar7);
          }
        }
      }
      else {
        param_2 = (undefined8 *)((long)puVar8 + lVar18);
        *puVar8 = *puVar13;
      }
      puVar26 = puVar26 + ((ulong)(bVar5 >> 5) == 7);
      pbVar15 = pbVar17;
      puVar22 = puVar23;
    } while (pbVar17 < pbVar1);
  }
  if (param_2 < param_4) {
    memcpy(param_2,__src,(long)param_4 - (long)param_2);
  }
  else if (param_2 != param_4) {
    FUN_0010a430();
    pcVar14 = *(code **)PTR_PTR_043722f8;
    if (pcVar14 == (code *)0x0) goto LAB_001282c4;
    pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar12 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    uVar11 = 0x192;
    goto LAB_001282bc;
  }
  if (puVar26 == puVar2 + lVar3) {
    if (puVar23 == puVar24) {
      return 1;
    }
    FUN_0010a430();
    pcVar14 = *(code **)PTR_PTR_043722f8;
    if (pcVar14 == (code *)0x0) goto LAB_001282c4;
    pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar12 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
    uVar11 = 0x19c;
  }
  else {
    FUN_0010a430();
    pcVar14 = *(code **)PTR_PTR_043722f8;
    if (pcVar14 == (code *)0x0) goto LAB_001282c4;
    pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar12 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
    uVar11 = 0x19b;
  }
LAB_001282bc:
  (*pcVar14)(0,pcVar9,uVar11,pcVar12);
LAB_001282c4:
  FUN_0010a450();
  return 0;
LAB_00128268:
  FUN_0010a430();
  pcVar14 = *(code **)PTR_PTR_043722f8;
  if (pcVar14 == (code *)0x0) goto LAB_001282c4;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar12 = "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n";
  uVar11 = 0x301;
  goto LAB_001282bc;
LAB_00128354:
  FUN_0010a430();
  pcVar14 = *(code **)PTR_PTR_043722f8;
  if (pcVar14 == (code *)0x0) goto LAB_001282c4;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar12 = "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n";
  uVar11 = 0x323;
  goto LAB_001282bc;
LAB_00128380:
  FUN_0010a430();
  pcVar14 = *(code **)PTR_PTR_043722f8;
  if (pcVar14 == (code *)0x0) goto LAB_001282c4;
  pcVar9 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar12 = "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n";
  uVar11 = 0x341;
  goto LAB_001282bc;
}


