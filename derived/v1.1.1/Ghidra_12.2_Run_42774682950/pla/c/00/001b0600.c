/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b0600; name: FUN_001b0600
 */


undefined4 FUN_001b0600(undefined1 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  char *pcVar23;
  char *local_120;
  char *local_118;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *local_70;
  
  FUN_032c3f5c(&local_120,*(long *)PTR_DAT_04372550 + 0x18);
  local_78 = local_120;
  local_70 = local_118;
  if (local_120 == local_118) {
    uVar14 = 0xffff000b;
    goto LAB_001b0a84;
  }
  if (((((int)local_118 - (int)local_120) - 0x24U < 0xdd) && (*local_120 == '0')) &&
     (local_120[1] == 'x')) {
    uVar12 = (byte)local_120[2] - 0x30;
    if ((0x36 < uVar12) || ((0x7e0000007e03ffU >> ((ulong)uVar12 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar15 = (byte)local_120[3] - 0x30;
    if ((0x36 < uVar15) || ((0x7e0000007e03ffU >> ((ulong)uVar15 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar21 = (byte)local_120[4] - 0x30;
    if ((0x36 < uVar21) || ((0x7e0000007e03ffU >> ((ulong)uVar21 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar17 = (byte)local_120[5] - 0x30;
    if ((0x36 < uVar17) || ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar16 = (byte)local_120[6] - 0x30;
    if ((0x36 < uVar16) || ((0x7e0000007e03ffU >> ((ulong)uVar16 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar10 = (byte)local_120[7] - 0x30;
    if ((0x36 < uVar10) || ((0x7e0000007e03ffU >> ((ulong)uVar10 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar11 = (byte)local_120[8] - 0x30;
    if ((0x36 < uVar11) || ((0x7e0000007e03ffU >> ((ulong)uVar11 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar2 = (byte)local_120[9] - 0x30;
    if ((0x36 < uVar2) || ((0x7e0000007e03ffU >> ((ulong)uVar2 & 0x3f) & 1) == 0))
    goto LAB_001b0a80;
    uVar12 = *(int *)(&DAT_039c6ab0 + (long)(char)uVar2 * 4) + (uint)(byte)local_120[9] +
             (*(int *)(&DAT_039c6ab0 + (long)(char)uVar11 * 4) + (uint)(byte)local_120[8] +
             (*(int *)(&DAT_039c6ab0 + (long)(char)uVar10 * 4) + (uint)(byte)local_120[7] +
             (*(int *)(&DAT_039c6ab0 + (long)(char)uVar16 * 4) + (uint)(byte)local_120[6] +
             (*(int *)(&DAT_039c6ab0 + (long)(char)uVar17 * 4) + (uint)(byte)local_120[5] +
             (*(int *)(&DAT_039c6ab0 + (long)(char)uVar21 * 4) + (uint)(byte)local_120[4] +
             (*(int *)(&DAT_039c6ab0 + (long)(char)uVar15 * 4) + (uint)(byte)local_120[3] +
             (*(int *)(&DAT_039c6ab0 + (long)(char)uVar12 * 4) + (uint)(byte)local_120[2]) * 0x10) *
             0x10) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10;
    pcVar13 = local_120 + 10;
    local_78 = pcVar13;
    if (-1 < (int)uVar12) {
      if (((*pcVar13 == '-') && (local_78 = local_120 + 0xb, local_120[0xb] == '0')) &&
         (local_120[0xc] == 'x')) {
        uVar15 = (byte)local_120[0xd] - 0x30;
        if ((uVar15 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar15 & 0x3f) & 1) != 0)) {
          uVar21 = (byte)local_120[0xe] - 0x30;
          if ((uVar21 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar21 & 0x3f) & 1) != 0)) {
            uVar17 = (byte)local_120[0xf] - 0x30;
            if ((uVar17 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) != 0)) {
              uVar16 = (byte)local_120[0x10] - 0x30;
              if ((uVar16 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar16 & 0x3f) & 1) != 0)) {
                uVar10 = (byte)local_120[0x11] - 0x30;
                if ((uVar10 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar10 & 0x3f) & 1) != 0)) {
                  uVar11 = (byte)local_120[0x12] - 0x30;
                  if ((uVar11 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar11 & 0x3f) & 1) != 0)) {
                    uVar2 = (byte)local_120[0x13] - 0x30;
                    if ((uVar2 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar2 & 0x3f) & 1) != 0)) {
                      uVar3 = (byte)local_120[0x14] - 0x30;
                      if ((uVar3 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar3 & 0x3f) & 1) != 0))
                      {
                        pcVar13 = local_120 + 0x15;
                        uVar15 = *(int *)(&DAT_039c6ab0 + (long)(char)uVar3 * 4) +
                                 (uint)(byte)local_120[0x14] +
                                 (*(int *)(&DAT_039c6ab0 + (long)(char)uVar2 * 4) +
                                  (uint)(byte)local_120[0x13] +
                                 (*(int *)(&DAT_039c6ab0 + (long)(char)uVar11 * 4) +
                                  (uint)(byte)local_120[0x12] +
                                 (*(int *)(&DAT_039c6ab0 + (long)(char)uVar10 * 4) +
                                  (uint)(byte)local_120[0x11] +
                                 (*(int *)(&DAT_039c6ab0 + (long)(char)uVar16 * 4) +
                                  (uint)(byte)local_120[0x10] +
                                 (*(int *)(&DAT_039c6ab0 + (long)(char)uVar17 * 4) +
                                  (uint)(byte)local_120[0xf] +
                                 (*(int *)(&DAT_039c6ab0 + (long)(char)uVar21 * 4) +
                                  (uint)(byte)local_120[0xe] +
                                 (*(int *)(&DAT_039c6ab0 + (long)(char)uVar15 * 4) +
                                 (uint)(byte)local_120[0xd]) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10)
                                 * 0x10) * 0x10;
                        local_78 = pcVar13;
                        if (*pcVar13 == ':') goto LAB_001b0964;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_001b0a80;
    }
    uVar15 = 0xffffffff;
    if (*pcVar13 != ':') goto LAB_001b0a80;
LAB_001b0964:
    local_78 = pcVar13 + 1;
    if (9 < (uint)((ulong)(byte)pcVar13[1] - 0x30)) goto LAB_001b0a80;
    local_78 = pcVar13 + 2;
    if (9 < (uint)((ulong)(byte)pcVar13[2] - 0x30)) goto LAB_001b0a80;
    local_78 = pcVar13 + 3;
    if (9 < (uint)((ulong)(byte)pcVar13[3] - 0x30)) goto LAB_001b0a80;
    local_78 = pcVar13 + 4;
    if ((9 < (uint)((ulong)(byte)pcVar13[4] - 0x30)) || (local_78 = pcVar13 + 5, pcVar13[5] != '-'))
    goto LAB_001b0a80;
    local_78 = pcVar13 + 6;
    if (9 < (uint)((ulong)(byte)pcVar13[6] - 0x30)) goto LAB_001b0a80;
    local_78 = pcVar13 + 7;
    if ((9 < (uint)((ulong)(byte)pcVar13[7] - 0x30)) || (local_78 = pcVar13 + 8, pcVar13[8] != '-'))
    goto LAB_001b0a80;
    local_78 = pcVar13 + 9;
    if (9 < (uint)((ulong)(byte)pcVar13[9] - 0x30)) goto LAB_001b0a80;
    local_78 = pcVar13 + 10;
    if ((9 < (uint)((ulong)(byte)pcVar13[10] - 0x30)) ||
       (local_78 = pcVar13 + 0xb, pcVar13[0xb] != '.')) goto LAB_001b0a80;
    uVar22 = ((ulong)(byte)pcVar13[4] - 0x30) +
             (((ulong)(byte)pcVar13[3] - 0x30) +
             (((ulong)(byte)pcVar13[2] - 0x30) + ((ulong)(byte)pcVar13[1] - 0x30) * 10) * 10) * 10;
    local_78 = pcVar13 + 0xc;
    uVar21 = (uint)uVar22;
    if ((int)uVar21 < 0x7ce) goto LAB_001b0a80;
    lVar18 = ((ulong)(byte)pcVar13[7] - 0x30) + ((ulong)(byte)pcVar13[6] - 0x30) * 10;
    uVar14 = 0xffff000c;
    uVar17 = (uint)lVar18;
    if (uVar17 < 0xd) {
      lVar20 = ((ulong)(byte)pcVar13[10] - 0x30) + ((ulong)(byte)pcVar13[9] - 0x30) * 10;
      uVar16 = 1 << (ulong)(uVar17 & 0x1f);
      iVar19 = (int)lVar20;
      if ((uVar16 & 0x15aa) == 0) {
        if ((uVar16 & 0xa50) == 0) {
          if (((uVar17 == 2) && (uVar14 = 0xffff000c, iVar19 != 0)) && (iVar19 < 0x1e))
          goto LAB_001b0b54;
        }
        else {
          uVar14 = 0xffff000c;
          if ((iVar19 != 0) && (iVar19 < 0x1f)) {
LAB_001b0b54:
            uVar5 = FUN_001c96f4(0);
            FUN_032c3f5c(&local_88,uVar5);
            local_120 = local_88;
            local_118 = pcStack_80;
            uVar7 = FUN_032c422c(&local_78,&local_120);
            if ((uVar7 & 1) != 0) {
              local_78 = local_78 + ((int)local_118 - (int)local_120);
              if (*local_78 == '.') {
                uVar16 = 0x7dd5b822;
                pcVar13 = local_78 + 1;
                local_78 = pcVar13;
                if ((int)uVar12 < 0) {
                  local_120 = "Evaluation.";
                  local_118 = "";
                  uVar7 = FUN_032c422c(&local_78,&local_120);
                  pcVar23 = local_70;
                  if ((uVar7 & 1) == 0) goto LAB_001b0a80;
                  pcVar13 = local_78 + ((int)local_118 - (int)local_120);
                  local_78 = pcVar13;
                  uVar7 = thunk_FUN_032ba130();
                  lVar8 = FUN_001c9570();
                  if ((uVar7 < lVar8 - 0x1e13380U) ||
                     (uVar10 = uVar12 & 0x7fffffff ^ 0x7dd5b822, uVar10 < (uint)(uVar7 >> 8))) {
                    uVar14 = 0xffff000f;
                    goto LAB_001b0a84;
                  }
                }
                else {
                  uVar10 = uVar12 & 0x7fffffff ^ 0x7dd5b822;
                  pcVar23 = local_70;
                }
                uVar11 = uVar21 & 0xffff;
                iVar19 = (int)((ulong)((long)(int)uVar21 * -0x51eb851f) >> 0x20);
                if ((uVar22 & 3) == 0) {
                  if ((uVar11 * -0x3d70a3d7 >> 2 | uVar21 * 0x40000000) < 0x28f5c29) {
                    bVar4 = (uVar21 + (uVar11 / 400) * -400 & 0xffff) == 0;
                  }
                  else {
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = false;
                }
                lVar8 = -0x1de;
                if (!(bool)((int)uVar17 < 3 & bVar4)) {
                  lVar8 = -0x1dd;
                }
                uVar17 = uVar10 + 0x3f4;
                uVar11 = (uint)((lVar20 + (long)((iVar19 >> 5) - (iVar19 >> 0x1f)) +
                                          (ulong)(uVar21 >> 2) + (ulong)uVar11 / 400 +
                                          uVar22 * 0x16d + -0xaf8ca +
                                 *(long *)(&DAT_039c6a48 + lVar18 * 8) + lVar8) * 0x15180 + -0x15180
                               >> 8);
                uVar21 = uVar11 + 0x3f4;
                if (((int)uVar12 < 0) || (uVar17 < uVar11 || uVar21 < uVar10)) {
                  uVar14 = 0xffff000f;
                  if (uVar17 >= uVar11 && uVar21 >= uVar10) {
                    uVar14 = 0;
                  }
                  if ((uVar17 < uVar11) || (uVar21 < uVar10)) goto LAB_001b0a84;
                }
                else {
                  uVar22 = (long)pcVar23 - (long)pcVar13;
                  if (0 < (int)uVar22) {
                    if ((uVar22 & 0xffffffff) == 1) {
                      lVar18 = 0;
                      uVar12 = 0;
                    }
                    else {
                      lVar18 = 0;
                      uVar12 = 0;
                      do {
                        pbVar1 = (byte *)(pcVar13 + lVar18);
                        lVar18 = lVar18 + 2;
                        uVar12 = ((uint)pbVar1[1] + (uVar12 + *pbVar1) * 0x17) * 0x17;
                      } while ((uVar22 & 0xffffffff) - (uVar22 & 1) != lVar18);
                    }
                    if ((uVar22 & 1) != 0) {
                      uVar12 = (uVar12 + (byte)pcVar13[lVar18]) * 0x17;
                    }
                    uVar16 = uVar12 & 0x7fffffff ^ 0x7dd5b822;
                  }
                  if (uVar15 != uVar16) goto LAB_001b0a80;
                }
                uVar14 = 0;
                uVar9 = 1;
                goto LAB_001b0acc;
              }
            }
            goto LAB_001b0a80;
          }
        }
      }
      else {
        uVar14 = 0xffff000c;
        if ((iVar19 != 0) && (iVar19 < 0x20)) goto LAB_001b0b54;
      }
    }
  }
  else {
LAB_001b0a80:
    uVar14 = 0xffff000c;
  }
LAB_001b0a84:
  FUN_032c4d3c(&local_120);
  uVar5 = FUN_001ca1ac(uVar14);
  uVar6 = FUN_001c96f4(0);
  FUN_032c53d8(&local_120,
               "Keycode Error: %s\n Product: %s Key Code is invalid or is for a different product version.\nPlease contact Havok.com\nNo simulation possible."
               ,uVar5,uVar6);
  FUN_03320020(local_120);
  FUN_032c4ce8(&local_120);
  uVar9 = 0;
LAB_001b0acc:
  *param_1 = uVar9;
  return uVar14;
}


