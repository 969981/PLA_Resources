/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300fb90; name: FUN_0300fb90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300fb90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &DAT_042da990;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 10;
  *(undefined2 *)(param_1 + 6) = 4;
  *(undefined2 *)(param_1 + 0x14) = 0xd;
  uVar6 = DAT_0388a148;
  uVar5 = DAT_0388a140;
  uVar4 = _UNK_03889a88;
  uVar3 = _DAT_03889a80;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  param_1[0x15] = 0xbf800000bf800000;
  *(undefined4 *)((long)param_1 + 0xa2) = 0x3020100;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}


