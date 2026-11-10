/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00592f30; name: FUN_00592f30
 */


undefined8
FUN_00592f30(long param_1,long param_2,undefined8 param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  void *local_18;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_record_protocol_common.cc"
                 ,0x62,2,"Invalid nullptr arguments to alts_grpc_record_protocol init.");
    return 2;
  }
  local_18 = (void *)0x0;
  iVar1 = FUN_00594200(param_2,param_3,param_4 & 1,param_5 & 1,param_6 & 1,param_1 + 8,&local_18);
  if (iVar1 == 0) {
    FUN_00305000(param_1 + 0x10);
    uVar2 = FUN_005931b0();
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    uVar2 = FUN_002ebd50();
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    uVar2 = FUN_005931c0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    *(undefined8 *)(param_1 + 0x158) = 8;
    uVar2 = FUN_002ebd50(0x80);
    *(undefined8 *)(param_1 + 0x150) = uVar2;
    return 0;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_grpc_record_protocol_common.cc"
               ,0x6c,2,"Failed to create alts_iovec_record_protocol, %s.",local_18);
  free(local_18);
  return 7;
}


