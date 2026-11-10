/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00364764; name: FUN_00364764
 */


undefined8 FUN_00364764(undefined *param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined **local_30;
  undefined **ppuStack_28;
  undefined ***local_18;
  
  ppuStack_28 = &local_40;
  puVar1 = param_1;
  if ((param_1[0x43] != '\0') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x48) != '\0')) {
    puVar2 = *(ulong **)(param_1 + 0x30);
    if ((puVar2 != (ulong *)0x0) &&
       (local_38 = PTR_LAB_04373a98, local_40 = param_1, *puVar2 != 0xffffffffffffffff)) {
      local_30 = &local_38;
      local_18 = &local_30;
      std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    if ((*(int *)(param_1 + 0x38) == 0xb) && (*(int *)(param_1 + 0x3c) == 1)) {
      puVar3 = *(undefined **)(param_1 + 0x60);
      puVar2 = *(ulong **)(param_1 + 0x30);
      if ((puVar2 != (ulong *)0x0) && (*puVar2 != 0xffffffffffffffff)) {
        ppuStack_28 = &local_38;
        local_30 = (undefined **)PTR_LAB_04373a98;
        local_18 = &local_30;
        local_38 = param_1;
        std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      if ((puVar3 == *(undefined **)(param_1 + 0x68)) &&
         (puVar2 = *(ulong **)(param_1 + 0x30), puVar1 = puVar3, puVar2 != (ulong *)0x0)) {
        if (*puVar2 != 0xffffffffffffffff) {
          ppuStack_28 = &local_38;
          local_30 = (undefined **)PTR_LAB_04373a98;
          local_18 = &local_30;
          local_38 = param_1;
          std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        puVar1 = *(undefined **)(param_1 + 0x68);
      }
    }
  }
  return *(undefined8 *)(puVar1 + 8);
}


