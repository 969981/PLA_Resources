/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c30048; name: FUN_02c30048
 */


int FUN_02c30048(long param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  
  if ((param_3 != 0) && (*(char *)(param_1 + 0x7c) != '\0')) {
    puVar7 = *(ushort **)(param_1 + 0x58);
    iVar6 = 0;
    do {
      while( true ) {
        uVar2 = *puVar7;
        *param_2 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) {
          return iVar6;
        }
        param_2 = param_2 + 1;
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + 1;
        param_3 = param_3 - 1;
        if (param_3 == 0) goto LAB_02c30168;
      }
      uVar2 = puVar7[1];
      uVar1 = uVar2 + 2;
      bVar5 = param_3 < uVar1;
      param_3 = param_3 - uVar1;
      if (bVar5 || param_3 == 0) {
        *param_2 = 0;
        return iVar6;
      }
      uVar9 = uVar2 + 1;
      uVar12 = uVar9 & 7;
      puVar11 = param_2 + 1;
      *puVar11 = uVar2;
      puVar4 = puVar7 + 1;
      puVar8 = puVar7;
      if (uVar12 != 0) {
        lVar3 = 0;
        do {
          lVar10 = lVar3;
          uVar9 = uVar9 - 1;
          uVar12 = uVar12 - 1;
          *(undefined2 *)((long)param_2 + lVar10 + 4) = *(undefined2 *)((long)puVar7 + lVar10 + 4);
          lVar3 = lVar10 + 2;
        } while (uVar12 != 0);
        puVar11 = (ushort *)((long)param_2 + lVar10 + 4);
        puVar8 = (ushort *)((long)puVar7 + lVar10 + 2);
        puVar4 = puVar8 + 1;
        param_2 = puVar11;
      }
      puVar7 = puVar4;
      if (6 < uVar2) {
        param_2 = puVar11;
        do {
          param_2[1] = puVar8[2];
          param_2[2] = puVar7[2];
          param_2[3] = puVar7[3];
          param_2[4] = puVar7[4];
          param_2[5] = puVar7[5];
          param_2[6] = puVar7[6];
          puVar8 = puVar7 + 7;
          param_2[7] = *puVar8;
          puVar7 = puVar7 + 8;
          uVar9 = uVar9 - 8;
          param_2 = param_2 + 8;
          *param_2 = *puVar7;
        } while (uVar9 != 0);
      }
      iVar6 = uVar1 + iVar6;
    } while (param_3 != 0);
LAB_02c30168:
    if (iVar6 != 0) {
      param_2[-1] = 0;
      return iVar6 + -1;
    }
  }
  return 0;
}


