/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d174; name: FUN_0020d174
 */


void FUN_0020d174(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00205748(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  uVar2 = FUN_00205748(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}


