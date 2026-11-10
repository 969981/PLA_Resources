/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00605310; name: FUN_00605310
 */


void FUN_00605310(undefined8 param_1,long param_2)

{
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/census/grpc_context.cc",0x1c,1,
                 "grpc_census_call_set_context(call=%p, census_context=%p)",param_1,param_2);
  }
  if (param_2 == 0) {
    return;
  }
  FUN_003c9820(param_1,1,param_2,0);
  return;
}


