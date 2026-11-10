/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309f4f0; name: FUN_0309f4f0
 */


void FUN_0309f4f0(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(int *)(param_1 + 0x184) < *(int *)(param_1 + 0x40)) {
    *(undefined1 *)(param_1 + 0x120) = 1;
    return;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x40) + -1;
  piVar8 = (int *)(lVar10 + (long)iVar5 * 0x70);
  uVar2 = *(uint *)(param_1 + 0x10);
  bVar3 = *(byte *)(piVar8 + 0x18);
  iVar13 = *piVar8;
  iVar1 = piVar8[1];
  if ((int)uVar2 < 1) {
    uVar14 = 0xffffffff;
  }
  else {
    lVar9 = 0;
    uVar12 = 1;
    lVar11 = 8;
    uVar14 = 0xffffffff;
    uVar15 = 0xffffffff;
    do {
      uVar16 = uVar15;
      if ((uVar12 != 0) &&
         (uVar16 = (uint)lVar9, *(int *)(*(long *)(param_1 + 8) + lVar11) != iVar13)) {
        uVar16 = uVar15;
      }
      if ((int)uVar14 < lVar9) {
        uVar12 = (uint)lVar9;
        if (*(int *)(*(long *)(param_1 + 8) + lVar11) != iVar1) {
          uVar12 = uVar14;
        }
        uVar14 = uVar12;
      }
      lVar9 = lVar9 + 1;
      if ((int)uVar2 <= lVar9) break;
      uVar12 = uVar16 >> 0x1f;
      lVar11 = lVar11 + 0x10;
      uVar15 = uVar16;
    } while ((int)(uVar14 | uVar16) < 0);
    if (-1 < (int)uVar16) goto joined_r0x0309f72c;
  }
  lVar9 = *(long *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x120) = 1;
  if ((int)uVar2 < (int)(*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
    uVar12 = uVar2;
  }
  else {
    lVar9 = FUN_030a370c(PTR_PTR_0434a080,uVar2 + 1,lVar9,uVar2);
    uVar12 = *(uint *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar9;
  }
  piVar8 = (int *)(lVar9 + (long)(int)uVar12 * 0x10);
  *piVar8 = param_2;
  piVar8[1] = param_4;
  piVar8[2] = iVar13;
  *(undefined2 *)(piVar8 + 3) = 0xffff;
  *(byte *)((long)piVar8 + 0xe) = bVar3;
  *(bool *)((long)piVar8 + 0xf) = param_2 == 0;
  iVar13 = *(int *)(param_1 + 0x20) + 1;
  *(uint *)(param_1 + 0x10) = uVar2 + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) <= *(int *)(param_1 + 0x20)) {
    uVar6 = FUN_030a3860(PTR_PTR_0434a080,iVar13,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar6;
  }
  *(int *)(param_1 + 0x20) = iVar13;
  uVar16 = uVar2;
joined_r0x0309f72c:
  if ((int)uVar14 < 0) {
    iVar7 = *(int *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 8);
    iVar13 = iVar7 + 1;
    *(undefined1 *)(param_1 + 0x120) = 1;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) <= iVar7) {
      lVar9 = FUN_030a370c(PTR_PTR_0434a080,iVar13);
      iVar7 = *(int *)(param_1 + 0x10);
      *(long *)(param_1 + 8) = lVar9;
    }
    piVar8 = (int *)(lVar9 + (long)iVar7 * 0x10);
    piVar8[2] = iVar1;
    *piVar8 = param_3;
    piVar8[1] = param_5;
    *(undefined2 *)(piVar8 + 3) = 0xffff;
    *(byte *)((long)piVar8 + 0xe) = bVar3 ^ 1;
    *(bool *)((long)piVar8 + 0xf) = param_3 == 0;
    iVar1 = *(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x10) = iVar13;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) <= *(int *)(param_1 + 0x20)) {
      uVar6 = FUN_030a3860(PTR_PTR_0434a080,iVar1,*(undefined8 *)(param_1 + 0x18));
      iVar13 = *(int *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
    uVar14 = iVar13 * 0x10000 + -0x10000 >> 0x10;
    *(int *)(param_1 + 0x20) = iVar1;
  }
  if (*(int *)(param_1 + 0x114) == 0x7fffffff) {
    if (param_2 != 0) {
      param_3 = param_2;
    }
    *(int *)(param_1 + 0x114) = param_3;
  }
  lVar10 = lVar10 + (long)iVar5 * 0x70;
  *(short *)(lVar10 + 0xc) = (short)uVar16;
  *(short *)(lVar10 + 0xe) = (short)uVar14;
  lVar9 = *(long *)(param_1 + 8) + (long)(int)uVar16 * 0x10;
  uVar4 = *(undefined2 *)(lVar9 + 0xc);
  *(short *)(lVar9 + 0xc) = (short)iVar5;
  *(undefined2 *)(lVar10 + 0x10) = uVar4;
  lVar9 = *(long *)(param_1 + 8) + (long)(int)uVar14 * 0x10;
  uVar4 = *(undefined2 *)(lVar9 + 0xc);
  *(short *)(lVar9 + 0xc) = (short)iVar5;
  *(undefined2 *)(lVar10 + 0x12) = uVar4;
  return;
}


