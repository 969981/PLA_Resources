/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef7d40; name: FUN_02ef7d40
 */


void FUN_02ef7d40(long *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_02ef7dac();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      puVar2 = (undefined4 *)FUN_02ef7f00(param_1);
    }
    else {
      puVar2 = (undefined4 *)FUN_02ef7e10(param_1,(ulong)(lVar1 - *param_1) >> 3);
    }
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_2;
    }
  }
  return;
}


