/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5de2c; name: FUN_02c5de2c
 */


uint FUN_02c5de2c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0xfb < param_3) {
    param_3 = 0xfc;
  }
  if (param_2 <= param_3 && param_3 - param_2 != 0) {
    iVar2 = FUN_02c69e70(*(undefined8 *)(param_1 + 0x98));
    iVar3 = FUN_02c6a1a8(*(undefined8 *)(param_1 + 0x98));
    iVar4 = FUN_02c6a4e0(*(undefined8 *)(param_1 + 0x98));
    iVar5 = FUN_02c6a818(*(undefined8 *)(param_1 + 0x98));
    iVar6 = FUN_02c6ab50(*(undefined8 *)(param_1 + 0x98));
    iVar7 = FUN_02c6ae88(*(undefined8 *)(param_1 + 0x98));
    uVar1 = (param_3 - param_2) + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
    iVar2 = uVar1 - 0x1fe;
    if (uVar1 < 0x1fe || iVar2 == 0) {
      iVar2 = 0;
    }
    param_3 = param_3 - iVar2;
  }
  return param_3;
}


