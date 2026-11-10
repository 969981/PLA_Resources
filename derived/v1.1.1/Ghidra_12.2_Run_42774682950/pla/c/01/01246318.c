/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01246318; name: FUN_01246318
 */


void FUN_01246318(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_34;
  
  lVar1 = param_1 + 8;
  if ((param_2 & 1) == 0) {
    local_34 = 0;
    FUN_01246510(lVar1,&local_34);
    local_34 = 1;
    FUN_01246510(lVar1,&local_34);
    local_34 = 2;
    FUN_01246510(lVar1,&local_34);
    local_34 = 3;
    FUN_01246510(lVar1,&local_34);
    puVar2 = (undefined *)0x41fd9b0;
    puVar3 = (undefined *)0x41fd890;
  }
  else {
    local_34 = 7;
    FUN_01246510(lVar1,&local_34);
    local_34 = 0;
    FUN_01246510(lVar1,&local_34);
    local_34 = 1;
    FUN_01246510(lVar1,&local_34);
    local_34 = 2;
    FUN_01246510(lVar1,&local_34);
    local_34 = 3;
    FUN_01246510(lVar1,&local_34);
    puVar2 = &DAT_041fd860;
    puVar3 = &DAT_041fd710;
  }
  local_34 = 4;
  FUN_01246510(lVar1,&local_34);
  local_34 = 5;
  FUN_01246510(lVar1,&local_34);
  *(undefined **)(param_1 + 0x48) = puVar3;
  *(undefined **)(param_1 + 0x50) = puVar2;
  return;
}


