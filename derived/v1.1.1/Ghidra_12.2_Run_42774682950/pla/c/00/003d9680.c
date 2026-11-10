/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d9680; name: FUN_003d9680
 */


void FUN_003d9680(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x18a,2,
                 "assertion failed: %s",
                 "!key_definitely_static || ((key).refcount != 0L && (key).refcount->GetType() == grpc_slice_refcount::Type::STATIC)"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *param_2;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 8) != 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x18c,2,
                 "assertion failed: %s",
                 "!value_definitely_static || ((value).refcount != 0L && (value).refcount->GetType() == grpc_slice_refcount::Type::STATIC)"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *(uint *)(lVar4 + 0x28);
  uVar3 = FUN_003db8f0((ulong)uVar1,*(undefined4 *)(lVar5 + 0x28));
  if (3 < uVar3) {
    return;
  }
  lVar4 = *param_2;
  if (lVar4 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0x144,2,
                 "assertion failed: %s","s.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *(uint *)(PTR_DAT_043740a0 + (ulong)uVar1 * 4);
  if (*(int *)(lVar4 + 8) == 1) {
    uVar2 = *(uint *)(lVar4 + 0x68);
  }
  else if (*(int *)(lVar4 + 8) == 0) {
    uVar2 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
  }
  else {
    uVar2 = FUN_003da780(param_2[2],param_2[1],*(undefined4 *)PTR_DAT_043740a8);
  }
  FUN_003da390(param_1,param_2,uVar2 ^ (uVar1 >> 0x1e | uVar1 << 2));
  return;
}


