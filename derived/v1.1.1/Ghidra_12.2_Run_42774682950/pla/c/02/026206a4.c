/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026206a4; name: FUN_026206a4
 */


byte FUN_026206a4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [20];
  undefined4 local_34;
  undefined1 auStack_30 [8];
  long local_28;
  byte local_11;
  
  local_28 = param_1;
  FUN_02623cd4(auStack_30,param_1);
  uVar1 = FUN_02623b4c(auStack_30);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    FUN_02623d04(auStack_48,param_1 + 0x1f8);
    uVar2 = FUN_02623bb4(auStack_30);
    local_11 = FUN_02623d30(uVar2,param_2);
    local_11 = local_11 & 1;
    local_34 = 1;
    FUN_02623e10(auStack_48);
  }
  FUN_02623e48(auStack_30);
  return local_11;
}


