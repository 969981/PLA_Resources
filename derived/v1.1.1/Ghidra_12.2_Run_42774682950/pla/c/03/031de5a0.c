/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031de5a0; name: FUN_031de5a0
 */


void FUN_031de5a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
                 long *param_6,char param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_7 == '\0') {
    FUN_031dee70(param_1,param_2,param_4 + -8,param_3 + -8);
  }
  else {
    FUN_031de730();
  }
  iVar9 = (int)param_6[1];
  uVar8 = iVar9 - 1;
  if (0 < (int)uVar8) {
    lVar13 = (long)(int)uVar8;
    lVar10 = 0;
    lVar11 = 0;
    uVar12 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4;
    do {
      lVar13 = lVar13 + -1;
      puVar1 = (undefined8 *)(*param_6 + lVar10);
      puVar2 = (undefined8 *)(*param_6 + uVar12);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      lVar11 = lVar11 + 1;
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      lVar10 = lVar10 + 0x10;
      uVar12 = uVar12 - 0x10;
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
    } while (lVar11 < lVar13);
    iVar9 = (int)param_6[1];
  }
  if (0 < iVar9) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      puVar3 = (undefined4 *)(*param_6 + lVar10);
      lVar11 = lVar11 + 1;
      uVar4 = *puVar3;
      *puVar3 = puVar3[1];
      puVar3[1] = uVar4;
      *(float *)(*param_6 + lVar10) = 1.0 - *(float *)(*param_6 + lVar10);
      *(float *)(*param_6 + lVar10 + 4) = 1.0 - *(float *)(*param_6 + lVar10 + 4);
      lVar13 = *param_6 + lVar10;
      lVar10 = lVar10 + 0x10;
      *(uint *)(lVar13 + 8) = ~*(uint *)(lVar13 + 8) + (int)((ulong)(param_4 - param_3) >> 3);
    } while (lVar11 < (int)param_6[1]);
  }
  iVar9 = (int)param_5[1];
  if (0 < iVar9) {
    lVar11 = 0;
    lVar10 = 0xc;
    do {
      uVar8 = *(uint *)(*param_5 + lVar10);
      if (uVar8 != 0xffffffff) {
        *(uint *)(*param_5 + lVar10) = (int)param_6[1] + ~uVar8;
        iVar9 = (int)param_5[1];
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < iVar9);
  }
  return;
}


