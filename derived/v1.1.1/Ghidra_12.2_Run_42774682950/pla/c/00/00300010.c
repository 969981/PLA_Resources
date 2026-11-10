/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00300010; name: FUN_00300010
 */


void FUN_00300010(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_043739a8;
  if (PTR_DAT_043739a8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x18a,1,
                 "EXECUTOR Executor::InitAll() enter");
  }
  if (DAT_043998c8 == (undefined8 *)0x0) {
    DAT_043998c8 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    puVar2 = PTR_DAT_043739b8;
    if (DAT_043998c8 != (undefined8 *)0x0) {
      *DAT_043998c8 = "default-executor";
      DAT_043998c8[4] = 0;
      DAT_043998c8[3] = 0;
      DAT_043998c8[2] = (long)*(int *)puVar2;
    }
    DAT_043998d0 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (DAT_043998d0 != (undefined8 *)0x0) {
      *DAT_043998d0 = "resolver-executor";
      DAT_043998d0[4] = 0;
      DAT_043998d0[3] = 0;
      DAT_043998d0[2] = (long)*(int *)puVar2;
    }
    FUN_002fef40(DAT_043998c8,1);
    FUN_002fef40(DAT_043998d0,1);
    if (puVar1[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x19b,1,
                   "EXECUTOR Executor::InitAll() done");
      return;
    }
  }
  else if (DAT_043998d0 == (undefined8 *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",399,2,
                 "assertion failed: %s",
                 "executors[static_cast<size_t>(ExecutorType::RESOLVER)] != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


