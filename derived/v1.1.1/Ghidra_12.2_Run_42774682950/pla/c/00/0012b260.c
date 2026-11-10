/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0012b260; name: FUN_0012b260
 */


undefined8
FUN_0012b260(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *__src;
  undefined8 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined1 auStack_c0 [32];
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar9 = (int)param_3;
  lVar6 = param_1 + 0x140;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  puVar23 = *(uint **)(param_1 + 0x28);
  lVar14 = *(long *)(param_1 + 0x1c8);
  local_80[0] = *(undefined8 *)(lVar6 + ((ulong)(uint)-iVar9 & 7) * 8);
  local_80[1] = *(undefined8 *)(lVar6 + ((ulong)(1 - iVar9) & 7) * 8);
  local_80[2] = *(undefined8 *)(lVar6 + ((ulong)(2 - iVar9) & 7) * 8);
  local_80[3] = *(undefined8 *)(lVar6 + ((ulong)(3 - iVar9) & 7) * 8);
  local_60 = *(undefined8 *)(lVar6 + ((ulong)(4 - iVar9) & 7) * 8);
  local_58 = *(undefined8 *)(lVar6 + ((ulong)(5 - iVar9) & 7) * 8);
  local_50 = *(undefined8 *)(lVar6 + ((ulong)(6 - iVar9) & 7) * 8);
  uStack_48 = *(undefined8 *)(lVar6 + ((ulong)(7 - iVar9) & 7) * 8);
  __src = *(undefined8 **)(param_1 + 0x38);
  local_88 = 0xfffffff8;
  local_90 = 0xfffffff8fffffff8;
  local_a0 = -8;
  uStack_9c = 0xfffffff8;
  uStack_98 = 0xfffffff8fffffff8;
  if (0xf < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -2;
  }
  puVar24 = puVar23 + *(long *)(param_1 + 0x30);
  uVar15 = lVar14 - ((long)param_3 - (long)param_2 >> 6);
  uVar15 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
  uVar16 = (ulong)param_2 & 7;
  puVar26 = puVar1;
  if ((long)uVar15 < lVar14) {
    pbVar20 = (byte *)local_80[uVar16];
    puVar22 = puVar23;
    do {
      while( true ) {
        puVar25 = puVar26;
        bVar4 = *pbVar20;
        lVar14 = lVar14 + -1;
        local_80[uVar16] = pbVar20 + 1;
        local_84 = *puVar25;
        uVar17 = (ulong)(bVar4 >> 3) & 3;
        puVar23 = puVar22 + 1;
        uVar16 = (ulong)*puVar22;
        if (uVar17 != 3) {
          puVar23 = puVar22;
          uVar16 = uVar17;
        }
        *param_2 = *__src;
        if (((8 < uVar16) && (param_2[1] = __src[1], 0x10 < uVar16)) &&
           (param_2[2] = __src[2], 0x18 < uVar16)) {
          lVar6 = (long)param_3 - (long)param_2;
          if (lVar6 < (long)uVar16) {
            FUN_0010a430();
            pcVar13 = *(code **)PTR_PTR_043722f8;
            if (pcVar13 == (code *)0x0) goto LAB_0012b874;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
            pcVar11 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= (lrl)\n";
            uVar10 = 700;
            goto LAB_0012b86c;
          }
          lVar21 = 0x1f - uVar16;
          lVar19 = uVar16 - 0x18;
          if (lVar21 < 0) {
            lVar21 = -1;
          }
          uVar17 = lVar19 + lVar21;
          uVar3 = ((uint)(uVar17 >> 3) & 0x1fffffff) + 1;
          param_2 = param_2 + 3;
          __src = __src + 3;
          if ((uVar3 & 7) != 0) {
            lVar21 = -((ulong)uVar3 & 7);
            puVar7 = __src;
            puVar12 = param_2;
            do {
              __src = puVar7 + 1;
              lVar19 = lVar19 + -8;
              lVar21 = lVar21 + 1;
              param_2 = puVar12 + 1;
              *puVar12 = *puVar7;
              puVar7 = __src;
              puVar12 = param_2;
            } while (lVar21 != 0);
          }
          uVar15 = lVar14 - ((long)(lVar6 - uVar16) >> 6);
          if (0x37 < uVar17) {
            do {
              *param_2 = *__src;
              param_2[1] = __src[1];
              param_2[2] = __src[2];
              param_2[3] = __src[3];
              param_2[4] = __src[4];
              param_2[5] = __src[5];
              param_2[6] = __src[6];
              puVar7 = __src + 7;
              lVar19 = lVar19 + -0x40;
              __src = __src + 8;
              param_2[7] = *puVar7;
              param_2 = param_2 + 8;
            } while (0 < lVar19);
          }
          uVar15 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
          uVar16 = (uVar16 - 0x20) - (uVar17 & 0xfffffffffffffff8);
        }
        puVar7 = (undefined8 *)((long)param_2 + uVar16);
        __src = (undefined8 *)((long)__src + uVar16);
        piVar18 = (int *)((ulong)auStack_c0 | 0x20 | (ulong)(bVar4 >> 5) << 2);
        local_a0 = *piVar18;
        uVar17 = (ulong)local_a0;
        bVar5 = (ulong)(bVar4 >> 5) == 7;
        *(undefined8 *)(piVar18 + -5) = *(undefined8 *)(piVar18 + -6);
        *(undefined8 *)(piVar18 + -7) = *(undefined8 *)(piVar18 + -8);
        *(undefined8 *)(piVar18 + -1) = *(undefined8 *)(piVar18 + -2);
        *(undefined8 *)(piVar18 + -3) = *(undefined8 *)(piVar18 + -4);
        if (uVar17 < (ulong)(param_5 - (long)puVar7)) goto LAB_0012b818;
        puVar12 = (undefined8 *)((long)puVar7 + uVar17);
        lVar6 = ((ulong)bVar4 & 7) + 2;
        puVar22 = puVar23;
        if (lVar6 == 9) break;
        param_2 = (undefined8 *)((long)puVar7 + lVar6);
        *puVar7 = *puVar12;
        uVar16 = (ulong)param_2 & 7;
        pbVar20 = (byte *)local_80[uVar16];
LAB_0012b5a0:
        puVar26 = puVar25 + bVar5;
        if (lVar14 <= (long)uVar15) goto LAB_0012b5ac;
      }
      if (puVar24 <= puVar23) goto LAB_0012b904;
      puVar24 = puVar24 + -1;
      uVar3 = *puVar24;
      *puVar7 = *puVar12;
      uVar3 = uVar3 + 6;
      param_2 = (undefined8 *)((long)puVar7 + (ulong)uVar3);
      puVar7[1] = puVar12[1];
      uVar16 = (ulong)param_2 & 7;
      pbVar20 = (byte *)local_80[uVar16];
      if (uVar3 < 0x11) goto LAB_0012b5a0;
      if ((ulong)((long)param_4 + (-8 - (long)puVar7)) < (ulong)uVar3) goto LAB_0012b930;
      puVar7[2] = puVar12[2];
      for (puVar7 = puVar7 + 3; puVar7 < param_2; puVar7 = puVar7 + 1) {
        *puVar7 = *(undefined8 *)((long)puVar7 + uVar17);
      }
      uVar15 = lVar14 - ((long)param_3 - (long)param_2 >> 6);
      uVar15 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
      puVar26 = puVar25 + bVar5;
    } while ((long)uVar15 < lVar14);
LAB_0012b5ac:
    uVar16 = (ulong)param_2 & 7;
    puVar26 = puVar25 + bVar5;
  }
  if (0 < lVar14) {
    pbVar20 = (byte *)local_80[uVar16];
    puVar22 = puVar23;
    do {
      bVar4 = *pbVar20;
      uVar15 = (ulong)(bVar4 >> 3) & 3;
      local_80[uVar16] = pbVar20 + 1;
      local_84 = *puVar26;
      puVar23 = puVar22 + 1;
      uVar16 = (ulong)*puVar22;
      if (uVar15 != 3) {
        puVar23 = puVar22;
        uVar16 = uVar15;
      }
      if ((long)param_3 - (long)param_2 < (long)uVar16) {
        FUN_0010a430();
        pcVar13 = *(code **)PTR_PTR_043722f8;
        if (pcVar13 == (code *)0x0) goto LAB_0012b874;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
        pcVar11 = "OODLE ERROR : corruption : (match_zone_end - to_ptr) >= lrl\n";
        uVar10 = 0x27d;
        goto LAB_0012b86c;
      }
      *param_2 = *__src;
      if (((8 < uVar16) && (param_2[1] = __src[1], 0x10 < uVar16)) &&
         (param_2[2] = __src[2], 0x18 < uVar16)) {
        lVar6 = 0x1f - uVar16;
        lVar21 = uVar16 - 0x18;
        if (lVar6 < 0) {
          lVar6 = -1;
        }
        uVar15 = lVar21 + lVar6;
        uVar3 = ((uint)(uVar15 >> 3) & 0x1fffffff) + 1;
        param_2 = param_2 + 3;
        __src = __src + 3;
        if ((uVar3 & 7) != 0) {
          lVar6 = -((ulong)uVar3 & 7);
          puVar7 = __src;
          puVar12 = param_2;
          do {
            __src = puVar7 + 1;
            lVar21 = lVar21 + -8;
            lVar6 = lVar6 + 1;
            param_2 = puVar12 + 1;
            *puVar12 = *puVar7;
            puVar7 = __src;
            puVar12 = param_2;
          } while (lVar6 != 0);
        }
        if (0x37 < uVar15) {
          do {
            *param_2 = *__src;
            param_2[1] = __src[1];
            param_2[2] = __src[2];
            param_2[3] = __src[3];
            param_2[4] = __src[4];
            param_2[5] = __src[5];
            param_2[6] = __src[6];
            puVar7 = __src + 7;
            lVar21 = lVar21 + -0x40;
            __src = __src + 8;
            param_2[7] = *puVar7;
            param_2 = param_2 + 8;
          } while (0 < lVar21);
        }
        uVar16 = (uVar16 - 0x20) - (uVar15 & 0xfffffffffffffff8);
      }
      puVar7 = (undefined8 *)((long)param_2 + uVar16);
      piVar18 = (int *)((ulong)auStack_c0 | 0x20 | (ulong)(bVar4 >> 5) << 2);
      local_a0 = *piVar18;
      uVar15 = (ulong)local_a0;
      __src = (undefined8 *)((long)__src + uVar16);
      *(undefined8 *)(piVar18 + -1) = *(undefined8 *)(piVar18 + -2);
      *(undefined8 *)(piVar18 + -3) = *(undefined8 *)(piVar18 + -4);
      *(undefined8 *)(piVar18 + -5) = *(undefined8 *)(piVar18 + -6);
      *(undefined8 *)(piVar18 + -7) = *(undefined8 *)(piVar18 + -8);
      if (uVar15 < (ulong)(param_5 - (long)puVar7)) goto LAB_0012b818;
      puVar12 = (undefined8 *)((long)puVar7 + uVar15);
      lVar6 = ((ulong)bVar4 & 7) + 2;
      if (lVar6 == 9) {
        if (puVar24 <= puVar23) goto LAB_0012b904;
        puVar24 = puVar24 + -1;
        uVar3 = *puVar24;
        *puVar7 = *puVar12;
        uVar3 = uVar3 + 6;
        param_2 = (undefined8 *)((long)puVar7 + (ulong)uVar3);
        puVar7[1] = puVar12[1];
        uVar16 = (ulong)param_2 & 7;
        pbVar20 = (byte *)local_80[uVar16];
        if (0x10 < uVar3) {
          if ((ulong)((long)param_4 + (-8 - (long)puVar7)) < (ulong)uVar3) goto LAB_0012b930;
          puVar7[2] = puVar12[2];
          for (puVar7 = puVar7 + 3; puVar7 < param_2; puVar7 = puVar7 + 1) {
            *puVar7 = *(undefined8 *)((long)puVar7 + uVar15);
          }
        }
      }
      else {
        param_2 = (undefined8 *)((long)puVar7 + lVar6);
        *puVar7 = *puVar12;
        uVar16 = (ulong)param_2 & 7;
        pbVar20 = (byte *)local_80[uVar16];
      }
      lVar14 = lVar14 + -1;
      puVar26 = puVar26 + ((ulong)(bVar4 >> 5) == 7);
      puVar22 = puVar23;
    } while (0 < lVar14);
  }
  if (param_2 < param_4) {
    memcpy(param_2,__src,(long)param_4 - (long)param_2);
  }
  else if (param_2 != param_4) {
    FUN_0010a430();
    pcVar13 = *(code **)PTR_PTR_043722f8;
    if (pcVar13 == (code *)0x0) goto LAB_0012b874;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar11 = "OODLE ERROR : corruption : to_ptr == chunk_end\n";
    uVar10 = 0x192;
    goto LAB_0012b86c;
  }
  if (puVar26 == puVar1 + lVar2) {
    if (puVar23 == puVar24) {
      return 1;
    }
    FUN_0010a430();
    pcVar13 = *(code **)PTR_PTR_043722f8;
    if (pcVar13 == (code *)0x0) goto LAB_0012b874;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar11 = "OODLE ERROR : corruption : excesses_ptr == excesses_end_ptr\n";
    uVar10 = 0x19c;
  }
  else {
    FUN_0010a430();
    pcVar13 = *(code **)PTR_PTR_043722f8;
    if (pcVar13 == (code *)0x0) goto LAB_0012b874;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_outer.inl";
    pcVar11 = "OODLE ERROR : corruption : offsets_ptr == offsets_end\n";
    uVar10 = 0x19b;
  }
LAB_0012b86c:
  (*pcVar13)(0,pcVar8,uVar10,pcVar11);
LAB_0012b874:
  FUN_0010a450();
  return 0;
LAB_0012b818:
  FUN_0010a430();
  pcVar13 = *(code **)PTR_PTR_043722f8;
  if (pcVar13 == (code *)0x0) goto LAB_0012b874;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar11 = "OODLE ERROR : corruption : (UINTa)neg_offset >= (UINTa) (window_base - to_ptr)\n";
  uVar10 = 0x301;
  goto LAB_0012b86c;
LAB_0012b904:
  FUN_0010a430();
  pcVar13 = *(code **)PTR_PTR_043722f8;
  if (pcVar13 == (code *)0x0) goto LAB_0012b874;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar11 = "OODLE ERROR : corruption : excesses_end_ptr > excesses_ptr\n";
  uVar10 = 0x323;
  goto LAB_0012b86c;
LAB_0012b930:
  FUN_0010a430();
  pcVar13 = *(code **)PTR_PTR_043722f8;
  if (pcVar13 == (code *)0x0) goto LAB_0012b874;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzhc_decode_parse_inner.inl";
  pcVar11 = "OODLE ERROR : corruption : (UINTa)(match_end - to_ptr) >= ml\n";
  uVar10 = 0x341;
  goto LAB_0012b86c;
}


