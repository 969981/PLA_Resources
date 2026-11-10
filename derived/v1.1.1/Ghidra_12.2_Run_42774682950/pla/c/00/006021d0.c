/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006021d0; name: FUN_006021d0
 */


void FUN_006021d0(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/workarounds/workaround_utils.cc"
                 ,0x33,2,"assertion failed: %s","id < GRPC_MAX_WORKAROUND_ID");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)PTR_DAT_04375190 = param_2;
  return;
}


