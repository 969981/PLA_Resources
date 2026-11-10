/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe0000; name: FUN_02fe0000
 */


void FUN_02fe0000(undefined4 param_1,undefined8 *param_2,undefined1 param_3,uint param_4,
                 uint param_5,uint param_6,uint param_7,uint param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_2[2] = 1;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)((long)param_2 + 0x19) = 2;
  *(undefined2 *)((long)param_2 + 0x1a) = 3;
  *(undefined1 *)(param_2 + 3) = param_3;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 4) = param_1;
  *param_2 = &PTR_LAB_042ba6e0;
  param_2[1] = 0xffffffff;
  *(undefined2 *)(param_2 + 0xe) = 0x7f7f;
  uVar2 = param_9 + 0xfU & 0xfff0;
  uVar3 = uVar2 + param_4 * 0xc + 0xf & 0xfff0;
  uVar4 = uVar3 + param_5 * 0x10 & 0xfff0;
  uVar1 = uVar4 + param_5 * 4;
  *(uint *)(param_2 + 8) = uVar2 - 0x40;
  *(uint *)((long)param_2 + 0x44) = param_4 & 0xffff;
  *(uint *)(param_2 + 9) = uVar3 - 0x48;
  *(uint *)((long)param_2 + 0x4c) = param_5 & 0xffff;
  *(uint *)(param_2 + 10) = uVar4 - 0x50;
  *(uint *)((long)param_2 + 0x54) = param_5 & 0xffff;
  uVar2 = param_6 + uVar1 + 3 & 0xfffc;
  *(uint *)(param_2 + 0xb) = (uVar1 & 0xfffc) - 0x58;
  *(uint *)((long)param_2 + 0x5c) = param_6 & 0xffff;
  *(uint *)(param_2 + 0xc) = uVar2 - 0x60;
  *(uint *)((long)param_2 + 100) = param_7 & 0xffff;
  *(uint *)(param_2 + 0xd) = (uVar2 + param_7 * 4 & 0xfffc) - 0x68;
  *(uint *)((long)param_2 + 0x6c) = param_8 & 0xffff;
  return;
}


