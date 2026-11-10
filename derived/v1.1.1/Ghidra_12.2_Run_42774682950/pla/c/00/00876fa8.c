/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876fa8; name: FUN_00876fa8
 */


void FUN_00876fa8(undefined1 *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  bVar1 = param_1[1] | 5;
  if ((param_3 & 1) == 0) {
    bVar1 = param_1[1] & 0xfe | 4;
  }
  param_1[1] = bVar1;
  uVar2 = 0x1f;
  if ((param_4 & 0x20) != 0) {
    uVar2 = 0x20;
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}


