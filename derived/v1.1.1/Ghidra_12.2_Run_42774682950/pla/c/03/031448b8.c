/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031448b8; name: FUN_031448b8
 */


void FUN_031448b8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x2f0))(param_2,param_3);
  if (((~*(uint *)(puVar1 + 1) & 0xffffff) == 0) || ((~*(uint *)(puVar1 + 3) & 0xffffff) == 0)) {
    return;
  }
  FUN_031452c4(param_1,param_2,*puVar1,puVar1[2],0);
  return;
}


