/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309f294; name: FUN_0309f294
 */


void FUN_0309f294(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  if (*(char *)(param_1 + 0x121) != '\0') {
    FUN_0309f20c(param_1);
  }
  cVar3 = *(char *)(param_1 + 0x1bc);
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  iVar2 = *(int *)(param_1 + 0x1b4);
  iVar9 = 1;
  if (cVar3 != '\0') {
    iVar9 = iVar2 + 1;
  }
  *(int *)(param_1 + 0x1b4) = iVar9;
  *(int *)(param_1 + 0x1b8) = iVar9;
  if ((0 < iVar2) && (cVar3 != '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0x121) != '\0') {
    FUN_0309f20c(param_1);
  }
  if ((*(int *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x118) != 0)) {
    iVar9 = *(int *)(*(long *)(param_1 + 0x118) + 0x1c);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < iVar9) {
      uVar5 = FUN_030a3254(PTR_PTR_0434a080,iVar9,*(undefined8 *)(param_1 + 0x38),0);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      iVar9 = *(int *)(*(long *)(param_1 + 0x118) + 0x1c);
    }
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar9 * 3) {
      uVar5 = FUN_0309ec78(PTR_PTR_0434a080,iVar9 * 3,*(undefined8 *)(param_1 + 0x48),
                           *(undefined4 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x48) = uVar5;
    }
    if ((*(uint *)(param_1 + 100) & 0x3ffffffe) == 0) {
      uVar5 = FUN_030a2f70(PTR_PTR_0434a080,2,*(undefined8 *)(param_1 + 0x58),
                           *(undefined4 *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x58) = uVar5;
    }
    if ((*(uint *)(param_1 + 0x74) & 0x3ffffffe) == 0) {
      uVar5 = FUN_030a30e4(PTR_PTR_0434a080,2,*(undefined8 *)(param_1 + 0x68),
                           *(undefined4 *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x68) = uVar5;
    }
    iVar9 = *(int *)(*(long *)(param_1 + 0x118) + 0x1c);
    if ((int)(*(uint *)(param_1 + 0x84) & 0x3fffffff) < iVar9) {
      uVar5 = FUN_030a3508(PTR_PTR_0434a080,iVar9,*(undefined8 *)(param_1 + 0x78),
                           *(undefined4 *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0x78) = uVar5;
      iVar9 = *(int *)(param_1 + 0x10);
      goto joined_r0x0309f2fc;
    }
  }
  iVar9 = *(int *)(param_1 + 0x10);
joined_r0x0309f2fc:
  if (iVar9 != 0) {
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar11 = (long)iVar9 * 0x10 - 0x10;
    uVar1 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
    puVar8 = puVar10;
    if ((uVar1 & 3) != 0) {
      lVar12 = -((ulong)uVar1 & 3);
      puVar7 = puVar10;
      do {
        *(undefined4 *)(puVar7 + 1) = 0xffffff;
        bVar4 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        puVar8 = puVar7 + 2;
        *puVar7 = 0x7fffffff7fffffff;
        puVar7 = puVar8;
      } while (bVar4);
    }
    if (0x2f < uVar11) {
      do {
        *(undefined4 *)(puVar8 + 1) = 0xffffff;
        *puVar8 = 0x7fffffff7fffffff;
        *(undefined4 *)(puVar8 + 3) = 0xffffff;
        puVar8[2] = 0x7fffffff7fffffff;
        *(undefined4 *)(puVar8 + 5) = 0xffffff;
        puVar8[4] = 0x7fffffff7fffffff;
        *(undefined4 *)(puVar8 + 7) = 0xffffff;
        puVar8[6] = 0x7fffffff7fffffff;
        puVar8 = puVar8 + 8;
      } while (puVar10 + (long)iVar9 * 2 != puVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x184) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x118) + 0x1c);
  }
  *(undefined4 *)(param_1 + 0x1ac) = uVar6;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return;
}


