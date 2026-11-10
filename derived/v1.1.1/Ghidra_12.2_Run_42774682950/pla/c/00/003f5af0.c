/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f5af0; name: FUN_003f5af0
 */


undefined8 *
FUN_003f5af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x460);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[3] = param_2;
    puVar5[1] = param_3;
    puVar5[2] = param_1;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    FUN_002f27f0(puVar5 + 0x5e,0x2000);
    FUN_002f27f0(puVar5 + 0x62,0x2000);
    *puVar5 = &PTR_LAB_041573c8;
    FUN_002ef6d0(puVar5 + 4);
    *(undefined2 *)(puVar5 + 0xe) = 0;
    puVar5[0xb] = &LAB_003f6210;
    puVar5[0xf] = "external/com_google_grpc_base/src/core/lib/security/transport/secure_endpoint.cc"
    ;
    puVar5[0xc] = puVar5;
    puVar5[0xd] = 0;
    puVar5[0x11] = 0;
    *(undefined4 *)(puVar5 + 0x12) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0x3c;
    FUN_00305000(puVar5 + 0x14);
    FUN_00305000(puVar5 + 0x39);
    if (param_5 != 0) {
      lVar9 = 0;
      plVar6 = (long *)*param_4;
      plVar2 = param_4;
      while( true ) {
        if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
          plVar1 = plVar6 + 1;
          do {
            lVar8 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar7 = *plVar6;
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar6,lVar8,lVar8 + 1);
          }
          if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("prior > 0",
                          "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                          "RefNonZero");
          }
        }
        lStack_78 = plVar2[1];
        local_80 = *plVar2;
        lStack_68 = plVar2[3];
        lStack_70 = plVar2[2];
        FUN_003052c0(puVar5 + 0x39,&local_80);
        lVar9 = lVar9 + 1;
        if (lVar9 == param_5) break;
        plVar2 = param_4 + lVar9 * 4;
        plVar6 = (long *)*plVar2;
      }
    }
    FUN_00305000(puVar5 + 0x66);
    FUN_002ef5c0(puVar5 + 0x8b,1);
  }
  return puVar5;
}


