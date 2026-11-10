/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005997a0; name: FUN_005997a0
 */


void FUN_005997a0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  char *pcVar1;
  char *local_30;
  undefined4 local_28;
  
  if (PTR_DAT_04374f08[0x10] == '\0') {
    *(uint *)(param_1 + 0x40) = param_2;
  }
  else {
    pcVar1 = "SERVER";
    if (*(char *)(param_1 + 0xcf0) != '\0') {
      pcVar1 = "CLIENT";
    }
    if ((2 < *(uint *)(param_1 + 0x40)) || (2 < param_2)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x316,2,"Should never reach here.",param_5,pcVar1);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x31c,1,"W:%p %s [%s] state %s -> %s [%s]",param_1,pcVar1,
                 *(undefined8 *)(param_1 + 0x20),(&PTR_DAT_0418a6f0)[(int)*(uint *)(param_1 + 0x40)]
                 ,(&PTR_DAT_0418a6f0)[(int)param_2],param_3);
    *(uint *)(param_1 + 0x40) = param_2;
  }
  if (param_2 == 0) {
    local_30 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_28 = 0x327;
    FUN_002f02b4(&local_30,param_1 + 0x1328);
    if (*(long *)(param_1 + 0x1320) != 0) {
      *(undefined8 *)(param_1 + 0x1320) = 0;
      FUN_0059a470(param_1);
    }
  }
  return;
}


