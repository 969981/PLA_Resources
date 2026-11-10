/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260a0c4; name: FUN_0260a0c4
 */


void FUN_0260a0c4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  FUN_01aa8b2c();
  *param_1 = &PTR_LAB_04261a80;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[9] = &PTR_LAB_04261bd0;
  param_1[10] = &PTR_LAB_04261cb0;
  FUN_00aeb228(param_1 + 99,param_2 + 0xa8);
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  FUN_00aeb228(param_1 + 0x65,param_2 + 0xb8);
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  FUN_00aeb228(param_1 + 0x67,param_2 + 200);
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  FUN_00aeb228(param_1 + 0x69,param_2 + 0xd8);
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  FUN_00aeb228(param_1 + 0x6b,param_2 + 0xe8);
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  FUN_00aeb228(param_1 + 0x6d,param_2 + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)((long)param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x6f) = uVar1;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_00aeb228(param_1 + 0x70,param_2 + 0x110);
  uVar2 = *(undefined1 *)(param_2 + 0x120);
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x72) = uVar2;
  param_1[0x73] = 0;
  FUN_01a9e8f4(param_1 + 0x73,param_2 + 0x128);
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  FUN_00ae8374(param_1 + 0x76,param_2 + 0x138);
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  FUN_01435a5c(param_1 + 0x78,param_2 + 0x148);
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  return;
}


