/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f9740; name: FUN_002f9740
 */


void FUN_002f9740(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (PTR_DAT_04373928[0x10] != '\0') {
    uVar1 = (**(code **)(DAT_043997f8 + 0x18))(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x15a,1,
                 "(polling-api) pollset_add_fd(%p, %d)",param_1,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x002f977c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_043997f8 + 0x90))(param_1,param_2);
  return;
}


