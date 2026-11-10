/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02626218; name: FUN_02626218
 */


void FUN_02626218(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  local_28 = param_2;
  local_30 = FUN_02622d84(param_2 + 8);
  uVar1 = FUN_02622d98();
  FUN_02a44e0c(auStack_38,uVar1,local_30);
  FUN_02622dc0(local_28);
  uVar2 = FUN_0262241c(auStack_38);
  if ((uVar2 & 1) == 0) {
    FUN_02625f7c(param_1);
  }
  else {
    FUN_02622df0(auStack_38);
    FUN_02622df4(param_1,auStack_38);
    FUN_02622e34(param_1 + 8,local_30);
  }
  FUN_02622380(auStack_38);
  return;
}


