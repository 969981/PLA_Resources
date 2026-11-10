/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059c90c; name: FUN_0059c90c
 */


ulong FUN_0059c90c(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_50 [32];
  
  uVar4 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar4 = param_2[1];
  }
  if (*(uint *)(param_1 + 0x30) < uVar4) {
    FUN_002f2c60(auStack_50,"Too many bytes in stream");
    uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xc38,auStack_50,0,0);
    lVar6 = *(long *)(param_1 + 0x18);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
    uVar4 = uVar3;
    if (4 < uVar3) {
      uVar4 = FUN_002f03c0(uVar3,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xc3a);
    }
    FUN_002f4f9c(uVar9,lVar6 + 0x910,uVar4);
    param_2 = (long *)*param_2;
    if ((param_2 != (long *)0x0) && (plVar5 = (long *)*param_2, plVar5 != (long *)0x0)) {
      plVar7 = plVar5 + 1;
      lVar6 = *plVar5;
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar8);
      }
      if (lVar8 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar8 == 1) {
        (*(code *)param_2[3])(param_2[4]);
      }
    }
  }
  else {
    uVar3 = 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) - (int)uVar4;
    if (param_3 != (long *)0x0) {
      lVar6 = *param_2;
      lVar10 = param_2[3];
      lVar8 = param_2[2];
      param_3[1] = param_2[1];
      *param_3 = lVar6;
      param_3[3] = lVar10;
      param_3[2] = lVar8;
    }
  }
  return uVar3;
}


