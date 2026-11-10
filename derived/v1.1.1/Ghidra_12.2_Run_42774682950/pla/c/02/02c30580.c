/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c30580; name: FUN_02c30580
 */


int FUN_02c30580(ushort *param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  uint uVar11;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar6 = 0;
  do {
    while( true ) {
      uVar2 = *param_2;
      *param_1 = uVar2;
      if (uVar2 == 0x10) break;
      if (uVar2 == 0) {
        return iVar6;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 1;
      param_3 = param_3 - 1;
      if (param_3 == 0) goto LAB_02c30698;
    }
    uVar2 = param_2[1];
    uVar1 = uVar2 + 2;
    bVar5 = param_3 < uVar1;
    param_3 = param_3 - uVar1;
    if (bVar5 || param_3 == 0) {
      *param_1 = 0;
      return iVar6;
    }
    uVar8 = uVar2 + 1;
    uVar11 = uVar8 & 7;
    puVar10 = param_1 + 1;
    *puVar10 = uVar2;
    puVar4 = param_2 + 1;
    puVar7 = param_2;
    if (uVar11 != 0) {
      lVar3 = 0;
      do {
        lVar9 = lVar3;
        uVar8 = uVar8 - 1;
        uVar11 = uVar11 - 1;
        *(undefined2 *)((long)param_1 + lVar9 + 4) = *(undefined2 *)((long)param_2 + lVar9 + 4);
        lVar3 = lVar9 + 2;
      } while (uVar11 != 0);
      puVar10 = (ushort *)((long)param_1 + lVar9 + 4);
      puVar7 = (ushort *)((long)param_2 + lVar9 + 2);
      puVar4 = puVar7 + 1;
      param_1 = puVar10;
    }
    param_2 = puVar4;
    if (6 < uVar2) {
      param_1 = puVar10;
      do {
        param_1[1] = puVar7[2];
        param_1[2] = param_2[2];
        param_1[3] = param_2[3];
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
        param_1[6] = param_2[6];
        puVar7 = param_2 + 7;
        param_1[7] = *puVar7;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 8;
        param_1 = param_1 + 8;
        *param_1 = *param_2;
      } while (uVar8 != 0);
    }
    iVar6 = uVar1 + iVar6;
  } while (param_3 != 0);
LAB_02c30698:
  if (iVar6 == 0) {
    return 0;
  }
  param_1[-1] = 0;
  return iVar6 + -1;
}


