/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c5d00; name: FUN_031c5d00
 */


void FUN_031c5d00(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar10 = 0;
  do {
    iVar6 = param_2;
    iVar4 = *(int *)(param_1 + (long)(iVar10 + iVar6 >> 1) * 0x10 + 0xc);
    param_2 = iVar6;
    iVar11 = iVar10;
    do {
      puVar5 = (undefined8 *)(param_1 + -0x10 + (long)iVar11 * 0x10);
      do {
        iVar9 = iVar11;
        puVar8 = puVar5;
        puVar5 = puVar8 + 2;
        iVar11 = iVar9 + 1;
      } while (iVar4 < *(int *)((long)puVar8 + 0x1c));
      puVar13 = (undefined8 *)(param_1 + 0x10 + (long)param_2 * 0x10);
      param_2 = param_2 + 1;
      do {
        iVar7 = param_2;
        puVar12 = puVar13;
        puVar13 = puVar12 + -2;
        param_2 = iVar7 + -1;
      } while (*(int *)((long)puVar12 + -4) < iVar4);
      iVar11 = iVar9;
      if (iVar9 <= param_2) {
        if (iVar9 != param_2) {
          uVar1 = *puVar13;
          uVar2 = puVar12[-1];
          uVar3 = puVar8[3];
          *puVar13 = *puVar5;
          puVar12[-1] = uVar3;
          *puVar5 = uVar1;
          puVar8[3] = uVar2;
        }
        param_2 = iVar7 + -2;
        iVar11 = iVar9 + 1;
      }
    } while (iVar11 <= param_2);
  } while (((iVar10 < param_2) && (param_3 <= param_2)) ||
          ((iVar11 < iVar6 && (iVar10 = iVar11, param_2 = iVar6, iVar11 < param_3))));
  return;
}


