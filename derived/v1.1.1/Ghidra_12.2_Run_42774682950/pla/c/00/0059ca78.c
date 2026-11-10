/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059ca78; name: FUN_0059ca78
 */


ulong FUN_0059ca78(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [32];
  
  if (param_2 == 0) {
    if ((int)param_1[6] == 0) {
      param_2 = 0;
      goto LAB_0059cb24;
    }
    FUN_002f2c60(auStack_50,"Truncated message");
    param_2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xc4a,auStack_50,0,0);
  }
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    lVar5 = param_1[3];
    uVar7 = *(undefined8 *)(param_1[2] + 0x30);
    uVar4 = param_2;
    if (4 < param_2) {
      uVar4 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xc4f);
    }
    FUN_002f4f9c(uVar7,lVar5 + 0x910,uVar4);
  }
LAB_0059cb24:
  lVar5 = param_1[4];
  plVar1 = param_1 + 5;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),param_1 + 4,lVar6);
  }
  if (lVar6 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar6 == 1) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_002e2ea0(PTR_LAB_04373088,param_1);
  }
  return param_2;
}


