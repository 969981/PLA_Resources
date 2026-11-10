/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee3e3c; name: FUN_02ee3e3c
 */


long FUN_02ee3e3c(long param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  char local_14 [4];
  
  if (*param_2 == 0) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x18) != 0;
    }
    lVar2 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') {
      lVar2 = param_1 + 8;
    }
  }
  else {
    if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
      *param_3 = param_1 + 8;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    lVar1 = FUN_02eb1afc(param_1 + 0x10,*param_2,local_14);
    lVar2 = 0;
    if (local_14[0] != '\0') {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}


