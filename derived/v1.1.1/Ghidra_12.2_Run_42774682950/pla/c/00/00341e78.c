/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00341e78; name: FUN_00341e78
 */


undefined8 FUN_00341e78(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long **local_68;
  undefined auStack_60 [32];
  long *plStack_38;
  
  plStack_38 = &local_80;
  local_80 = param_1;
  uStack_78 = param_3;
  if (*(ulong *)(param_1 + 0x110) != 0xffffffffffffffff) {
    local_68 = &plStack_38;
    local_70 = PTR_LAB_04373b60;
    local_98 = &local_70;
    std::__call_once((ulong *)(param_1 + 0x110),&local_98,(_func_void_void_ptr *)PTR_LAB_04373b68);
  }
  local_90 = 0;
  local_88 = 0;
  local_98 = (undefined **)0x0;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  if (lVar3 != lVar1) {
    lVar5 = 0;
    do {
      if (lVar5 != 0) {
                    /* try { // try from 00341f04 to 00341f37 has its CatchHandler @ 00341f9c */
        FUN_002e4094(&local_98,&DAT_038ee629,1);
      }
      local_70 = auStack_60;
      lVar2 = FUN_00320570(*(undefined4 *)(lVar3 + lVar5),auStack_60);
      local_68 = (long **)(lVar2 - (long)auStack_60);
      FUN_003218f0(&local_98,&local_70);
      lVar5 = lVar5 + 4;
    } while (lVar1 - lVar3 != lVar5);
  }
  lVar3 = FUN_0036ab50(param_1 + 0x118,&local_98);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
  }
  if (((ulong)local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  return uVar4;
}


