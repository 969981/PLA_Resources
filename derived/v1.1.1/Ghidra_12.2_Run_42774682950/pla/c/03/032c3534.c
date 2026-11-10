/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3534; name: FUN_032c3534
 */


/* WARNING: Removing unreachable block (ram,0x032c3a10) */
/* WARNING: Removing unreachable block (ram,0x032c3930) */

void FUN_032c3534(long *param_1,undefined4 param_2,long *param_3,byte *param_4,char *param_5,
                 int param_6)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  size_t sVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  uint uVar25;
  long local_90;
  byte *local_88;
  uint *local_80;
  ulong local_78;
  ulong local_70;
  uint local_64;
  
  if (*param_3 == 0) {
LAB_032c39f4:
    puVar19 = (uint *)0x0;
    pbVar20 = (byte *)0x0;
    local_90 = 0;
    lVar22 = 0;
    local_88 = (byte *)0x0;
    local_80 = (uint *)0x0;
  }
  else {
    lVar22 = param_3[1];
    if (param_5 == (char *)0x0) {
      pcVar9 = (char *)0x0;
    }
    else {
      sVar8 = strlen(param_5);
      pcVar9 = param_5 + sVar8;
    }
    uVar5 = FUN_032e2950(lVar22,param_5,pcVar9,1);
    if (uVar5 < 2) goto LAB_032c39f4;
    FUN_032e4868(&local_90,param_3,uVar5);
    puVar19 = local_80;
    pbVar20 = local_88;
    lVar22 = local_90;
    if (local_88 == (byte *)0x0) {
LAB_032c3a2c:
      puVar19 = (uint *)0x0;
      lVar22 = 0;
    }
    else {
      pbVar13 = local_88;
      if ((*local_88 & 1) == 0) {
        pbVar13 = *(byte **)(local_88 + 8);
        bVar2 = *pbVar13;
        while ((bVar2 & 1) == 0) {
          pbVar13 = *(byte **)(pbVar13 + 8);
          bVar2 = *pbVar13;
        }
      }
      if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 8) {
        pbVar20 = (byte *)0x0;
        goto LAB_032c3a2c;
      }
      if (((ulong)local_80 & 1) != 0) {
        FUN_032e0c28((ulong)local_80 & 0xfffffffffffffffe);
      }
    }
    if (((ulong)local_80 & 1) != 0) {
      FUN_032e0c40((ulong)local_80 & 0xfffffffffffffffe);
    }
  }
  if (lVar22 == 0) goto LAB_032c382c;
  pbVar13 = param_4;
  if ((*param_4 & 1) == 0) {
    pbVar13 = *(byte **)(param_4 + 8);
    bVar2 = *pbVar13;
    while ((bVar2 & 1) == 0) {
      pbVar13 = *(byte **)(pbVar13 + 8);
      bVar2 = *pbVar13;
    }
  }
  if ((*(ulong *)(pbVar13 + 0x10) & 0x1f) != 7) {
    param_4 = (byte *)0x0;
  }
  puVar6 = (undefined8 *)FUN_032e2f28(param_4,param_5,1);
  if ((puVar6 < (undefined8 *)0x2) || (uVar10 = (uint)*puVar6, (uVar10 >> 0x11 & 1) == 0)) {
    pbVar13 = (byte *)0x0;
  }
  else {
    uVar10 = (uVar10 & 0x1ffff) - (uVar10 >> 1 & 0x5555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    pbVar13 = (byte *)((ulong)puVar6 &
                      (long)(puVar6[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18
                                           ) + 2] << 0x2a) >> 0x3f);
  }
  pbVar14 = pbVar13;
  if ((*pbVar13 & 1) == 0) {
    pbVar14 = *(byte **)(pbVar13 + 8);
    bVar2 = *pbVar14;
    while ((bVar2 & 1) == 0) {
      pbVar14 = *(byte **)(pbVar14 + 8);
      bVar2 = *pbVar14;
    }
  }
  pbVar15 = pbVar13;
  if ((*(ulong *)(pbVar14 + 0x10) & 0x1f) != 8) {
    pbVar15 = (byte *)0x0;
  }
  do {
    if ((*pbVar15 >> 1 & 1) != 0) {
      puVar24 = *(ulong **)(pbVar15 + 0x18);
      goto LAB_032c36f0;
    }
    pbVar15 = *(byte **)(pbVar15 + 8);
  } while (pbVar15 != (byte *)0x0);
  puVar24 = (ulong *)0x0;
