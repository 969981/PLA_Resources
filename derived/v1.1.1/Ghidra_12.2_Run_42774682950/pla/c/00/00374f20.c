/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00374f20; name: FUN_00374f20
 */


void FUN_00374f20(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar5;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined **local_88;
  long *plStack_80;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_50 = PTR_LAB_04373a98, local_58 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_88 = &puStack_50;
    plStack_80 = &local_58;
    local_48 = &local_88;
    std::__call_once(puVar3,&local_48,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  switch(*(undefined4 *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4)) {
  case 1:
    uVar1 = FUN_0031bff4(param_1);
    FUN_003878f4(extraout_x1,param_2,param_3,uVar1);
    break;
  case 2:
    uVar4 = FUN_0031bf0c(param_1);
    FUN_0038808c(extraout_x1,param_2,param_3,uVar4);
    break;
  case 3:
    uVar1 = FUN_0031c1c4(param_1);
    FUN_00388824(extraout_x1,param_2,param_3,uVar1);
    break;
  case 4:
    uVar4 = FUN_0031c0dc(param_1);
    FUN_00388fbc(extraout_x1,param_2,param_3,uVar4);
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    FUN_0030f640(&local_88,2,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                 ,0x860);
                    /* try { // try from 00374fe4 to 00374ff7 has its CatchHandler @ 003751b8 */
    uVar4 = FUN_0030f3ac(&local_88,"Not supported.");
                    /* try { // try from 00374ff8 to 00374fff has its CatchHandler @ 003751b4 */
    FUN_0030f41c(&local_48,uVar4);
    FUN_0030f658(&local_88);
    break;
  case 7:
    uVar2 = FUN_0031c2ac(param_1);
    FUN_0038a684(extraout_x1,param_2,param_3,uVar2 & 1);
    break;
  case 9:
    puVar3 = (ulong *)FUN_0031be24(param_1);
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    if ((*puVar3 & 1) == 0) {
      uStack_98 = puVar3[1];
      local_a0 = *puVar3;
      local_90 = (void *)puVar3[2];
    }
    else {
      __n = puVar3[1];
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = (void *)puVar3[2];
      if (__n < 0x17) {
        local_a0 = (ulong)(byte)((int)__n << 1);
        __dest = (void *)((ulong)&local_a0 | 1);
        if (__n != 0) goto LAB_00375130;
      }
      else {
        uVar5 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
        local_a0 = uVar5 | 1;
        uStack_98 = __n;
        local_90 = __dest;
LAB_00375130:
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
    }
                    /* try { // try from 00375144 to 00375157 has its CatchHandler @ 00375190 */
    FUN_00385d54(extraout_x1,param_2,param_3,&local_a0);
    if ((local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
  }
  return;
}


