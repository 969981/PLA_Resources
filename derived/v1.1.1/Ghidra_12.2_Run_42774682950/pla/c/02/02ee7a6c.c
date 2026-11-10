/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee7a6c; name: FUN_02ee7a6c
 */


void FUN_02ee7a6c(long *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  
  lVar1 = FUN_02eb1afc();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      lVar1 = FUN_02ee7bbc(param_1);
    }
    else {
      lVar1 = FUN_02ee7ad8(param_1,(ulong)(lVar1 - *param_1) >> 4);
    }
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 8) = param_2;
    }
  }
  return;
}


