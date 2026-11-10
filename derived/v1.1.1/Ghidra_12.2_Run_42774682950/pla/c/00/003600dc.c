/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003600dc; name: FUN_003600dc
 */


void FUN_003600dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_58;
  long *plStack_50;
  undefined8 local_48;
  long local_40;
  undefined *puStack_38;
  undefined ***local_28;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x78) + 0x50);
  if (iVar1 != 0) {
    puVar2 = *(ulong **)(param_2 + 0x30);
    if (puVar2 != (ulong *)0x0) {
      puStack_38 = PTR_LAB_04373a98;
      local_40 = param_2;
      if (*puVar2 != 0xffffffffffffffff) {
        local_58 = &puStack_38;
        plStack_50 = &local_40;
        local_28 = &local_58;
        std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    if ((*(uint *)(param_2 + 0x38) < 0x13) &&
       ((1 << (ulong)(*(uint *)(param_2 + 0x38) & 0x1f) & 0x50058U) != 0)) {
      if (1 < iVar1 - 1U) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        lVar3 = FUN_003a2d20();
        FUN_0034b2f0(&local_58,
                     "Illegal jstype for int64, uint64, sint64, fixed64 or sfixed64 field: ",
                     *(undefined8 *)(*(long *)(lVar3 + 0x30) + (long)iVar1 * 0x28));
                    /* try { // try from 003601a0 to 003601b7 has its CatchHandler @ 00360204 */
        FUN_0034db00(param_1,uVar4,param_3,2,&local_58);
        if (((ulong)local_58 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_48);
        }
      }
    }
    else {
      FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                   "jstype is only allowed on int64, uint64, sint64, fixed64 or sfixed64 fields.");
    }
  }
  return;
}


