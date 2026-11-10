/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00122110; name: FUN_00122110
 */


undefined8
FUN_00122110(ulong *param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5,
            long param_6,uint *param_7)

{
  ulong *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong *puVar14;
  ushort *puVar15;
  ulong *puVar16;
  code *pcVar17;
  size_t sVar18;
  ushort *puVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ushort *puVar24;
  ulong *puVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  uint uVar32;
  ulong uVar33;
  ulong *extraout_x15;
  ulong *puVar34;
  ulong *extraout_x16;
  uint *puVar35;
  ushort *puVar36;
  uint uVar37;
  ulong uVar38;
  ulong *__src;
  ushort *__src_00;
  ulong *puVar39;
  ushort *local_1d0;
  ushort local_16c [72];
  ulong local_db [14];
  undefined1 local_6b;
  
  puVar23 = *(ulong **)(param_6 + 0x88);
  puVar1 = (ulong *)((long)param_1 + param_2);
  puVar29 = *(ulong **)(param_6 + 0x38);
  puVar5 = *(ulong **)(param_6 + 0x40);
  puVar36 = *(ushort **)(param_6 + 0x48);
  puVar6 = *(ushort **)(param_6 + 0x50);
  local_1d0 = *(ushort **)(param_6 + 0x10);
  uVar38 = (ulong)*param_7;
  puVar39 = *(ulong **)(param_6 + 0x20);
  puVar24 = *(ushort **)(param_6 + 0x18);
  sVar18 = (long)puVar5 - (long)puVar29;
  if (0x70 < (long)sVar18) {
    sVar18 = 0x71;
  }
  __src = (ulong *)((long)puVar5 - sVar18);
  puVar35 = *(uint **)(param_6 + 0x78);
  puVar7 = *(uint **)(param_6 + 0x80);
  memcpy((void *)((long)local_db - sVar18),__src,sVar18);
  sVar18 = (long)puVar6 - (long)puVar36;
  if (0x1f < (long)sVar18) {
    sVar18 = 0x20;
  }
  local_db[0xd] = 0;
  local_db[0xc] = 0;
  local_db[0xb] = 0;
  local_db[10] = 0;
  local_db[9] = 0;
  local_db[8] = 0;
  local_db[7] = 0;
  local_db[6] = 0;
  local_db[5] = 0;
  local_db[4] = 0;
  local_db[3] = 0;
  local_db[2] = 0;
  local_db[1] = 0;
  __src_00 = (ushort *)((long)puVar6 - sVar18);
  local_db[0] = 0;
  local_6b = 0;
  memcpy((void *)((long)local_16c - sVar18),__src_00,sVar18);
  local_16c[0xc] = 0;
  local_16c[0xd] = 0;
  local_16c[0xe] = 0;
  local_16c[0xf] = 0;
  local_16c[8] = 0;
  local_16c[9] = 0;
  local_16c[10] = 0;
  local_16c[0xb] = 0;
  local_16c[4] = 0;
  local_16c[5] = 0;
  local_16c[6] = 0;
  local_16c[7] = 0;
  local_16c[0] = 0;
  local_16c[1] = 0;
  local_16c[2] = 0;
  local_16c[3] = 0;
  puVar14 = puVar5;
  puVar15 = puVar6;
  puVar21 = param_1;
  puVar34 = extraout_x15;
  if ((puVar39 < (ulong *)((long)puVar23 + -0xf)) && (param_1 + 0x2d <= param_3)) {
    puVar30 = extraout_x16;
    do {
      if (__src <= puVar29) {
        if (puVar14 <= puVar29 && (long)puVar29 - (long)puVar14 != 0) {
          FUN_0010a430();
          pcVar17 = *(code **)PTR_PTR_043722f8;
          if (pcVar17 == (code *)0x0) goto LAB_001233e0;
          pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar13 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar12 = 0xd5;
          goto LAB_001233dc;
        }
        puVar29 = (ulong *)((long)local_db + ((long)puVar29 - (long)puVar14));
        puVar14 = local_db;
        __src = local_db;
      }
      if (__src_00 <= puVar36) {
        if (puVar15 <= puVar36 && (long)puVar36 - (long)puVar15 != 0) {
          FUN_0010a430();
          pcVar17 = *(code **)PTR_PTR_043722f8;
          if (pcVar17 == (code *)0x0) goto LAB_001233e0;
          pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar13 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar12 = 0xd6;
          goto LAB_001233dc;
        }
        puVar36 = (ushort *)((long)local_16c + ((long)puVar36 - (long)puVar15));
        puVar15 = local_16c;
        __src_00 = local_16c;
      }
      uVar33 = *puVar39;
      uVar32 = (uint)uVar33;
      if ((uVar33 + 0xe7e7e7e7e7e7e7e8 & (uVar33 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0) {
        uVar22 = puVar39[1];
        *puVar21 = *puVar29;
        puVar3 = (undefined8 *)((long)puVar21 + (uVar33 & 7));
        puVar4 = (undefined8 *)((long)puVar29 + (uVar33 & 7));
        puVar19 = (ushort *)((long)puVar36 + ((ulong)((uVar32 & 0x80) >> 6) ^ 2));
        uVar37 = (uint)uVar38;
        if ((uVar33 & 0x80) == 0) {
          uVar37 = -(uint)*puVar36;
        }
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + (uVar33 >> 3 & 0xf));
        *puVar3 = *puVar4;
        uVar38 = uVar33 >> 8 & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar38);
        puVar4 = (undefined8 *)((long)puVar4 + uVar38);
        if ((uVar33 & 0x8000) == 0) {
          uVar37 = -(uint)*puVar19;
        }
        puVar19 = (ushort *)((long)puVar19 + ((ulong)((uVar32 & 0x8000) >> 0xe) ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + (uVar33 >> 0xb & 0xf));
        *puVar3 = *puVar4;
        uVar38 = uVar33 >> 0x10 & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar38);
        puVar4 = (undefined8 *)((long)puVar4 + uVar38);
        if ((uVar33 & 0x800000) == 0) {
          uVar37 = -(uint)*puVar19;
        }
        puVar19 = (ushort *)((long)puVar19 + ((ulong)((uVar32 & 0x800000) >> 0x16) ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + (uVar33 >> 0x13 & 0xf));
        *puVar3 = *puVar4;
        uVar38 = uVar33 >> 0x18 & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar38);
        puVar4 = (undefined8 *)((long)puVar4 + uVar38);
        puVar2 = (ushort *)((long)puVar19 + ((ulong)(uVar32 >> 0x1e ^ 0xffffffff) & 2));
        if (-1 < (int)uVar32) {
          uVar37 = -(uint)*puVar19;
        }
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + (uVar33 >> 0x1b & 0xf));
        uVar32 = *(uint *)((long)puVar39 + 4);
        uVar38 = (ulong)uVar32;
        *puVar3 = *puVar4;
        puVar3 = (undefined8 *)((long)puVar3 + (uVar38 & 7));
        puVar4 = (undefined8 *)((long)puVar4 + (uVar38 & 7));
        if ((int)(uVar38 & 0x80) == 0) {
          uVar37 = -(uint)*puVar2;
        }
        puVar2 = (ushort *)((long)puVar2 + ((uVar38 & 0x80) >> 6 ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar32 >> 3) & 0xf));
        *puVar3 = *puVar4;
        uVar33 = (ulong)(uVar32 >> 8) & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar33);
        puVar4 = (undefined8 *)((long)puVar4 + uVar33);
        if ((int)(uVar38 & 0x8000) == 0) {
          uVar37 = -(uint)*puVar2;
        }
        puVar2 = (ushort *)((long)puVar2 + ((uVar38 & 0x8000) >> 0xe ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar32 >> 0xb) & 0xf));
        *puVar3 = *puVar4;
        uVar33 = (ulong)(uVar32 >> 0x10) & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar33);
        puVar4 = (undefined8 *)((long)puVar4 + uVar33);
        if ((int)(uVar38 & 0x800000) == 0) {
          uVar37 = -(uint)*puVar2;
        }
        puVar30 = (ulong *)(ulong)uVar37;
        puVar2 = (ushort *)((long)puVar2 + ((uVar38 & 0x800000) >> 0x16 ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar32 >> 0x13) & 0xf));
        *puVar3 = *puVar4;
        uVar38 = (ulong)(uVar32 >> 0x18) & 7;
        puVar29 = (ulong *)((long)puVar4 + uVar38);
        puVar34 = (ulong *)((long)puVar3 + uVar38);
        puVar36 = (ushort *)((long)puVar2 + ((ulong)(uVar32 >> 0x1e ^ 0xffffffff) & 2));
        if (-1 < (int)uVar32) {
          uVar37 = -(uint)*puVar2;
        }
        uVar38 = (ulong)uVar37;
        *puVar34 = *(ulong *)((long)puVar34 + (long)(int)uVar37);
        puVar21 = (ulong *)((long)puVar34 + ((ulong)(uVar32 >> 0x1b) & 0xf));
        puVar34[1] = ((ulong *)((long)puVar34 + (long)(int)uVar37))[1];
        if ((uVar22 + 0xe7e7e7e7e7e7e7e8 & (uVar22 ^ 0xffffffffffffffff) & 0x8080808080808080) != 0)
        {
          bVar9 = (byte)puVar39[1];
          uVar22 = (ulong)bVar9;
          uVar32 = (uint)bVar9;
          puVar39 = (ulong *)((long)puVar39 + 9);
          uVar33 = uVar22;
          if (0x17 < bVar9) goto LAB_00122544;
          goto LAB_001225a8;
        }
        uVar32 = (uint)puVar39[1];
        uVar38 = (ulong)uVar32;
        *puVar21 = *puVar29;
        puVar3 = (undefined8 *)((long)puVar21 + (uVar38 & 7));
        puVar4 = (undefined8 *)((long)puVar29 + (uVar38 & 7));
        if ((int)(uVar38 & 0x80) == 0) {
          uVar37 = -(uint)*puVar36;
        }
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar36 = (ushort *)((long)puVar36 + ((uVar38 & 0x80) >> 6 ^ 2));
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar32 >> 3) & 0xf));
        *puVar3 = *puVar4;
        uVar33 = (ulong)(uVar32 >> 8) & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar33);
        puVar4 = (undefined8 *)((long)puVar4 + uVar33);
        if ((int)(uVar38 & 0x8000) == 0) {
          uVar37 = -(uint)*puVar36;
        }
        puVar36 = (ushort *)((long)puVar36 + ((uVar38 & 0x8000) >> 0xe ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar32 >> 0xb) & 0xf));
        *puVar3 = *puVar4;
        uVar33 = (ulong)(uVar32 >> 0x10) & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar33);
        puVar4 = (undefined8 *)((long)puVar4 + uVar33);
        if ((int)(uVar38 & 0x800000) == 0) {
          uVar37 = -(uint)*puVar36;
        }
        puVar36 = (ushort *)((long)puVar36 + ((uVar38 & 0x800000) >> 0x16 ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar32 >> 0x13) & 0xf));
        *puVar3 = *puVar4;
        uVar38 = (ulong)(uVar32 >> 0x18) & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar38);
        puVar4 = (undefined8 *)((long)puVar4 + uVar38);
        puVar19 = (ushort *)((long)puVar36 + ((ulong)(uVar32 >> 0x1e ^ 0xffffffff) & 2));
        if (-1 < (int)uVar32) {
          uVar37 = -(uint)*puVar36;
        }
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        uVar8 = *(uint *)((long)puVar39 + 0xc);
        uVar38 = (ulong)uVar8;
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar32 >> 0x1b) & 0xf));
        *puVar3 = *puVar4;
        puVar3 = (undefined8 *)((long)puVar3 + (uVar38 & 7));
        puVar4 = (undefined8 *)((long)puVar4 + (uVar38 & 7));
        if ((int)(uVar38 & 0x80) == 0) {
          uVar37 = -(uint)*puVar19;
        }
        puVar19 = (ushort *)((long)puVar19 + ((uVar38 & 0x80) >> 6 ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar8 >> 3) & 0xf));
        *puVar3 = *puVar4;
        uVar33 = (ulong)(uVar8 >> 8) & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar33);
        puVar4 = (undefined8 *)((long)puVar4 + uVar33);
        if ((int)(uVar38 & 0x8000) == 0) {
          uVar37 = -(uint)*puVar19;
        }
        puVar19 = (ushort *)((long)puVar19 + ((uVar38 & 0x8000) >> 0xe ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar8 >> 0xb) & 0xf));
        *puVar3 = *puVar4;
        uVar33 = (ulong)(uVar8 >> 0x10) & 7;
        puVar3 = (undefined8 *)((long)puVar3 + uVar33);
        puVar4 = (undefined8 *)((long)puVar4 + uVar33);
        if ((int)(uVar38 & 0x800000) == 0) {
          uVar37 = -(uint)*puVar19;
        }
        puVar19 = (ushort *)((long)puVar19 + ((uVar38 & 0x800000) >> 0x16 ^ 2));
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar3 = (undefined8 *)((long)puVar3 + ((ulong)(uVar8 >> 0x13) & 0xf));
        *puVar3 = *puVar4;
        puVar34 = (ulong *)((ulong)(uVar8 >> 0x18) & 7);
        puVar29 = (ulong *)((long)puVar4 + (long)puVar34);
        puVar30 = (ulong *)((ulong)(uVar8 >> 0x1b) & 0xf);
        puVar3 = (undefined8 *)((long)puVar3 + (long)puVar34);
        puVar36 = (ushort *)((long)puVar19 + ((ulong)(uVar8 >> 0x1e ^ 0xffffffff) & 2));
        if (-1 < (int)uVar8) {
          uVar37 = -(uint)*puVar19;
        }
        *puVar3 = *(undefined8 *)((long)puVar3 + (long)(int)uVar37);
        puVar39 = puVar39 + 2;
        puVar3[1] = ((undefined8 *)((long)puVar3 + (long)(int)uVar37))[1];
        puVar16 = (ulong *)((long)puVar3 + (long)puVar30);
        puVar27 = puVar35;
