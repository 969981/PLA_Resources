/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001677e0; name: FUN_001677e0
 */


ulong FUN_001677e0(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar9 = *(undefined8 *)(param_1[2] + 0x38);
  lVar10 = *param_1;
  puVar5 = (ulong *)FUN_00171c60(uVar9,*(undefined8 *)(param_1[2] + 0x50),param_2);
  if ((int)puVar5[1] == 0x13) {
    uVar11 = *puVar5;
    if ((((int)uVar11 < *(int *)((long)param_1 + 0x2c)) &&
        (((*(uint *)(param_3 + 1) ^
          *(uint *)(*(long *)(lVar10 + 0x30) + ((long)(uVar11 << 0x20) >> 0x1c) + 8)) & 0x3f) == 0))
       && (iVar4 = FUN_00175d10(0,*(long *)(lVar10 + 0x30) + (long)(int)uVar11 * 0x10,param_3),
          iVar4 != 0)) goto LAB_00167940;
  }
  piVar7 = (int *)(lVar10 + 0x14);
  iVar3 = *piVar7;
  lVar12 = (long)iVar3;
  uVar2 = *(uint *)((long)param_1 + 0x2c);
  uVar11 = (ulong)uVar2;
  *(undefined4 *)(puVar5 + 1) = 0x13;
  *puVar5 = (long)(int)uVar2;
  iVar4 = *piVar7;
  if ((int)uVar2 < iVar4) {
    lVar6 = *(long *)(lVar10 + 0x30);
  }
  else {
    lVar6 = FUN_00161400(uVar9,*(undefined8 *)(lVar10 + 0x30),piVar7,0x10,0x3ffffff,"constants");
    iVar4 = *(int *)(lVar10 + 0x14);
    *(long *)(lVar10 + 0x30) = lVar6;
  }
  if (iVar3 < iVar4) {
    uVar8 = lVar12 << 4 | 8;
    do {
      *(undefined4 *)(lVar6 + uVar8) = 0;
      lVar6 = *(long *)(lVar10 + 0x30);
      lVar12 = lVar12 + 1;
      uVar8 = uVar8 + 0x10;
    } while (lVar12 < *(int *)(lVar10 + 0x14));
  }
  lVar12 = param_3[1];
  plVar1 = (long *)(lVar6 + (long)(int)uVar2 * 0x10);
  *plVar1 = *param_3;
  plVar1[1] = lVar12;
  *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
  if ((((*(byte *)(param_3 + 1) >> 6 & 1) != 0) && ((*(byte *)(lVar10 + 9) >> 2 & 1) != 0)) &&
     ((*(byte *)(*param_3 + 9) & 3) != 0)) {
    FUN_0015ca90(uVar9,lVar10);
  }
LAB_00167940:
  return uVar11 & 0xffffffff;
}


