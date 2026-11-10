/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df64d0; name: FUN_02df64d0
 */


undefined8 FUN_02df64d0(uint *param_1,long param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar4 = DAT_0429f288 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar9 = (ulong)*(byte *)(param_3 + 1) + 2;
  uVar13 = uVar9 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar9 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *param_1 = uVar4;
  uVar4 = DAT_0429f2e0 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar9 = (ulong)*(byte *)(param_3 + 1) + 0x18;
  uVar13 = uVar9 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar9 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[6] = uVar4;
  uVar4 = DAT_0429f2e0 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar9 = (ulong)*(byte *)(param_3 + 1) + 0x18;
  uVar13 = uVar9 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar9 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[7] = uVar4;
  uVar4 = DAT_0429f2e0 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar9 = (ulong)*(byte *)(param_3 + 1) + 0x18;
  uVar13 = uVar9 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar9 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[8] = uVar4 + 1;
  uVar13 = *(ulong *)*param_3;
  bVar15 = *(byte *)(param_3 + 1);
  bVar7 = (byte)DAT_0429f298;
  uVar9 = (ulong)bVar15 + 6;
  uVar14 = uVar9 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar9 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *(byte *)(param_1 + 9) = (bVar7 & (byte)(uVar13 >> ((ulong)bVar15 & 0x3f))) + 1;
  uVar4 = DAT_0429f2a0 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar9 = (ulong)*(byte *)(param_3 + 1) + 8;
  uVar13 = uVar9 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar9 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *(char *)((long)param_1 + 0x25) = (char)uVar4;
  if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
    return 1;
  }
  bVar15 = (byte)param_1[9];
  if (bVar15 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
LAB_02df6c1c:
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar9 = (ulong)(bVar15 + 3) & 0x1fc;
    uVar4 = *(int *)(param_4 + 0x50) + (int)uVar9;
    if (*(uint *)(param_4 + 0x54) < uVar4) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      lVar11 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar11 + uVar9;
      *(uint *)(param_4 + 0x50) = uVar4;
      *(long *)(param_1 + 2) = lVar11;
      bVar15 = (byte)param_1[9];
      if (bVar15 == 0) goto LAB_02df6c1c;
    }
    puVar10 = param_1 + 2;
    uVar4 = (uint)bVar15 * 8 + *(int *)(param_4 + 0x50);
    if (*(uint *)(param_4 + 0x54) < uVar4) {
      param_1[4] = 0;
      param_1[5] = 0;
    }
    else {
      lVar11 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar11 + (ulong)((uint)bVar15 * 8);
      *(uint *)(param_4 + 0x50) = uVar4;
      *(long *)(param_1 + 4) = lVar11;
      if ((char)param_1[9] == '\0') goto LAB_02df6c20;
    }
    puVar12 = param_1 + 4;
    uVar9 = 0;
    do {
      uVar8 = DAT_0429f28c;
      bVar15 = *(byte *)(param_3 + 1);
      uVar13 = (ulong)bVar15 + 3;
      uVar14 = *(ulong *)*param_3;
      uVar16 = (uint)uVar13;
      uVar4 = uVar16 & 0x1f;
      *(char *)(param_3 + 1) = (char)uVar4;
      bVar15 = (byte)uVar8 & (byte)(uVar14 >> ((ulong)bVar15 & 0x3f));
      uVar13 = uVar13 >> 5;
      iVar6 = *(int *)((long)param_3 + 0xc) - (int)uVar13;
      puVar2 = (uint *)(*param_3 + uVar13 * 4);
      uVar4 = uVar4 + 1;
      *(int *)((long)param_3 + 0xc) = iVar6;
      uVar3 = uVar4 & 0x1f;
      *param_3 = (long)puVar2;
      uVar5 = *puVar2;
      uVar4 = uVar4 >> 5;
      puVar1 = (ulong *)(puVar2 + uVar4);
      iVar6 = iVar6 - uVar4;
      *(int *)((long)param_3 + 0xc) = iVar6;
      *param_3 = (long)puVar1;
      *(char *)(param_3 + 1) = (char)uVar3;
      if ((1 << (ulong)(uVar16 & 0x1f) & uVar5) != 0) {
        uVar4 = uVar3 + 5 >> 5;
        bVar15 = bVar15 | (byte)((DAT_0429f294 & (uint)(*puVar1 >> uVar3)) << 3);
        *(byte *)(param_3 + 1) = (byte)(uVar3 + 5) & 0x1f;
        *(uint *)((long)param_3 + 0xc) = iVar6 - uVar4;
        *param_3 = (long)((long)puVar1 + (ulong)uVar4 * 4);
      }
      *(byte *)(*(long *)(param_1 + 2) + uVar9) = bVar15;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (byte)param_1[9]);
    if ((byte)param_1[9] != 0) {
      uVar9 = 0;
      lVar11 = 7;
      do {
        if ((*(byte *)(*(long *)puVar10 + uVar9) & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar11 + -7) = 0xff;
        }
        else {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -7) = (char)uVar4;
          if (*(char *)((long)param_1 + 0x26) == '\0') {
            *(undefined1 *)((long)param_1 + 0x26) = 1;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar9) >> 1 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar11 + -6) = 0xff;
        }
        else {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -6) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 2) {
            *(undefined1 *)((long)param_1 + 0x26) = 2;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar9) >> 2 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar11 + -5) = 0xff;
        }
        else {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -5) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 3) {
            *(undefined1 *)((long)param_1 + 0x26) = 3;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar9) >> 3 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar11 + -4) = 0xff;
        }
        else {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -4) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 4) {
            *(undefined1 *)((long)param_1 + 0x26) = 4;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar9) >> 4 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar11 + -3) = 0xff;
        }
        else {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -3) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 5) {
            *(undefined1 *)((long)param_1 + 0x26) = 5;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar9) >> 5 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar11 + -2) = 0xff;
        }
        else {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 6) {
            *(undefined1 *)((long)param_1 + 0x26) = 6;
          }
        }
        if ((*(byte *)(*(long *)puVar10 + uVar9) >> 6 & 1) == 0) {
          *(undefined1 *)(*(long *)puVar12 + lVar11 + -1) = 0xff;
        }
        else {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11 + -1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 7) {
            *(undefined1 *)((long)param_1 + 0x26) = 7;
          }
        }
        if (*(char *)(*(long *)puVar10 + uVar9) < '\0') {
          uVar4 = DAT_0429f2a0 &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          uVar13 = (ulong)*(byte *)(param_3 + 1) + 8;
          uVar14 = uVar13 >> 5;
          *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
          *param_3 = *param_3 + uVar14 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) {
            return 1;
          }
          *(char *)(*(long *)(param_1 + 4) + lVar11) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 8) {
            *(undefined1 *)((long)param_1 + 0x26) = 8;
          }
        }
        else {
          *(undefined1 *)(*(long *)puVar12 + lVar11) = 0xff;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 8;
      } while (uVar9 < (byte)param_1[9]);
    }
  }
LAB_02df6c20:
  if (*(int *)((long)param_3 + 0xc) < 0) {
    return 1;
  }
  return 0;
}


