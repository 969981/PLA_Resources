/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03322f4c; name: FUN_03322f4c
 */


void FUN_03322f4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [152];
  
  FUN_032c4d5c(auStack_b8,param_3);
  FUN_032c5f98(auStack_b8);
  *param_1 = param_2;
  FUN_032c7d58(param_1 + 1,auStack_b8);
  FUN_032c4ce8(auStack_b8);
  return;
}


