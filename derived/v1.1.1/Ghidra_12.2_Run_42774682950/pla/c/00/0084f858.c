/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084f858; name: FUN_0084f858
 */


void FUN_0084f858(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0084361c();
  puVar2 = PTR_DAT_04378040;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  puVar1 = PTR_DAT_043773c0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xd] = **(long **)puVar1;
  puVar1 = PTR_DAT_043773b8;
  *(undefined2 *)(PTR_DAT_043773b8 + 0x3b4) = 0xffff;
  *(undefined8 *)(puVar1 + 0x3b8) = 0;
  *(undefined4 *)(puVar1 + 0x3c0) = 0;
  return;
}


