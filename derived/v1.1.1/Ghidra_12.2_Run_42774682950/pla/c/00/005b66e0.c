/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b66e0; name: FUN_005b66e0
 */


undefined8 FUN_005b66e0(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002e4780(param_1,"grpc.target_authority_table");
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 2) {
      return *(undefined8 *)(piVar1 + 4);
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/target_authority_table.cc"
                 ,0x44,2,
                 "value of grpc.target_authority_table channel arg was not pointer type; ignoring");
  }
  return 0;
}