joined_r0x0012288c:
        uVar38 = (ulong)uVar37;
        puVar21 = puVar16;
        puVar35 = puVar27;
      }
      else {
        uVar32 = uVar32 & 0xff;
        uVar22 = (ulong)uVar32;
        puVar39 = (ulong *)((long)puVar39 + 1);
        if (0x17 < uVar32) {
LAB_00122544:
          do {
            uVar10 = *puVar36;
            puVar34 = (ulong *)*puVar29;
            uVar37 = ((uint)uVar22 >> 7) - 1;
            *puVar21 = (ulong)puVar34;
            puVar3 = (undefined8 *)((long)puVar21 + (uVar22 & 7));
            puVar29 = (ulong *)((long)puVar29 + (uVar22 & 7));
            uVar32 = -(uint)uVar10 & uVar37 | (uint)uVar38 & (uVar37 ^ 0xffffffff);
            uVar38 = (ulong)uVar32;
            puVar36 = (ushort *)((long)puVar36 + (ulong)(uVar37 & 2));
            puVar4 = (undefined8 *)((long)puVar3 + (long)(int)uVar32);
            *puVar3 = *puVar4;
            puVar3[1] = puVar4[1];
            puVar21 = (ulong *)((long)puVar3 + (ulong)((uint)uVar22 >> 3 & 0xf));
            puVar16 = (ulong *)((long)puVar39 + 1);
            bVar9 = (byte)*puVar39;
            uVar22 = (ulong)bVar9;
            uVar32 = (uint)bVar9;
            puVar39 = puVar16;
          } while (0x17 < bVar9);
          uVar33 = uVar22;
        }
LAB_001225a8:
        if (2 < ((uint)uVar33 & 0xff)) {
          if (puVar35 < puVar7) {
            puVar27 = puVar35 + 1;
            puVar31 = (ulong *)((long)param_1 - (ulong)*puVar35);
            puVar16 = (ulong *)((long)puVar21 + (ulong)(uVar32 + 5));
            *puVar21 = *puVar31;
            puVar21[1] = puVar31[1];
            puVar34 = (ulong *)puVar31[2];
            uVar37 = (int)puVar31 - (int)puVar21;
            puVar21[2] = (ulong)puVar34;
            if (0x18 < uVar32 + 5) {
              puVar21[3] = puVar31[3];
            }
            Hint_Prefetch((long)param_1 - (ulong)puVar35[4],0,0,0);
            goto joined_r0x0012288c;
          }
          goto LAB_00123328;
        }
        if ((uVar33 & 0xff) == 0) {
          if (local_1d0 < puVar24) {
            puVar19 = (ushort *)((long)local_1d0 + 1);
            uVar33 = (ulong)(byte)*local_1d0;
            if (0xfb < uVar33) {
              local_1d0 = (ushort *)((long)local_1d0 + 3);
              if (local_1d0 <= puVar24) {
                uVar33 = uVar33 + (ulong)*puVar19 * 4;
                lVar20 = uVar33 + 0x40;
                if (lVar20 <= (long)puVar1 - (long)puVar21) goto LAB_001228fc;
                goto LAB_00123574;
              }
              uVar33 = 0;
            }
            lVar20 = uVar33 + 0x40;
            local_1d0 = puVar19;
            if ((long)puVar1 - (long)puVar21 < lVar20) goto LAB_00123574;
          }
          else {
            uVar33 = 0;
            lVar20 = 0x40;
            if ((long)puVar1 - (long)puVar21 < 0x40) goto LAB_00123574;
          }
LAB_001228fc:
          puVar16 = (ulong *)((long)puVar14 - (long)puVar29);
          if ((long)puVar16 < lVar20) goto LAB_001235a0;
          puVar31 = (ulong *)(uVar33 + 0x2f);
          uVar32 = (int)((ulong)puVar31 >> 4) + 1;
          lVar28 = lVar20;
          if ((uVar32 & 7) != 0) {
            lVar28 = 0;
            lVar26 = -((ulong)uVar32 & 7);
            do {
              puVar4 = (undefined8 *)((long)puVar29 + lVar28);
              uVar12 = puVar4[1];
              puVar3 = (undefined8 *)((long)puVar21 + lVar28);
              lVar28 = lVar28 + 0x10;
              lVar26 = lVar26 + 1;
              *puVar3 = *puVar4;
              puVar3[1] = uVar12;
            } while (lVar26 != 0);
            puVar21 = (ulong *)((long)puVar21 + lVar28);
            puVar29 = (ulong *)((long)puVar29 + lVar28);
            puVar30 = puVar21 + -2;
            puVar16 = puVar29 + -2;
            lVar28 = lVar20 - lVar28;
          }
          puVar34 = puVar31;
          if (0x6f < puVar31) {
            puVar21 = puVar21 + -2;
            puVar29 = puVar29 + -2;
            do {
              uVar33 = puVar29[3];
              puVar30 = puVar21 + 0x10;
              puVar21[2] = puVar29[2];
              puVar21[3] = uVar33;
              lVar28 = lVar28 + -0x80;
              uVar33 = puVar29[5];
              puVar21[4] = puVar29[4];
              puVar21[5] = uVar33;
              uVar33 = puVar29[7];
              puVar21[6] = puVar29[6];
              puVar21[7] = uVar33;
              uVar33 = puVar29[9];
              puVar21[8] = puVar29[8];
              puVar21[9] = uVar33;
              uVar33 = puVar29[0xb];
              puVar21[10] = puVar29[10];
              puVar21[0xb] = uVar33;
              uVar33 = puVar29[0xd];
              puVar21[0xc] = puVar29[0xc];
              puVar21[0xd] = uVar33;
              uVar33 = puVar29[0xf];
              puVar21[0xe] = puVar29[0xe];
              puVar21[0xf] = uVar33;
              puVar16 = puVar29 + 0x10;
              puVar34 = (ulong *)*puVar16;
              uVar33 = puVar29[0x11];
              puVar21[0x10] = (ulong)puVar34;
              puVar21[0x11] = uVar33;
              puVar21 = puVar30;
              puVar29 = puVar16;
            } while (0x10 < lVar28);
          }
          lVar20 = lVar20 - ((ulong)puVar31 & 0xffff0);
          puVar29 = (ulong *)((long)puVar16 + lVar20);
          puVar21 = (ulong *)((long)puVar30 + lVar20);
          uVar33 = puVar29[-1];
          puVar21[-2] = puVar29[-2];
          puVar21[-1] = uVar33;
        }
        else if (((uint)uVar33 & 0xff) == 1) {
          if (local_1d0 < puVar24) {
            puVar19 = (ushort *)((long)local_1d0 + 1);
            uVar38 = (ulong)(byte)*local_1d0;
            if (uVar38 < 0xfc) {
              local_1d0 = puVar19;
            }
            else if (puVar24 < (ushort *)((long)local_1d0 + 3U)) {
              uVar38 = 0;
              local_1d0 = puVar19;
            }
            else {
              uVar38 = uVar38 + (ulong)*puVar19 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar38 = 0;
          }
          if ((long)puVar1 - (long)puVar21 < (long)(uVar38 + 99)) {
            if ((long)puVar1 - (long)puVar21 < (long)(uVar38 + 0x5b)) goto LAB_001235f8;
            if ((long)param_3 - (long)puVar21 < (long)(uVar38 + 99)) goto LAB_00123628;
          }
          puVar16 = (ulong *)((long)puVar21 + uVar38 + 0x5b);
          uVar38 = -(ulong)*puVar36;
          puVar31 = (ulong *)((long)puVar21 - (ulong)*puVar36);
          *puVar21 = *puVar31;
          puVar21[1] = puVar31[1];
          puVar21[2] = puVar31[2];
          puVar21[3] = puVar31[3];
          puVar21[4] = puVar31[4];
          puVar21[5] = puVar31[5];
          puVar21[6] = puVar31[6];
          puVar21[7] = puVar31[7];
          puVar21 = puVar21 + 8;
          do {
            puVar31 = puVar21 + 1;
            *puVar21 = *(ulong *)((long)puVar21 + uVar38);
            puVar21 = puVar31;
          } while (puVar31 < puVar16);
          puVar36 = puVar36 + 1;
          puVar21 = puVar16;
        }
        else {
          puVar19 = local_1d0;
          if (local_1d0 < puVar24) {
            puVar19 = (ushort *)((long)local_1d0 + 1);
            uVar38 = (ulong)(byte)*local_1d0;
            if (0xfb < uVar38) {
              if (puVar24 < (ushort *)((long)local_1d0 + 3U)) goto joined_r0x00122ab0;
              uVar38 = uVar38 + (ulong)*puVar19 * 4;
              puVar19 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
joined_r0x00122ab0:
            uVar38 = 0;
          }
          if (puVar7 <= puVar35) goto LAB_001235cc;
          uVar33 = uVar38 + 0x1d;
          if ((long)puVar1 - (long)puVar21 < (long)(uVar38 + 0x2d)) {
            if ((long)puVar1 - (long)puVar21 < (long)uVar33) goto LAB_00123654;
            if ((long)param_3 - (long)puVar21 < (long)(uVar38 + 0x2d)) goto LAB_00123684;
          }
          puVar16 = (ulong *)((long)param_1 - (ulong)*puVar35);
          *puVar21 = *puVar16;
          puVar21[1] = puVar16[1];
          puVar21[2] = puVar16[2];
          puVar21[3] = puVar16[3];
          puVar34 = (ulong *)puVar16[4];
          uVar38 = (ulong)(uint)((int)puVar16 - (int)puVar21);
          puVar21[4] = (ulong)puVar34;
          if (0x28 < uVar33) {
            puVar31 = puVar21 + 5;
            puVar16 = puVar16 + 5;
            do {
              puVar25 = puVar31 + 1;
              *puVar31 = *puVar16;
              puVar31 = puVar25;
              puVar16 = puVar16 + 1;
            } while (puVar25 < (ulong *)((long)puVar21 + uVar33));
          }
          Hint_Prefetch((long)param_1 - (ulong)puVar35[4],0,0,0);
          puVar21 = (ulong *)((long)puVar21 + uVar33);
          puVar35 = puVar35 + 1;
          local_1d0 = puVar19;
        }
      }
    } while ((puVar39 < (ulong *)((long)puVar23 + -0xf)) && (puVar21 + 0x2d <= param_3));
  }
  uVar32 = (uint)uVar38;
  if (puVar1 < puVar21) {
    FUN_0010a430();
    pcVar17 = *(code **)PTR_PTR_043722f8;
    if (pcVar17 == (code *)0x0) goto LAB_001233e0;
    pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar13 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    uVar12 = 0x1c4;
  }
  else {
    if (__src <= puVar29) {
      if (puVar14 <= puVar29 && (long)puVar29 - (long)puVar14 != 0) {
        FUN_0010a430();
        pcVar17 = *(code **)PTR_PTR_043722f8;
        if (pcVar17 == (code *)0x0) goto LAB_001233e0;
        pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar13 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        uVar12 = 0x1eb;
        goto LAB_001233dc;
      }
      puVar29 = (ulong *)((long)local_db + ((long)puVar29 - (long)puVar14));
      puVar14 = local_db;
      __src = local_db;
    }
    if (__src_00 <= puVar36) {
      if (puVar15 <= puVar36 && (long)puVar36 - (long)puVar15 != 0) {
        FUN_0010a430();
        pcVar17 = *(code **)PTR_PTR_043722f8;
        if (pcVar17 == (code *)0x0) goto LAB_001233e0;
        pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar13 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        uVar12 = 0x1ec;
        goto LAB_001233dc;
      }
      puVar36 = (ushort *)((long)local_16c + ((long)puVar36 - (long)puVar15));
      puVar15 = local_16c;
      __src_00 = local_16c;
    }
    if (puVar39 < puVar23) {
      puVar30 = puVar39 + 2;
      do {
        if (puVar30 <= puVar39) {
          if (__src <= puVar29) {
            if (puVar14 <= puVar29 && (long)puVar29 - (long)puVar14 != 0) {
              FUN_0010a430();
              pcVar17 = *(code **)PTR_PTR_043722f8;
              if (pcVar17 == (code *)0x0) goto LAB_001233e0;
              pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar13 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar12 = 0x1f8;
              goto LAB_001233dc;
            }
            puVar29 = (ulong *)((long)local_db + ((long)puVar29 - (long)puVar14));
            puVar14 = local_db;
            __src = local_db;
          }
          puVar30 = puVar39 + 2;
          if (__src_00 <= puVar36) {
            if (puVar15 <= puVar36 && (long)puVar36 - (long)puVar15 != 0) {
              FUN_0010a430();
              pcVar17 = *(code **)PTR_PTR_043722f8;
              if (pcVar17 == (code *)0x0) goto LAB_001233e0;
              pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar13 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar12 = 0x1f9;
              goto LAB_001233dc;
            }
            puVar36 = (ushort *)((long)local_16c + ((long)puVar36 - (long)puVar15));
            puVar15 = local_16c;
            __src_00 = local_16c;
          }
        }
        puVar16 = (ulong *)((long)puVar39 + 1);
        bVar9 = (byte)*puVar39;
        uVar33 = (ulong)bVar9;
        if (0x17 < bVar9) {
          if (param_3 < puVar21 + 1) {
            FUN_0010a430();
            pcVar17 = *(code **)PTR_PTR_043722f8;
            if (pcVar17 == (code *)0x0) goto LAB_001233e0;
            pcVar13 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
          }
          else {
            uVar10 = *puVar36;
            *puVar21 = *puVar29;
            puVar4 = (undefined8 *)((long)puVar21 + (uVar33 & 7));
            if (puVar4 + 2 <= param_3) {
              uVar37 = (bVar9 >> 7) - 1;
              uVar32 = (uint)uVar38 & (uVar37 ^ 0xffffffff);
              puVar34 = (ulong *)(ulong)uVar32;
              uVar32 = -(uint)uVar10 & uVar37 | uVar32;
              uVar38 = (ulong)uVar32;
              puVar36 = (ushort *)((long)puVar36 + (ulong)(uVar37 & 2));
              *puVar4 = *(undefined8 *)((long)puVar4 + (long)(int)uVar32);
              puVar29 = (ulong *)((long)puVar29 + (uVar33 & 7));
              puVar4[1] = ((undefined8 *)((long)puVar4 + (long)(int)uVar32))[1];
              puVar21 = (ulong *)((long)puVar4 + ((ulong)(bVar9 >> 3) & 0xf));
              goto joined_r0x001231f0;
            }
            FUN_0010a430();
            pcVar17 = *(code **)PTR_PTR_043722f8;
            if (pcVar17 == (code *)0x0) goto LAB_001233e0;
            pcVar13 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
          }
          pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          uVar12 = 0x200;
          goto LAB_001233dc;
        }
        puVar19 = local_1d0;
        if (bVar9 < 3) {
          puVar27 = puVar35;
          if (bVar9 == 0) {
            if (local_1d0 < puVar24) {
              puVar19 = (ushort *)((long)local_1d0 + 1);
              uVar33 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar33) {
                local_1d0 = (ushort *)((long)local_1d0 + 3);
                if (local_1d0 <= puVar24) {
                  uVar33 = uVar33 + (ulong)*puVar19 * 4;
                  lVar20 = uVar33 + 0x40;
                  if (lVar20 <= (long)puVar1 - (long)puVar21) goto LAB_00122df8;
                  goto LAB_00123574;
                }
                uVar33 = 0;
              }
              lVar20 = uVar33 + 0x40;
              local_1d0 = puVar19;
              if ((long)puVar1 - (long)puVar21 < lVar20) goto LAB_00123574;
            }
            else {
              uVar33 = 0;
              lVar20 = 0x40;
              if ((long)puVar1 - (long)puVar21 < 0x40) goto LAB_00123574;
            }
LAB_00122df8:
            puVar30 = (ulong *)((long)puVar14 - (long)puVar29);
            if ((long)puVar30 < lVar20) goto LAB_001235a0;
            uVar33 = uVar33 + 0x2f;
            uVar32 = (int)(uVar33 >> 4) + 1;
            lVar28 = lVar20;
            if ((uVar32 & 7) != 0) {
              lVar28 = 0;
              lVar26 = -((ulong)uVar32 & 7);
              do {
                puVar4 = (undefined8 *)((long)puVar29 + lVar28);
                uVar12 = puVar4[1];
                puVar3 = (undefined8 *)((long)puVar21 + lVar28);
                lVar28 = lVar28 + 0x10;
                lVar26 = lVar26 + 1;
                *puVar3 = *puVar4;
                puVar3[1] = uVar12;
              } while (lVar26 != 0);
              puVar21 = (ulong *)((long)puVar21 + lVar28);
              puVar29 = (ulong *)((long)puVar29 + lVar28);
              puVar34 = puVar21 + -2;
              puVar30 = puVar29 + -2;
              lVar28 = lVar20 - lVar28;
            }
            if (0x6f < uVar33) {
              puVar21 = puVar21 + -2;
              puVar29 = puVar29 + -2;
              do {
                uVar22 = puVar29[3];
                puVar34 = puVar21 + 0x10;
                puVar21[2] = puVar29[2];
                puVar21[3] = uVar22;
                lVar28 = lVar28 + -0x80;
                uVar22 = puVar29[5];
                puVar21[4] = puVar29[4];
                puVar21[5] = uVar22;
                uVar22 = puVar29[7];
                puVar21[6] = puVar29[6];
                puVar21[7] = uVar22;
                uVar22 = puVar29[9];
                puVar21[8] = puVar29[8];
                puVar21[9] = uVar22;
                uVar22 = puVar29[0xb];
                puVar21[10] = puVar29[10];
                puVar21[0xb] = uVar22;
                uVar22 = puVar29[0xd];
                puVar21[0xc] = puVar29[0xc];
                puVar21[0xd] = uVar22;
                uVar22 = puVar29[0xf];
                puVar21[0xe] = puVar29[0xe];
                puVar21[0xf] = uVar22;
                puVar30 = puVar29 + 0x10;
                uVar22 = puVar29[0x11];
                puVar21[0x10] = *puVar30;
                puVar21[0x11] = uVar22;
                puVar21 = puVar34;
                puVar29 = puVar30;
              } while (0x10 < lVar28);
            }
            lVar20 = lVar20 - (uVar33 & 0xffff0);
            puVar29 = (ulong *)((long)puVar30 + lVar20);
            puVar31 = (ulong *)((long)puVar34 + lVar20);
            uVar33 = puVar29[-1];
            puVar31[-2] = puVar29[-2];
            puVar31[-1] = uVar33;
            puVar19 = local_1d0;
          }
          else if (bVar9 == 1) {
            if (local_1d0 < puVar24) {
              puVar19 = (ushort *)((long)local_1d0 + 1);
              uVar33 = (ulong)(byte)*local_1d0;
              if (uVar33 < 0xfc) {
                local_1d0 = puVar19;
              }
              else if (puVar24 < (ushort *)((long)local_1d0 + 3U)) {
                uVar33 = 0;
                local_1d0 = puVar19;
              }
              else {
                uVar33 = uVar33 + (ulong)*puVar19 * 4;
                local_1d0 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
              uVar33 = 0;
            }
            if ((long)puVar1 - (long)puVar21 < (long)(uVar33 + 99)) {
              if ((long)puVar1 - (long)puVar21 < (long)(uVar33 + 0x5b)) goto LAB_001235f8;
              if ((long)param_3 - (long)puVar21 < (long)(uVar33 + 99)) goto LAB_00123628;
            }
            uVar38 = -(ulong)*puVar36;
            puVar30 = (ulong *)((long)puVar21 - (ulong)*puVar36);
            puVar31 = (ulong *)((long)puVar21 + uVar33 + 0x5b);
            *puVar21 = *puVar30;
            puVar21[1] = puVar30[1];
            puVar21[2] = puVar30[2];
            puVar21[3] = puVar30[3];
            puVar21[4] = puVar30[4];
            puVar21[5] = puVar30[5];
            puVar21[6] = puVar30[6];
            puVar21[7] = puVar30[7];
            puVar21 = puVar21 + 8;
            do {
              puVar30 = puVar21 + 1;
              *puVar21 = *(ulong *)((long)puVar21 + uVar38);
              puVar21 = puVar30;
            } while (puVar30 < puVar31);
            puVar36 = puVar36 + 1;
            puVar19 = local_1d0;
          }
          else {
            if (local_1d0 < puVar24) {
              puVar19 = (ushort *)((long)local_1d0 + 1);
              uVar38 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar38) {
                if (puVar24 < (ushort *)((long)local_1d0 + 3U)) goto joined_r0x00122f90;
                uVar38 = uVar38 + (ulong)*puVar19 * 4;
                puVar19 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
joined_r0x00122f90:
              uVar38 = 0;
            }
            if (puVar7 <= puVar35) goto LAB_001235cc;
            puVar27 = puVar35 + 1;
            uVar33 = uVar38 + 0x1d;
            if ((long)puVar1 - (long)puVar21 < (long)(uVar38 + 0x2d)) {
              if ((long)puVar1 - (long)puVar21 < (long)uVar33) goto LAB_00123654;
              if ((long)param_3 - (long)puVar21 < (long)(uVar38 + 0x2d)) goto LAB_00123684;
            }
            puVar30 = (ulong *)((long)param_1 - (ulong)*puVar35);
            *puVar21 = *puVar30;
            puVar21[1] = puVar30[1];
            puVar21[2] = puVar30[2];
            puVar21[3] = puVar30[3];
            uVar38 = (ulong)(uint)((int)puVar30 - (int)puVar21);
            puVar31 = (ulong *)((long)puVar21 + uVar33);
            puVar21[4] = puVar30[4];
            if (0x28 < uVar33) {
              puVar21 = puVar21 + 5;
              puVar30 = puVar30 + 5;
              do {
                puVar25 = puVar21 + 1;
                *puVar21 = *puVar30;
                puVar21 = puVar25;
                puVar30 = puVar30 + 1;
              } while (puVar25 < puVar31);
            }
            Hint_Prefetch((long)param_1 - (ulong)puVar35[4],0,0,0);
          }
        }
        else {
          if (puVar7 <= puVar35) goto LAB_00123328;
          lVar20 = uVar33 + 5;
          if ((long)puVar1 - (long)puVar21 < 0x24) {
            if ((long)puVar1 - (long)puVar21 < lVar20) {
              FUN_0010a430();
              pcVar17 = *(code **)PTR_PTR_043722f8;
              if (pcVar17 == (code *)0x0) goto LAB_001233e0;
              pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
              pcVar13 = "OODLE ERROR : corruption : ml <= rrPtrDiff(parse_chunk_end - to_ptr)\n";
              uVar12 = 0x10b;
              goto LAB_001233dc;
            }
            if ((long)param_3 - (long)puVar21 < (long)(uVar33 + 0x15)) {
              FUN_0010a430();
              pcVar17 = *(code **)PTR_PTR_043722f8;
              if (pcVar17 == (code *)0x0) goto LAB_001233e0;
              pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
              pcVar13 = 
              "OODLE ERROR : corruption : ml+16 <= rrPtrDiff(overrun_chunk_end - to_ptr)\n";
              uVar12 = 0x10f;
              goto LAB_001233dc;
            }
          }
          puVar30 = (ulong *)((long)param_1 - (ulong)*puVar35);
          *puVar21 = *puVar30;
          puVar21[1] = puVar30[1];
          uVar38 = (ulong)(uint)((int)puVar30 - (int)puVar21);
          puVar31 = (ulong *)((long)puVar21 + lVar20);
          puVar21[2] = puVar30[2];
          if (0x18 < (uint)lVar20) {
            puVar21[3] = puVar30[3];
          }
          Hint_Prefetch((long)param_1 - (ulong)puVar35[4],0,0,0);
          puVar27 = puVar35 + 1;
        }
        if (__src <= puVar29) {
          if (puVar14 <= puVar29 && (long)puVar29 - (long)puVar14 != 0) {
            FUN_0010a430();
            pcVar17 = *(code **)PTR_PTR_043722f8;
            if (pcVar17 == (code *)0x0) goto LAB_001233e0;
            pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar13 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
            uVar12 = 0x20c;
            goto LAB_001233dc;
          }
          puVar29 = (ulong *)((long)local_db + ((long)puVar29 - (long)puVar14));
          puVar14 = local_db;
          __src = local_db;
        }
        uVar32 = (uint)uVar38;
        puVar30 = (ulong *)((long)puVar39 + 0x11);
        puVar21 = puVar31;
        puVar35 = puVar27;
        local_1d0 = puVar19;
        if (__src_00 <= puVar36) {
          if (puVar15 <= puVar36 && (long)puVar36 - (long)puVar15 != 0) {
            FUN_0010a430();
            pcVar17 = *(code **)PTR_PTR_043722f8;
            if (pcVar17 == (code *)0x0) goto LAB_001233e0;
            pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar13 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar12 = 0x20d;
            goto LAB_001233dc;
          }
          puVar36 = (ushort *)((long)local_16c + ((long)puVar36 - (long)puVar15));
          puVar15 = local_16c;
          __src_00 = local_16c;
        }
joined_r0x001231f0:
        puVar39 = puVar16;
      } while (puVar16 < puVar23);
    }
    if (puVar1 <= puVar21) {
      if (puVar21 != puVar1) {
        return 0;
      }
      lVar20 = (long)puVar36 - (long)puVar15;
      if (puVar15 <= puVar36 && lVar20 != 0) {
        return 0;
      }
LAB_00122ccc:
      if (puVar14 <= puVar29 && (long)puVar29 - (long)puVar14 != 0) {
        return 0;
      }
      *param_7 = uVar32;
      *(long *)(param_6 + 0x38) = (long)puVar5 + ((long)puVar29 - (long)puVar14);
      *(long *)(param_6 + 0x48) = (long)puVar6 + lVar20;
      if (puVar24 < local_1d0) {
        return 0;
      }
      *(ushort **)(param_6 + 0x10) = local_1d0;
      return param_5;
    }
    puVar39 = (ulong *)((long)puVar29 + ((long)puVar1 - (long)puVar21));
    if (puVar39 <= puVar14) {
      memcpy(puVar21,puVar29,(long)puVar1 - (long)puVar21);
      lVar20 = (long)puVar36 - (long)puVar15;
      puVar29 = puVar39;
      if (puVar15 <= puVar36 && lVar20 != 0) {
        return 0;
      }
      goto LAB_00122ccc;
    }
    FUN_0010a430();
    pcVar17 = *(code **)PTR_PTR_043722f8;
    if (pcVar17 == (code *)0x0) goto LAB_001233e0;
    pcVar11 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar13 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    uVar12 = 0x21f;
  }
LAB_001233dc:
  (*pcVar17)(0,pcVar11,uVar12,pcVar13);
LAB_001233e0:
  FUN_0010a450();
  return 0;
LAB_00123574:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar12 = 0x2a;
  goto LAB_001233dc;
LAB_001235a0:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar12 = 0x2b;
  goto LAB_001233dc;
LAB_001235f8:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar12 = 0x80;
  goto LAB_001233dc;
LAB_00123628:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar12 = 0x81;
  goto LAB_001233dc;
LAB_001235cc:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar12 = 0xb0;
  goto LAB_001233dc;
LAB_00123654:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar12 = 0xc0;
  goto LAB_001233dc;
LAB_00123684:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : ( ml+16 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar12 = 0xc1;
  goto LAB_001233dc;
LAB_00123328:
  FUN_0010a430();
  pcVar17 = *(code **)PTR_PTR_043722f8;
  if (pcVar17 == (code *)0x0) goto LAB_001233e0;
  pcVar11 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar13 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar12 = 0xfb;
  goto LAB_001233dc;
}


