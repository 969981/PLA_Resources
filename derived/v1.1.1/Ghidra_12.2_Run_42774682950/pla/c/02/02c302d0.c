/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c302d0; name: FUN_02c302d0
 */


uint FUN_02c302d0(long param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return 0;
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x78);
  if (*(ushort *)(param_1 + 0x78) == 0) {
    uVar7 = 0;
  }
  else {
    puVar9 = *(ushort **)(param_1 + 0x58);
    uVar7 = 0;
    do {
      while( true ) {
        uVar2 = *param_2;
        *puVar9 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) goto LAB_02c30410;
        puVar9 = puVar9 + 1;
        param_2 = param_2 + 1;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_02c303fc;
      }
      uVar2 = param_2[1];
      uVar1 = uVar2 + 2;
      bVar5 = uVar8 < uVar1;
      uVar8 = uVar8 - uVar1;
      if (bVar5 || uVar8 == 0) {
        *puVar9 = 0;
        goto LAB_02c30410;
      }
      uVar10 = uVar2 + 1;
      uVar13 = uVar10 & 7;
      puVar12 = puVar9 + 1;
      *puVar12 = uVar2;
      puVar4 = param_2 + 1;
      puVar6 = param_2;
      if (uVar13 != 0) {
        lVar3 = 0;
        do {
          lVar11 = lVar3;
          uVar10 = uVar10 - 1;
          uVar13 = uVar13 - 1;
          *(undefined2 *)((long)puVar9 + lVar11 + 4) = *(undefined2 *)((long)param_2 + lVar11 + 4);
          lVar3 = lVar11 + 2;
        } while (uVar13 != 0);
        puVar12 = (ushort *)((long)puVar9 + lVar11 + 4);
        puVar6 = (ushort *)((long)param_2 + lVar11 + 2);
        puVar4 = puVar6 + 1;
        puVar9 = puVar12;
      }
      param_2 = puVar4;
      if (6 < uVar2) {
        puVar9 = puVar12;
        do {
          puVar9[1] = puVar6[2];
          puVar9[2] = param_2[2];
          puVar9[3] = param_2[3];
          puVar9[4] = param_2[4];
          puVar9[5] = param_2[5];
          puVar9[6] = param_2[6];
          puVar6 = param_2 + 7;
          puVar9[7] = *puVar6;
          param_2 = param_2 + 8;
          uVar10 = uVar10 - 8;
          puVar9 = puVar9 + 8;
          *puVar9 = *param_2;
        } while (uVar10 != 0);
      }
      uVar7 = uVar1 + uVar7;
    } while (uVar8 != 0);
LAB_02c303fc:
    if (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      puVar9[-1] = 0;
    }
  }
LAB_02c30410:
  *(short *)(param_1 + 0x7a) = (short)uVar7;
  return uVar7 & 0xffff;
}


