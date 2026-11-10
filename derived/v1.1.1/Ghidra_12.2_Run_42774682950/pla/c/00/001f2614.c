/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2614; name: FUN_001f2614
 */


undefined8 FUN_001f2614(undefined8 *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_001e381c(param_2,0);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_001e370c(param_2,&LAB_001f26c8);
    __s = (char *)*param_1;
    while (__s != (char *)0x0) {
      sVar1 = strlen(__s);
      lVar2 = FUN_002044c4(sVar1 + 0x20);
      if (lVar2 == 0) {
        FUN_001e381c(param_2,0);
        return 3;
      }
      strcpy((char *)(lVar2 + 0x18),(char *)*param_1);
      FUN_001e3718(param_2,*(undefined8 *)(param_2 + 8),lVar2,lVar2);
      __s = (char *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


