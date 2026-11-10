/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e44f0; name: FUN_007e44f0
 */


bool FUN_007e44f0(long param_1)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  
  __s1 = (char *)(param_1 + 8);
  iVar2 = memcmp(__s1,&DAT_03a7160c,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp(__s1,&DAT_03a7160c,0x10);
    if ((iVar2 == 0) || (iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_03a7160c,0xc), iVar2 == 0)) {
      if ((*(char *)(param_1 + 0xb) != '\x7f') ||
         ((*(char *)(param_1 + 10) != '\0' || (*(char *)(param_1 + 9) != '\0')))) {
        return false;
      }
      bVar1 = *__s1 == '\x01';
    }
    else {
      iVar2 = memcmp(__s1,&DAT_03a7161c,0x10);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}


