/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038e180; name: FUN_0038e180
 */


void FUN_0038e180(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar1 = *(ulong **)(param_4 + 0x30);
  if (puVar1 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_04373a98;
    local_50 = param_4;
    if (*puVar1 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar1,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_4 + 0x38) != 0xb) || (uVar2 = FUN_00344344(param_4), (uVar2 & 1) == 0)) {
    FUN_00386850(*param_2,param_4,"\"MapBegin\"","Field is not a map field.");
  }
  FUN_00319b40(param_1,param_3,param_4);
                    /* try { // try from 0038e228 to 0038e247 has its CatchHandler @ 0038e25c */
  plVar3 = (long *)FUN_00382104(param_2,param_3,param_4);
  (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
  return;
}


