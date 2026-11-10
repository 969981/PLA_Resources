/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338e3bc; name: FUN_0338e3bc
 */


uint FUN_0338e3bc(undefined8 *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  int iVar11;
  uint *puVar12;
  
  puVar7 = (undefined8 *)*param_1;
  puVar12 = (uint *)*puVar7;
  if ((puVar7[5] - puVar7[2]) + (long)puVar12 < (long)param_1[1]) {
    if (puVar7[1] - (long)puVar12 < 8) {
      if ((puVar7[7] == 0) || (lVar8 = FUN_033216b4(puVar7,8), lVar8 < 8)) {
        return 1;
      }
      puVar7 = (undefined8 *)*param_1;
      puVar12 = (uint *)*puVar7;
    }
    uVar6 = puVar12[1];
    if (uVar6 != 0) {
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if ((param_2 != 0) && (uVar6 != param_2)) goto LAB_0338e44c;
      uVar4 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
      uVar5 = uVar4 >> 0x10;
      uVar4 = uVar4 << 0x10;
      lVar8 = (puVar7[5] - puVar7[2]) + (long)puVar12;
      uVar3 = uVar5 | uVar4 & 0x3fffffff;
      uVar2 = lVar8 + (ulong)uVar3;
      if (7 < uVar3 && uVar2 <= (ulong)param_1[1]) {
        iVar11 = *(int *)(param_1 + 3);
        lVar10 = param_1[2];
        iVar1 = iVar11 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) <= iVar11) {
          lVar10 = FUN_0338e530(PTR_PTR_0434a080,iVar1);
          iVar11 = *(int *)(param_1 + 3);
          param_1[2] = lVar10;
        }
        *(int *)(param_1 + 3) = iVar1;
        puVar12 = (uint *)(lVar10 + (long)iVar11 * 0x18);
        *(long *)(puVar12 + 2) = lVar8;
        *puVar12 = uVar6;
        puVar12[1] = uVar5 | uVar4;
        *(undefined8 *)(puVar12 + 4) = param_1[1];
        puVar9 = (ulong *)*param_1;
        param_1[1] = uVar2;
        if (puVar9[1] < *puVar9 + 8) {
          FUN_033216d4(puVar9,8);
        }
        else {
          *puVar9 = *puVar9 + 8;
        }
        return *puVar12;
      }
    }
    *(byte *)(puVar7 + 4) = *(byte *)(puVar7 + 4) | 2;
    uVar6 = 1;
  }
  else {
LAB_0338e44c:
    uVar6 = 0;
  }
  return uVar6;
}


