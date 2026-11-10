/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f5110; name: FUN_003f5110
 */


void FUN_003f5110(long *param_1)

{
  char *local_30;
  undefined4 local_28;
  
  local_30 = "external/com_google_grpc_base/src/core/lib/security/context/security_context.cc";
  local_28 = 0x77;
  if (*param_1 != 0) {
                    /* try { // try from 003f513c to 003f514b has its CatchHandler @ 003f5180 */
    FUN_003f3870(*param_1,&local_30,"server_security_context");
  }
  *param_1 = 0;
  if ((param_1[1] != 0) && ((code *)param_1[2] != (code *)0x0)) {
                    /* try { // try from 003f5160 to 003f5163 has its CatchHandler @ 003f517c */
    (*(code *)param_1[2])();
  }
  FUN_003f2f48(param_1);
  return;
}


