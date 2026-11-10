/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f1e00; name: FUN_002f1e00
 */


undefined8 FUN_002f1e00(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x327,2,
                 "assertion failed: %s","error != ((grpc_error*)0L)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = FUN_002f1480(param_2);
  FUN_002ebea0(param_3,param_4,2,"%s: %s",param_1,uVar1);
  if (4 < param_2) {
    FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x32a);
  }
  return 0;
}


