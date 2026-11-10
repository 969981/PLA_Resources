/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4ace0; name: FUN_02e4ace0
 */


void FUN_02e4ace0(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_02e4ad5c(param_1,param_2);
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      puVar2 = (undefined4 *)FUN_02e4aee8(param_1);
    }
    else {
      puVar2 = (undefined4 *)
               FUN_02e4adec(param_1,(int)((ulong)(lVar1 - *param_1) >> 3) * -0x55555555);
    }
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_2;
    }
  }
  return;
}


