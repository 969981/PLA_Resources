/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038f080; name: FUN_0038f080
 */


void FUN_0038f080(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined1 local_44 [4];
  long local_40;
  undefined1 *local_38;
  long *local_30;
  undefined1 *puStack_28;
  undefined1 **local_18;
  
  local_44[0] = *(undefined1 *)(param_1 + 1);
  local_40 = param_1;
  if (**(ulong **)(param_1 + 0x20) != 0xffffffffffffffff) {
    local_38 = &LAB_0038ea40;
    local_30 = &local_40;
    puStack_28 = local_44;
    local_18 = &local_38;
    std::__call_once(*(ulong **)(param_1 + 0x20),&local_18,(_func_void_void_ptr *)PTR_LAB_04373c90);
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x60);
  if (0 < (int)*(uint *)(param_1 + 0x60)) {
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      FUN_00391d10(plVar1[-1],*(undefined8 *)(*plVar1 + 8));
      uVar2 = uVar2 - 1;
      plVar1 = plVar1 + 2;
    } while (uVar2 != 0);
  }
  return;
}


