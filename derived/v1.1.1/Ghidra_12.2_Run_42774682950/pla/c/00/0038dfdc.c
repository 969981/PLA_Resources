/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038dfdc; name: FUN_0038dfdc
 */


uint FUN_0038dfdc(undefined8 *param_1,long param_2,undefined *param_3,undefined8 param_4,
                 long param_5)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 ***local_80;
  undefined **ppuStack_78;
  undefined8 local_70;
  long local_68;
  undefined *local_60;
  undefined ***local_58;
  undefined **local_50;
  long *plStack_48;
  
  puVar2 = PTR_LAB_04373a98;
  puVar4 = *(ulong **)(param_3 + 0x30);
  if (puVar4 != (ulong *)0x0) {
    local_58 = (undefined ***)PTR_LAB_04373a98;
    local_60 = param_3;
    if (*puVar4 != 0xffffffffffffffff) {
      local_80 = &local_58;
      ppuStack_78 = &local_60;
      local_50 = (undefined **)&local_80;
      std::__call_once(puVar4,&local_50,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_3 + 0x38) != 0xb) || (uVar5 = FUN_00344344(param_3), (uVar5 & 1) == 0)) {
    FUN_00386850(*param_1,param_3,"\"InsertOrLookupMapValue\"","Field is not a map field.");
  }
  uVar6 = FUN_00342dac(param_3);
  ppuStack_78 = (undefined **)0x0;
  local_70 = 0;
  local_80 = (undefined8 ***)0x65756c61760a;
                    /* try { // try from 0038e0a8 to 0038e0ef has its CatchHandler @ 0038e15c */
  lVar7 = FUN_00342fe4(uVar6,&local_80);
  puVar4 = *(ulong **)(lVar7 + 0x30);
  if (puVar4 != (ulong *)0x0) {
    local_60 = puVar2;
    local_68 = lVar7;
    if (*puVar4 != 0xffffffffffffffff) {
      local_50 = &local_60;
      plStack_48 = &local_68;
      local_58 = &local_50;
      std::__call_once(puVar4,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  *(undefined4 *)(param_5 + 8) =
       *(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(lVar7 + 0x38) * 4);
  if (((ulong)local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  uVar5 = FUN_0038fe58(param_1 + 1,param_3);
  plVar1 = (long *)(param_2 + (uVar5 & 0xffffffff));
  uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_4,param_5);
  return uVar3 & 1;
}


