/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c6500; name: FUN_031c6500
 */


void FUN_031c6500(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  
  do {
    iVar5 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x10 + 0xc);
    iVar12 = param_2;
    iVar7 = param_3;
    do {
      while( true ) {
        puVar6 = (undefined8 *)(param_1 + -0x10 + (long)iVar12 * 0x10);
        iVar1 = iVar12;
        do {
          iVar12 = iVar1;
          puVar9 = puVar6;
          puVar6 = puVar9 + 2;
          iVar1 = iVar12 + 1;
        } while (iVar5 < *(int *)((long)puVar9 + 0x1c));
        puVar11 = (undefined8 *)(param_1 + 0x10 + (long)iVar7 * 0x10);
        iVar7 = iVar7 + 1;
        do {
          iVar8 = iVar7;
          puVar10 = puVar11;
          puVar11 = puVar10 + -2;
          iVar7 = iVar8 + -1;
        } while (*(int *)((long)puVar10 + -4) < iVar5);
        if (iVar12 <= iVar7) break;
        if (iVar7 < iVar12) goto LAB_031c65b4;
      }
      if (iVar12 != iVar7) {
        uVar2 = *puVar11;
        uVar3 = puVar10[-1];
        uVar4 = puVar9[3];
        *puVar11 = *puVar6;
        puVar10[-1] = uVar4;
        *puVar6 = uVar2;
        puVar9[3] = uVar3;
      }
      iVar7 = iVar8 + -2;
      iVar12 = iVar1;
    } while (iVar1 <= iVar7);
LAB_031c65b4:
    if (param_2 < iVar7) {
      FUN_031c6500(param_1);
    }
    param_2 = iVar12;
    if (param_3 <= iVar12) {
      return;
    }
  } while( true );
}


