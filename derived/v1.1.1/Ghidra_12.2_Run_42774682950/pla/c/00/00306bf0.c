/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00306bf0; name: FUN_00306bf0
 */


void FUN_00306bf0(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_002ef660();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x2a6,2,
                 "assertion failed: %s","resource_quota->num_threads_allocated == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002f4760(*(undefined8 *)(param_1 + 0x10),
               "external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x2a7,
               "resource_quota");
  FUN_002ef710(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x128) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x138));
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1);
  return;
}


