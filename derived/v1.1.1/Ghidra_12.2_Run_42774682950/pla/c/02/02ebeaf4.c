/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebeaf4; name: FUN_02ebeaf4
 */


void FUN_02ebeaf4(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  
  lVar1 = FUN_02ebbef0();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      lVar1 = FUN_02ebec9c(param_1);
    }
    else {
      lVar1 = FUN_02ebeb6c(param_1,(int)((ulong)(lVar1 - *param_1) >> 4) * -0x55555555);
    }
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x28) = param_2;
    }
  }
  return;
}


