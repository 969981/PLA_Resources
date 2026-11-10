/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6cf0; name: FUN_030f6cf0
 */


void FUN_030f6cf0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar1) {
    uVar1 = 0x3fffffff;
  }
  if (uVar1 < 0x81) {
    uVar1 = 0x80;
  }
  FUN_032bd1d4(param_1,uVar1,0x40,0,0,param_2);
  return;
}


