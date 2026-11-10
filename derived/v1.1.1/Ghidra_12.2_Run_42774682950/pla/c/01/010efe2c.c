/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010efe2c; name: FUN_010efe2c
 */


void FUN_010efe2c(undefined8 param_1,undefined8 param_2,uint *param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_010efcac();
  if (0x57e3e < uVar1) {
    uVar1 = 359999;
  }
  uVar2 = (ulong)uVar1 / 100 & 0xffff;
  *param_3 = uVar1 / 6000;
  *param_4 = (int)uVar2 + (int)(uVar2 / 0x3c) * -0x3c;
  *param_5 = uVar1 % 100;
  return;
}


