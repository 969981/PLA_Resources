/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318f5c0; name: FUN_0318f5c0
 */


void FUN_0318f5c0(long param_1,int *param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  void *__dest;
  uint *puVar16;
  size_t __n;
  undefined1 *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  long lVar20;
  long local_88;
  
  puVar7 = PTR_PTR_0434a080;
  iVar2 = *(int *)(param_1 + 0x108);
  uVar11 = iVar2 + param_4;
  iVar3 = *(int *)(param_1 + 0x50);
  puVar16 = (uint *)(param_1 + 0x10c);
  uVar10 = *puVar16;
  local_88 = *(long *)(param_1 + 0x100);
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar11) {
    if (0x3fffffff < (int)uVar11) {
      FUN_032bd0a8(uVar11);
      uVar10 = *puVar16;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar6 = uVar11;
    if ((int)uVar11 <= (int)uVar10) {
      uVar6 = uVar10;
    }
    local_88 = FUN_032bd1d4(puVar7,uVar6,1,local_88,iVar2,puVar16);
    *(long *)(param_1 + 0x100) = local_88;
  }
  iVar4 = *(int *)(param_1 + 0x148);
  *(uint *)(param_1 + 0x108) = uVar11;
  uVar10 = iVar4 + iVar3 * param_4;
  uVar11 = *(uint *)(param_1 + 0x14c);
  if ((int)(uVar11 & 0x3fffffff) < (int)uVar10) {
    uVar9 = *(undefined8 *)(param_1 + 0x140);
    if (0x3fffffff < (int)uVar10) {
      FUN_032bd0a8(uVar10);
      uVar11 = *(uint *)(param_1 + 0x14c);
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar6 = uVar10;
    if ((int)uVar10 <= (int)uVar11) {
      uVar6 = uVar11;
    }
    lVar20 = FUN_032bd1d4(puVar7,uVar6,4,uVar9,iVar4,(uint *)(param_1 + 0x14c));
    *(long *)(param_1 + 0x140) = lVar20;
  }
  else {
    lVar20 = *(long *)(param_1 + 0x140);
  }
  iVar5 = *(int *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0x148) = uVar10;
  lVar13 = *(long *)(param_1 + 0xd0);
  iVar1 = iVar5 + param_4;
  if ((int)(*(uint *)(param_1 + 0xdc) & 0x3fffffff) < iVar1) {
    lVar13 = FUN_03192160(puVar7,iVar1,lVar13,iVar5);
    *(long *)(param_1 + 0xd0) = lVar13;
  }
  *(int *)(param_1 + 0xd8) = iVar1;
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar12 = 1;
  }
  else {
    bVar12 = *(byte *)(*(long *)(param_1 + 0x100) + (long)*param_2) | 1;
  }
  *(byte *)(*(long *)(param_1 + 0x100) + (long)*param_2) = bVar12;
  *(undefined4 *)(*(long *)(param_1 + 0x168) + (long)*param_2 * 4) =
       *(undefined4 *)(param_1 + 0x170);
  iVar1 = *(int *)(param_1 + 0x170);
  puVar16 = (uint *)(param_1 + 0x174);
  uVar10 = *puVar16;
  uVar11 = iVar1 + param_4;
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar11) {
    uVar9 = *(undefined8 *)(param_1 + 0x168);
    if (0x3fffffff < (int)uVar11) {
      FUN_032bd0a8(uVar11);
      uVar10 = *puVar16;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar6 = uVar11;
    if ((int)uVar11 <= (int)uVar10) {
      uVar6 = uVar10;
    }
    lVar8 = FUN_032bd1d4(puVar7,uVar6,4,uVar9,iVar1,puVar16);
    *(long *)(param_1 + 0x168) = lVar8;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x168);
  }
  *(uint *)(param_1 + 0x170) = uVar11;
  if (0 < (int)param_4) {
    __n = (long)iVar3 * 4;
    __dest = (void *)(lVar20 + (long)iVar4 * 4);
    uVar15 = (ulong)param_4;
    puVar14 = (undefined8 *)(lVar13 + (long)iVar5 * 0x10 + 8);
    puVar17 = (undefined1 *)(local_88 + iVar2);
    piVar18 = (int *)(lVar8 + (long)iVar1 * 4);
    puVar19 = (undefined8 *)(param_3 + 0x18);
    do {
      *puVar17 = *(undefined1 *)(puVar19 + -1);
      *(undefined4 *)(puVar14 + -1) = *(undefined4 *)(puVar19 + -3);
      *(undefined4 *)((long)puVar14 + -4) = *(undefined4 *)((long)puVar19 + -0x14);
      *puVar14 = puVar19[-2];
      memcpy(__dest,(void *)*puVar19,__n);
      uVar15 = uVar15 - 1;
      __dest = (void *)((long)__dest + __n);
      *piVar18 = *param_2;
      puVar14 = puVar14 + 2;
      puVar17 = puVar17 + 1;
      piVar18 = piVar18 + 1;
      puVar19 = puVar19 + 7;
    } while (uVar15 != 0);
  }
  return;
}


