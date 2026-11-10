/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dee6b0; name: FUN_02dee6b0
 */


undefined8 FUN_02dee6b0(long *param_1,long param_2,long *param_3,long param_4)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  byte bVar10;
  int iVar11;
  undefined1 uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined1 uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  ushort uVar26;
  int iVar27;
  undefined1 uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  ushort uVar33;
  
  uVar16 = DAT_0429f294;
  bVar5 = *(byte *)(param_3 + 1);
  uVar22 = (ulong)bVar5 + 5;
  uVar21 = *(ulong *)*param_3;
  *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
  uVar22 = uVar22 >> 5;
  uVar16 = uVar16 & (uint)(uVar21 >> ((ulong)bVar5 & 0x3f));
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar22;
  *param_3 = *param_3 + uVar22 * 4;
  *(uint *)(param_1 + 6) = uVar16;
  if (uVar16 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar30 = uVar16 + 3 & 0xfffffffc;
    uVar20 = *(int *)(param_4 + 0x50) + uVar30;
    if (*(uint *)(param_4 + 0x54) < uVar20) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar18 + (ulong)uVar30;
      *(uint *)(param_4 + 0x50) = uVar20;
      uVar16 = *(uint *)(param_1 + 6);
    }
    param_1[1] = lVar18;
    if (0 < (int)uVar16) {
      bVar5 = *(byte *)(param_3 + 1);
      uVar21 = *(ulong *)*param_3;
      bVar6 = (byte)DAT_0429f290;
      uVar22 = (ulong)bVar5 + 4;
      uVar23 = uVar22 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
      *param_3 = *param_3 + uVar23 * 4;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar23;
      *(byte *)param_1[1] = bVar6 & (byte)(uVar21 >> ((ulong)bVar5 & 0x3f));
      bVar5 = *(byte *)param_1[1];
      uVar16 = (uint)bVar5;
      if (1 < (int)param_1[6]) {
        uVar21 = *(ulong *)*param_3;
        bVar6 = *(byte *)(param_3 + 1);
        bVar10 = (byte)DAT_0429f290;
        uVar22 = (ulong)bVar6 + 4;
        uVar23 = uVar22 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
        *param_3 = *param_3 + uVar23 * 4;
        *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar23;
        *(byte *)(param_1[1] + 1) = bVar10 & (byte)(uVar21 >> ((ulong)bVar6 & 0x3f));
        uVar16 = (uint)*(byte *)(param_1[1] + 1);
        if ((uint)*(byte *)(param_1[1] + 1) <= (uint)bVar5) {
          uVar16 = (uint)bVar5;
        }
        if (2 < (int)param_1[6]) {
          lVar18 = 2;
          uVar20 = uVar16;
          do {
            uVar21 = *(ulong *)*param_3;
            bVar5 = *(byte *)(param_3 + 1);
            bVar6 = (byte)DAT_0429f290;
            uVar22 = (ulong)bVar5 + 4;
            uVar23 = uVar22 >> 5;
            *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
            *param_3 = *param_3 + uVar23 * 4;
            *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar23;
            *(byte *)(param_1[1] + lVar18) = bVar6 & (byte)(uVar21 >> ((ulong)bVar5 & 0x3f));
            pbVar25 = (byte *)(param_1[1] + lVar18);
            lVar18 = lVar18 + 1;
            uVar16 = (uint)*pbVar25;
            if (*pbVar25 <= uVar20) {
              uVar16 = uVar20;
            }
            uVar20 = uVar16;
          } while (lVar18 < (int)param_1[6]);
        }
      }
      if (uVar16 * 0xb == -0xb) {
LAB_02deeedc:
        lVar18 = 0;
      }
      else {
        uVar30 = uVar16 * 0xb + 0xe & 0xfffffffc;
        uVar20 = *(int *)(param_4 + 0x50) + uVar30;
        if (*(uint *)(param_4 + 0x54) < uVar20) goto LAB_02deeedc;
        lVar18 = *(long *)(param_4 + 0x48);
        *(ulong *)(param_4 + 0x48) = lVar18 + (ulong)uVar30;
        *(uint *)(param_4 + 0x50) = uVar20;
      }
      uVar22 = 0;
      *param_1 = lVar18;
      lVar18 = 3;
      do {
        uVar23 = *(ulong *)*param_3;
        bVar5 = *(byte *)(param_3 + 1);
        bVar6 = (byte)DAT_0429f28c;
        uVar21 = (ulong)bVar5 + 3;
        uVar31 = uVar21 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
        *param_3 = *param_3 + uVar31 * 4;
        lVar32 = uVar22 * 0xb;
        *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar31;
        *(byte *)(*param_1 + lVar32) = (bVar6 & (byte)(uVar23 >> ((ulong)bVar5 & 0x3f))) + 1;
        uVar23 = *(ulong *)*param_3;
        bVar5 = *(byte *)(param_3 + 1);
        bVar6 = (byte)DAT_0429f288;
        uVar21 = (ulong)bVar5 + 2;
        uVar31 = uVar21 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
        *param_3 = *param_3 + uVar31 * 4;
        *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar31;
        *(byte *)(*param_1 + lVar32 + 1) = bVar6 & (byte)(uVar23 >> ((ulong)bVar5 & 0x3f));
        if (*(char *)(*param_1 + lVar32 + 1) == '\0') {
          *(undefined1 *)(*param_1 + uVar22 * 0xb + 2) = 0;
          lVar32 = *param_1;
          if (*(int *)(param_2 + 0x18) <= (int)(uint)*(byte *)(lVar32 + uVar22 * 0xb + 2)) {
            return 0xffffffff;
          }
        }
        else {
          uVar23 = *(ulong *)*param_3;
          bVar5 = *(byte *)(param_3 + 1);
          bVar6 = (byte)DAT_0429f2a0;
          uVar21 = (ulong)bVar5 + 8;
          uVar31 = uVar21 >> 5;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar31;
          *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
          *param_3 = *param_3 + uVar31 * 4;
          *(byte *)(*param_1 + uVar22 * 0xb + 2) = bVar6 & (byte)(uVar23 >> ((ulong)bVar5 & 0x3f));
          lVar32 = *param_1;
          bVar5 = *(byte *)(lVar32 + uVar22 * 0xb + 2);
          if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar5) {
            return 0xffffffff;
          }
          if (*(int *)(param_2 + 0x18) <= (int)(uint)bVar5) {
            return 0xffffffff;
          }
        }
        if (*(char *)(lVar32 + uVar22 * 0xb + 1) != '\x1f') {
          lVar32 = 0;
          do {
            uVar23 = *(ulong *)*param_3;
            bVar5 = *(byte *)(param_3 + 1);
            bVar6 = (byte)DAT_0429f2a0;
            uVar21 = (ulong)bVar5 + 8;
            uVar31 = uVar21 >> 5;
            *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
            *param_3 = *param_3 + uVar31 * 4;
            *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar31;
            *(byte *)(*param_1 + lVar18 + lVar32) =
                 (bVar6 & (byte)(uVar23 >> ((ulong)bVar5 & 0x3f))) - 1;
            bVar5 = *(byte *)(*param_1 + lVar18 + lVar32);
            uVar20 = *(uint *)(param_2 + 0x18);
            uVar30 = (uint)bVar5;
            bVar13 = false;
            bVar14 = false;
            if (uVar30 != 0xff) {
              bVar13 = (int)(uVar20 - bVar5) < 0;
              bVar14 = uVar20 == bVar5;
            }
            if (bVar14 || bVar13 != (uVar30 != 0xff && SBORROW4(uVar20,uVar30))) {
              return 0xffffffff;
            }
            lVar32 = lVar32 + 1;
          } while (lVar32 < 1 << (ulong)(*(byte *)(*param_1 + uVar22 * 0xb + 1) & 0x1f));
        }
        uVar22 = uVar22 + 1;
        lVar18 = lVar18 + 0xb;
      } while (uVar22 != uVar16 + 1);
      goto LAB_02deeab0;
    }
  }
  *param_1 = 0;
