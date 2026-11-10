/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d339c; name: FUN_032d339c
 */


long FUN_032d339c(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_58;
  
  uVar10 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar7) {
    param_2 = uVar7;
  }
  FUN_032bd100(param_2,0x38,*param_5,&local_58);
  uVar7 = *param_5;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_58,&local_58);
  if (0 < (int)param_4) {
    puVar6 = (undefined8 *)(lVar5 + 8);
    puVar8 = param_3;
    uVar9 = uVar10;
    do {
      puVar6[-1] = *puVar8;
      *puVar8 = 0;
      uVar2 = puVar8[2];
      uVar9 = uVar9 - 1;
      *puVar6 = puVar8[1];
      puVar6[1] = uVar2;
      uVar2 = puVar8[3];
      uVar3 = puVar8[4];
      puVar1 = puVar8 + 5;
      uVar4 = puVar8[6];
      puVar8 = puVar8 + 7;
      puVar6[4] = *puVar1;
      puVar6[5] = uVar4;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar6 = puVar6 + 7;
    } while (uVar9 != 0);
    puVar6 = param_3;
    do {
      FUN_032c7b9c(puVar6);
      uVar10 = uVar10 - 1;
      puVar6 = puVar6 + 7;
    } while (uVar10 != 0);
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar7 & 0x3fffffff) * 0x38);
  }
  if (local_58 < 0xdffffffc8) {
    uVar7 = (uint)(local_58 / 0x38);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *param_5 = uVar7;
  return lVar5;
}


