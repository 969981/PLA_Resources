/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5188c; name: FUN_02e5188c
 */


void FUN_02e5188c(undefined8 param_1,long param_2)

{
  long lVar1;
  char local_28 [4];
  undefined1 auStack_24 [4];
  
  lVar1 = FUN_02e52b90(param_1,param_2,local_28);
  if (((lVar1 == 0) || (local_28[0] == '\0')) &&
     (lVar1 = FUN_02e52bf0(param_1,param_2,auStack_24), lVar1 != 0)) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return;
}


