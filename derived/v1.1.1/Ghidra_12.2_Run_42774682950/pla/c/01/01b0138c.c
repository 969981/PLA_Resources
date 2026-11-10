/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b0138c; name: FUN_01b0138c
 */


long FUN_01b0138c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00d07398();
  FUN_0087fcf0(param_1 + 0x10,param_2 + 0x10);
  FUN_019a471c(param_1 + 0x20,param_2 + 0x20);
  FUN_019b5304(param_1 + 0x30,param_2 + 0x30);
  FUN_009643ac(param_1 + 0x40,param_2 + 0x40);
  FUN_018e5d8c(param_1 + 0x50,param_2 + 0x50);
  FUN_01b01b6c(param_1 + 0x60,param_2 + 0x60);
  FUN_01b01e6c(param_1 + 0x70,param_2 + 0x70);
  FUN_01b0216c(param_1 + 0x80,param_2 + 0x80);
  FUN_01913c74(param_1 + 0x90,param_2 + 0x90);
  FUN_01950a20(param_1 + 0xa0,param_2 + 0xa0);
  FUN_01b0246c(param_1 + 0xb0,param_2 + 0xb0);
  FUN_01b0276c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_017e9b98(param_1 + 0xd0,param_2 + 0xd0);
  FUN_01b02a6c(param_1 + 0xe0,param_2 + 0xe0);
  FUN_01b02d6c(param_1 + 0xf0,param_2 + 0xf0);
  FUN_019d1ef8(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  FUN_01784c54(param_1 + 0x118,param_2 + 0x118);
  FUN_018e5a8c(param_1 + 0x128,param_2 + 0x128);
  FUN_01b0306c(param_1 + 0x138,param_2 + 0x138);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x160);
  uVar3 = *(undefined8 *)(param_2 + 0x168);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  return param_1;
}


