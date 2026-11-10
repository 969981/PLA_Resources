/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb1a30; name: FUN_02eb1a30
 */


long FUN_02eb1a30(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char local_24 [4];
  
  if (*param_2 != 0) {
    lVar2 = FUN_02eb1afc(param_1 + 0x10,*param_2,local_24);
    lVar1 = 0;
    if (local_24[0] != '\0') {
      lVar1 = lVar2;
    }
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  *param_2 = 0;
  lVar1 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


