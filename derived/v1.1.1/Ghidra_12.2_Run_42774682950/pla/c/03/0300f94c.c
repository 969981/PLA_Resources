/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300f94c; name: FUN_0300f94c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300f94c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined2 *)(param_1 + 4) = 9;
  *(undefined2 *)(param_1 + 6) = 2;
  param_1[2] = 1;
  param_1[3] = 0;
  uVar8 = DAT_0388a148;
  uVar7 = DAT_0388a140;
  *param_1 = &DAT_042da900;
  param_1[1] = 0xffffffff;
  uVar4 = _UNK_03889a88;
  uVar3 = _DAT_03889a80;
  *(undefined2 *)(param_1 + 0x18) = 0x15;
  uVar6 = _UNK_0388a138;
  uVar5 = _DAT_0388a130;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x100c0800;
  param_1[0x19] = 0x3f8000003f800000;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar8;
  param_1[0x12] = uVar7;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  return;
}


