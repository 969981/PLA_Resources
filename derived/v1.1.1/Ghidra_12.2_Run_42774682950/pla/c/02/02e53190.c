/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e53190; name: FUN_02e53190
 */


void FUN_02e53190(long *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_02e5312c();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)FUN_02e5333c(param_1);
    }
    else {
      puVar2 = (undefined8 *)FUN_02e531fc(param_1,(ulong)(lVar1 - *param_1) >> 7);
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
    }
  }
  return;
}


