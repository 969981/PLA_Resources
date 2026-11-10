/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00300174; name: FUN_00300174
 */


void FUN_00300174(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_043739a8;
  if (PTR_DAT_043739a8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x1a5,1,
                 "EXECUTOR Executor::ShutdownAll() enter");
  }
  if (DAT_043998c8 == 0) {
    if (DAT_043998d0 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x1aa,2,
                   "assertion failed: %s",
                   "executors[static_cast<size_t>(ExecutorType::RESOLVER)] == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    FUN_002fef40(DAT_043998c8,0);
    FUN_002fef40(DAT_043998d0,0);
    if (DAT_043998c8 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    if (DAT_043998d0 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    DAT_043998c8 = 0;
    DAT_043998d0 = 0;
    if (puVar1[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x1c2,1,
                   "EXECUTOR Executor::ShutdownAll() done");
      return;
    }
  }
  DAT_043998c8 = 0;
  return;
}


