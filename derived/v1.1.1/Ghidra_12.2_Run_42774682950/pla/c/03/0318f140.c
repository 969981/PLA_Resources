/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318f140; name: FUN_0318f140
 */


void FUN_0318f140(long param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  lVar8 = (long)*param_2;
  lVar10 = *(long *)(param_1 + 0x70);
  lVar13 = (long)*(int *)(param_1 + 200) + -1;
  iVar2 = *(int *)(lVar10 + lVar8 * 4);
  if (iVar2 != (int)lVar13) {
    puVar12 = (undefined4 *)(*(long *)(param_1 + 0xc0) + lVar13 * 0x14);
    puVar9 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar2 * 0x14);
    *puVar9 = *puVar12;
    puVar9[1] = puVar12[1];
    uVar11 = *(undefined8 *)(puVar12 + 2);
    *(undefined2 *)(puVar9 + 4) = *(undefined2 *)(puVar12 + 4);
    *(undefined8 *)(puVar9 + 2) = uVar11;
    *(undefined2 *)((long)puVar9 + 0x12) = *(undefined2 *)((long)puVar12 + 0x12);
    iVar3 = *(int *)(param_1 + 0x60);
    memcpy((void *)(*(long *)(param_1 + 0x130) + (long)(iVar3 * iVar2) * 4),
           (void *)(*(long *)(param_1 + 0x130) + (long)(iVar3 * (int)lVar13) * 4),(long)iVar3 << 2);
    iVar3 = *(int *)(*(long *)(param_1 + 0x80) + lVar13 * 4);
    *(int *)(*(long *)(param_1 + 0x80) + (long)iVar2 * 4) = iVar3;
    *(int *)(*(long *)(param_1 + 0x70) + (long)iVar3 * 4) = iVar2;
    lVar8 = (long)*param_2;
    lVar10 = *(long *)(param_1 + 0x70);
  }
  *(undefined4 *)(lVar10 + lVar8 * 4) = 0xffffffff;
  iVar2 = *(int *)(param_1 + 200);
  iVar3 = iVar2 + -1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
  puVar6 = PTR_PTR_0434a080;
  if ((int)(*(uint *)(param_1 + 0xcc) & 0x3fffffff) < iVar3) {
    uVar11 = FUN_0318a8d4(PTR_PTR_0434a080,iVar3,*(undefined8 *)(param_1 + 0xc0),iVar2);
    *(undefined8 *)(param_1 + 0xc0) = uVar11;
    if ((iVar3 <= *(int *)(param_1 + 200)) && (*(int *)(param_1 + 200) < iVar2)) goto LAB_0318f264;
  }
  *(int *)(param_1 + 200) = iVar3;
LAB_0318f264:
  uVar4 = *(int *)(param_1 + 0x60) * iVar3;
  uVar7 = *(uint *)(param_1 + 0x13c);
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar4) {
    uVar11 = *(undefined8 *)(param_1 + 0x130);
    uVar1 = *(undefined4 *)(param_1 + 0x138);
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar4);
      uVar7 = *(uint *)(param_1 + 0x13c);
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar5 = uVar4;
    if ((int)uVar4 <= (int)uVar7) {
      uVar5 = uVar7;
    }
    uVar11 = FUN_032bd1d4(puVar6,uVar5,4,uVar11,uVar1);
    *(undefined8 *)(param_1 + 0x130) = uVar11;
  }
  if ((*(int *)(param_1 + 0x138) < (int)uVar4) || ((int)uVar4 < *(int *)(param_1 + 0x138))) {
    *(uint *)(param_1 + 0x138) = uVar4;
  }
  return;
}


