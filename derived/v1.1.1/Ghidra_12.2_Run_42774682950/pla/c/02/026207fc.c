/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026207fc; name: FUN_026207fc
 */


undefined4 FUN_026207fc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_28 = param_2;
  local_20 = param_1;
  uVar2 = FUN_02622854();
  FUN_00d7d9e4(auStack_30,uVar2,local_20);
  uVar3 = FUN_0262287c(auStack_30);
  bVar1 = (uVar3 & 1) == 0;
  if (!bVar1) {
    uVar2 = FUN_026228a8(auStack_30);
    local_14 = FUN_00d7905c(uVar2,local_28);
  }
  FUN_026228c0(auStack_30);
  if (bVar1) {
    local_14 = 0;
  }
  return local_14;
}


