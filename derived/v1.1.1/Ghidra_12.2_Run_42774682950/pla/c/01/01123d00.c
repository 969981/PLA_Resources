/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01123d00; name: FUN_01123d00
 */


void FUN_01123d00(long param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  uint uVar14;
  
  *param_2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x7d);
  iVar6 = 0;
  puVar7 = (ushort *)((long)param_2 + 6);
  puVar9 = (ushort *)(param_1 + 0x88);
  *(undefined1 *)((long)param_2 + 5) = *(undefined1 *)(param_1 + 0x7f);
  uVar8 = 0xd;
  do {
    while( true ) {
      uVar2 = *puVar9;
      *puVar7 = uVar2;
      if (uVar2 == 0x10) break;
      if (uVar2 == 0) {
        return;
      }
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + 1;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_01123e2c;
    }
    uVar2 = puVar9[1];
    uVar1 = uVar2 + 2;
    bVar5 = uVar8 < uVar1;
    uVar8 = uVar8 - uVar1;
    if (bVar5 || uVar8 == 0) {
      *puVar7 = 0;
      return;
    }
    uVar11 = uVar2 + 1;
    uVar14 = uVar11 & 7;
    puVar13 = puVar7 + 1;
    *puVar13 = uVar2;
    puVar4 = puVar9 + 1;
    puVar10 = puVar9;
    if (uVar14 != 0) {
      lVar3 = 0;
      do {
        lVar12 = lVar3;
        uVar11 = uVar11 - 1;
        uVar14 = uVar14 - 1;
        *(undefined2 *)((long)puVar7 + lVar12 + 4) = *(undefined2 *)((long)puVar9 + lVar12 + 4);
        lVar3 = lVar12 + 2;
      } while (uVar14 != 0);
      puVar13 = (ushort *)((long)puVar7 + lVar12 + 4);
      puVar10 = (ushort *)((long)puVar9 + lVar12 + 2);
      puVar4 = puVar10 + 1;
      puVar7 = puVar13;
    }
    puVar9 = puVar4;
    if (6 < uVar2) {
      puVar7 = puVar13;
      do {
        puVar7[1] = puVar10[2];
        puVar7[2] = puVar9[2];
        puVar7[3] = puVar9[3];
        puVar7[4] = puVar9[4];
        puVar7[5] = puVar9[5];
        puVar7[6] = puVar9[6];
        puVar10 = puVar9 + 7;
        puVar7[7] = *puVar10;
        puVar9 = puVar9 + 8;
        uVar11 = uVar11 - 8;
        puVar7 = puVar7 + 8;
        *puVar7 = *puVar9;
      } while (uVar11 != 0);
    }
    iVar6 = uVar1 + iVar6;
  } while (uVar8 != 0);
LAB_01123e2c:
  if (iVar6 == 0) {
    return;
  }
  puVar7[-1] = 0;
  return;
}


