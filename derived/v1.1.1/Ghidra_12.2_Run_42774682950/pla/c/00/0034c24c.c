/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034c24c; name: FUN_0034c24c
 */


bool FUN_0034c24c(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long local_38;
  undefined *puStack_30;
  undefined ***local_28;
  undefined **local_20;
  long *plStack_18;
  
  if (*(int *)(param_1 + 0x3c) == 3) {
    puVar1 = *(ulong **)(param_1 + 0x30);
    if ((puVar1 != (ulong *)0x0) && (puStack_30 = PTR_LAB_04373a98, *puVar1 != 0xffffffffffffffff))
    {
      local_20 = &puStack_30;
      plStack_18 = &local_38;
      local_28 = &local_20;
      local_38 = param_1;
      std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    if (3 < *(int *)(param_1 + 0x38) - 9U) {
      lVar2 = *(long *)(param_1 + 0x78);
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x3c) == 2) {
        if (lVar2 == 0) {
          return false;
        }
      }
      else if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x28) >> 1 & 1) == 0)) {
        return true;
      }
      return *(char *)(lVar2 + 0x4c) != '\0';
    }
  }
  return false;
}


