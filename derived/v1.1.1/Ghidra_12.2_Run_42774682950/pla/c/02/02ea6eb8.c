/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6eb8; name: FUN_02ea6eb8
 */


bool FUN_02ea6eb8(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  if (uVar6 != 0) {
    puVar4 = *(ulong **)(param_1 + 0x18);
    puVar13 = puVar4;
    do {
      if ((int)puVar13[1] == 0) {
        uVar9 = *(uint *)(param_2 + 0x10);
        if (uVar9 != 0) {
          uVar8 = *puVar13;
          iVar7 = 0;
          do {
            iVar1 = iVar7 + (uVar9 >> 1);
            uVar10 = *(ulong *)(*(long *)(param_2 + 8) + (long)iVar1 * 8);
            if (uVar10 == uVar8) {
              if (*(long *)(param_2 + 8) + (long)iVar1 * 8 != 0) goto LAB_02ea6f6c;
              break;
            }
            if (uVar10 < uVar8) {
              iVar7 = iVar1 + 1;
            }
            uVar9 = uVar9 - (uVar10 < uVar8) >> 1;
          } while (uVar9 != 0);
        }
        FUN_02ea6ae4(param_1,puVar13);
        puVar4 = *(ulong **)(param_1 + 0x18);
        uVar6 = *(uint *)(param_1 + 0x20);
        puVar11 = puVar13;
        if (puVar13 < puVar4 + (ulong)uVar6 * 3 + -3) {
          do {
            puVar5 = puVar11 + 3;
            *puVar11 = *puVar5;
            puVar11[1] = puVar11[4];
            *(int *)(puVar11 + 2) = (int)puVar11[5];
            puVar11 = puVar5;
          } while (puVar5 < puVar4 + (ulong)uVar6 * 3 + -3);
          uVar6 = *(uint *)(param_1 + 0x20);
          puVar4 = *(ulong **)(param_1 + 0x18);
        }
        uVar6 = uVar6 - 1;
        *(uint *)(param_1 + 0x20) = uVar6;
      }
      else {
LAB_02ea6f6c:
        puVar13 = puVar13 + 3;
      }
    } while (puVar4 + (ulong)uVar6 * 3 != puVar13);
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    bVar2 = true;
  }
  else {
    puVar12 = *(undefined8 **)(param_2 + 8);
    lVar3 = FUN_02ea6a44(param_1,*puVar12,0);
    bVar2 = lVar3 != 0;
    while (puVar12 = puVar12 + 1,
          puVar12 != (undefined8 *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8))
    {
      lVar3 = FUN_02ea6a44(param_1,*puVar12,0);
      bVar2 = (bool)(bVar2 & lVar3 != 0);
    }
  }
  return bVar2;
}


