/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d92a0; name: FUN_003d92a0
 */


ulong FUN_003d92a0(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((*param_1 == 0) || (*(int *)(*param_1 + 8) != 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x166,2,
                 "assertion failed: %s",
                 "!key_definitely_static || ((key).refcount != 0L && (key).refcount->GetType() == grpc_slice_refcount::Type::STATIC)"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*param_2 != 0) && (*(uint *)(*param_2 + 8) < 2)) {
    uVar1 = FUN_003d9880(param_1,param_2);
    return uVar1;
  }
  if (param_3 != 0) {
    return param_3;
  }
  uVar1 = FUN_002e2e80(PTR_FUN_04373078,0x80);
  if (uVar1 != 0) {
    FUN_003d852c(uVar1,param_1,param_2);
  }
  return uVar1 | 2;
}


