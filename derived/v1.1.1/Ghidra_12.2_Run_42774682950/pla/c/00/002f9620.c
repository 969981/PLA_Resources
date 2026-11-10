/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f9620; name: FUN_002f9620
 */


void FUN_002f9620(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (PTR_DAT_04373928[0x10] == '\0') {
    cVar1 = PTR_DAT_04373930[0x10];
  }
  else {
    uVar2 = (**(code **)(DAT_043997f8 + 0x18))(param_1);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x11b,1,
                 "(polling-api) fd_shutdown(%d)",uVar2);
    cVar1 = PTR_DAT_04373930[0x10];
  }
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(DAT_043997f8 + 0x18))(param_1);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_posix.cc",0x11c,1,
                 "(fd-trace) fd_shutdown(%d)",uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x002f966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_043997f8 + 0x28))(param_1,param_2);
  return;
}


