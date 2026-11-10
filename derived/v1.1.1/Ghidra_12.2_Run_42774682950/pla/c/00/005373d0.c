/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005373d0; name: FUN_005373d0
 */


void FUN_005373d0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_002e4780(param_1,"grpc.subchannel_address");
  pcVar1 = (char *)FUN_002e4de0();
  if (pcVar1 == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x373,2,"assertion failed: %s","addr_str != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  if (*pcVar1 == '\0') {
    return;
  }
  lVar2 = FUN_003eb610(pcVar1,0);
  if (lVar2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x37b,2,"assertion failed: %s","uri != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = FUN_0053c140(lVar2,param_2);
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  FUN_003ec320(lVar2);
  return;
}


