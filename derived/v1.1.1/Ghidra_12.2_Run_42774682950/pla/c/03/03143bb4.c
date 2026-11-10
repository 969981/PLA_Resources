/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03143bb4; name: FUN_03143bb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03143bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[0x12] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[6] = 0x429600003f800000;
  param_1[7] = 0;
  uVar4 = DAT_0388a148;
  uVar3 = DAT_0388a140;
  uVar2 = _UNK_03888d28;
  uVar1 = _DAT_03888d20;
  param_1[8] = 0x3e8000003fe66666;
  *(undefined4 *)(param_1 + 9) = 0x3f59999a;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3fa0d97c00000001;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3e4ccccd3e4ccccd;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[0xd] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 5;
  return;
}


