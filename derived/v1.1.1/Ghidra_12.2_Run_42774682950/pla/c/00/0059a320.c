/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059a320; name: FUN_0059a320
 */


void FUN_0059a320(long param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_58 [4];
  undefined4 local_34;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = FUN_002f1480(param_2);
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x6e9,1,"%s: Sending goaway err=%s",uVar7,uVar5);
  *(undefined4 *)(param_1 + 0xe30) = 1;
  FUN_003d7cb0(param_2,0x7fffffffffffffff,0,local_58,&local_34,0);
  uVar2 = *(undefined4 *)(param_1 + 0xeb0);
  if ((local_58[0] != (long *)0x0) &&
     (local_58[0] = (long *)*local_58[0], local_58[0] != (long *)0x0)) {
    plVar1 = local_58[0] + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *local_58[0];
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),local_58[0],lVar8,lVar8 + 1);
    }
    if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  FUN_005aa020(uVar2,local_34,local_58,param_1 + 0xcf8);
  FUN_00598190(param_1,7);
  if (4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x6f4);
  }
  return;
}


