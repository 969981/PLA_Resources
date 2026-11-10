/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4c08c; name: FUN_02f4c08c
 */


undefined8 FUN_02f4c08c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_34 [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  local_34[0] = 0;
  uVar2 = 2;
  uVar1 = (**(code **)*param_2)(param_2,param_1,2,auStack_28);
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)*param_2)(param_2,local_34,1,auStack_24);
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc | local_34[0] & 3;
    }
  }
  return uVar2;
}


