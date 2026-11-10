/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00849368; name: FUN_00849368
 */


void FUN_00849368(long *param_1)

{
  undefined *puVar1;
  
  FUN_0084361c();
  puVar1 = PTR_DAT_04378010;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[0xd] = 0;
  return;
}


