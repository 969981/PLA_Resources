/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a2b60; name: FUN_005a2b60
 */


undefined8 FUN_005a2b60(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 - 2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x005a2ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_04374f50 + 0x10))(param_1);
    return uVar1;
  }
  if (param_1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x005a2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_04374f48 + 0x10))(param_1);
    return uVar1;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/stream_compression.cc",0x38,2
               ,"Unknown stream compression method: %d");
  return 0;
}


