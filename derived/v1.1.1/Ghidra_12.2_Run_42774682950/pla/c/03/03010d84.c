/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03010d84; name: FUN_03010d84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03010d84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0xe;
  *param_1 = &DAT_042da5d8;
  param_1[1] = 0xffffffff;
  uVar8 = DAT_0388a148;
  uVar7 = DAT_0388a140;
  uVar6 = _UNK_0388a138;
  uVar5 = _DAT_0388a130;
  uVar4 = _UNK_03889a88;
  uVar3 = _DAT_03889a80;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  *(undefined2 *)(param_1 + 0x18) = 0x16;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  *(undefined2 *)(param_1 + 6) = 2;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x18100800;
  *(undefined8 *)((long)param_1 + 0xcc) = 0x3f8000003f800000;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar8;
  param_1[0x12] = uVar7;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  return;
}


