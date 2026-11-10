/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1785c; name: FUN_01c1785c
 */


void FUN_01c1785c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x2f8) = param_2[1];
  *(undefined8 *)(param_1 + 0x308) = uVar2;
  *(undefined8 *)(param_1 + 0x2f0) = *param_2;
  uVar2 = param_2[2];
  *(undefined1 *)(param_1 + 0x280) = 1;
  *(undefined4 *)(param_1 + 0x310) = uVar1;
  *(undefined8 *)(param_1 + 0x300) = uVar2;
  *(undefined8 *)(param_1 + 0x284) = 0;
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2c0) = uVar1;
  FUN_01c178c4(0);
  return;
}


