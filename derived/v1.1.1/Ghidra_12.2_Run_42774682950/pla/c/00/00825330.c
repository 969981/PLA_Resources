/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825330; name: FUN_00825330
 */


void FUN_00825330(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined *puVar1;
  
  FUN_0082498c(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  puVar1 = PTR_DAT_04377ca0;
  param_1[0x1e] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


