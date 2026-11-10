/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d49e4; name: FUN_001d49e4
 */


void FUN_001d49e4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_043726a8;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  plVar2 = (long *)FUN_032cf5b0(0x38);
  puVar1 = PTR_DAT_043726b0;
  plVar2[6] = 0;
  plVar2[2] = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0xffffffff;
  lVar3 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar3 == 0) {
    return;
  }
  FUN_032d647c();
  return;
}


