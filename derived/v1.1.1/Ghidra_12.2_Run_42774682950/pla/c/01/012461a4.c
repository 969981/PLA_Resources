/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012461a4; name: FUN_012461a4
 */


void FUN_012461a4(long param_1)

{
  long lVar1;
  undefined4 local_24;
  
  lVar1 = param_1 + 8;
  local_24 = 0;
  FUN_01246510(lVar1,&local_24);
  local_24 = 1;
  FUN_01246510(lVar1,&local_24);
  local_24 = 2;
  FUN_01246510(lVar1,&local_24);
  local_24 = 3;
  FUN_01246510(lVar1,&local_24);
  local_24 = 4;
  FUN_01246510(lVar1,&local_24);
  local_24 = 5;
  FUN_01246510(lVar1,&local_24);
  *(undefined **)(param_1 + 0x48) = &DAT_041fd9e0;
  *(undefined **)(param_1 + 0x50) = &DAT_041fdb30;
  return;
}


