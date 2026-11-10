/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050dc78; name: FUN_0050dc78
 */


void FUN_0050dc78(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04374a28;
  param_1[2] = 1;
  puVar2 = PTR_DAT_04374a30;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)puVar2;
  param_1[3] = 0;
  param_1[3] = *param_2;
  *param_2 = 0;
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x1e5,2,"assertion failed: %s","channel_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 0050dccc to 0050dd07 has its CatchHandler @ 0050dd08 */
  FUN_0050dd54(param_1);
  return;
}


