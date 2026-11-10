/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f8ab40; name: FUN_01f8ab40
 */


void FUN_01f8ab40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = DAT_03a7d230;
  uVar2 = DAT_03a7d228;
  uVar1 = DAT_03a7d220;
  *param_1 = uVar4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x100000000;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[10] = &DAT_cbf29ce484222645;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &DAT_cbf29ce484222645;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = &DAT_cbf29ce484222645;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = &DAT_cbf29ce484222645;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &DAT_cbf29ce484222645;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = &DAT_cbf29ce484222645;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}


