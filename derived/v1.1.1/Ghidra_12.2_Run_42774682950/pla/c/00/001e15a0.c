/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e15a0; name: FUN_001e15a0
 */


void FUN_001e15a0(byte *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)param_1);
  if (0xfe < sVar2) {
    sVar2 = 0xff;
  }
  for (; sVar2 != 0; sVar2 = sVar2 - 1) {
    iVar1 = tolower((uint)*param_1);
    *param_3 = (char)iVar1;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  }
  FUN_001e64cc(param_3,7,&DAT_038bdafc,param_2);
  return;
}


