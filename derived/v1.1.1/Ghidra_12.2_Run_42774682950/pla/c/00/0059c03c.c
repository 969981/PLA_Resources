/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059c03c; name: FUN_0059c03c
 */


void FUN_0059c03c(long *param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = param_5;
  puVar1 = PTR_DAT_04374f18;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 6) = param_4;
  param_1[4] = 0;
  param_1[5] = 2;
  if (4 < *(ulong *)(param_3 + 0x958)) {
    FUN_002f0430(*(ulong *)(param_3 + 0x958),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xb9f);
  }
  *(undefined8 *)(param_3 + 0x958) = 0;
  return;
}


