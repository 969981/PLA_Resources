/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03191128; name: FUN_03191128
 */


void FUN_03191128(long param_1,undefined8 param_2,ushort *param_3,ushort *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  void *__dest;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  ushort *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  
  plVar1 = (long *)(param_1 + 0x188);
  lVar5 = FUN_031920dc(plVar1);
  if (lVar5 == 0) {
    lVar5 = -0x100000000;
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(uint *)(lVar5 + 4);
    lVar5 = (lVar5 - *(long *)(param_1 + 0x198)) * 0x20000000;
  }
  uVar7 = uVar7 | (uint)lVar5;
  lVar12 = *plVar1;
  __dest = (void *)*param_5;
  uVar11 = (ulong)((long)param_4 - (long)param_3) >> 1;
  iVar10 = (int)uVar11;
  if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) < iVar10) {
    __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a090,uVar11 & 0xffffffff,2,__dest,
                                  *(undefined4 *)(param_5 + 1));
    *param_5 = __dest;
  }
  memcpy(__dest,param_3,((long)param_4 - (long)param_3) * 0x80000000 >> 0x1f);
  lVar12 = lVar12 + (long)(int)uVar7 * 0x38;
  *(int *)(param_5 + 1) = iVar10;
  piVar13 = (int *)(lVar12 + 0x10);
  plVar14 = (long *)(lVar12 + 8);
  FUN_02ff1f1c(param_5 + 2,0,*piVar13,0);
  if (param_3 == param_4) {
    bVar4 = false;
  }
  else {
    bVar6 = 0;
    do {
      puVar9 = param_3 + 1;
      uVar3 = *param_3;
      lVar12 = *plVar14 + (ulong)uVar3 * 0x14;
      bVar2 = *(byte *)(lVar12 + 0x10);
      *(undefined1 *)(lVar12 + 0x10) = 8;
      uVar11 = (ulong)(uVar3 >> 3) & 0x1ffc;
      bVar6 = bVar6 | bVar2 & 0x40;
      lVar12 = param_5[2];
      *(uint *)(lVar12 + uVar11) = *(uint *)(lVar12 + uVar11) | 1 << (ulong)(uVar3 & 0x1f);
      param_3 = puVar9;
    } while (param_4 != puVar9);
    bVar4 = bVar6 != 0;
  }
  *(bool *)(param_5 + 5) = bVar4;
  iVar10 = *piVar13;
  if (iVar10 != 0) {
    lVar12 = (long)iVar10 * 0x14;
    pbVar8 = (byte *)(*plVar14 + 0x10);
    do {
      if ((*pbVar8 >> 3 & 1) == 0) {
        return;
      }
      lVar12 = lVar12 + -0x14;
      pbVar8 = pbVar8 + 0x14;
    } while (lVar12 != 0);
  }
  if ((uint)((ulong)lVar5 >> 0x20) <= *(uint *)(param_1 + 0x1a0)) {
    lVar5 = *(long *)(param_1 + 0x198) + (lVar5 >> 0x20) * 8;
    if (*(uint *)(lVar5 + 4) == uVar7) goto LAB_031912d4;
  }
  lVar5 = FUN_031920dc(plVar1,*plVar1 + (long)(int)uVar7 * 0x38);
LAB_031912d4:
  FUN_03192a2c(plVar1,lVar5);
  return;
}


