/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee6818; name: FUN_02ee6818
 */


void FUN_02ee6818(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  
  lVar1 = FUN_02eb18a8();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      lVar1 = FUN_02ee69c0(param_1);
    }
    else {
      lVar1 = FUN_02ee6890(param_1,(int)((ulong)(lVar1 - *param_1) >> 3) * -0x33333333);
    }
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x20) = param_2;
    }
  }
  return;
}


