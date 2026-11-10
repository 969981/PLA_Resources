/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eef2a0; name: FUN_02eef2a0
 */


undefined4 FUN_02eef2a0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar1 = (**(code **)*param_2)(param_2,param_1 + 8,1,auStack_28);
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = (**(code **)*param_2)(param_2,param_1 + 10,2,auStack_24);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}


