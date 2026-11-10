/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c188; name: FUN_0315c188
 */


void FUN_0315c188(long param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  
  puVar2 = PTR_PTR_0434a080;
  uVar1 = *(uint *)(param_1 + 200);
  if ((int)uVar1 < (int)param_3) {
    if ((int)(*(uint *)(param_1 + 0xcc) & 0x3fffffff) < (int)param_3) {
      uVar4 = FUN_0315c984(PTR_PTR_0434a080,param_3,*(undefined8 *)(param_1 + 0xc0));
      uVar1 = *(uint *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0xc0) = uVar4;
    }
    if ((int)uVar1 < (int)param_3) {
      lVar7 = *(long *)(param_1 + 0xc0);
      uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
      lVar8 = (long)(int)param_3 * 0x10;
      puVar6 = (undefined8 *)(lVar7 + uVar9);
      uVar9 = (lVar8 - uVar9) - 0x10;
      uVar1 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
      *(uint *)(param_1 + 200) = param_3;
      if ((uVar1 & 3) != 0) {
        lVar10 = -((ulong)uVar1 & 3);
        puVar5 = puVar6;
        do {
          puVar6 = puVar5 + 2;
          *puVar5 = 0;
          puVar5[1] = 0x8000000000000000;
          bVar3 = lVar10 != -1;
          lVar10 = lVar10 + 1;
          puVar5 = puVar6;
        } while (bVar3);
      }
      if (0x2f < uVar9) {
        do {
          *puVar6 = 0;
          puVar6[1] = 0x8000000000000000;
          puVar6[2] = 0;
          puVar6[3] = 0x8000000000000000;
          puVar6[4] = 0;
          puVar6[5] = 0x8000000000000000;
          puVar6[6] = 0;
          puVar6[7] = 0x8000000000000000;
          puVar6 = puVar6 + 8;
        } while (puVar6 != (undefined8 *)(lVar7 + lVar8));
      }
    }
    else if ((int)param_3 < (int)uVar1) {
      uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
      puVar11 = (undefined4 *)(*(long *)(param_1 + 0xc0) + uVar9 + -8);
      *(uint *)(param_1 + 200) = param_3;
      lVar7 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4) - uVar9;
      do {
        *puVar11 = 0;
        if ((-1 < (int)puVar11[1]) && (*(long *)(puVar11 + -2) != 0)) {
          FUN_032cf244(puVar2,*(long *)(puVar11 + -2),4,puVar11[1] & 0x3fffffff);
        }
        *(undefined8 *)(puVar11 + -2) = 0;
        lVar7 = lVar7 + 0x10;
        puVar11[1] = 0x80000000;
        puVar11 = puVar11 + -4;
      } while (lVar7 != 0);
    }
  }
  FUN_0315c63c(*(long *)(param_1 + 0xc0) + ((long)(int)param_3 + -1) * 0x10,*param_2);
  return;
}


