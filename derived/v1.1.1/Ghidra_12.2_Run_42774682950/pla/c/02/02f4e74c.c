/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4e74c; name: FUN_02f4e74c
 */


undefined4 FUN_02f4e74c(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  char local_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar2 = (**(code **)*param_2)(param_2,auStack_28,4,auStack_24);
  if (((((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x20,4,auStack_24), (uVar2 & 1) != 0)) &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x24,4,auStack_24), (uVar2 & 1) != 0)) &&
     ((uVar2 = (**(code **)*param_2)(param_2,local_2c,1,auStack_24), (uVar2 & 1) != 0 &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x2a,2,auStack_24), (uVar2 & 1) != 0)))) {
    *(bool *)(param_1 + 0x28) = local_2c[0] != '\0';
    iVar1 = FUN_02f4e858(param_1,param_2);
    if (iVar1 == 1) {
      iVar1 = FUN_02f4eb6c(param_1,param_2);
      uVar3 = 1;
      if (iVar1 != 1) {
        uVar3 = 2;
      }
      return uVar3;
    }
  }
  return 2;
}


