/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002487b4; name: FUN_002487b4
 */


void FUN_002487b4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_002424d0(*param_2,3);
  uVar2 = FUN_002424d0(*param_2,4);
  FUN_002479a4(param_1,param_2,param_3,param_4,uVar1,uVar2,*(byte *)(param_2 + 0x45) >> 2 & 1,
               *(byte *)(param_2 + 0x45) >> 3 & 1);
  return;
}


