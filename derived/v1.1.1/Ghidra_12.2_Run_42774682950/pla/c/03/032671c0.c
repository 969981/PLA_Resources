/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032671c0; name: FUN_032671c0
 */


undefined8 FUN_032671c0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char local_40 [4];
  char local_3c [4];
  undefined2 local_38 [2];
  undefined2 local_34 [2];
  undefined2 local_28 [2];
  ushort local_24 [2];
  
  FUN_03265740();
  if (*(int *)(param_1 + 0x98) != 1) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x90) + 0x10) >> 2;
    FUN_03260bc0(param_1,uVar1);
    FUN_032657a0(param_1,uVar1,local_24,local_28);
    uVar2 = (ulong)local_24[0];
    local_34[0] = 0xffff;
    if (uVar2 != 0xffff) {
      local_34[0] = *(undefined2 *)(*(long *)(param_1 + 0x100) + uVar2 * 0x20 + 0x12);
    }
    local_38[0] = local_34[0];
    if (*(int *)(param_1 + 0xb0) != 0) {
      local_38[0] = *(undefined2 *)
                     (*(long *)(param_1 + 0x100) +
                      (ulong)*(ushort *)
                              (*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb0) + -1) * 2
                              ) * 0x20 + 0x12);
    }
    FUN_03265d20(param_1,local_34[0],uVar1);
    local_3c[0] = '\0';
    local_40[0] = '\0';
    FUN_03266380(param_1,local_34,local_38,uVar1,local_3c,local_40);
    if (local_3c[0] == '\0') {
      FUN_03266560(param_1,uVar1);
      FUN_03265f00(param_1,local_40);
    }
    if (local_40[0] != '\0') {
      FUN_03266aa0(param_1);
    }
    FUN_03266600(param_1,local_38,local_34,uVar1);
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined2 *)
       (*(long *)(param_1 + 0x100) +
        (ulong)*(ushort *)(*(long *)(param_1 + 0xb8) + (long)(*(int *)(param_1 + 0xc0) + -1) * 2) *
        0x20 + 0x12) = local_38[0];
    }
    if (local_24[0] != 0xffff) {
      *(undefined2 *)(*(long *)(param_1 + 0x100) + uVar2 * 0x20 + 0x12) = local_34[0];
    }
    FUN_03266cd0(param_1,local_24[0],local_28[0]);
    FUN_032670d0(param_1,uVar2,local_28[0]);
  }
  return 1;
}