LAB_032c36f0:
  uVar21 = *(uint *)(param_1 + 1);
  uVar25 = *(uint *)((long)param_1 + 0xc);
  uVar17 = uVar25 & 0x3fffffff;
  lVar23 = *param_1;
  uVar10 = uVar21 + 1;
  if ((int)uVar21 < (int)uVar17) {
    lVar7 = lVar23;
  }
  else {
    if (0x3ffffffe < (int)uVar21) {
      FUN_032bd0a8(uVar10);
      uVar25 = *(uint *)((long)param_1 + 0xc);
      uVar17 = uVar25 & 0x3fffffff;
    }
    puVar3 = PTR_PTR_0434a080;
    uVar11 = (uVar25 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    local_64 = uVar10;
    if ((int)uVar10 <= (int)uVar11) {
      local_64 = uVar11;
    }
    local_70 = (ulong)local_64 << 4;
    if (((int)local_64 < (int)uVar17) || (0x3fffffff < (int)local_64)) {
      local_90 = 1;
      local_80 = &local_64;
      local_88 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_90);
      uVar25 = *(uint *)((long)param_1 + 0xc);
      uVar17 = uVar25 & 0x3fffffff;
    }
    lVar7 = (**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_70,&local_70);
    if (0 < (int)uVar21) {
      if (uVar21 == 1) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        puVar6 = (undefined8 *)(lVar7 + 0x10);
        puVar18 = (undefined8 *)(lVar23 + 0x10);
        do {
          uVar1 = puVar18[-1];
          lVar16 = lVar16 + 2;
          puVar6[-2] = puVar18[-2];
          puVar6[-1] = uVar1;
          uVar1 = puVar18[1];
          *puVar6 = *puVar18;
          puVar6[1] = uVar1;
          puVar6 = puVar6 + 4;
          puVar18 = puVar18 + 4;
        } while ((ulong)uVar21 - ((ulong)uVar21 & 1) != lVar16);
        if ((uVar21 & 1) == 0) goto LAB_032c3978;
      }
      puVar6 = (undefined8 *)(lVar7 + lVar16 * 0x10);
      puVar18 = (undefined8 *)(lVar23 + lVar16 * 0x10);
      uVar1 = puVar18[1];
      *puVar6 = *puVar18;
      puVar6[1] = uVar1;
    }
LAB_032c3978:
    if (-1 < (int)uVar25) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3,lVar23,(ulong)uVar17 << 4);
    }
    if (local_70 < 0x3fffffff0) {
      uVar12 = (undefined4)(local_70 >> 4);
    }
    else {
      uVar12 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = uVar12;
    uVar21 = *(uint *)(param_1 + 1);
    *param_1 = lVar7;
  }
  *(uint *)(param_1 + 1) = uVar10;
  local_80 = (uint *)0x0;
  local_78 = 0;
  local_90 = 0;
  local_88 = (byte *)0x0;
  (**(code **)(*(long *)((ulong)puVar19 & 0xfffffffffffffffe) + 0x50))
            ((long *)((ulong)puVar19 & 0xfffffffffffffffe),lVar22,pbVar20,&local_90);
  iVar4 = (int)local_80;
  if ((local_78 & 1) != 0) {
    FUN_032e0c40(local_78 & 0xfffffffffffffffe);
  }
  *(int *)(lVar7 + (long)(int)uVar21 * 0x10) = iVar4;
  while( true ) {
    uVar10 = (uint)*puVar24;
    if ((uVar10 >> 0x14 & 1) != 0) break;
    if (((*puVar24 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
    goto LAB_032c3764;
  }
  if (puVar24 != (ulong *)0x0) {
    uVar10 = (uVar10 & 0xfffff) - (uVar10 >> 1 & 0x55555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = (uint)(ushort)puVar24[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                   + 2];
    goto LAB_032c37b4;
  }
LAB_032c3764:
  uVar10 = 0;
LAB_032c37b4:
  lVar7 = lVar7 + (long)(int)uVar21 * 0x10;
  *(uint *)(lVar7 + 8) = uVar10;
  uVar17 = (uint)*(undefined8 *)pbVar13;
  if ((uVar17 >> 0x11 & 1) == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = (uVar17 & 0x1ffff) - (uVar17 >> 1 & 0x5555);
    uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
    uVar17 = (uint)*(ushort *)
                    (pbVar13 +
                    (ulong)((uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x10);
  }
  *(uint *)(lVar7 + 4) = uVar17 + param_6;
  *(undefined4 *)(lVar7 + 0xc) = param_2;
  *(uint *)((long)param_1 + 0x114) =
       *(int *)((long)param_1 + 0x114) + (uVar10 * iVar4 + 0xf & 0xfffffff0);
LAB_032c382c:
  if (((ulong)puVar19 & 1) != 0) {
    FUN_032e0c40((ulong)puVar19 & 0xfffffffffffffffe);
  }
  return;
}


