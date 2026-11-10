/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03002894; name: FUN_03002894
 */


undefined4 FUN_03002894(long *param_1,undefined8 param_2,undefined2 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined4 local_24;
  
  uVar1 = FUN_030028ec();
  uVar1 = -(uVar1 >> 0x1f & 1) & 0xfffffff000000000 | (uVar1 & 0xffffffff) << 4;
  *(undefined2 *)(*param_1 + uVar1) = *param_3;
  *(undefined8 *)(*param_1 + uVar1 + 8) = *param_4;
  return local_24;
}


