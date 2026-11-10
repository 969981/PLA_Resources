/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038e9d0; name: FUN_0038e9d0
 */


void FUN_0038e9d0(long param_1,byte param_2)

{
  byte local_34 [4];
  long local_30;
  undefined1 *local_28;
  long *local_20;
  byte *pbStack_18;
  undefined1 **local_8;
  
  local_34[0] = param_2 & 1;
  if ((param_2 & 1) == 0) {
    local_34[0] = *(byte *)(param_1 + 1);
  }
  if (**(ulong **)(param_1 + 0x20) != 0xffffffffffffffff) {
    local_28 = &LAB_0038ea40;
    local_20 = &local_30;
    pbStack_18 = local_34;
    local_8 = &local_28;
    local_30 = param_1;
    std::__call_once(*(ulong **)(param_1 + 0x20),&local_8,(_func_void_void_ptr *)PTR_LAB_04373c90);
  }
  return;
}


