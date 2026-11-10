/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e535e4; name: FUN_02e535e4
 */


void FUN_02e535e4(long *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_02e5365c();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)FUN_02e537e0(param_1);
    }
    else {
      puVar2 = (undefined8 *)
               FUN_02e536c8(param_1,(int)((ulong)(lVar1 - *param_1) >> 4) * 0x38e38e39);
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
    }
  }
  return;
}


