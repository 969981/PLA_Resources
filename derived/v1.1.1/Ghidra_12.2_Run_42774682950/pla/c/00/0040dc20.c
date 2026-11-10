/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040dc20; name: FUN_0040dc20
 */


undefined4 * FUN_0040dc20(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    lVar1 = FUN_0040c5d0(param_1 + 2,param_2 + 2);
    if (((lVar1 == 0) || (lVar1 = FUN_0040c5d0(param_1 + 8,param_2 + 8), lVar1 == 0)) ||
       (lVar1 = FUN_0040c5d0(param_1 + 0xe,param_2 + 0xe), lVar1 == 0)) {
      return (undefined4 *)0x0;
    }
    *param_1 = *param_2;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
  }
  return param_1;
}


