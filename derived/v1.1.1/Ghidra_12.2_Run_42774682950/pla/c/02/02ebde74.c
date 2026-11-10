/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebde74; name: FUN_02ebde74
 */


void FUN_02ebde74(long *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  
  lVar1 = FUN_02ebbd18();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      lVar1 = FUN_02ebe01c(param_1);
    }
    else {
      lVar1 = FUN_02ebdeec(param_1,(int)((ulong)(lVar1 - *param_1) >> 4) * -0x55555555);
    }
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x28) = param_2;
    }
  }
  return;
}


