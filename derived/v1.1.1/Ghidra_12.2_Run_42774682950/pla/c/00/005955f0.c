/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005955f0; name: FUN_005955f0
 */


void FUN_005955f0(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04374ed0 + 0x10);
  param_1[1] = 0;
  param_1[2] = 1;
  FUN_002ef6d0(param_1 + 3);
  param_1[0xd] = 0;
  param_1[0x17] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar1 = PTR_FUN_04374ed8;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = (long)puVar1;
  param_1[0x10] = (long)param_1;
  param_1[0x13] =
       (long)
       "external/com_google_grpc_base/src/core/ext/transport/chttp2/client/chttp2_connector.cc";
  *(undefined4 *)(param_1 + 0x14) = 0x2c;
  return;
}


