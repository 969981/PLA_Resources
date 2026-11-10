/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f03c0; name: FUN_002f03c0
 */


long * FUN_002f03c0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  if (PTR_DAT_04373880[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x81,0,
                 "%p: %ld -> %ld [%s:%d]",param_1,*param_1,*param_1 + 1,param_2,param_3);
  }
  FUN_002ef5d0(param_1);
  return param_1;
}


