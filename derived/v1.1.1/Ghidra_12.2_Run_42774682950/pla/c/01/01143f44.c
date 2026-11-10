/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01143f44; name: FUN_01143f44
 */


undefined8 FUN_01143f44(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = PTR_DAT_0437a508 + 0x10;
  local_48 = 0;
  uVar1 = FUN_00938764(&local_50,0,param_1 + 0x410,0,*(undefined8 *)(param_1 + 8),0);
  if ((((uVar1 & 1) == 0) || (local_48 == 0)) || (*(long *)(local_48 + 0x240) != 8)) {
    uVar2 = 5;
  }
  else {
    uVar2 = 2;
    *(undefined8 *)(param_1 + 0x444) = **(undefined8 **)(local_48 + 0x250);
  }
  FUN_00936104(&local_50);
  return uVar2;
}


