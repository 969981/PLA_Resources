/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df5460; name: FUN_02df5460
 */


int FUN_02df5460(long param_1,int param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong local_70;
  undefined1 local_68;
  int local_64;
  
  uVar5 = DAT_0429f2a0 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 8;
  uVar14 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  iVar9 = uVar5 + 1;
  iVar7 = iVar9 * 0x20;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *(int *)(param_1 + 0x90) = iVar9;
  pvVar10 = (void *)(*DAT_0442d138)(5,iVar7);
  *(void **)(param_1 + 0xb8) = pvVar10;
  if (pvVar10 == (void *)0x0) {
    return -0x85;
  }
  lVar13 = param_1 + 0x10;
  memset(pvVar10,0,(long)iVar7);
  iVar9 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x90) * 0x48;
  *(int *)(param_1 + 0x68) = iVar9;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar17 = 0;
    lVar18 = 0;
    uVar11 = 1;
    if (param_2 == 2) {
      uVar11 = 2;
    }
    do {
      uVar15 = *(ulong *)*param_3;
      bVar6 = *(byte *)(param_3 + 1);
      uVar14 = (ulong)DAT_0429f2a8;
      uVar1 = (ulong)bVar6 + 10;
      uVar16 = uVar1 >> 5;
      *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
      *param_3 = *param_3 + uVar16 * 4;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar16;
      local_70 = (ulong)(&PTR_DAT_0429f308)[uVar15 >> ((ulong)bVar6 & 0x3f) & uVar14] &
                 0xfffffffffffffffc;
      uVar5 = (uint)(&PTR_DAT_0429f308)[uVar15 >> ((ulong)bVar6 & 0x3f) & uVar14] & 3;
      local_64 = uVar5 + 0x36a;
      local_68 = (undefined1)(uVar5 << 3);
      iVar9 = FUN_02df0ae0(&local_70,*(long *)(param_1 + 0xb8) + lVar17,lVar13,uVar11);
      if (iVar9 != 0) {
        return iVar9;
      }
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x20;
    } while (lVar18 < *(int *)(param_1 + 0x90));
    iVar9 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - iVar9;
  lVar18 = (*DAT_0442d138)(5);
  *(long *)(param_1 + 0x50) = lVar18;
  *(long *)(param_1 + 0x58) = lVar18;
  if (lVar18 == 0) {
    return -0x8b;
  }
  lVar18 = param_1 + 0x78;
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar5 = DAT_0429f298 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar14 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  iVar9 = uVar5 + 1;
  uVar5 = iVar9 * 0x40;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *(int *)(param_1 + 0x88) = iVar9;
  if ((uVar5 == 0) || (uVar2 = *(int *)(param_1 + 0x60) + uVar5, *(uint *)(param_1 + 100) < uVar2))
  {
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = *(void **)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = (long)pvVar10 + (ulong)uVar5;
    *(uint *)(param_1 + 0x60) = uVar2;
    if (pvVar10 != (void *)0x0) {
      memset(pvVar10,0,(ulong)uVar5);
      iVar9 = *(int *)(param_1 + 0x88);
    }
  }
  *(void **)(param_1 + 0xa8) = pvVar10;
  if (0 < iVar9) {
    iVar9 = FUN_02dee6b0(pvVar10,lVar18,param_3,lVar13);
    if (iVar9 != 0) {
      return -0x85;
    }
    lVar17 = 0;
    lVar12 = 0x40;
    while (lVar17 = lVar17 + 1, lVar17 < *(int *)(param_1 + 0x88)) {
      lVar4 = *(long *)(param_1 + 0xa8) + lVar12;
      lVar12 = lVar12 + 0x40;
      iVar9 = FUN_02dee6b0(lVar4,lVar18,param_3,lVar13);
      if (iVar9 != 0) {
        return -0x85;
      }
    }
  }
  uVar5 = DAT_0429f298 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar14 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  iVar9 = uVar5 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *(int *)(param_1 + 0x8c) = iVar9;
  uVar2 = iVar9 * 0x28;
  if ((uVar2 == 0) || (uVar3 = *(int *)(param_1 + 0x60) + uVar2, *(uint *)(param_1 + 100) < uVar3))
  {
    lVar17 = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    lVar17 = *(long *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = lVar17 + (ulong)uVar2;
    *(uint *)(param_1 + 0x60) = uVar3;
    *(long *)(param_1 + 0xb0) = lVar17;
  }
  if (-1 < (int)uVar5) {
    iVar9 = FUN_02df64d0(lVar17,lVar18,param_3,lVar13);
    if (iVar9 != 0) {
      return -0x85;
    }
    lVar17 = 0;
    lVar12 = 0x28;
    while (lVar17 = lVar17 + 1, lVar17 < *(int *)(param_1 + 0x8c)) {
      lVar4 = *(long *)(param_1 + 0xb0) + lVar12;
      lVar12 = lVar12 + 0x28;
      iVar9 = FUN_02df64d0(lVar4,lVar18,param_3,lVar13);
      if (iVar9 != 0) {
        return -0x85;
      }
    }
  }
  uVar5 = DAT_0429f298 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar14 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  iVar9 = uVar5 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *(int *)(param_1 + 0x84) = iVar9;
  uVar2 = iVar9 * 0x28;
  if ((uVar2 == 0) || (uVar3 = *(int *)(param_1 + 0x60) + uVar2, *(uint *)(param_1 + 100) < uVar3))
  {
    lVar17 = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    lVar17 = *(long *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = lVar17 + (ulong)uVar2;
    *(uint *)(param_1 + 0x60) = uVar3;
    *(long *)(param_1 + 0xa0) = lVar17;
  }
  if (-1 < (int)uVar5) {
    iVar9 = FUN_02df5a50(lVar17,lVar18,param_2,param_3,lVar13);
    if (iVar9 != 0) {
      return -0x85;
    }
    lVar17 = 0;
    lVar12 = 0x28;
    while (lVar17 = lVar17 + 1, lVar17 < *(int *)(param_1 + 0x84)) {
      lVar4 = *(long *)(param_1 + 0xa0) + lVar12;
      lVar12 = lVar12 + 0x28;
      iVar9 = FUN_02df5a50(lVar4,lVar18,param_2,param_3,lVar13);
      if (iVar9 != 0) {
        return -0x85;
      }
    }
  }
  uVar1 = (ulong)*(byte *)(param_3 + 1) + 6;
  uVar5 = DAT_0429f298 & (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
  uVar14 = uVar1 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
  *param_3 = *param_3 + uVar14 * 4;
  iVar9 = uVar5 + 1;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
  *(int *)(param_1 + 0x80) = iVar9;
  iVar9 = iVar9 * 2;
  if (iVar9 != 0) {
    uVar3 = iVar9 + 3U & 0xfffffffc;
    uVar2 = *(int *)(param_1 + 0x60) + uVar3;
    if (uVar2 <= *(uint *)(param_1 + 100)) {
      lVar13 = *(long *)(param_1 + 0x58);
      *(ulong *)(param_1 + 0x58) = lVar13 + (ulong)uVar3;
      *(uint *)(param_1 + 0x60) = uVar2;
      *(long *)(param_1 + 0x98) = lVar13;
      goto joined_r0x02df5a40;
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
joined_r0x02df5a40:
  if ((int)uVar5 < 0) {
    return 0;
  }
  lVar18 = 0;
  lVar13 = 0;
  do {
    uVar5 = *(uint *)*param_3;
    bVar6 = *(byte *)(param_3 + 1);
    uVar1 = (ulong)bVar6 + 1;
    uVar14 = uVar1 >> 5;
    *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
    *param_3 = (long)((uint *)*param_3 + uVar14);
    *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
    *(byte *)(*(long *)(param_1 + 0x98) + lVar18) = (byte)(uVar5 >> (ulong)(bVar6 & 0x1f)) & 1;
    uVar14 = *(ulong *)*param_3;
    bVar6 = *(byte *)(param_3 + 1);
    bVar8 = (byte)DAT_0429f2a0;
    uVar1 = (ulong)bVar6 + 8;
    uVar15 = uVar1 >> 5;
    *(byte *)(param_3 + 1) = (byte)uVar1 & 0x1f;
    *param_3 = *param_3 + uVar15 * 4;
    *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar15;
    *(byte *)(*(long *)(param_1 + 0x98) + lVar18 + 1) =
         bVar8 & (byte)(uVar14 >> ((ulong)bVar6 & 0x3f));
    if (*(int *)(param_1 + 0x84) <= (int)(uint)*(byte *)(*(long *)(param_1 + 0x98) + lVar18 + 1)) {
      return -0x85;
    }
    lVar13 = lVar13 + 1;
    lVar18 = lVar18 + 2;
  } while (lVar13 < *(int *)(param_1 + 0x80));
  return 0;
}


