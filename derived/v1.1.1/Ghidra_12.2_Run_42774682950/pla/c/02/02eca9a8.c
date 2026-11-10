/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca9a8; name: FUN_02eca9a8
 */


void FUN_02eca9a8(char *param_1)

{
  size_t sVar1;
  long lVar2;
  undefined1 auStack_a0 [128];
  
  sVar1 = strlen(param_1);
  memcpy(auStack_a0 + (0x80 - (sVar1 + 0x10 & 0xfffffffffffffff0)),param_1,sVar1 + 1);
  for (lVar2 = DAT_0440a7e0; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    if (*(long *)(lVar2 + 0x148) != 0) {
      FUN_02ea5e58(*(long *)(lVar2 + 0x148),
                   auStack_a0 + (0x80 - (sVar1 + 0x10 & 0xfffffffffffffff0)));
    }
  }
  return;
}


