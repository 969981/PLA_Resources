/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c51f70; name: FUN_02c51f70
 */


undefined8 FUN_02c51f70(ushort *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  uint uVar14;
  
  uVar6 = 0;
  if (((int)param_2 < 0x38c) && (param_3 - 1 < 10)) {
    uVar8 = 0;
    if ((param_2 | 1) != 0x38b && (int)param_2 < 0x38a) {
      uVar8 = param_2 & 0xffff;
    }
    uVar6 = FUN_02c2e33c(*(undefined8 *)(DAT_043f2380 + (ulong)param_3 * 8 + 8),uVar8,DAT_043f2378);
  }
  iVar7 = 0;
  puVar9 = *(ushort **)(DAT_043f2378 + 0x58);
  uVar8 = 0xd;
  do {
    while( true ) {
      uVar2 = *puVar9;
      *param_1 = uVar2;
      if (uVar2 == 0x10) break;
      if (uVar2 == 0) {
        return uVar6;
      }
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 1;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_02c520e4;
    }
    uVar2 = puVar9[1];
    uVar1 = uVar2 + 2;
    bVar5 = uVar8 < uVar1;
    uVar8 = uVar8 - uVar1;
    if (bVar5 || uVar8 == 0) {
      *param_1 = 0;
      return uVar6;
    }
    uVar11 = uVar2 + 1;
    uVar14 = uVar11 & 7;
    puVar13 = param_1 + 1;
    *puVar13 = uVar2;
    puVar4 = puVar9 + 1;
    puVar10 = puVar9;
    if (uVar14 != 0) {
      lVar3 = 0;
      do {
        lVar12 = lVar3;
        uVar11 = uVar11 - 1;
        uVar14 = uVar14 - 1;
        *(undefined2 *)((long)param_1 + lVar12 + 4) = *(undefined2 *)((long)puVar9 + lVar12 + 4);
        lVar3 = lVar12 + 2;
      } while (uVar14 != 0);
      puVar13 = (ushort *)((long)param_1 + lVar12 + 4);
      puVar10 = (ushort *)((long)puVar9 + lVar12 + 2);
      puVar4 = puVar10 + 1;
      param_1 = puVar13;
    }
    puVar9 = puVar4;
    if (6 < uVar2) {
      param_1 = puVar13;
      do {
        param_1[1] = puVar10[2];
        param_1[2] = puVar9[2];
        param_1[3] = puVar9[3];
        param_1[4] = puVar9[4];
        param_1[5] = puVar9[5];
        param_1[6] = puVar9[6];
        puVar10 = puVar9 + 7;
        param_1[7] = *puVar10;
        puVar9 = puVar9 + 8;
        uVar11 = uVar11 - 8;
        param_1 = param_1 + 8;
        *param_1 = *puVar9;
      } while (uVar11 != 0);
    }
    iVar7 = uVar1 + iVar7;
  } while (uVar8 != 0);
LAB_02c520e4:
  if (iVar7 != 0) {
    param_1[-1] = 0;
  }
  return uVar6;
}


