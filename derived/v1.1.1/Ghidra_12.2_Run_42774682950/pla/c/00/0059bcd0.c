/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059bcd0; name: FUN_0059bcd0
 */


void FUN_0059bcd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_0059be30(param_3,param_2,"Pending writes failed due to stream closure");
  auVar4._0_8_ = auVar4._0_8_;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  if (4 < auVar4._0_8_) {
    auVar4 = FUN_002f03c0(auVar4._0_8_,
                          "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0x88a,auVar4._0_8_);
  }
  FUN_00599e40(param_1,auVar4._8_8_,param_2 + 0xd8,auVar4._0_8_,"send_initial_metadata_finished");
  auVar4._8_8_ = extraout_x1;
  auVar4._0_8_ = auVar4._0_8_;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  if (4 < auVar4._0_8_) {
    auVar4 = FUN_002f03c0(auVar4._0_8_,
                          "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0x890,auVar4._0_8_);
  }
  FUN_00599e40(param_1,auVar4._8_8_,param_2 + 0xf0,auVar4._0_8_,"send_trailing_metadata_finished");
  puVar1 = *(undefined8 **)(param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xf8) = 0;
  uVar3 = extraout_x1_00;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0059bd90 to 0059bd93 has its CatchHandler @ 0059be2c */
    (**(code **)*puVar1)();
    uVar3 = extraout_x1_01;
  }
  if (auVar4._0_8_ < 5) {
    FUN_00599e40(param_1,uVar3,param_2 + 0x188,auVar4._0_8_,"fetching_send_message_finished");
    uVar2 = auVar4._0_8_;
  }
  else {
    auVar4 = FUN_002f03c0(auVar4._0_8_,
                          "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0x895);
    FUN_00599e40(param_1,auVar4._8_8_,param_2 + 0x188,auVar4._0_8_,"fetching_send_message_finished")
    ;
    uVar2 = FUN_002f03c0(auVar4._0_8_,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x897);
  }
  FUN_0059bf30(param_1,param_2 + 0xb18,uVar2);
  FUN_0059bf30(param_1,param_2 + 0xb10,auVar4._0_8_);
  return;
}


