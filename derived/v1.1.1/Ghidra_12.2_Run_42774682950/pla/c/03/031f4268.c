/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4268; name: FUN_031f4268
 */


void FUN_031f4268(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  ushort *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  long lVar19;
  uint uVar20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar4 = *(uint *)(param_3 + 0x20);
  puVar9 = (uint *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((int)(*puVar9 & 0x3fffffff) < (int)uVar4) {
    uVar7 = FUN_031f5160(PTR_PTR_0434a080,uVar4,*(undefined8 *)(param_1 + 0x18),0,puVar9);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
  }
  uVar20 = *(uint *)(param_2 + 0x40);
  uVar13 = (ulong)uVar20;
  uVar14 = (ulong)(uVar20 >> 0x16);
  lVar16 = *(long *)(*(long *)(param_4 + 0x38) + uVar14 * 0xf0 + 8);
  FUN_03159b7c(lVar16,*(long *)(*(long *)(lVar16 + 0x20) + 0x18) + (uVar13 & 0x3fffff) * 0x18,
               &local_80);
  puVar6 = PTR_PTR_0434a080;
  if ((int)uVar4 < 2) {
LAB_031f4534:
    iVar11 = *(int *)(param_3 + 0x54);
    if (iVar11 < 0) {
      local_b0 = CONCAT44(((float)((ulong)local_80 >> 0x20) + (float)((ulong)uStack_70 >> 0x20)) *
                          0.5,((float)local_80 + (float)uStack_70) * 0.5);
      uStack_a8 = CONCAT44(((float)((ulong)uStack_78 >> 0x20) + (float)((ulong)uStack_68 >> 0x20)) *
                           0.5,((float)uStack_78 + (float)uStack_68) * 0.5);
    }
    else {
      uVar20 = *(uint *)(*(long *)(param_2 + 0x48) + (long)iVar11 * 4);
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)iVar11 * 0x10);
      uStack_a8 = puVar2[1];
      local_b0 = *puVar2;
    }
    iVar11 = *(int *)(param_1 + 0x20);
    lVar16 = *(long *)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) <= iVar11) {
      lVar16 = FUN_031f5160(PTR_PTR_0434a080,iVar11 + 1,lVar16,iVar11,puVar9);
      *(long *)(param_1 + 0x18) = lVar16;
    }
    puVar2 = (undefined8 *)(lVar16 + (long)iVar11 * 0x40);
    *(int *)(param_1 + 0x20) = iVar11 + 1;
    FUN_031f5e68(puVar2 + 2,&local_b0);
    *(undefined1 *)(puVar2 + 6) = 0xf;
    *(uint *)((long)puVar2 + 0x34) = uVar20;
    puVar2[1] = uStack_a8;
    *puVar2 = local_b0;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    return;
  }
  lVar17 = 0;
  if (*(int *)(param_3 + 0x30) != 0) goto LAB_031f4398;
  do {
    bVar18 = false;
    uVar12 = uVar13;
    uVar15 = uVar14;
    while( true ) {
      uVar20 = *(uint *)(*(long *)(param_3 + 0x18) + lVar17 * 4 + 4);
      uVar13 = (ulong)uVar20;
      uVar5 = uVar20 >> 0x16;
      uVar14 = (ulong)uVar5;
      if (uVar5 != (uint)uVar15) {
        lVar16 = *(long *)(*(long *)(param_4 + 0x38) + uVar14 * 0xf0 + 8);
      }
      FUN_03159b7c(lVar16,*(long *)(*(long *)(lVar16 + 0x20) + 0x18) + (uVar13 & 0x3fffff) * 0x18,
                   &local_b0);
      if (!bVar18) {
        if (uVar5 != (uint)uVar15) {
          FUN_031f4600(&local_80,&local_b0);
        }
        iVar11 = *(int *)(param_1 + 0x20);
        lVar8 = *(long *)(param_1 + 0x18);
        if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) <= iVar11) {
          lVar8 = FUN_031f5160(puVar6,iVar11 + 1,lVar8,iVar11,puVar9);
          *(long *)(param_1 + 0x18) = lVar8;
        }
        puVar2 = (undefined8 *)(lVar8 + (long)iVar11 * 0x40);
        *(int *)(param_1 + 0x20) = iVar11 + 1;
        FUN_031f5c10(&local_80,&local_b0,puVar2 + 2);
        *(int *)((long)puVar2 + 0x34) = (int)uVar12;
        *(undefined4 *)(puVar2 + 7) = 0xffffffff;
        puVar2[1] = puVar2[3];
        *puVar2 = puVar2[2];
        *(undefined1 *)(puVar2 + 6) = 0;
      }
      lVar17 = lVar17 + 1;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      if ((ulong)uVar4 - 1 == lVar17) goto LAB_031f4534;
      if (*(int *)(param_3 + 0x30) == 0) break;
LAB_031f4398:
      uVar20 = *(uint *)(*(long *)(param_3 + 0x28) + lVar17 * 4);
      if (uVar20 == 0xffffffff) break;
      uVar12 = (ulong)uVar20 & 0x3fffff;
      lVar8 = *(long *)(lVar16 + 0x20);
      iVar11 = (int)uVar12;
      if (iVar11 < *(int *)(lVar8 + 0x30)) {
        puVar10 = (ushort *)(*(long *)(lVar8 + 0x28) + uVar12 * 8);
      }
      else {
        puVar10 = (ushort *)(*(long *)(lVar8 + 0x60) + (long)(iVar11 - *(int *)(lVar8 + 0x30)) * 8);
      }
      lVar19 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38) + (ulong)*puVar10 * 0x18;
      lVar8 = *(long *)(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x20);
      iVar1 = iVar3 + 2;
      if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar1) {
        lVar8 = FUN_031f5160(puVar6,iVar1,lVar8,iVar3,puVar9);
        *(long *)(param_1 + 0x18) = lVar8;
      }
      puVar2 = (undefined8 *)(lVar8 + (long)iVar3 * 0x40);
      *(int *)(param_1 + 0x20) = iVar1;
      FUN_031c05e8(lVar16,lVar19,&local_b0);
      FUN_031f5e68(puVar2 + 2,&local_b0);
      *(int *)((long)puVar2 + 0x34) = (int)uVar13;
      *(int *)(puVar2 + 7) = iVar11;
      puVar2[1] = uStack_a8;
      *puVar2 = local_b0;
      *(undefined1 *)(puVar2 + 6) = 0xf;
      FUN_031bff48(lVar16,lVar19,&local_90);
      FUN_031f5e68(puVar2 + 10,&local_90);
      *(undefined8 *)((long)puVar2 + 0x74) = 0xffffffffffffffff;
      bVar18 = true;
      *(undefined1 *)(puVar2 + 0xe) = 0xf;
      puVar2[9] = uStack_88;
      puVar2[8] = local_90;
      uVar12 = uVar13;
      uVar15 = uVar14;
    }
  } while( true );
}


