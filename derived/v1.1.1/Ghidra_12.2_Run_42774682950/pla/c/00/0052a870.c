/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052a870; name: FUN_0052a870
 */


long FUN_0052a870(long param_1,undefined4 param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x10);
  puVar4 = *(ulong **)(lVar10 + 0x118);
  do {
    uVar7 = *puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar7 + 0xd0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[1] < uVar7 + 0xd0) {
    lVar5 = FUN_003f5a34(puVar4,0xd0);
    *(long *)(lVar5 + 8) = param_1;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    lVar6 = *(long *)(lVar10 + 400);
  }
  else {
    lVar5 = (long)puVar4 + uVar7 + 0x20;
    *(long *)((long)puVar4 + uVar7 + 0x28) = param_1;
    *(undefined8 *)((long)puVar4 + uVar7 + 0x30) = 0;
    lVar6 = *(long *)(lVar10 + 400);
  }
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    FUN_005361bc();
    uVar8 = *(undefined8 *)(lVar10 + 400);
  }
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar8;
  *(undefined1 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
                    /* try { // try from 0052a90c to 0052aa47 has its CatchHandler @ 0052aa48 */
  uVar8 = FUN_00536130(*(undefined8 *)(lVar10 + 400));
  *(undefined8 *)(lVar5 + 0x20) = uVar8;
  FUN_002ef5c0(lVar5,param_2);
  if ((param_3 & 1) != 0) {
    *(undefined2 *)(lVar5 + 0xa0) = 0;
    *(undefined1 **)(lVar5 + 0x88) = &LAB_0052adec;
    *(char **)(lVar5 + 0xa8) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
    *(long *)(lVar5 + 0x90) = lVar5;
    *(undefined8 *)(lVar5 + 0x98) = 0;
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    *(undefined4 *)(lVar5 + 0xc0) = 0;
    *(undefined4 *)(lVar5 + 0xb0) = 0xaf4;
    *(long *)(lVar5 + 0x18) = lVar5 + 0x80;
  }
  plVar9 = *(long **)(lVar10 + 0x120);
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",plVar9[0xb],plVar9,plVar9[4],"batch_data");
  }
  plVar1 = plVar9 + 1;
  do {
    lVar10 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *plVar9;
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar6 + 8),plVar9,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar10,
                 lVar10 + 1,"batch_data");
  }
  if (lVar10 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89
                  ,"RefNonZero");
  }
  return lVar5;
}


