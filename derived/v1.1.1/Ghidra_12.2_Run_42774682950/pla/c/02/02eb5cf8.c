/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5cf8; name: FUN_02eb5cf8
 */


undefined8 FUN_02eb5cf8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar3 = (uint)*(ulong *)(param_1 + 0x28);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    local_40 = 0x3f80000000000000;
    local_38 = 0x3a;
    uVar1 = FUN_02ec5b74(DAT_0440a180,param_1,0,param_3,param_4,&local_40);
    if (((uVar1 & 1) != 0) &&
       (puVar2 = (undefined8 *)FUN_02eb7888(param_2), puVar2 != (undefined8 *)0x0)) {
      *(undefined4 *)(puVar2 + 1) = local_38;
      *puVar2 = local_40;
    }
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x28);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    local_40 = 0x3f80000000000000;
    local_38 = 0x3a;
    uVar1 = FUN_02ec5b74(DAT_0440a180,param_1,7,param_3,param_4,&local_40);
    if (((uVar1 & 1) != 0) &&
       (puVar2 = (undefined8 *)FUN_02eb7888(param_2), puVar2 != (undefined8 *)0x0)) {
      *(undefined4 *)(puVar2 + 1) = local_38;
      *puVar2 = local_40;
    }
  }
  return 1;
}


