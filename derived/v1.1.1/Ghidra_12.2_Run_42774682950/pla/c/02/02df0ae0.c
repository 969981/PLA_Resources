/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df0ae0; name: FUN_02df0ae0
 */


undefined8 FUN_02df0ae0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  ulong *puVar14;
  ushort *puVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint local_90;
  int local_8c;
  undefined2 local_88;
  undefined2 local_86;
  int local_84;
  ushort *local_78;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar4 = DAT_0429f290;
  bVar5 = *(byte *)(param_1 + 1);
  uVar22 = (ulong)bVar5 + 4;
  uVar19 = *(ulong *)*param_1;
  *(byte *)(param_1 + 1) = (byte)uVar22 & 0x1f;
  uVar22 = uVar22 >> 5;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar22;
  *param_1 = *param_1 + uVar22 * 4;
  *(byte *)((long)param_2 + 0x1a) = (byte)uVar4 & (byte)(uVar19 >> ((ulong)bVar5 & 0x3f));
  uVar19 = (ulong)DAT_0429f2b8;
  uVar17 = *(ulong *)*param_1;
  uVar22 = (ulong)*(byte *)(param_1 + 1) + 0xe;
  uVar20 = uVar22 >> 5;
  iVar16 = *(int *)((long)param_1 + 0xc) - (int)uVar20;
  *(int *)((long)param_1 + 0xc) = iVar16;
  uVar19 = uVar17 >> ((ulong)*(byte *)(param_1 + 1) & 0x3f) & uVar19;
  puVar1 = (uint *)(*param_1 + uVar20 * 4);
  uVar17 = uVar19 & 0xffff;
  uVar28 = (uint)uVar17;
  uVar12 = (uint)uVar22;
  uVar27 = uVar12 & 0x1f;
  *(char *)(param_1 + 1) = (char)uVar27;
  pcVar26 = (char *)((long)&local_90 - ((ulong)(uVar28 + 0xf) & 0x1fff0));
  *param_1 = (long)puVar1;
  uVar29 = (uint)uVar19;
  local_88 = (undefined2)uVar19;
  local_86 = 0;
  uVar3 = *puVar1;
  uVar27 = uVar27 + 1;
  uVar13 = uVar27 & 0x1f;
  uVar27 = uVar27 >> 5;
  *(char *)(param_1 + 1) = (char)uVar13;
  iVar16 = iVar16 - uVar27;
  puVar14 = (ulong *)(puVar1 + uVar27);
  *(int *)((long)param_1 + 0xc) = iVar16;
  *param_1 = (long)puVar14;
  uVar27 = DAT_0429f294;
  if ((uVar3 & 1 << (ulong)(uVar12 & 0x1f)) == 0) {
    uVar27 = uVar13 + 3;
    puVar1 = (uint *)((long)puVar14 + (ulong)(uVar27 >> 5) * 4);
    uVar12 = DAT_0429f28c & (uint)(*puVar14 >> uVar13);
    iVar16 = iVar16 - (uVar27 >> 5);
    *(char *)(param_1 + 1) = (char)(uVar27 & 0x1f);
    *(int *)((long)param_1 + 0xc) = iVar16;
    uVar13 = (uVar27 & 0x1f) + 1;
    *param_1 = (long)puVar1;
    uVar21 = *puVar1;
    uVar3 = uVar13 & 0x1f;
    uVar22 = (ulong)uVar3;
    uVar13 = uVar13 >> 5;
    iVar16 = iVar16 - uVar13;
    puVar14 = (ulong *)(puVar1 + uVar13);
    *(char *)(param_1 + 1) = (char)uVar3;
    *(int *)((long)param_1 + 0xc) = iVar16;
    *param_1 = (long)puVar14;
    if ((uVar21 & 1 << (ulong)(uVar27 & 0x1f)) == 0) {
      local_86 = local_88;
      if (uVar28 != 0) {
        pcVar23 = pcVar26;
        uVar20 = uVar17;
        while( true ) {
          uVar20 = uVar20 - 1;
          iVar30 = uVar12 + (int)uVar22;
          uVar27 = (&DAT_0429f280)[(int)uVar12] & (uint)(*puVar14 >> (uVar22 & 0x3f));
          iVar2 = iVar30 >> 5;
          *param_1 = (long)((long)puVar14 + (long)iVar2 * 4);
          cVar7 = (char)uVar27 + '\x01';
          *(byte *)(param_1 + 1) = (byte)iVar30 & 0x1f;
          *(int *)((long)param_1 + 0xc) = iVar16 - iVar2;
          *pcVar23 = cVar7;
          if ((int)(uint)*(byte *)((long)param_2 + 0x1c) <= (int)uVar27) {
            *(char *)((long)param_2 + 0x1c) = cVar7;
          }
          if (uVar20 == 0) break;
          puVar14 = (ulong *)*param_1;
          pcVar23 = pcVar23 + 1;
          uVar22 = (ulong)*(byte *)(param_1 + 1);
          iVar16 = *(int *)((long)param_1 + 0xc);
        }
      }
    }
    else {
      uVar29 = 0;
      if (uVar28 != 0) {
        pcVar23 = pcVar26;
        uVar20 = uVar17;
        uVar29 = 0;
        while( true ) {
          uVar20 = uVar20 - 1;
          uVar18 = *puVar14;
          uVar27 = (uint)uVar22 + 1;
          uVar13 = uVar27 & 0x1f;
          uVar27 = uVar27 >> 5;
          puVar14 = (ulong *)((long)puVar14 + (ulong)uVar27 * 4);
          iVar16 = iVar16 - uVar27;
          *(char *)(param_1 + 1) = (char)uVar13;
          *(int *)((long)param_1 + 0xc) = iVar16;
          *param_1 = (long)puVar14;
          if (((uint)uVar18 & 1 << (ulong)((uint)uVar22 & 0x1f)) == 0) {
            *pcVar23 = '\0';
          }
          else {
            uVar29 = uVar29 + 1;
            uVar27 = (&DAT_0429f280)[(int)uVar12] & (uint)(*puVar14 >> uVar13);
            iVar30 = (int)(uVar12 + uVar13) >> 5;
            *param_1 = (long)((long)puVar14 + (long)iVar30 * 4);
            cVar7 = (char)uVar27 + '\x01';
            *(byte *)(param_1 + 1) = (byte)(uVar12 + uVar13) & 0x1f;
            *(int *)((long)param_1 + 0xc) = iVar16 - iVar30;
            *pcVar23 = cVar7;
            if ((int)(uint)*(byte *)((long)param_2 + 0x1c) <= (int)uVar27) {
              *(char *)((long)param_2 + 0x1c) = cVar7;
            }
          }
          if (uVar20 == 0) break;
          puVar14 = (ulong *)*param_1;
          pcVar23 = pcVar23 + 1;
          uVar22 = (ulong)*(byte *)(param_1 + 1);
          iVar16 = *(int *)((long)param_1 + 0xc);
        }
        local_86 = (undefined2)uVar29;
      }
    }
  }
  else {
    uVar22 = *puVar14;
    uVar3 = uVar13 + 5 & 0x1f;
    uVar20 = (ulong)uVar3;
    uVar12 = uVar13 + 5 >> 5;
    puVar14 = (ulong *)((long)puVar14 + (ulong)uVar12 * 4);
    iVar16 = iVar16 - uVar12;
    *(char *)(param_1 + 1) = (char)uVar3;
    *(int *)((long)param_1 + 0xc) = iVar16;
    *param_1 = (long)puVar14;
    local_86 = local_88;
    if (uVar28 != 0) {
      uVar27 = uVar27 & (uint)(uVar22 >> uVar13);
      iVar30 = 0;
      while( true ) {
        uVar27 = uVar27 + 1;
        uVar13 = 0;
        if (uVar28 - iVar30 != 0) {
          uVar13 = 0x20 - (int)LZCOUNT(uVar28 - iVar30);
        }
        uVar3 = uVar13 + (int)uVar20;
        uVar12 = uVar3 >> 5;
        uVar13 = (&DAT_0429f280)[uVar13];
        uVar22 = *puVar14;
        *(byte *)(param_1 + 1) = (byte)uVar3 & 0x1f;
        *(uint *)((long)param_1 + 0xc) = iVar16 - uVar12;
        *param_1 = (long)((long)puVar14 + (ulong)uVar12 * 4);
        if ((iVar30 < (int)uVar28) &&
           (uVar13 = uVar13 & (uint)(uVar22 >> (uVar20 & 0x3f)), uVar22 = (ulong)(uVar13 - 1),
           0 < (int)uVar13)) {
          uVar20 = ~(long)iVar30 + uVar17;
          if (uVar22 <= uVar20) {
            uVar20 = uVar22;
          }
          memset(pcVar26 + iVar30,uVar27,uVar20 + 1);
          iVar30 = (int)uVar20 + iVar30 + 1;
        }
        *(char *)((long)param_2 + 0x1c) = (char)uVar27;
        if ((int)uVar28 <= iVar30) break;
        puVar14 = (ulong *)*param_1;
        uVar20 = (ulong)*(byte *)(param_1 + 1);
        iVar16 = *(int *)((long)param_1 + 0xc);
      }
    }
  }
  bVar5 = *(byte *)(param_1 + 1);
  uVar22 = (ulong)bVar5 + 1;
  uVar27 = *(uint *)*param_1;
  *(byte *)(param_1 + 1) = (byte)uVar22 & 0x1f;
  uVar27 = uVar27 >> (ulong)(bVar5 & 0x1f);
  uVar22 = uVar22 >> 5;
  *param_1 = (long)((uint *)*param_1 + uVar22);
  local_70 = uVar27 & 1;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar22;
  if ((uVar27 & 1) == 0) {
    uVar27 = 1;
    if (uVar28 != 0) {
      uVar27 = (0x20U - (int)LZCOUNT(uVar28) >> 3) + 1;
    }
    if ((uVar29 & 0xffff) < 2) {
      local_68 = 4;
    }
    else {
      if (uVar27 == 3) {
        uVar28 = 4;
      }
      else {
        uVar28 = uVar27;
      }
      iVar30 = (uVar29 & 0xffff) * 3 + -6;
      iVar16 = 0;
      if (iVar30 != 0) {
        iVar16 = 0x20 - (int)LZCOUNT(iVar30);
      }
      local_68 = uVar28;
      if ((iVar16 < (int)(uVar28 * 4)) && (local_68 = uVar28 >> 1, uVar28 < 2)) {
        local_68 = 1;
      }
    }
    uVar11 = 1;
    if (local_68 < uVar27) {
      uVar11 = 2;
    }
    local_6c = 0;
    *(undefined1 *)((long)param_2 + 0x1b) = uVar11;
    uVar9 = FUN_02df1350(param_2,pcVar26,0,param_1,&local_90,param_3,param_4);
  }
  else {
    lVar8 = (*DAT_0442d140)(5,0x60,0x10);
    param_2[2] = lVar8;
    if (lVar8 == 0) {
      uVar9 = 0xffffff75;
    }
    else {
      *(undefined8 *)(lVar8 + 0x48) = 0;
      uVar22 = (ulong)*(byte *)(param_1 + 1) + 0x20;
      uVar13 = DAT_0429f300 & (uint)(*(ulong *)*param_1 >> ((ulong)*(byte *)(param_1 + 1) & 0x3f));
      uVar27 = (uint)uVar22 & 0x1f;
      uVar22 = uVar22 >> 5;
      puVar14 = (ulong *)(*param_1 + uVar22 * 4);
      local_8c = (uVar13 >> 0x15 & 0x3ff) - 0x314;
      iVar16 = *(int *)((long)param_1 + 0xc) - (int)uVar22;
      uVar11 = (undefined1)uVar27;
      *(undefined1 *)(param_1 + 1) = uVar11;
      *(int *)((long)param_1 + 0xc) = iVar16;
      *param_1 = (long)puVar14;
      uVar3 = DAT_0429f300;
      uVar12 = uVar13 & 0x1fffff;
      if ((uVar13 & 0x1fffff) == 0) {
        local_90 = 0;
        local_8c = -9999;
      }
      else {
        do {
          uVar21 = uVar12;
          local_8c = local_8c + -1;
          uVar12 = uVar21 * 2;
        } while ((uVar21 >> 0x1d & 1) == 0);
        local_90 = uVar21 * -2;
        if (-1 < (int)uVar13) {
          local_90 = uVar21 * 2;
        }
      }
      uVar22 = *puVar14;
      *(undefined1 *)(param_1 + 1) = uVar11;
      *(int *)((long)param_1 + 0xc) = iVar16 + -1;
      uVar3 = uVar3 & (uint)(uVar22 >> uVar27);
      local_84 = (uVar3 >> 0x15 & 0x3ff) - 0x314;
      *param_1 = (long)puVar14 + 4;
      uVar27 = uVar3 & 0x1fffff;
      if ((uVar3 & 0x1fffff) == 0) {
        uVar27 = 0;
        local_84 = -9999;
      }
      else {
        do {
          uVar13 = uVar27;
          local_84 = local_84 + -1;
          uVar27 = uVar13 * 2;
        } while ((uVar13 >> 0x1d & 1) == 0);
        uVar27 = uVar13 * -2;
        if (-1 < (int)uVar3) {
          uVar27 = uVar13 * 2;
        }
      }
      *(uint *)(param_2[2] + 0x40) = uVar27;
      bVar5 = *(byte *)(param_1 + 1);
      uVar20 = *(ulong *)*param_1;
      bVar6 = (byte)DAT_0429f290;
      uVar22 = (ulong)bVar5 + 4;
      uVar18 = uVar22 >> 5;
      *(byte *)(param_1 + 1) = (byte)uVar22 & 0x1f;
      *param_1 = *param_1 + uVar18 * 4;
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar18;
      *(byte *)(param_2[2] + 0x50) = (bVar6 & (byte)(uVar20 >> ((ulong)bVar5 & 0x3f))) + 1;
      uVar22 = (ulong)*(byte *)(param_1 + 1) + 1 >> 5;
      *(byte *)(param_1 + 1) = (byte)((ulong)*(byte *)(param_1 + 1) + 1) & 0x1f;
      *param_1 = *param_1 + uVar22 * 4;
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - (int)uVar22;
      lVar8 = param_2[2];
      *(int *)(lVar8 + 0x40) = *(int *)(lVar8 + 0x40) >> (*(byte *)(lVar8 + 0x50) & 0x1f);
      bVar6 = *(byte *)(param_2[2] + 0x50);
      uVar27 = (uint)bVar6;
      local_84 = local_84 + uVar27;
      bVar5 = *(byte *)((long)param_2 + 0x1a);
      if (bVar5 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar13 = (uint)LZCOUNT(uVar28) ^ 0x1f;
      if ((uVar19 & 0xffff) == 0) {
        uVar13 = 0xffffffff;
      }
      uVar3 = 0;
      uVar12 = (uint)bVar5;
      if (uVar12 != 0) {
        uVar3 = (int)((bVar5 - 1) * uVar13) / (int)uVar12;
      }
      uVar28 = uVar28 >> (ulong)(uVar3 & 0x1f);
      while( true ) {
        lVar10 = (long)(int)uVar28;
        lVar25 = (long)(int)(uVar28 + 1);
        uVar13 = (uint)bVar5;
        lVar8 = lVar10;
        lVar24 = lVar25;
        if (uVar12 != 1) {
          lVar8 = lVar10 * lVar10;
          lVar24 = lVar25 * lVar25;
          if (uVar13 != 2) {
            lVar8 = lVar8 * lVar10;
            lVar24 = lVar24 * lVar25;
            iVar16 = uVar12 - 3;
            if (uVar13 != 3) {
              do {
                lVar8 = lVar8 * lVar10;
                iVar16 = iVar16 + -1;
                lVar24 = lVar24 * lVar25;
              } while (iVar16 != 0);
            }
          }
        }
        if (((long)uVar17 < lVar24) && (lVar8 <= (long)uVar17)) break;
        iVar16 = -1;
        if (lVar8 <= (long)uVar17) {
          iVar16 = 1;
        }
        uVar28 = iVar16 + uVar28;
      }
      puVar15 = (ushort *)(pcVar26 + -(lVar10 * 2 + 0xfU & 0xfffffffffffffff0));
      local_78 = puVar15;
      if (0 < (int)uVar28) {
        puVar14 = (ulong *)*param_1;
        uVar19 = (ulong)uVar28;
        uVar22 = (ulong)*(byte *)(param_1 + 1);
        iVar16 = *(int *)((long)param_1 + 0xc);
        while( true ) {
          uVar19 = uVar19 - 1;
          uVar20 = *puVar14;
          uVar4 = (&DAT_0429f280)[bVar6];
          uVar28 = (uint)bVar6 + (int)uVar22;
          uVar17 = uVar22 & 0x3f;
          uVar3 = uVar28 & 0x1f;
          uVar22 = (ulong)uVar3;
          uVar28 = uVar28 >> 5;
          puVar14 = (ulong *)((long)puVar14 + (ulong)uVar28 * 4);
          iVar16 = iVar16 - uVar28;
          *(char *)(param_1 + 1) = (char)uVar3;
          *(int *)((long)param_1 + 0xc) = iVar16;
          *param_1 = (long)puVar14;
          *puVar15 = (ushort)uVar4 & (ushort)(uVar20 >> uVar17);
          if (uVar19 == 0) break;
          puVar15 = puVar15 + 1;
          bVar6 = *(byte *)(param_2[2] + 0x50);
        }
      }
      uVar27 = uVar13 * uVar27 + 8 >> 3;
      local_6c = 1;
      if ((uVar29 & 0xffff) < 2) {
        local_68 = 4;
      }
      else {
        if (uVar27 == 3) {
          uVar28 = 4;
        }
        else {
          uVar28 = uVar27;
        }
        iVar16 = (uVar29 & 0xffff) * 3 + -6;
        uVar29 = 0;
        if (iVar16 != 0) {
          uVar29 = 0x20 - (int)LZCOUNT(iVar16);
        }
        local_68 = uVar28;
        if ((uVar29 < uVar28 << 2) && (local_68 = uVar28 >> 1, uVar28 < 2)) {
          local_68 = 1;
        }
      }
      uVar11 = 1;
      if (local_68 < uVar27) {
        uVar11 = 2;
      }
      *(undefined1 *)((long)param_2 + 0x1b) = uVar11;
      uVar9 = FUN_02df1350(param_2,pcVar26,lVar10,param_1,&local_90,param_3,param_4);
    }
  }
  return uVar9;
}


