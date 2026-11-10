/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0011e3e0; name: FUN_0011e3e0
 */


undefined8 FUN_0011e3e0(long *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 uVar11;
  ushort uVar12;
  char *pcVar13;
  ulong uVar14;
  code *pcVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong *puVar28;
  uint uVar29;
  byte *pbVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  int *piVar34;
  uint *puVar35;
  int iVar36;
  ulong uVar37;
  byte *pbVar38;
  byte *pbVar39;
  int *piVar40;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  ushort local_4c8 [268];
  ulong *local_2b0;
  long local_2a8;
  ulong local_2a0;
  ulong local_298;
  byte abStack_290 [8];
  undefined8 auStack_288 [65];
  byte *local_80;
  long lStack_78;
  uint local_70;
  
  puVar28 = (ulong *)*param_1;
  local_2a8 = param_1[1];
  uVar19 = param_1[3];
  if (local_2a8 - (long)puVar28 < 8) {
    if (local_2a8 - (long)puVar28 < 1) {
      uVar25 = 0;
      if (local_2a8 - (long)((long)puVar28 + 1) < 1) goto LAB_0011e494;
LAB_0011e448:
      uVar16 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
      if (0 < local_2a8 - (long)((long)puVar28 + 2)) goto LAB_0011e460;
LAB_0011e4a8:
      uVar31 = 0;
      if (local_2a8 - (long)((long)puVar28 + 3) < 1) goto LAB_0011e4bc;
LAB_0011e478:
      uVar14 = (ulong)*(byte *)((long)puVar28 + 3);
    }
    else {
      uVar25 = (uint)(byte)*puVar28 << 0x18;
      if (0 < local_2a8 - (long)((long)puVar28 + 1)) goto LAB_0011e448;
LAB_0011e494:
      uVar16 = 0;
      if (local_2a8 - (long)((long)puVar28 + 2) < 1) goto LAB_0011e4a8;
LAB_0011e460:
      uVar31 = (uint)*(byte *)((long)puVar28 + 2) << 8;
      if (0 < local_2a8 - (long)((long)puVar28 + 3)) goto LAB_0011e478;
LAB_0011e4bc:
      uVar14 = 0;
    }
    if (local_2a8 - ((long)puVar28 + 4) < 1) {
      uVar26 = 0;
      if (local_2a8 - (long)((long)puVar28 + 5) < 1) goto LAB_0011e510;
LAB_0011e4f0:
      uVar29 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
    }
    else {
      uVar26 = (uint)*(byte *)((long)puVar28 + 4) << 0x18;
      if (0 < local_2a8 - (long)((long)puVar28 + 5)) goto LAB_0011e4f0;
LAB_0011e510:
      uVar29 = 0;
    }
    if (local_2a8 - ((long)puVar28 + 6) < 1) {
      uVar32 = 0;
    }
    else {
      uVar32 = (uint)*(byte *)((long)puVar28 + 6) << 8;
    }
    if (local_2a8 - ((long)puVar28 + 7) < 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = (ulong)*(byte *)((long)puVar28 + 7);
    }
    uVar23 = (ulong)(uVar29 | uVar26 | uVar32) | (uVar14 | (uVar16 | uVar25 | uVar31)) << 0x20 |
             uVar23;
  }
  else {
    uVar14 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar23 = uVar14 >> 0x20 | uVar14 << 0x20;
  }
  uVar14 = uVar19 & 7;
  uVar23 = uVar23 >> (0x3f - uVar19 & 0x3f) | param_1[2];
  puVar28 = (ulong *)((long)puVar28 + ((long)uVar19 >> 3));
  uVar25 = (uint)(uVar23 >> 0x20);
  if ((long)uVar23 < 0) {
    uVar16 = uVar25 >> 0x14 & 0xff;
    uVar25 = uVar16 + 1;
    if (uVar25 < 2) {
      return 0;
    }
    lVar24 = uVar14 + 0xc;
    if (uVar25 == 0x100) {
      iVar7 = 0;
    }
    else {
      uVar16 = 0x100 - uVar16;
      uVar31 = uVar25;
      if (uVar16 <= uVar25) {
        uVar31 = uVar16;
      }
      iVar7 = (int)LZCOUNT(uVar31 * 2 + -1);
      iVar10 = -iVar7;
      uVar16 = iVar10 + 0x20;
      iVar36 = (1 << (ulong)(-iVar7 & 0x1f)) + uVar31 * -2;
      iVar17 = (int)((uVar23 << 0xc) >> ((ulong)-uVar16 & 0x3f));
      iVar7 = iVar17 >> 1;
      if (iVar7 < iVar36) {
        uVar16 = iVar10 + 0x1f;
      }
      else {
        iVar7 = iVar17 - iVar36;
      }
      lVar24 = lVar24 + (ulong)uVar16;
    }
    local_80 = (byte *)((long)puVar28 - (0x46U - lVar24 >> 3));
    uVar14 = (ulong)(iVar7 + uVar25);
    local_70 = (int)lVar24 + 1U & 7;
    lStack_78 = local_2a8;
    uVar19 = FUN_0011c080(abStack_290,uVar14,&local_80);
    if (uVar19 != uVar14) {
      return 0;
    }
    pbVar9 = abStack_290 + uVar14;
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    *(undefined8 *)((long)auStack_288 + uVar14) = 0;
    local_2a8 = lStack_78;
    if (lStack_78 - (long)local_80 < 1) {
      uVar19 = 0;
    }
    else {
      uVar19 = (ulong)*local_80 << 0x38;
    }
    puVar28 = (ulong *)(local_80 + 1);
    if (lStack_78 - (long)puVar28 < 8) {
      if (lStack_78 - (long)puVar28 < 1) {
        uVar16 = 0;
        if (lStack_78 - (long)(local_80 + 2) < 1) goto LAB_0011ee8c;
LAB_0011ebd0:
        uVar31 = (uint)local_80[2] << 0x10;
        if (0 < lStack_78 - (long)(local_80 + 3)) goto LAB_0011ebe8;
LAB_0011eea0:
        uVar26 = 0;
        if (lStack_78 - (long)(local_80 + 4) < 1) goto LAB_0011eeb4;
LAB_0011ec00:
        uVar14 = (ulong)local_80[4];
      }
      else {
        uVar16 = (uint)(byte)*puVar28 << 0x18;
        if (0 < lStack_78 - (long)(local_80 + 2)) goto LAB_0011ebd0;
LAB_0011ee8c:
        uVar31 = 0;
        if (lStack_78 - (long)(local_80 + 3) < 1) goto LAB_0011eea0;
LAB_0011ebe8:
        uVar26 = (uint)local_80[3] << 8;
        if (0 < lStack_78 - (long)(local_80 + 4)) goto LAB_0011ec00;
LAB_0011eeb4:
        uVar14 = 0;
      }
      if (lStack_78 - (long)(local_80 + 5) < 1) {
        uVar29 = 0;
      }
      else {
        uVar29 = (uint)local_80[5] << 0x18;
      }
      if (lStack_78 - (long)(local_80 + 6) < 1) {
        uVar32 = 0;
      }
      else {
        uVar32 = (uint)local_80[6] << 0x10;
      }
      if (lStack_78 - (long)(local_80 + 7) < 1) {
        uVar27 = 0;
      }
      else {
        uVar27 = (uint)local_80[7] << 8;
      }
      uVar14 = (ulong)(uVar32 | uVar29 | uVar27) | (uVar14 | (uVar31 | uVar16 | uVar26)) << 0x20;
    }
    else {
      uVar14 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
    }
    local_2b0 = (ulong *)(local_80 + 7);
    local_2a0 = (uVar19 | uVar14 >> 8) << ((ulong)local_70 & 0x3f);
    local_298 = (ulong)local_70 + 7;
    iVar7 = FUN_0011c5e0(local_4c8,uVar25,iVar7,abStack_290 + uVar25,&local_2b0);
    if (iVar7 < 0) {
      return 0;
    }
    if (local_2a8 - (long)local_2b0 < 8) {
      if (local_2a8 - (long)local_2b0 < 1) {
        uVar25 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 1) < 1) goto LAB_0011f010;
LAB_0011efc4:
        uVar16 = (uint)*(byte *)((long)local_2b0 + 1) << 0x10;
        if (0 < local_2a8 - (long)((long)local_2b0 + 2)) goto LAB_0011efdc;
LAB_0011f024:
        uVar31 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 3) < 1) goto LAB_0011f038;
