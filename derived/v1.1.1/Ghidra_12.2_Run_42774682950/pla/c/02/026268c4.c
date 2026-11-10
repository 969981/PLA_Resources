/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026268c4; name: FUN_026268c4
 */


void FUN_026268c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_02626984();
  FUN_026269b0(param_1 + 0x10,param_2 + 0x10);
  FUN_026269dc(param_1 + 0x20,param_2 + 0x20);
  FUN_02626a08(param_1 + 0x30,param_2 + 0x30);
  FUN_02626a34(param_1 + 0x40,param_2 + 0x40);
  FUN_02621de8(param_1 + 0x50,param_2 + 0x50);
  FUN_02621e14(param_1 + 0x60,param_2 + 0x60);
  FUN_02626a60(param_1 + 0x70,param_2 + 0x70);
  FUN_02626a8c(param_1 + 0x80,param_2 + 0x80);
  FUN_02626ad0(param_1 + 0x98,param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 200);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  FUN_01b0336c(param_1 + 0xe0,param_2 + 0xe0);
  return;
}


