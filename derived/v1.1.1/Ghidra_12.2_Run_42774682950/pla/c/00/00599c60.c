/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00599c60; name: FUN_00599c60
 */


void FUN_00599c60(long param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  if (4 < *(ulong *)(param_1 + 0xe28)) {
    FUN_002f0430(*(ulong *)(param_1 + 0xe28),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x42e);
  }
  FUN_002f2c60(auStack_50,"GOAWAY received");
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0x433,auStack_50,0,0);
  uVar4 = FUN_002f0d20(uVar4,7,param_2);
  uVar4 = FUN_002f0d20(uVar4,3,0xe);
  uVar4 = FUN_002f1340(uVar4,6,param_4);
  *(undefined8 *)(param_1 + 0xe28) = uVar4;
  puVar2 = PTR_DAT_04374f08;
  if (PTR_DAT_04374f08[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x439,1,"transport %p got goaway with last stream id %d",param_1,param_3);
  }
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = FUN_002f1480(*(undefined8 *)(param_1 + 0xe28));
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x43e,1,"%s: Got goaway [%d] err=%s",uVar5,param_2,uVar4);
    if ((param_2 == 0xb) && (*(char *)(param_1 + 0xcf0) != '\0')) {
      uStack_68 = param_4[1];
      local_70 = *param_4;
      uStack_58 = param_4[3];
      uStack_60 = param_4[2];
      iVar3 = FUN_002f3d50(&local_70,"too_many_pings");
      if (iVar3 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x448,2,
                     "Received a GOAWAY with error code ENHANCE_YOUR_CALM and debug data equal to \"too_many_pings\""
                    );
        if (*(long *)(param_1 + 0x15a0) < 0x40000000) {
          dVar6 = (double)*(long *)(param_1 + 0x15a0);
          *(long *)(param_1 + 0x15a0) = (long)(dVar6 + dVar6);
          cVar1 = puVar2[0x10];
        }
        else {
          *(undefined8 *)(param_1 + 0x15a0) = 0x7fffffffffffffff;
          cVar1 = puVar2[0x10];
        }
        goto joined_r0x00599e14;
      }
    }
  }
  cVar1 = puVar2[0x10];
joined_r0x00599e14:
  if (cVar1 != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xb6c,1,"transport %p set connectivity_state=%d",param_1,3);
  }
  FUN_003d3c24(param_1 + 0x330,3,"got_goaway");
  return;
}


