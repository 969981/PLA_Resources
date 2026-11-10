/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d6c40; name: FUN_003d6c40
 */


void FUN_003d6c40(long *param_1,undefined8 param_2)

{
  if ((int)param_1[1] == 2) {
    if (*param_1 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/polling_entity.cc",0x5a,2,
                   "assertion failed: %s","pollent->pollent.pollset_set != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002fe0e0(param_2);
    return;
  }
  if ((int)param_1[1] != 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/polling_entity.cc",0x5d,2,
                 "Invalid grpc_polling_entity tag \'%d\'");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/polling_entity.cc",0x56,2,
                 "assertion failed: %s","pollent->pollent.pollset != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002fe0a0(param_2);
  return;
}


