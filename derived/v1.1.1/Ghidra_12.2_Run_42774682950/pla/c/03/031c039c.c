/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c039c; name: FUN_031c039c
 */


void FUN_031c039c(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_1 + 0x50);
  uVar2 = *param_2;
  iVar3 = *(int *)(*(long *)(lVar4 + 0x20) + 0x30);
  lVar7 = 0x28;
  if (iVar3 <= (int)uVar2) {
    lVar7 = 0x60;
  }
  iVar1 = 0;
  if (iVar3 <= (int)uVar2) {
    iVar1 = iVar3;
  }
  uVar6 = *(ulong *)(*(long *)(*(long *)(lVar4 + 0x20) + lVar7) + (long)(int)(uVar2 - iVar1) * 8);
  *(ulong *)(param_1 + 0x88) = uVar6;
  uVar8 = (uint)(uVar6 >> 0x20);
  uVar2 = 0xffffffff;
  if (uVar8 != 0xffffffff) {
    uVar2 = uVar8 & 0x3fffff | *(int *)(*(long *)(lVar4 + 0x20) + 0x94) << 0x16;
  }
  if ((uVar6 & 0x400000) == 0) {
    uVar8 = uVar2;
  }
  *(uint *)(param_1 + 0x8c) = uVar8;
  uVar2 = *param_2;
  *(ulong **)(param_1 + 0x138) = (ulong *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x130) = uVar2 | *(int *)(param_1 + 0x60) << 0x16;
  if (((uint)uVar6 >> 0x14 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x38) + 0x38) + (uVar6 & 0xffff) * 0x18;
    *(long *)(param_1 + 0x140) = lVar5;
    lVar7 = *(long *)(*(long *)(lVar4 + 0x20) + 0x38);
    iVar3 = *(int *)(lVar7 + 0xbc);
    lVar7 = *(long *)(lVar7 + 0x48) + (long)(int)(iVar3 * ((uint)uVar6 & 0xffff)) * 4;
    *(long *)(param_1 + 0x148) = lVar7;
    *(long *)(param_1 + 0x150) = lVar7 + (long)iVar3 * 4;
    FUN_031c05e8(lVar4,lVar5,&local_30);
    *(undefined8 *)(param_1 + 0x168) = uStack_28;
    *(undefined8 *)(param_1 + 0x160) = local_30;
    *(undefined8 *)(param_1 + 0x178) = uStack_28;
    *(undefined8 *)(param_1 + 0x170) = local_30;
  }
  return;
}


