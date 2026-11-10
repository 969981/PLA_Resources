/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec89d0; name: FUN_02ec89d0
 */


long FUN_02ec89d0(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_02ec8a40(param_1 + 0xa8,param_2);
  if ((lVar2 != 0) &&
     (iVar1 = FUN_02ef891c(*(undefined4 *)(param_1 + 0x4c),param_2,lVar2), iVar1 != 1)) {
    FUN_02ec8acc(param_1 + 0xa8,param_2);
    lVar2 = 0;
  }
  return lVar2;
}


