/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026241ac; name: FUN_026241ac
 */


undefined4 FUN_026241ac(long param_1,undefined4 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  uint local_34;
  undefined1 auStack_30 [8];
  long local_28;
  undefined4 local_14;
  
  local_28 = param_1;
  uVar2 = FUN_02624318(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    local_14 = 0;
  }
  else {
    uVar3 = FUN_02624358(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
    FUN_02624164(auStack_30,uVar3);
    plVar4 = (long *)FUN_026240f4(auStack_30);
    uVar2 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_026240f4(auStack_30);
      FUN_0262410c(uVar3,param_2);
      local_38 = FUN_02624090();
      uVar3 = FUN_02624358(param_1 + 0x68,local_38);
      FUN_02624164(auStack_40,uVar3);
      plVar4 = (long *)FUN_026240f4(auStack_40);
      uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        local_14 = 2;
      }
      local_34 = (uint)bVar1;
      FUN_026242e0(auStack_40);
      if (local_34 == 0) {
        local_14 = 3;
        local_34 = 1;
      }
    }
    else {
      local_14 = 1;
      local_34 = 1;
    }
    FUN_026242e0(auStack_30);
  }
  return local_14;
}


