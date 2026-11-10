/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e0de0; name: FUN_003e0de0
 */


void FUN_003e0de0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_70 [32];
  
  if (((*(byte *)(param_1 + 0xd0) & 1) != 0) && (*(char *)(param_1 + 0xd1) == '\0')) {
    FUN_002ef750(param_1 + 0x68);
                    /* try { // try from 003e0e1c to 003e0e53 has its CatchHandler @ 003e0fbc */
    FUN_002f2c60(auStack_70,"Server Shutdown");
    uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/server.cc",0x3eb,
                         auStack_70,0,0);
    FUN_003e0c90(param_1,uVar6);
                    /* try { // try from 003e0e54 to 003e0e5b has its CatchHandler @ 003e0fb8 */
    FUN_002ef790(param_1 + 0x68);
    if ((*(long *)(param_1 + 0x100) == 0) &&
       (*(ulong *)(param_1 + 0x118) <= *(ulong *)(param_1 + 0x120))) {
      *(undefined1 *)(param_1 + 0xd1) = 1;
      lVar8 = *(long *)(param_1 + 0xd8);
      if (*(long *)(param_1 + 0xe0) != lVar8) {
        uVar10 = 0;
        plVar1 = (long *)(param_1 + 0x130);
        do {
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar9 = *(long *)(param_1 + 0x128);
          if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),(long *)(param_1 + 0x128)
                         ,lVar7,lVar7 + 1);
            lVar8 = *(long *)(param_1 + 0xd8);
          }
          puVar2 = (undefined8 *)(lVar8 + uVar10 * 0x80);
          FUN_003ceba0(puVar2[1],*puVar2,0,&LAB_003e1430,param_1,puVar2 + 2,0);
          lVar8 = *(long *)(param_1 + 0xd8);
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)(*(long *)(param_1 + 0xe0) - lVar8 >> 7));
      }
    }
    else {
      auVar11 = FUN_002eec80(1);
      auVar11 = FUN_002ef280(auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(param_1 + 0x138),
                             *(undefined8 *)(param_1 + 0x140));
      auVar12 = FUN_002ef140(1,3);
      iVar5 = FUN_002eef40(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_);
      if (-1 < iVar5) {
        auVar11 = FUN_002eec80(1);
        *(undefined1 (*) [16])(param_1 + 0x138) = auVar11;
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/server.cc",0x3f4,0,
                     "Waiting for %d channels and %lu/%lu listeners to be destroyed before shutting down server"
                     ,*(undefined4 *)(param_1 + 0x100),
                     *(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x120));
      }
    }
  }
  return;
}


