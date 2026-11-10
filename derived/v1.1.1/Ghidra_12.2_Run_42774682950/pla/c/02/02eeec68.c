/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeec68; name: FUN_02eeec68
 */


undefined8 FUN_02eeec68(long param_1,undefined8 *param_2,ushort param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined2 local_38 [2];
  undefined4 local_34;
  ushort local_28 [2];
  undefined1 auStack_24 [4];
  
  local_34 = 0;
  local_28[0] = param_3;
  uVar2 = (**(code **)*param_2)(param_2,local_28,2,auStack_24);
  if (((((uVar2 & 1) != 0) &&
       (uVar2 = (**(code **)*param_2)(param_2,param_1 + 8,4,auStack_24), (uVar2 & 1) != 0)) &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0xc,4,auStack_24), (uVar2 & 1) != 0)) &&
     ((uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x10,2,auStack_24), (uVar2 & 1) != 0 &&
      (uVar2 = (**(code **)*param_2)(param_2,param_1 + 0x12,2,auStack_24), (uVar2 & 1) != 0)))) {
    local_38[0] = (undefined2)*(undefined4 *)(param_1 + 0x20);
    uVar2 = (**(code **)*param_2)(param_2,local_38,2,auStack_24);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_3 + 7 >> 3;
      uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar1,&local_34);
      if ((((uVar2 & 1) != 0) &&
          (uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar1,&local_34),
          (uVar2 & 1) != 0)) &&
         ((*(int *)(param_1 + 0x20) == 0 ||
          (uVar2 = (**(code **)*param_2)
                             (param_2,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x20) << 1,
                              &local_34), (uVar2 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 2;
}


