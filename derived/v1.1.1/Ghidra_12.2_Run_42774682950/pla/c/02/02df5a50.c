/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df5a50; name: FUN_02df5a50
 */


undefined8 FUN_02df5a50(int *param_1,long param_2,uint param_3,long *param_4,long param_5)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
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
  bVar4 = *(byte *)(param_4 + 1);
  uVar3 = *(uint *)*param_4;
  uVar9 = (ulong)bVar4 + 1;
  uVar2 = (uint)uVar9 & 0x1f;
  uVar9 = uVar9 >> 5;
  iVar7 = *(int *)((long)param_4 + 0xc) - (int)uVar9;
  puVar1 = (ulong *)((uint *)*param_4 + uVar9);
  iVar12 = 1;
  *(char *)(param_4 + 1) = (char)uVar2;
  *(int *)((long)param_4 + 0xc) = iVar7;
  *param_4 = (long)puVar1;
  uVar6 = DAT_0429f290;
  if ((1 << (ulong)(bVar4 & 0x1f) & uVar3) != 0) {
    uVar9 = *puVar1;
    *(byte *)(param_4 + 1) = (byte)(uVar2 + 4) & 0x1f;
    uVar3 = uVar2 + 4 >> 5;
    iVar12 = (uVar6 & (uint)(uVar9 >> uVar2)) + 1;
    *(uint *)((long)param_4 + 0xc) = iVar7 - uVar3;
    *param_4 = (long)((long)puVar1 + (ulong)uVar3 * 4);
  }
  *param_1 = iVar12;
  bVar4 = *(byte *)(param_4 + 1);
  uVar9 = (ulong)bVar4 + 1;
  uVar3 = *(uint *)*param_4;
  uVar2 = (uint)uVar9 & 0x1f;
  uVar9 = uVar9 >> 5;
  puVar1 = (ulong *)((uint *)*param_4 + uVar9);
  iVar12 = *(int *)((long)param_4 + 0xc) - (int)uVar9;
  *(char *)(param_4 + 1) = (char)uVar2;
  *param_4 = (long)puVar1;
  *(int *)((long)param_4 + 0xc) = iVar12;
  if ((1 << (ulong)(bVar4 & 0x1f) & uVar3) != 0) {
    uVar3 = uVar2 + 8 >> 5;
    iVar7 = (DAT_0429f2a0 & (uint)(*puVar1 >> uVar2)) + 1;
    *(byte *)(param_4 + 1) = (byte)(uVar2 + 8) & 0x1f;
    *(uint *)((long)param_4 + 0xc) = iVar12 - uVar3;
    *param_4 = (long)((long)puVar1 + (ulong)uVar3 * 4);
    param_1[6] = iVar7;
    if (iVar7 * 2 == 0) {
LAB_02df5f0c:
      lVar8 = 0;
    }
    else {
      uVar3 = iVar7 * 2 + 3U & 0xfffffffc;
      uVar2 = *(int *)(param_5 + 0x50) + uVar3;
      if (*(uint *)(param_5 + 0x54) < uVar2) goto LAB_02df5f0c;
      lVar8 = *(long *)(param_5 + 0x48);
      *(ulong *)(param_5 + 0x48) = lVar8 + (ulong)uVar3;
      *(uint *)(param_5 + 0x50) = uVar2;
      iVar7 = param_1[6];
    }
    *(long *)(param_1 + 8) = lVar8;
    if (0 < iVar7) {
      uVar2 = 0;
      if (param_3 - 1 != 0 && param_3 != 0) {
        uVar2 = 0x20 - (int)LZCOUNT(param_3 - 1);
      }
      uVar9 = (ulong)uVar2;
      lVar10 = 0;
      lVar8 = 0;
      do {
        uVar3 = (&DAT_0429f280)[uVar9] &
                (uint)(*(ulong *)*param_4 >> ((ulong)*(byte *)(param_4 + 1) & 0x3f));
        uVar11 = uVar9 + *(byte *)(param_4 + 1);
        uVar13 = uVar11 >> 5;
        *(byte *)(param_4 + 1) = (byte)uVar11 & 0x1f;
        *param_4 = *param_4 + uVar13 * 4;
        *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar13;
        *(char *)(*(long *)(param_1 + 8) + lVar10) = (char)uVar3;
        uVar2 = (&DAT_0429f280)[uVar9] &
                (uint)(*(ulong *)*param_4 >> ((ulong)*(byte *)(param_4 + 1) & 0x3f));
        uVar11 = uVar9 + *(byte *)(param_4 + 1);
        uVar13 = uVar11 >> 5;
        *(byte *)(param_4 + 1) = (byte)uVar11 & 0x1f;
        *param_4 = *param_4 + uVar13 * 4;
        *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar13;
        *(char *)(*(long *)(param_1 + 8) + lVar10 + 1) = (char)uVar2;
        uVar2 = uVar2 & 0xff;
        if ((int)param_3 <= (int)uVar2) {
          return 0xffffffff;
        }
        uVar3 = uVar3 & 0xff;
        if ((int)param_3 <= (int)uVar3) {
          return 0xffffffff;
        }
        if (uVar3 == uVar2) {
          return 0xffffffff;
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 2;
      } while (lVar8 < param_1[6]);
    }
  }
  uVar2 = DAT_0429f288;
  bVar4 = *(byte *)(param_4 + 1);
  uVar9 = (ulong)bVar4 + 2;
  uVar11 = *(ulong *)*param_4;
  *(byte *)(param_4 + 1) = (byte)uVar9 & 0x1f;
  uVar9 = uVar9 >> 5;
  *param_4 = *param_4 + uVar9 * 4;
  *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar9;
  if (0 < (int)(uVar2 & (uint)(uVar11 >> ((ulong)bVar4 & 0x3f)))) {
    return 0xffffffff;
  }
  iVar12 = *param_1;
  if (1 < iVar12) {
    if (param_3 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      uVar3 = param_3 + 3 & 0xfffffffc;
      uVar2 = *(int *)(param_5 + 0x50) + uVar3;
      if (*(uint *)(param_5 + 0x54) < uVar2) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(param_5 + 0x48);
        *(ulong *)(param_5 + 0x48) = lVar8 + (ulong)uVar3;
        *(uint *)(param_5 + 0x50) = uVar2;
      }
      *(long *)(param_1 + 2) = lVar8;
      if ((int)param_3 < 1) {
        iVar12 = *param_1;
      }
      else {
        uVar9 = 0;
        do {
          uVar13 = *(ulong *)*param_4;
          bVar4 = *(byte *)(param_4 + 1);
          bVar5 = (byte)DAT_0429f290;
          uVar11 = (ulong)bVar4 + 4;
          uVar14 = uVar11 >> 5;
          *(byte *)(param_4 + 1) = (byte)uVar11 & 0x1f;
          *param_4 = *param_4 + uVar14 * 4;
          *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar14;
          *(byte *)(*(long *)(param_1 + 2) + uVar9) =
               bVar5 & (byte)(uVar13 >> ((ulong)bVar4 & 0x3f));
          iVar12 = *param_1;
          if (iVar12 <= (int)(uint)*(byte *)(*(long *)(param_1 + 2) + uVar9)) {
            return 0xffffffff;
          }
          uVar9 = uVar9 + 1;
        } while (param_3 != uVar9);
      }
    }
  }
  if (iVar12 * 2 != 0) {
    uVar3 = iVar12 * 2 + 3U & 0xfffffffc;
    uVar2 = *(int *)(param_5 + 0x50) + uVar3;
    if (uVar2 <= *(uint *)(param_5 + 0x54)) {
      lVar8 = *(long *)(param_5 + 0x48);
      *(ulong *)(param_5 + 0x48) = lVar8 + (ulong)uVar3;
      *(uint *)(param_5 + 0x50) = uVar2;
      iVar12 = *param_1;
      goto LAB_02df5b64;
    }
  }
  lVar8 = 0;
