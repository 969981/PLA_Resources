/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e4e2c; name: FUN_001e4e2c
 */


undefined8 FUN_001e4e2c(char *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  long lVar4;
  
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    lVar4 = 0;
    do {
      __s = *(char **)((long)&PTR_DAT_0411cc10 + lVar4);
      sVar3 = strlen(__s);
      if ((sVar3 <= sVar2) && (iVar1 = FUN_001f8b48(param_1 + (sVar2 - sVar3),__s), iVar1 != 0)) {
        return *(undefined8 *)((long)&PTR_s_image_gif_0411cc18 + lVar4);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0xa0);
  }
  return 0;
}


