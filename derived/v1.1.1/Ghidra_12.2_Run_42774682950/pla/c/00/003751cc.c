/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003751cc; name: FUN_003751cc
 */


void FUN_003751cc(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar6;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  undefined *puStack_60;
  undefined ***local_58;
  undefined **local_50;
  long *plStack_48;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_60 = PTR_LAB_04373a98, local_68 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_50 = &puStack_60;
    plStack_48 = &local_68;
    local_58 = &local_50;
    std::__call_once(puVar3,&local_58,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4)) {
  case 1:
    uVar1 = FUN_0031c56c(param_1);
    FUN_003878f4(extraout_x1,param_2,param_3,uVar1);
    break;
  case 2:
    uVar5 = FUN_0031c394(param_1);
    FUN_0038808c(extraout_x1,param_2,param_3,uVar5);
    break;
  case 3:
    uVar1 = FUN_0031c658(param_1);
    FUN_00388824(extraout_x1,param_2,param_3,uVar1);
    break;
  case 4:
    uVar5 = FUN_0031c480(param_1);
    FUN_00388fbc(extraout_x1,param_2,param_3,uVar5);
    break;
  case 5:
    FUN_0031c91c(param_1);
    FUN_00389eec(extraout_x1,param_2,param_3);
    break;
  case 6:
    FUN_0031ca08(param_1);
    FUN_00389754(extraout_x1,param_2,param_3);
    break;
  case 7:
    uVar2 = FUN_0031c744(param_1);
    FUN_0038a684(extraout_x1,param_2,param_3,uVar2 & 1);
    break;
  case 8:
    uVar1 = FUN_0031c830(param_1);
    FUN_0038bb40(extraout_x1,param_2,param_3,uVar1);
    break;
  case 9:
    puVar3 = (ulong *)FUN_0031caf4(param_1);
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    if ((*puVar3 & 1) == 0) {
      uStack_78 = puVar3[1];
      local_80 = *puVar3;
      local_70 = (void *)puVar3[2];
    }
    else {
      __n = puVar3[1];
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = (void *)puVar3[2];
      if (__n < 0x17) {
        local_80 = (ulong)(byte)((int)__n << 1);
        __dest = (void *)((ulong)&local_80 | 1);
        if (__n != 0) goto LAB_00375440;
      }
      else {
        uVar6 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
        local_80 = uVar6 | 1;
        uStack_78 = __n;
        local_70 = __dest;
LAB_00375440:
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
    }
                    /* try { // try from 00375454 to 00375467 has its CatchHandler @ 003754a0 */
    FUN_00385d54(extraout_x1,param_2,param_3,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    break;
  case 10:
    plVar4 = (long *)FUN_0031cbdc(param_1);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))();
    uVar5 = FUN_0031cbdc(param_1);
    (**(code **)(*plVar4 + 0x70))(plVar4,uVar5);
    FUN_00385c54(extraout_x1,param_2,plVar4,param_3);
  }
  return;
}


