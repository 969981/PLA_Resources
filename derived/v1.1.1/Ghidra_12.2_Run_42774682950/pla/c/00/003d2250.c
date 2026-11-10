/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d2250; name: FUN_003d2250
 */


void FUN_003d2250(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue_factory.cc",
                 0x56,2,"assertion failed: %s","!reserved");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x003d2264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
  return;
}


