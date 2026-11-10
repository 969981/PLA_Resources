/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e7c94; name: FUN_030e7c94
 */


void FUN_030e7c94(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0x2000050;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined2 *)(param_1 + 1) = 0x14;
  FUN_032c4b00(param_1 + 4,0xff,0x30);
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 6) = param_3[1];
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = param_3[2];
  *(undefined8 *)(param_1 + 10) = param_3[3];
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar2 = param_3[5];
  uVar1 = param_3[4];
  *(undefined1 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  return;
}


