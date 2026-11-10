/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005348c0; name: FUN_005348c0
 */


void FUN_005348c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 0x10) == 1) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
    FUN_002f5c80(lVar1 + 0x18);
  }
  FUN_00534910(param_1,param_2);
  return;
}