LAB_0011eff4:
        uVar19 = (ulong)*(byte *)((long)local_2b0 + 3);
      }
      else {
        uVar25 = (uint)(byte)*local_2b0 << 0x18;
        if (0 < local_2a8 - (long)((long)local_2b0 + 1)) goto LAB_0011efc4;
LAB_0011f010:
        uVar16 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 2) < 1) goto LAB_0011f024;
LAB_0011efdc:
        uVar31 = (uint)*(byte *)((long)local_2b0 + 2) << 8;
        if (0 < local_2a8 - (long)((long)local_2b0 + 3)) goto LAB_0011eff4;
LAB_0011f038:
        uVar19 = 0;
      }
      if (local_2a8 - ((long)local_2b0 + 4) < 1) {
        uVar26 = 0;
        if (local_2a8 - (long)((long)local_2b0 + 5) < 1) goto LAB_0011f08c;
LAB_0011f06c:
        uVar29 = (uint)*(byte *)((long)local_2b0 + 5) << 0x10;
      }
      else {
        uVar26 = (uint)*(byte *)((long)local_2b0 + 4) << 0x18;
        if (0 < local_2a8 - (long)((long)local_2b0 + 5)) goto LAB_0011f06c;
LAB_0011f08c:
        uVar29 = 0;
      }
      if (local_2a8 - ((long)local_2b0 + 6) < 1) {
        uVar32 = 0;
      }
      else {
        uVar32 = (uint)*(byte *)((long)local_2b0 + 6) << 8;
      }
      if (local_2a8 - ((long)local_2b0 + 7) < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulong)*(byte *)((long)local_2b0 + 7);
      }
      uVar14 = (ulong)(uVar29 | uVar26 | uVar32) | (uVar19 | (uVar16 | uVar25 | uVar31)) << 0x20 |
               uVar14;
    }
    else {
      uVar19 = (*local_2b0 & 0xff00ff00ff00ff00) >> 8 | (*local_2b0 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar19 >> 0x20 | uVar19 << 0x20;
    }
    uVar19 = local_298 & 7;
    uVar18 = uVar14 >> (0x3f - local_298 & 0x3f) | local_2a0;
    puVar28 = (ulong *)((long)local_2b0 + ((long)local_298 >> 3));
    piVar2 = param_3 + 2;
    piVar3 = param_3 + 0x42;
    piVar40 = piVar2;
    piVar34 = piVar3;
    if (iVar7 < 1) {
      iVar36 = 0;
    }
    else {
      uVar14 = uVar23 >> 0x3c & 7;
      iVar36 = 0;
      lVar24 = 0;
      iVar10 = 6;
      pbVar9 = abStack_290;
      do {
        uVar12 = local_4c8[lVar24 * 2];
        uVar25 = (uint)uVar12 << 0x10 | 1;
        iVar17 = -(uint)*(ushort *)((long)local_4c8 + (lVar24 << 2 | 2U));
        pbVar8 = pbVar9;
        do {
          if (local_2a8 - (long)puVar28 < 8) {
            if (local_2a8 - (long)puVar28 < 1) {
              uVar16 = 0;
              if (local_2a8 - (long)((long)puVar28 + 1) < 1) goto LAB_0011f1e8;
LAB_0011f19c:
              uVar31 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
              if (0 < local_2a8 - (long)((long)puVar28 + 2)) goto LAB_0011f1b4;
LAB_0011f1fc:
              uVar26 = 0;
              if (local_2a8 - (long)((long)puVar28 + 3) < 1) goto LAB_0011f210;
LAB_0011f1cc:
              uVar23 = (ulong)*(byte *)((long)puVar28 + 3);
            }
            else {
              uVar16 = (uint)(byte)*puVar28 << 0x18;
              if (0 < local_2a8 - (long)((long)puVar28 + 1)) goto LAB_0011f19c;
LAB_0011f1e8:
              uVar31 = 0;
              if (local_2a8 - (long)((long)puVar28 + 2) < 1) goto LAB_0011f1fc;
LAB_0011f1b4:
              uVar26 = (uint)*(byte *)((long)puVar28 + 2) << 8;
              if (0 < local_2a8 - (long)((long)puVar28 + 3)) goto LAB_0011f1cc;
LAB_0011f210:
              uVar23 = 0;
            }
            if (local_2a8 - ((long)puVar28 + 4) < 1) {
              uVar29 = 0;
              if (local_2a8 - (long)((long)puVar28 + 5) < 1) goto LAB_0011f264;
LAB_0011f244:
              uVar32 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
            }
            else {
              uVar29 = (uint)*(byte *)((long)puVar28 + 4) << 0x18;
              if (0 < local_2a8 - (long)((long)puVar28 + 5)) goto LAB_0011f244;
LAB_0011f264:
              uVar32 = 0;
            }
            if (local_2a8 - ((long)puVar28 + 6) < 1) {
              uVar27 = 0;
            }
            else {
              uVar27 = (uint)*(byte *)((long)puVar28 + 6) << 8;
            }
            if (local_2a8 - ((long)puVar28 + 7) < 1) {
              uVar37 = 0;
            }
            else {
              uVar37 = (ulong)*(byte *)((long)puVar28 + 7);
            }
            uVar37 = (ulong)(uVar32 | uVar29 | uVar27) |
                     (uVar23 | (uVar31 | uVar16 | uVar26)) << 0x20 | uVar37;
          }
          else {
            uVar23 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar37 = uVar23 >> 0x20 | uVar23 << 0x20;
          }
          puVar28 = (ulong *)((long)puVar28 + (uVar19 >> 3));
          pbVar9 = pbVar8 + 1;
          uVar37 = uVar37 >> (0x3f - uVar19 & 0x3f) | uVar18;
          uVar23 = uVar14 + *pbVar8;
          uVar16 = (uint)uVar23;
          if (0xf < uVar16) {
            FUN_0010a430();
            pcVar15 = *(code **)PTR_PTR_043722f8;
            if (pcVar15 == (code *)0x0) goto LAB_0011f3f0;
            pcVar13 = "OODLE ERROR : corruption : nextra <= 15\n";
            uVar11 = 0x490;
            goto LAB_0011f3e8;
          }
          iVar4 = iVar10 >> 2;
          uVar18 = uVar37 << (uVar23 & 0x3f);
          uVar19 = (uVar19 & 7) + uVar23;
          uVar16 = ((1 << (ulong)(uVar16 & 0x1f)) - (1 << uVar14)) +
                   (int)((uVar37 >> 1) >> ((ulong)(0x3f - uVar16) & 0x3f));
          uVar31 = iVar4 * 2;
          if ((int)uVar16 <= (int)uVar31) {
            uVar16 = (-(uVar16 & 1) ^ uVar16 >> 1) + iVar4;
          }
          uVar26 = uVar16;
          if ((int)uVar31 <= (int)uVar16) {
            uVar26 = uVar31;
          }
          iVar10 = uVar26 + (iVar10 - iVar4);
          *(char *)piVar40 = (char)uVar12;
          if (uVar16 == 0) {
            piVar40 = (int *)((long)piVar40 + 1);
          }
          *piVar34 = uVar16 + uVar25;
          piVar34 = piVar34 + (1 < (int)(uVar16 + 1));
          iVar36 = uVar16 + 1 + iVar36;
          uVar12 = uVar12 + 1;
          uVar25 = uVar25 + 0x10000;
          iVar17 = iVar17 + 1;
          pbVar8 = pbVar9;
        } while (iVar17 != 0);
        lVar24 = lVar24 + 1;
      } while (lVar24 < iVar7);
    }
    *param_3 = (int)piVar40 - (int)piVar2;
    param_3[1] = (int)((ulong)((long)piVar34 - (long)piVar3) >> 2);
    if (iVar36 != 1 << (ulong)(param_2 & 0x1f)) {
      FUN_0010a430();
      pcVar15 = *(code **)PTR_PTR_043722f8;
      if (pcVar15 != (code *)0x0) {
        pcVar13 = "OODLE ERROR : corruption : count_sum == L\n";
        uVar11 = 0x4b7;
LAB_0011f3e8:
        (*pcVar15)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",uVar11,pcVar13);
      }
LAB_0011f3f0:
      FUN_0010a450();
      return 0;
    }
    goto LAB_0011f3fc;
  }
  local_4c8[0x78] = 0;
  local_4c8[0x79] = 0;
  local_4c8[0x7a] = 0;
  local_4c8[0x7b] = 0;
  local_4c8[0x7c] = 0;
  local_4c8[0x7d] = 0;
  local_4c8[0x7e] = 0;
  local_4c8[0x7f] = 0;
  local_4c8[0x70] = 0;
  local_4c8[0x71] = 0;
  local_4c8[0x72] = 0;
  local_4c8[0x73] = 0;
  local_4c8[0x74] = 0;
  local_4c8[0x75] = 0;
  local_4c8[0x76] = 0;
  local_4c8[0x77] = 0;
  local_4c8[0x68] = 0;
  local_4c8[0x69] = 0;
  local_4c8[0x6a] = 0;
  local_4c8[0x6b] = 0;
  local_4c8[0x6c] = 0;
  local_4c8[0x6d] = 0;
  local_4c8[0x6e] = 0;
  local_4c8[0x6f] = 0;
  local_4c8[0x60] = 0;
  local_4c8[0x61] = 0;
  local_4c8[0x62] = 0;
  local_4c8[99] = 0;
  local_4c8[100] = 0;
  local_4c8[0x65] = 0;
  local_4c8[0x66] = 0;
  local_4c8[0x67] = 0;
  local_4c8[0x58] = 0;
  local_4c8[0x59] = 0;
  local_4c8[0x5a] = 0;
  local_4c8[0x5b] = 0;
  local_4c8[0x5c] = 0;
  local_4c8[0x5d] = 0;
  local_4c8[0x5e] = 0;
  local_4c8[0x5f] = 0;
  local_4c8[0x50] = 0;
  local_4c8[0x51] = 0;
  local_4c8[0x52] = 0;
  local_4c8[0x53] = 0;
  local_4c8[0x54] = 0;
  local_4c8[0x55] = 0;
  local_4c8[0x56] = 0;
  local_4c8[0x57] = 0;
  local_4c8[0x48] = 0;
  local_4c8[0x49] = 0;
  local_4c8[0x4a] = 0;
  local_4c8[0x4b] = 0;
  local_4c8[0x4c] = 0;
  local_4c8[0x4d] = 0;
  local_4c8[0x4e] = 0;
  local_4c8[0x4f] = 0;
  local_4c8[0x40] = 0;
  local_4c8[0x41] = 0;
  local_4c8[0x42] = 0;
  local_4c8[0x43] = 0;
  local_4c8[0x44] = 0;
  local_4c8[0x45] = 0;
  local_4c8[0x46] = 0;
  local_4c8[0x47] = 0;
  local_4c8[0x38] = 0;
  local_4c8[0x39] = 0;
  local_4c8[0x3a] = 0;
  local_4c8[0x3b] = 0;
  local_4c8[0x3c] = 0;
  local_4c8[0x3d] = 0;
  local_4c8[0x3e] = 0;
  local_4c8[0x3f] = 0;
  local_4c8[0x30] = 0;
  local_4c8[0x31] = 0;
  local_4c8[0x32] = 0;
  local_4c8[0x33] = 0;
  local_4c8[0x34] = 0;
  local_4c8[0x35] = 0;
  local_4c8[0x36] = 0;
  local_4c8[0x37] = 0;
  local_4c8[0x28] = 0;
  local_4c8[0x29] = 0;
  local_4c8[0x2a] = 0;
  local_4c8[0x2b] = 0;
  local_4c8[0x2c] = 0;
  local_4c8[0x2d] = 0;
  local_4c8[0x2e] = 0;
  local_4c8[0x2f] = 0;
  local_4c8[0x20] = 0;
  local_4c8[0x21] = 0;
  local_4c8[0x22] = 0;
  local_4c8[0x23] = 0;
  local_4c8[0x24] = 0;
  local_4c8[0x25] = 0;
  local_4c8[0x26] = 0;
  local_4c8[0x27] = 0;
  local_4c8[0x18] = 0;
  local_4c8[0x19] = 0;
  local_4c8[0x1a] = 0;
  local_4c8[0x1b] = 0;
  local_4c8[0x1c] = 0;
  local_4c8[0x1d] = 0;
  local_4c8[0x1e] = 0;
  local_4c8[0x1f] = 0;
  local_4c8[0x10] = 0;
  local_4c8[0x11] = 0;
  local_4c8[0x12] = 0;
  local_4c8[0x13] = 0;
  local_4c8[0x14] = 0;
  local_4c8[0x15] = 0;
  local_4c8[0x16] = 0;
  local_4c8[0x17] = 0;
  local_4c8[8] = 0;
  local_4c8[9] = 0;
  local_4c8[10] = 0;
  local_4c8[0xb] = 0;
  local_4c8[0xc] = 0;
  local_4c8[0xd] = 0;
  local_4c8[0xe] = 0;
  local_4c8[0xf] = 0;
  local_4c8[0] = 0;
  local_4c8[1] = 0;
  local_4c8[2] = 0;
  local_4c8[3] = 0;
  local_4c8[4] = 0;
  local_4c8[5] = 0;
  local_4c8[6] = 0;
  local_4c8[7] = 0;
  if (local_2a8 - (long)puVar28 < 8) {
    if (local_2a8 - (long)puVar28 < 1) {
      uVar16 = 0;
      if (local_2a8 - (long)((long)puVar28 + 1) < 1) goto LAB_0011e680;
LAB_0011e634:
      uVar31 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
      if (0 < local_2a8 - (long)((long)puVar28 + 2)) goto LAB_0011e64c;
LAB_0011e694:
      uVar26 = 0;
      if (local_2a8 - (long)((long)puVar28 + 3) < 1) goto LAB_0011e6a8;
LAB_0011e664:
      uVar19 = (ulong)*(byte *)((long)puVar28 + 3);
    }
    else {
      uVar16 = (uint)(byte)*puVar28 << 0x18;
      if (0 < local_2a8 - (long)((long)puVar28 + 1)) goto LAB_0011e634;
LAB_0011e680:
      uVar31 = 0;
      if (local_2a8 - (long)((long)puVar28 + 2) < 1) goto LAB_0011e694;
LAB_0011e64c:
      uVar26 = (uint)*(byte *)((long)puVar28 + 2) << 8;
      if (0 < local_2a8 - (long)((long)puVar28 + 3)) goto LAB_0011e664;
LAB_0011e6a8:
      uVar19 = 0;
    }
    if (local_2a8 - ((long)puVar28 + 4) < 1) {
      uVar29 = 0;
      if (local_2a8 - (long)((long)puVar28 + 5) < 1) goto LAB_0011e6fc;
LAB_0011e6dc:
      uVar32 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
    }
    else {
      uVar29 = (uint)*(byte *)((long)puVar28 + 4) << 0x18;
      if (0 < local_2a8 - (long)((long)puVar28 + 5)) goto LAB_0011e6dc;
LAB_0011e6fc:
      uVar32 = 0;
    }
    if (local_2a8 - ((long)puVar28 + 6) < 1) {
      uVar27 = 0;
    }
    else {
      uVar27 = (uint)*(byte *)((long)puVar28 + 6) << 8;
    }
    if (local_2a8 - ((long)puVar28 + 7) < 1) {
      uVar18 = 0;
    }
    else {
      uVar18 = (ulong)*(byte *)((long)puVar28 + 7);
    }
    uVar18 = (ulong)(uVar32 | uVar29 | uVar27) | (uVar19 | (uVar31 | uVar16 | uVar26)) << 0x20 |
             uVar18;
  }
  else {
    uVar19 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar19 >> 0x20 | uVar19 << 0x20;
  }
  uVar16 = 0;
  if (param_2 != 0) {
    uVar16 = 0x20 - (int)LZCOUNT(param_2);
  }
  uVar18 = (uVar18 >> (0x3e - uVar14 & 0x3f) | uVar23 << 1) << 3;
  uVar19 = uVar18 >> ((ulong)-uVar16 & 0x3f);
  iVar7 = (int)uVar19;
  if (iVar7 == 0) {
    FUN_0010a430();
    pcVar15 = *(code **)PTR_PTR_043722f8;
    if (pcVar15 == (code *)0x0) goto LAB_0011ee6c;
    pcVar13 = "OODLE ERROR : max_delta_bits == 0\n";
    uVar11 = 0x316;
  }
  else if ((int)param_2 < iVar7) {
    FUN_0010a430();
    pcVar15 = *(code **)PTR_PTR_043722f8;
    if (pcVar15 == (code *)0x0) goto LAB_0011ee6c;
    pcVar13 = "OODLE ERROR : max_delta_bits > L_bits\n";
    uVar11 = 0x31b;
  }
  else {
    uVar26 = 1 << (ulong)(param_2 & 0x1f);
    puVar28 = (ulong *)((long)puVar28 + (uVar14 + 1 >> 3));
    uVar18 = uVar18 << ((ulong)uVar16 & 0x3f);
    uVar14 = (ulong)uVar16 + (uVar14 + 1 & 7) + 3;
    lVar24 = local_2a8 - (long)puVar28;
    pbVar9 = (byte *)(param_3 + 2);
    puVar1 = (uint *)(param_3 + 0x42);
    uVar31 = 0;
    iVar36 = 0;
    uVar23 = uVar14 >> 3;
    uVar16 = 0xffffffff;
    puVar20 = puVar1;
    pbVar8 = pbVar9;
    do {
      if (lVar24 < 8) {
        if (local_2a8 - (long)puVar28 < 1) {
          uVar29 = 0;
          if (local_2a8 - (long)((long)puVar28 + 1) < 1) goto LAB_0011e8dc;
LAB_0011e890:
          uVar32 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
          if (0 < local_2a8 - (long)((long)puVar28 + 2)) goto LAB_0011e8a8;
LAB_0011e8f0:
          uVar27 = 0;
          if (local_2a8 - (long)((long)puVar28 + 3) < 1) goto LAB_0011e904;
LAB_0011e8c0:
          uVar37 = (ulong)*(byte *)((long)puVar28 + 3);
        }
        else {
          uVar29 = (uint)(byte)*puVar28 << 0x18;
          if (0 < local_2a8 - (long)((long)puVar28 + 1)) goto LAB_0011e890;
LAB_0011e8dc:
          uVar32 = 0;
          if (local_2a8 - (long)((long)puVar28 + 2) < 1) goto LAB_0011e8f0;
LAB_0011e8a8:
          uVar27 = (uint)*(byte *)((long)puVar28 + 2) << 8;
          if (0 < local_2a8 - (long)((long)puVar28 + 3)) goto LAB_0011e8c0;
LAB_0011e904:
          uVar37 = 0;
        }
        if (local_2a8 - ((long)puVar28 + 4) < 1) {
          uVar42 = 0;
          if (local_2a8 - (long)((long)puVar28 + 5) < 1) goto LAB_0011e958;
LAB_0011e938:
          uVar43 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
        }
        else {
          uVar42 = (uint)*(byte *)((long)puVar28 + 4) << 0x18;
          if (0 < local_2a8 - (long)((long)puVar28 + 5)) goto LAB_0011e938;
LAB_0011e958:
          uVar43 = 0;
        }
        if (local_2a8 - ((long)puVar28 + 6) < 1) {
          uVar44 = 0;
        }
        else {
          uVar44 = (uint)*(byte *)((long)puVar28 + 6) << 8;
        }
        if (local_2a8 - ((long)puVar28 + 7) < 1) {
          uVar41 = 0;
        }
        else {
          uVar41 = (ulong)*(byte *)((long)puVar28 + 7);
        }
        uVar41 = (ulong)(uVar43 | uVar42 | uVar44) | (uVar37 | (uVar32 | uVar29 | uVar27)) << 0x20 |
                 uVar41;
      }
      else {
        uVar37 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
        uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
        uVar41 = uVar37 >> 0x20 | uVar37 << 0x20;
      }
      uVar18 = uVar41 >> (0x3f - uVar14 & 0x3f) | uVar18;
      if (*(char *)((long)local_4c8 + (uVar18 >> 0x38)) != '\0') {
        FUN_0010a430();
        pcVar15 = *(code **)PTR_PTR_043722f8;
        if (pcVar15 == (code *)0x0) goto LAB_0011ee6c;
        pcVar13 = "OODLE ERROR : corruption : ! seen[sym]\n";
        uVar11 = 0x32a;
        goto LAB_0011ee64;
      }
      uVar31 = uVar31 + (int)((uVar18 << 8) >> ((ulong)(0x40 - iVar7) & 0x3f));
      if (uVar31 == 0) {
        FUN_0010a430();
        pcVar15 = *(code **)PTR_PTR_043722f8;
        if (pcVar15 == (code *)0x0) goto LAB_0011ee6c;
        pcVar13 = "OODLE ERROR : corruption : cur > 0\n";
        uVar11 = 0x330;
        goto LAB_0011ee64;
      }
      *(undefined1 *)((long)local_4c8 + (uVar18 >> 0x38)) = 1;
      bVar5 = (byte)(uVar18 >> 0x38);
      if (uVar31 == 1) {
        *pbVar8 = bVar5;
        uVar29 = uVar26 - (iVar36 + 1U);
        puVar21 = puVar20;
        pbVar8 = pbVar8 + 1;
        if (uVar26 < iVar36 + 1U || uVar29 == 0) {
LAB_0011f480:
          FUN_0010a430();
          pcVar15 = *(code **)PTR_PTR_043722f8;
          if (pcVar15 == (code *)0x0) goto LAB_0011ee6c;
          pcVar13 = "OODLE ERROR : corruption : sum < L\n";
          uVar11 = 0x339;
          goto LAB_0011ee64;
        }
      }
      else {
        puVar21 = puVar20 + 1;
        *puVar20 = uVar31 | (uint)bVar5 << 0x10;
        uVar29 = uVar26 - (uVar31 + iVar36);
        if (uVar26 < uVar31 + iVar36 || uVar29 == 0) goto LAB_0011f480;
      }
      iVar36 = uVar31 + iVar36;
      puVar28 = (ulong *)((long)puVar28 + uVar23);
      lVar24 = local_2a8 - (long)puVar28;
      uVar14 = (uVar14 & 7 | 8) + (long)iVar7;
      uVar16 = uVar16 + 1;
      uVar18 = (uVar18 << 8) << (uVar19 & 0x3f);
      uVar23 = (long)uVar14 >> 3;
      puVar20 = puVar21;
    } while (uVar16 < (uVar25 >> 0x1c & 7));
    if (lVar24 < 8) {
      if (lVar24 < 1) {
        uVar25 = 0;
        if (local_2a8 - (long)((long)puVar28 + 1) < 1) goto LAB_0011ec1c;
LAB_0011eac4:
        uVar16 = (uint)*(byte *)((long)puVar28 + 1) << 0x10;
        if (0 < local_2a8 - (long)((long)puVar28 + 2)) goto LAB_0011eadc;
LAB_0011ec30:
        uVar26 = 0;
        if (local_2a8 - (long)((long)puVar28 + 3) < 1) goto LAB_0011ec44;
LAB_0011eaf4:
        uVar19 = (ulong)*(byte *)((long)puVar28 + 3);
      }
      else {
        uVar25 = (uint)(byte)*puVar28 << 0x18;
        if (0 < local_2a8 - (long)((long)puVar28 + 1)) goto LAB_0011eac4;
LAB_0011ec1c:
        uVar16 = 0;
        if (local_2a8 - (long)((long)puVar28 + 2) < 1) goto LAB_0011ec30;
LAB_0011eadc:
        uVar26 = (uint)*(byte *)((long)puVar28 + 2) << 8;
        if (0 < local_2a8 - (long)((long)puVar28 + 3)) goto LAB_0011eaf4;
LAB_0011ec44:
        uVar19 = 0;
      }
      if (local_2a8 - ((long)puVar28 + 4) < 1) {
        uVar32 = 0;
        if (local_2a8 - (long)((long)puVar28 + 5) < 1) goto LAB_0011ec98;
LAB_0011ec78:
        uVar27 = (uint)*(byte *)((long)puVar28 + 5) << 0x10;
      }
      else {
        uVar32 = (uint)*(byte *)((long)puVar28 + 4) << 0x18;
        if (0 < local_2a8 - (long)((long)puVar28 + 5)) goto LAB_0011ec78;
LAB_0011ec98:
        uVar27 = 0;
      }
      if (local_2a8 - ((long)puVar28 + 6) < 1) {
        uVar42 = 0;
      }
      else {
        uVar42 = (uint)*(byte *)((long)puVar28 + 6) << 8;
      }
      if (local_2a8 - ((long)puVar28 + 7) < 1) {
        uVar37 = 0;
      }
      else {
        uVar37 = (ulong)*(byte *)((long)puVar28 + 7);
      }
      uVar37 = (ulong)(uVar27 | uVar32 | uVar42) | (uVar19 | (uVar16 | uVar25 | uVar26)) << 0x20 |
               uVar37;
    }
    else {
      uVar19 = (*puVar28 & 0xff00ff00ff00ff00) >> 8 | (*puVar28 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar37 = uVar19 >> 0x20 | uVar19 << 0x20;
    }
    uVar18 = uVar37 >> (0x3f - uVar14 & 0x3f) | uVar18;
    if (*(char *)((long)local_4c8 + (uVar18 >> 0x38)) == '\0') {
      if ((uVar31 <= uVar29) && (1 < uVar29)) {
        puVar28 = (ulong *)((long)puVar28 + uVar23);
        puVar20 = puVar21 + 1;
        *puVar21 = uVar29 | (uint)(byte)(uVar18 >> 0x38) << 0x10;
        pbVar30 = pbVar9;
        if (pbVar9 != pbVar8) {
          pbVar30 = (byte *)((long)param_3 + 9);
joined_r0x0011ed4c:
          if (pbVar30 != pbVar8) {
            bVar5 = *pbVar30;
            pbVar38 = pbVar30;
            if (pbVar9 < pbVar30) {
              pbVar39 = pbVar30;
              do {
                pbVar38 = pbVar39 + -1;
                if (*pbVar38 <= bVar5) {
                  *pbVar39 = bVar5;
                  pbVar30 = pbVar30 + 1;
                  goto joined_r0x0011ed4c;
                }
                *pbVar39 = *pbVar38;
                pbVar39 = pbVar38;
              } while (pbVar9 < pbVar38);
            }
            *pbVar38 = bVar5;
            pbVar30 = pbVar30 + 1;
            goto joined_r0x0011ed4c;
          }
          pbVar30 = pbVar8;
        }
        uVar19 = uVar14 & 7 | 8;
        uVar18 = uVar18 << 8;
        if ((puVar1 != puVar20) &&
           (puVar22 = (uint *)(param_3 + 0x43), (uint *)(param_3 + 0x43) != puVar20)) {
          do {
            uVar25 = *puVar22;
            puVar33 = puVar22;
            if (puVar1 < puVar22) {
              puVar35 = puVar22;
              do {
                puVar33 = puVar35 + -1;
                if (*puVar33 <= uVar25) {
                  *puVar35 = uVar25;
                  goto joined_r0x0011ee24;
                }
                *puVar35 = *puVar33;
                puVar35 = puVar33;
              } while (puVar1 < puVar33);
            }
            *puVar33 = uVar25;
joined_r0x0011ee24:
            bVar6 = puVar22 != puVar21;
            puVar22 = puVar22 + 1;
          } while (bVar6);
        }
        *param_3 = (int)pbVar30 - (int)pbVar9;
        param_3[1] = (int)((ulong)((long)puVar20 - (long)puVar1) >> 2);
LAB_0011f3fc:
        param_1[2] = uVar18;
        param_1[3] = uVar19;
        *param_1 = (long)puVar28;
        param_1[1] = local_2a8;
        return 1;
      }
      FUN_0010a430();
      pcVar15 = *(code **)PTR_PTR_043722f8;
      if (pcVar15 == (code *)0x0) goto LAB_0011ee6c;
      pcVar13 = "OODLE ERROR : last too small\n";
      uVar11 = 0x349;
    }
    else {
      FUN_0010a430();
      pcVar15 = *(code **)PTR_PTR_043722f8;
      if (pcVar15 == (code *)0x0) goto LAB_0011ee6c;
      pcVar13 = "OODLE ERROR : corruption : ! seen[mps]\n";
      uVar11 = 0x340;
    }
  }
LAB_0011ee64:
  (*pcVar15)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_tans.cpp",uVar11,pcVar13);
LAB_0011ee6c:
  FUN_0010a450();
  return 0;
}


