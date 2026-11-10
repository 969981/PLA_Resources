/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e0080; name: FUN_003e0080
 */


long FUN_003e0080(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_80 [32];
  
  if (*(ulong **)(param_1 + 0x10) == (ulong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    puVar3 = *(ulong **)(param_1 + 0x10);
    do {
      while( true ) {
        puVar4 = (ulong *)puVar3[1];
        auVar5 = (*param_2)(param_3,*puVar3);
        uVar1 = auVar5._8_8_;
        if (auVar5._0_8_ != 0) {
          if (lVar2 == 0) {
            FUN_002f2ff0(auStack_80,param_4);
            lVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc"
                                 ,0x158,auStack_80,0,0);
          }
          lVar2 = FUN_002f13f0(lVar2,auVar5._0_8_);
        }
        if (3 < uVar1) break;
        FUN_003df250(param_1,puVar3);
LAB_003e00d4:
        puVar3 = puVar4;
        if (puVar4 == (ulong *)0x0) {
          return lVar2;
        }
      }
      if (uVar1 == *puVar3) goto LAB_003e00d4;
      FUN_003dfac0(param_1,puVar3,uVar1);
      puVar3 = puVar4;
    } while (puVar4 != (ulong *)0x0);
  }
  return lVar2;
}


