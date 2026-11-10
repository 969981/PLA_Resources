/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4710; name: FUN_003e4710
 */


void FUN_003e4710(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_stack_builder.cc",0xa8,
                 2,"assertion failed: %s","builder->transport == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}


