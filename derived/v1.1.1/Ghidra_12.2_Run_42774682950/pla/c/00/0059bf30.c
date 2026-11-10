/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059bf30; name: FUN_0059bf30
 */


void FUN_0059bf30(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *extraout_x1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar1 = param_2;
    if (param_3 < 5) {
      do {
        *param_2 = *(long *)(lVar2 + 0x10);
        FUN_00599e40(param_1,plVar1,lVar2 + 8,param_3,"on_write_finished_cb");
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x1240);
        *(long *)(param_1 + 0x1240) = lVar2;
        lVar2 = *param_2;
        plVar1 = extraout_x1;
      } while (lVar2 != 0);
    }
    else {
      do {
        *param_2 = *(long *)(lVar2 + 0x10);
        auVar3 = FUN_002f03c0(param_3,
                              "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                              ,0x87c);
        FUN_00599e40(param_1,auVar3._8_8_,lVar2 + 8,auVar3._0_8_,"on_write_finished_cb");
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x1240);
        *(long *)(param_1 + 0x1240) = lVar2;
        lVar2 = *param_2;
      } while (lVar2 != 0);
    }
  }
  if (param_3 < 5) {
    return;
  }
  FUN_002f0430(param_3,
               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x881);
  return;
}


