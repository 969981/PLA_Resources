/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318fa7c; name: FUN_0318fa7c
 */


undefined4 * FUN_0318fa7c(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  void *__dest;
  size_t __n;
  undefined2 *puVar15;
  undefined4 *puVar16;
  
  iVar4 = *(int *)(param_1 + 0xe8);
  iVar1 = iVar4 + param_3;
  if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < iVar1) {
    nn::os::LockMutex(*(MutexType **)(param_1 + 0x1a8));
    iVar4 = *(int *)(param_1 + 0xe8);
    lVar8 = *(long *)(param_1 + 0xe0);
    iVar1 = iVar4 + param_3;
    if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < iVar1) {
      lVar8 = FUN_0318a8d4(PTR_PTR_0434a080,iVar1,lVar8,iVar4,(uint *)(param_1 + 0xec));
      *(long *)(param_1 + 0xe0) = lVar8;
    }
    puVar14 = (undefined4 *)(lVar8 + (long)iVar4 * 0x14);
    *(int *)(param_1 + 0xe8) = iVar1;
    nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x1a8));
  }
  else {
    *(int *)(param_1 + 0xe8) = iVar1;
    puVar14 = (undefined4 *)(*(long *)(param_1 + 0xe0) + (long)iVar4 * 0x14);
  }
  puVar7 = PTR_PTR_0434a080;
  iVar1 = *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x158);
  uVar10 = *(uint *)(param_1 + 0x15c);
  uVar5 = iVar4 + iVar1 * param_3;
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar5) {
    uVar11 = *(undefined8 *)(param_1 + 0x150);
    if (0x3fffffff < (int)uVar5) {
      FUN_032bd0a8(uVar5);
      uVar10 = *(uint *)(param_1 + 0x15c);
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar6 = uVar5;
    if ((int)uVar5 <= (int)uVar10) {
      uVar6 = uVar10;
    }
    lVar8 = FUN_032bd1d4(puVar7,uVar6,4,uVar11,iVar4,(uint *)(param_1 + 0x15c));
    *(long *)(param_1 + 0x150) = lVar8;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x150);
  }
  *(uint *)(param_1 + 0x158) = uVar5;
  iVar3 = *(int *)(param_1 + 0x118);
  lVar9 = *(long *)(param_1 + 0x110);
  iVar2 = iVar3 + param_3;
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff) < iVar2) {
    lVar9 = FUN_031921e8(puVar7,iVar2,lVar9,iVar3);
    *(long *)(param_1 + 0x110) = lVar9;
  }
  *(int *)(param_1 + 0x118) = iVar2;
  if (0 < (int)param_3) {
    __dest = (void *)(lVar8 + (long)iVar4 * 4);
    __n = (long)iVar1 * 4;
    uVar13 = (ulong)param_3;
    puVar12 = (undefined2 *)(param_2 + 0x38);
    puVar15 = (undefined2 *)(lVar9 + (long)iVar3 * 2);
    puVar16 = puVar14;
    do {
      *puVar16 = *(undefined4 *)(puVar12 + -0x1c);
      puVar16[1] = *(undefined4 *)(puVar12 + -0x1a);
      uVar11 = *(undefined8 *)(puVar12 + -0x18);
      *(undefined2 *)(puVar16 + 4) = puVar12[-0x14];
      *(undefined8 *)(puVar16 + 2) = uVar11;
      *(undefined2 *)((long)puVar16 + 0x12) = puVar12[-0x13];
      *puVar15 = *puVar12;
      memcpy(__dest,*(void **)(puVar12 + -0x10),__n);
      __dest = (void *)((long)__dest + __n);
      uVar13 = uVar13 - 1;
      puVar12 = puVar12 + 0x20;
      puVar16 = puVar16 + 5;
      puVar15 = puVar15 + 1;
    } while (uVar13 != 0);
  }
  return puVar14;
}


