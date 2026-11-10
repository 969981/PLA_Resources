/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c30490; name: FUN_02c30490
 */


uint FUN_02c30490(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = 0;
  do {
    uVar4 = uVar3;
    uVar2 = *param_2;
    *param_1 = uVar2;
    if (uVar2 == 0x10) {
      puVar5 = param_2 + 1;
      uVar2 = *puVar5;
      puVar1 = param_2 + (ulong)uVar2 + 2;
      uVar6 = (ulong)(uVar2 + 1);
      param_1 = param_1 + 1;
      *param_1 = uVar2;
      uVar4 = uVar4 + (int)((ulong)uVar2 + 2);
      uVar7 = uVar6 & 7;
      if ((uVar2 + 1 & 7) != 0) {
        do {
          param_2 = puVar5;
          puVar5 = param_2 + 1;
          uVar6 = (ulong)*puVar5;
          uVar7 = uVar7 - 1;
          param_1 = param_1 + 1;
          *param_1 = *puVar5;
        } while (uVar7 != 0);
      }
      if (6 < uVar2) {
        do {
          param_1[1] = param_2[2];
          param_1[2] = puVar5[2];
          param_1[3] = puVar5[3];
          param_1[4] = puVar5[4];
          param_1[5] = puVar5[5];
          param_1[6] = puVar5[6];
          param_2 = puVar5 + 7;
          param_1[7] = *param_2;
          puVar5 = puVar5 + 8;
          uVar6 = (ulong)*puVar5;
          param_1 = param_1 + 8;
          *param_1 = *puVar5;
        } while (puVar1 != puVar5);
      }
      param_2 = puVar1;
      if ((uVar6 & 0xffff) == 0) {
        return uVar4;
      }
    }
    else if (uVar2 == 0) {
      return uVar4;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar3 = uVar4 + 1;
    if (0x7ff < uVar4 + 1) {
      *param_1 = 0;
      return uVar4;
    }
  } while( true );
}


