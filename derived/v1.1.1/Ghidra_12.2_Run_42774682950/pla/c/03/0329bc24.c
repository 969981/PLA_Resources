/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329bc24; name: FUN_0329bc24
 */


void FUN_0329bc24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined2 *puVar10;
  
  *(undefined4 *)(param_1 + 1) = 0;
  iVar2 = *(int *)(param_2 + 1);
  puVar10 = (undefined2 *)*param_2;
  puVar4 = (undefined2 *)*param_1;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    puVar4 = (undefined2 *)FUN_030a8980(PTR_PTR_0434a080,iVar2,puVar4,0);
    *param_1 = puVar4;
  }
  if (iVar2 != 0) {
    uVar8 = (long)iVar2 * 2 - 2;
    uVar1 = ((uint)(uVar8 >> 1) & 0x7fffffff) + 1;
    puVar7 = puVar10;
    if ((uVar1 & 3) != 0) {
      lVar9 = -((ulong)uVar1 & 3);
      puVar5 = puVar4;
      puVar6 = puVar10;
      do {
        puVar7 = puVar6 + 1;
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = *puVar6;
        puVar5 = puVar4;
        puVar6 = puVar7;
      } while (bVar3);
    }
    if (5 < uVar8) {
      do {
        *puVar4 = *puVar7;
        puVar4[1] = puVar7[1];
        puVar4[2] = puVar7[2];
        puVar5 = puVar7 + 3;
        puVar7 = puVar7 + 4;
        puVar4[3] = *puVar5;
        puVar4 = puVar4 + 4;
      } while (puVar7 != puVar10 + iVar2);
    }
  }
  *(int *)(param_1 + 1) = iVar2;
  return;
}