LAB_02deeab0:
  uVar16 = DAT_0429f288 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar22 = (ulong)*(byte *)(param_3 + 1) + 2;
  uVar21 = uVar22 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
  *param_3 = *param_3 + uVar21 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar21;
  *(uint *)(param_1 + 7) = uVar16 + 1;
  uVar16 = DAT_0429f290;
  bVar5 = *(byte *)(param_3 + 1);
  uVar22 = (ulong)bVar5 + 4;
  uVar21 = *(ulong *)*param_3;
  *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
  uVar22 = uVar22 >> 5;
  *param_3 = *param_3 + uVar22 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar22;
  iVar27 = (int)param_1[6];
  if (iVar27 < 1) {
    uVar20 = 0;
  }
  else {
    lVar18 = *param_1;
    pbVar25 = (byte *)param_1[1];
    uVar20 = (uint)*(byte *)(lVar18 + (ulong)*pbVar25 * 0xb);
    if ((iVar27 != 1) &&
       (uVar20 = uVar20 + *(byte *)(lVar18 + (ulong)pbVar25[1] * 0xb), iVar27 != 2)) {
      lVar32 = (long)iVar27 + -2;
      pbVar25 = pbVar25 + 2;
      do {
        uVar20 = uVar20 + *(byte *)(lVar18 + (ulong)*pbVar25 * 0xb);
        lVar32 = lVar32 + -1;
        pbVar25 = pbVar25 + 1;
      } while (lVar32 != 0);
    }
  }
  uVar2 = uVar20 * 2 + 7 & 0xfffffffc;
  uVar30 = uVar2 + *(int *)(param_4 + 0x50);
  if (*(uint *)(param_4 + 0x54) < uVar30) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar18 + (ulong)uVar2;
    *(uint *)(param_4 + 0x50) = uVar30;
  }
  param_1[2] = lVar18;
  uVar2 = uVar20 + 5 & 0xfffffffc;
  uVar30 = *(int *)(param_4 + 0x50) + uVar2;
  if (*(uint *)(param_4 + 0x54) < uVar30) {
    param_1[3] = 0;
  }
  else {
    lVar18 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar18 + (ulong)uVar2;
    *(uint *)(param_4 + 0x50) = uVar30;
    param_1[3] = lVar18;
  }
  if (uVar20 == 0) {
    lVar18 = 0;
    param_1[5] = 0;
  }
  else {
    uVar30 = uVar20 + 3 & 0xfffffffc;
    uVar20 = *(int *)(param_4 + 0x50) + uVar30;
    if (*(uint *)(param_4 + 0x54) < uVar20) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar18 + (ulong)uVar30;
      *(uint *)(param_4 + 0x50) = uVar20;
    }
    param_1[5] = lVar18;
    uVar20 = *(int *)(param_4 + 0x50) + uVar30;
    if (*(uint *)(param_4 + 0x54) < uVar20) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar18 + (ulong)uVar30;
      *(uint *)(param_4 + 0x50) = uVar20;
    }
  }
  iVar27 = (int)param_1[6];
  uVar16 = uVar16 & (uint)(uVar21 >> ((ulong)bVar5 & 0x3f));
  param_1[4] = lVar18;
  if (iVar27 < 1) {
    uVar22 = 2;
    iVar27 = *(int *)((long)param_3 + 0xc);
  }
  else {
    lVar18 = 0;
    uVar22 = 0;
    uVar20 = 0;
    do {
      uVar20 = uVar20 + *(byte *)(*param_1 + (ulong)*(byte *)(param_1[1] + lVar18) * 0xb);
      if ((int)uVar22 < (int)uVar20) {
        iVar27 = uVar20 - (int)uVar22;
        lVar32 = (-(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1) + 4;
        do {
          uVar30 = (&DAT_0429f280)[(int)uVar16] &
                   (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          iVar29 = uVar16 + *(byte *)(param_3 + 1);
          iVar3 = iVar29 >> 5;
          *(byte *)(param_3 + 1) = (byte)iVar29 & 0x1f;
          *param_3 = *param_3 + (long)iVar3 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - iVar3;
          *(short *)(param_1[2] + lVar32) = (short)uVar30;
          if (1 << (ulong)(uVar16 & 0x1f) <= (int)(uVar30 & 0xffff)) {
            return 0xffffffff;
          }
          iVar27 = iVar27 + -1;
          lVar32 = lVar32 + 2;
        } while (iVar27 != 0);
        iVar27 = (int)param_1[6];
        uVar22 = (ulong)uVar20;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar27);
    uVar22 = (ulong)(uVar20 + 2);
    iVar27 = *(int *)((long)param_3 + 0xc);
  }
  if (iVar27 < 0) {
    uVar15 = 0xffffffff;
  }
  else {
    *(undefined2 *)param_1[2] = 0;
    *(short *)(param_1[2] + 2) = (short)(1 << (ulong)(uVar16 & 0x1f));
    *(int *)((long)param_1 + 0x34) = (int)uVar22;
    if (0 < (int)uVar22) {
      lVar18 = 0;
      do {
        *(char *)(param_1[3] + lVar18) = (char)lVar18;
        uVar22 = (ulong)*(int *)((long)param_1 + 0x34);
        lVar18 = lVar18 + 1;
      } while (lVar18 < (long)uVar22);
    }
    FUN_02deeef0(param_1[3],param_1[2],uVar22 & 0xffffffff);
    if (2 < *(int *)((long)param_1 + 0x34)) {
      uVar22 = 0;
      lVar18 = 2;
      do {
        lVar24 = param_1[2];
        uVar9 = *(ushort *)(lVar24 + (uVar22 + 2) * 2);
        uVar33 = *(ushort *)(lVar24 + 2);
        lVar32 = 0;
        iVar27 = 0;
        iVar29 = 1;
        uVar26 = 0;
        do {
          puVar1 = (ushort *)(lVar24 + lVar32 * 2);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          iVar17 = (int)lVar32;
          iVar3 = iVar17;
          uVar4 = uVar7;
          if (uVar9 <= uVar7 || uVar7 <= uVar26) {
            iVar3 = iVar27;
            uVar4 = uVar26;
          }
          iVar11 = iVar17;
          if (uVar7 <= uVar9 || uVar33 <= uVar7) {
            iVar11 = iVar29;
            uVar7 = uVar33;
          }
          uVar19 = (undefined1)iVar3;
          iVar27 = iVar3;
          if (uVar8 < uVar9 && uVar4 < uVar8) {
            uVar19 = (undefined1)(iVar17 + 1);
            iVar27 = iVar17 + 1;
            uVar4 = uVar8;
          }
          uVar28 = (undefined1)iVar11;
          uVar33 = uVar7;
          iVar29 = iVar11;
          if (uVar9 < uVar8 && uVar8 < uVar7) {
            uVar28 = (undefined1)(iVar17 + 1);
            uVar33 = uVar8;
            iVar29 = iVar17 + 1;
          }
          lVar32 = lVar32 + 2;
          uVar26 = uVar4;
        } while (lVar18 - (uVar22 & 1) != lVar32);
        if ((uVar22 + 2 & 1) != 0) {
          uVar26 = *(ushort *)(lVar24 + lVar32 * 2);
          uVar12 = (char)lVar32;
          if (uVar33 <= uVar26 || uVar26 <= uVar9) {
            uVar12 = uVar28;
          }
          uVar28 = uVar12;
          uVar12 = (char)lVar32;
          if (uVar26 <= uVar4 || uVar9 <= uVar26) {
            uVar12 = uVar19;
          }
          uVar19 = uVar12;
        }
        *(undefined1 *)(param_1[5] + uVar22) = uVar19;
        *(undefined1 *)(param_1[4] + uVar22) = uVar28;
        uVar22 = uVar22 + 1;
        lVar18 = lVar18 + 1;
      } while ((long)uVar22 < (long)*(int *)((long)param_1 + 0x34) + -2);
    }
    uVar15 = 0;
  }
  return uVar15;
}


