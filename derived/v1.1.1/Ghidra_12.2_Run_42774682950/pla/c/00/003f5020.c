/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f5020; name: FUN_003f5020
 */


void FUN_003f5020(long param_1)

{
  long lVar1;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "external/com_google_grpc_base/src/core/lib/security/context/security_context.cc";
  local_28 = 0x62;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* try { // try from 003f5050 to 003f505f has its CatchHandler @ 003f509c */
    FUN_003f3870(lVar1,&local_30,"client_security_context");
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* try { // try from 003f5074 to 003f5077 has its CatchHandler @ 003f5098 */
    (**(code **)(param_1 + 0x18))();
  }
  FUN_003f2f48((long *)(param_1 + 8));
  FUN_003f4f54(param_1);
  return;
}


