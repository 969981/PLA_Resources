/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eedd04; name: FUN_02eedd04
 */


void FUN_02eedd04(long *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_02eedca0();
  if (*param_3 == '\0') {
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)FUN_02eede3c(param_1);
    }
    else {
      puVar2 = (undefined8 *)FUN_02eedd70(param_1,(ulong)(lVar1 - *param_1) >> 4);
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
    }
  }
  return;
}


