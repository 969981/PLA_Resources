/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fed9c; name: FUN_007fed9c
 */


void FUN_007fed9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  undefined *puVar1;
  
  FUN_007fe25c();
  puVar1 = PTR_DAT_04377660;
  *(undefined1 *)(param_1 + 0xb) = param_4;
  *(undefined2 *)((long)param_1 + 0x5a) = param_5;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


