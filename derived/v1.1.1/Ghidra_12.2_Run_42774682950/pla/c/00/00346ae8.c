/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00346ae8; name: FUN_00346ae8
 */


undefined8 FUN_00346ae8(long param_1)

{
  ulong *puVar1;
  long local_30;
  undefined **local_28;
  undefined *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  puVar1 = *(ulong **)(param_1 + 0x30);
  if ((puVar1 != (ulong *)0x0) && (*puVar1 != 0xffffffffffffffff)) {
    local_20 = PTR_LAB_04373a98;
    local_28 = &local_20;
    local_30 = param_1;
    std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)PTR_LAB_04373b88);
  }
  return *(undefined8 *)(param_1 + 0x70);
}


