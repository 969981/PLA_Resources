/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038e920; name: FUN_0038e920
 */


void FUN_0038e920(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  long *plStack_28;
  
  puVar1 = *(ulong **)(param_3 + 0x30);
  if (puVar1 != (ulong *)0x0) {
    puStack_40 = PTR_LAB_04373a98;
    local_48 = param_3;
    if (*puVar1 != 0xffffffffffffffff) {
      local_30 = &puStack_40;
      plStack_28 = &local_48;
      local_38 = &local_30;
      std::__call_once(puVar1,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_3 + 0x38) != 0xb) || (uVar2 = FUN_00344344(param_3), (uVar2 & 1) == 0)) {
    FUN_00386850(*param_1,param_3,"\"GetMapData\"","Field is not a map field.");
  }
  FUN_00382104(param_1,param_2,param_3);
  return;
}


