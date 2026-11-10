/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020ce40; name: FUN_0020ce40
 */


long FUN_0020ce40(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + 4);
    lVar2 = param_3;
    do {
      FUN_002056f0(param_1,puVar1[-1]);
      FUN_00205718(param_1 + 2,*puVar1);
      lVar2 = lVar2 + -1;
      param_1 = param_1 + 6;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
  }
  return param_3 * 6;
}


