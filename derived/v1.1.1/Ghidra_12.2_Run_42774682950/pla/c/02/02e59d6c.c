/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e59d6c; name: FUN_02e59d6c
 */


void FUN_02e59d6c(long *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_02e59de8();
  if (*param_4 == '\0') {
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)FUN_02e59f94(param_1);
    }
    else {
      puVar2 = (undefined8 *)
               FUN_02e59e68(param_1,(int)((ulong)(lVar1 - *param_1) >> 4) * -0x55555555);
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
      puVar2[1] = param_3;
    }
  }
  return;
}


