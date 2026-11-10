/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01123bb4; name: FUN_01123bb4
 */


void FUN_01123bb4(long param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  
  iVar6 = 0;
  puVar8 = (ushort *)(param_1 + 0x88);
  uVar7 = 0xd;
  do {
    while( true ) {
      uVar2 = *puVar8;
      *param_2 = uVar2;
      if (uVar2 == 0x10) break;
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) goto LAB_01123cc4;
    }
    uVar2 = puVar8[1];
    uVar1 = uVar2 + 2;
    bVar5 = uVar7 < uVar1;
    uVar7 = uVar7 - uVar1;
    if (bVar5 || uVar7 == 0) {
      *param_2 = 0;
      return;
    }
    uVar10 = uVar2 + 1;
    uVar13 = uVar10 & 7;
    puVar12 = param_2 + 1;
    *puVar12 = uVar2;
    puVar4 = puVar8 + 1;
    puVar9 = puVar8;
    if (uVar13 != 0) {
      lVar3 = 0;
      do {
        lVar11 = lVar3;
        uVar10 = uVar10 - 1;
        uVar13 = uVar13 - 1;
        *(undefined2 *)((long)param_2 + lVar11 + 4) = *(undefined2 *)((long)puVar8 + lVar11 + 4);
        lVar3 = lVar11 + 2;
      } while (uVar13 != 0);
      puVar12 = (ushort *)((long)param_2 + lVar11 + 4);
      puVar9 = (ushort *)((long)puVar8 + lVar11 + 2);
      puVar4 = puVar9 + 1;
      param_2 = puVar12;
    }
    puVar8 = puVar4;
    if (6 < uVar2) {
      param_2 = puVar12;
      do {
        param_2[1] = puVar9[2];
        param_2[2] = puVar8[2];
        param_2[3] = puVar8[3];
        param_2[4] = puVar8[4];
        param_2[5] = puVar8[5];
        param_2[6] = puVar8[6];
        puVar9 = puVar8 + 7;
        param_2[7] = *puVar9;
        puVar8 = puVar8 + 8;
        uVar10 = uVar10 - 8;
        param_2 = param_2 + 8;
        *param_2 = *puVar8;
      } while (uVar10 != 0);
    }
    iVar6 = uVar1 + iVar6;
  } while (uVar7 != 0);
LAB_01123cc4:
  if (iVar6 == 0) {
    return;
  }
  param_2[-1] = 0;
  return;
}


