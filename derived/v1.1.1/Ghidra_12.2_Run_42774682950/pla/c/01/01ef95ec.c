/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef95ec; name: FUN_01ef95ec
 */


void FUN_01ef95ec(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  FUN_00d894e4();
  *param_1 = &PTR_LAB_04259448;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  param_1[9] = &PTR_LAB_042594b8;
  param_1[10] = &PTR_LAB_04259500;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar1 = PTR_DAT_0437a508 + 0x10;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x26] = puVar1;
  param_1[0x27] = 0;
  param_1[0x2c] = puVar1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_01efec7c(param_1 + 0x32);
  FUN_01efecbc(param_1 + 0x3f);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  FUN_0095e898(param_1 + 0x10,param_2);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x10);
  FUN_0195cb34(param_1 + 0x13,param_2 + 0x18);
  FUN_0095e070(param_1 + 0x15,param_2 + 0x28);
  uVar2 = *(undefined2 *)(param_2 + 0x50);
  param_1[0x19] = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x1a) = uVar2;
  param_1[0x18] = uVar3;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x58);
  FUN_00b63974(param_1 + 0x1c,param_2 + 0x60);
  FUN_00cfa028(param_1 + 0x1e,param_2 + 0x70);
  FUN_0095aa3c(param_1 + 0x20,param_2 + 0x80);
  param_1[0x22] = *(undefined8 *)(param_2 + 0x90);
  FUN_00bd10a0(param_1 + 0x23,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0xa8);
  return;
}


