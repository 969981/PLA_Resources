/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592650; name: FUN_00592650
 */


undefined8
FUN_00592650(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            ulong *param_7,undefined8 *param_8)

{
  int iVar1;
  undefined8 *__ptr;
  long lVar2;
  ulong uVar3;
  
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  if (((param_8 == (undefined8 *)0x0) || (param_1 == 0)) ||
     (lVar2 = tpidr_el0, *(long *)(lVar2 + 0x30) == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_zero_copy_grpc_protector.cc"
                 ,0x108,2,"Invalid nullptr arguments to alts_zero_copy_grpc_protector create.");
    return 2;
  }
  __ptr = (undefined8 *)FUN_002ebd80(0x3a8);
  iVar1 = FUN_00592820(param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1,1,param_6 & 1,__ptr + 1);
  if ((iVar1 != 0) ||
     (iVar1 = FUN_00592820(param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1,0,param_6 & 1,
                           __ptr + 2), iVar1 != 0)) {
    FUN_00593150(__ptr[1]);
    FUN_00593150(__ptr[2]);
    free(__ptr);
    return 7;
  }
  if (param_7 == (ulong *)0x0) {
    uVar3 = 0x4000;
  }
  else {
    uVar3 = *param_7;
    if (uVar3 >> 0x18 != 0) {
      uVar3 = 0x1000000;
    }
    if (uVar3 < 0x401) {
      uVar3 = 0x400;
    }
    *param_7 = uVar3;
  }
  __ptr[3] = uVar3;
  lVar2 = FUN_005931a0(__ptr[1]);
  __ptr[4] = lVar2;
  if (lVar2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_zero_copy_grpc_protector.cc"
                 ,0x126,2,"assertion failed: %s","impl->max_unprotected_data_size > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00305000(__ptr + 5);
  FUN_00305000(__ptr + 0x2a);
  FUN_00305000(__ptr + 0x4f);
  *(undefined4 *)(__ptr + 0x74) = 0;
  *__ptr = &PTR_LAB_0418a338;
  *param_8 = __ptr;
  return 0;
}


