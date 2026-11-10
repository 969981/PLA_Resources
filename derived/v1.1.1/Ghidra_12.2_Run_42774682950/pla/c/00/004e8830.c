/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e8830; name: FUN_004e8830
 */


undefined8 FUN_004e8830(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x740) == 0) {
    return 2;
  }
  iVar1 = FUN_004cb590(param_2,0xff01,2);
  if ((iVar1 != 0) && (iVar1 = FUN_004cac70(param_2,2), iVar1 != 0)) {
    iVar1 = FUN_004cb8e0(param_2,*(long *)(param_1 + 0xa8) + 0x348,
                         *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x388),1);
    if ((iVar1 != 0) && (iVar1 = FUN_004cade0(param_2), iVar1 != 0)) {
      return 1;
    }
  }
  FUN_004c99a0(param_1,0x50,0x1d9,0x44,"external/openssl/ssl/statem/extensions_clnt.c",0x1d);
  return 0;
}


