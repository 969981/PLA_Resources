/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300d6e0; name: FUN_0300d6e0
 */


void FUN_0300d6e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 3);
  uVar2 = *(undefined4 *)((long)param_2 + 0x1c);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 5);
  uVar2 = *(undefined4 *)((long)param_2 + 0x2c);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 7);
  uVar2 = *(undefined4 *)((long)param_2 + 0x3c);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 9);
  uVar2 = *(undefined4 *)((long)param_2 + 0x4c);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = uVar1;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  uVar2 = *(undefined4 *)((long)param_2 + 0x5c);
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = uVar1;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar2;
  return;
}


