/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b0336c; name: FUN_01b0336c
 */


long FUN_01b0336c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_01b00924();
  FUN_008c4b3c(param_1 + 0x10,param_2 + 0x10);
  FUN_019a99b8(param_1 + 0x20,param_2 + 0x20);
  FUN_01aff02c(param_1 + 0x30,param_2 + 0x30);
  FUN_009630f4(param_1 + 0x40,param_2 + 0x40);
  FUN_018e5814(param_1 + 0x50,param_2 + 0x50);
  FUN_018310a4(param_1 + 0x60,param_2 + 0x60);
  FUN_01a9e18c(param_1 + 0x70,param_2 + 0x70);
  FUN_00cfa028(param_1 + 0x80,param_2 + 0x80);
  FUN_019e35e4(param_1 + 0x90,param_2 + 0x90);
  FUN_01b0167c(param_1 + 0xa0,param_2 + 0xa0);
  FUN_01aff51c(param_1 + 0xb0,param_2 + 0xb0);
  FUN_01b018f4(param_1 + 0xc0,param_2 + 0xc0);
  FUN_017db6d4(param_1 + 0xd0,param_2 + 0xd0);
  FUN_01b001cc(param_1 + 0xe0,param_2 + 0xe0);
  FUN_01b006ac(param_1 + 0xf0,param_2 + 0xf0);
  FUN_0095aa3c(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  FUN_01a02dbc(param_1 + 0x118,param_2 + 0x118);
  FUN_018e559c(param_1 + 0x128,param_2 + 0x128);
  FUN_01b0043c(param_1 + 0x138,param_2 + 0x138);
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


