/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00307d00; name: FUN_00307d00
 */


void FUN_00307d00(long *param_1,ulong param_2,long param_3)

{
  param_2 = param_2 & 1;
  if (param_1[param_2 + 0x22] != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x3cb,2,
                 "assertion failed: %s","resource_user->new_reclaimers[destructive] == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[param_2 + 0x22] = param_3;
  FUN_002f4f9c(*(undefined8 *)(*param_1 + 0x10),param_1 + param_2 * 9 + 0x24,0);
  return;
}


