/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a1e1c; name: FUN_031a1e1c
 */


void FUN_031a1e1c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  
  iVar12 = (int)param_1[1];
  *(int *)*param_2 = iVar12;
  puVar4 = PTR_PTR_0434a080;
  iVar9 = (int)param_1[1];
  puVar10 = (uint *)((long)param_1 + 0xc);
  uVar5 = *puVar10;
  uVar1 = iVar9 + 1;
  if (iVar9 < (int)(uVar5 & 0x3fffffff)) {
    lVar11 = *param_1;
  }
  else {
    lVar11 = *param_1;
    if (0x3ffffffe < iVar9) {
      FUN_032bd0a8(uVar1);
      uVar5 = *puVar10;
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    lVar11 = FUN_032bd1d4(puVar4,uVar2,8,lVar11,iVar9,puVar10);
    iVar9 = (int)param_1[1];
    *param_1 = lVar11;
  }
  *(undefined8 *)(lVar11 + (long)iVar9 * 8) = *param_2;
  *(uint *)(param_1 + 1) = uVar1;
  if (0 < iVar12) {
    do {
      lVar11 = *param_1;
      uVar1 = iVar12 - 1;
      lVar8 = *(long *)(lVar11 + (long)((int)uVar1 >> 1) * 8);
      puVar6 = *(undefined4 **)(lVar11 + (long)iVar12 * 8);
      if (*(float *)(lVar8 + 4) < (float)puVar6[1]) {
        return;
      }
      *(long *)(lVar11 + (long)iVar12 * 8) = lVar8;
      *(undefined4 **)(lVar11 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 8) = puVar6;
      puVar7 = *(undefined4 **)(lVar11 + (long)iVar12 * 8);
      uVar3 = *puVar7;
      *puVar7 = *puVar6;
      *puVar6 = uVar3;
      iVar12 = (int)uVar1 >> 1;
    } while (1 < (int)uVar1);
  }
  return;
}