LAB_02df5b64:
  *(long *)(param_1 + 4) = lVar8;
  if (iVar12 < 1) {
    return 0;
  }
  lVar10 = 0;
  lVar8 = 0;
  while( true ) {
    uVar9 = (ulong)*(byte *)(param_4 + 1) + 8;
    puVar1 = (ulong *)(*param_4 + (uVar9 >> 5) * 4);
    uVar2 = (uint)uVar9 & 0x1f;
    iVar12 = *(int *)((long)param_4 + 0xc) - (int)(uVar9 >> 5);
    *(char *)(param_4 + 1) = (char)uVar2;
    uVar2 = uVar2 + 8;
    *(int *)((long)param_4 + 0xc) = iVar12;
    *param_4 = (long)puVar1;
    uVar11 = *puVar1;
    bVar4 = (byte)DAT_0429f2a0;
    uVar3 = uVar2 >> 5;
    *(byte *)(param_4 + 1) = (byte)uVar2 & 0x1f;
    *(uint *)((long)param_4 + 0xc) = iVar12 - uVar3;
    *param_4 = (long)puVar1 + (ulong)uVar3 * 4;
    *(byte *)(*(long *)(param_1 + 4) + lVar10) = bVar4 & (byte)(uVar11 >> (uVar9 & 0x1f));
    if (*(int *)(param_2 + 0x10) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar10)) {
      return 0xffffffff;
    }
    uVar11 = *(ulong *)*param_4;
    bVar4 = *(byte *)(param_4 + 1);
    bVar5 = (byte)DAT_0429f2a0;
    uVar9 = (ulong)bVar4 + 8;
    uVar13 = uVar9 >> 5;
    *(byte *)(param_4 + 1) = (byte)uVar9 & 0x1f;
    *param_4 = *param_4 + uVar13 * 4;
    *(int *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) - (int)uVar13;
    *(byte *)(*(long *)(param_1 + 4) + lVar10 + 1) = bVar5 & (byte)(uVar11 >> ((ulong)bVar4 & 0x3f))
    ;
    if (*(int *)(param_2 + 0x14) <= (int)(uint)*(byte *)(*(long *)(param_1 + 4) + lVar10 + 1))
    break;
    lVar8 = lVar8 + 1;
    lVar10 = lVar10 + 2;
    if (*param_1 <= lVar8) {
      return 0;
    }
  }
  return 0xffffffff;
}


