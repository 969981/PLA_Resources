/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538ff0; name: FUN_00538ff0
 */


undefined8 FUN_00538ff0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_48;
  undefined8 local_40;
  void *local_38;
  
  uVar3 = FUN_003e4610();
  FUN_003e46c0(uVar3,*(undefined8 *)(param_1 + 0x58));
  puVar8 = (undefined8 *)(param_1 + 0x50);
  FUN_003e4710(uVar3,*puVar8);
  uVar4 = FUN_003e44b0(uVar3,1);
  if ((uVar4 & 1) == 0) {
    FUN_003e48a0(uVar3);
    uVar3 = 0;
  }
  else {
    uVar4 = FUN_003e4900(uVar3,0,1,&LAB_00539310,0,&local_38);
    if (uVar4 == 0) {
      local_40 = *(undefined8 *)(param_1 + 0x60);
      *puVar8 = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (*(char *)(param_1 + 0xb9) == '\0') {
        uVar3 = FUN_0053b304(&local_38,param_1 + 0x10,(long *)(param_1 + 0x1c0));
        puVar8 = *(undefined8 **)(param_1 + 0xb0);
        if (puVar8 != (undefined8 *)0x0) {
          lVar7 = puVar8[1];
          plVar6 = puVar8 + 2;
          do {
            lVar9 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),puVar8 + 1,lVar9);
          }
          if (lVar9 < 1) {
                    /* try { // try from 00539280 to 005392a7 has its CatchHandler @ 005392f0 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar9 == 1) {
            (**(code **)*puVar8)(puVar8);
            FUN_002e2ea0(PTR_LAB_04373088,puVar8);
          }
        }
        *(undefined8 *)(param_1 + 0xb0) = uVar3;
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc"
                     ,0x43d,1,"New connected subchannel at %p for subchannel %p",uVar3,param_1);
        lVar7 = *(long *)(param_1 + 0x1c0);
        if (lVar7 != 0) {
          local_48 = local_40;
          local_40 = 0;
                    /* try { // try from 005391a4 to 005391ab has its CatchHandler @ 005392b0 */
          FUN_005436f4(lVar7,&local_48);
          FUN_00539328(&local_48);
        }
        lVar9 = *(long *)(param_1 + 0xb0);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        lVar7 = FUN_002e2e80(PTR_FUN_04373078,0x30);
        if (lVar7 != 0) {
                    /* try { // try from 005391d4 to 005391df has its CatchHandler @ 005392ac */
          FUN_0053b400(lVar7,param_1);
        }
                    /* try { // try from 005391e0 to 005391e7 has its CatchHandler @ 005392cc */
        lVar5 = FUN_003d6900(0);
        puVar8 = *(undefined8 **)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar7;
        if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 00539200 to 00539203 has its CatchHandler @ 005392a8 */
          (**(code **)*puVar8)();
        }
        *(undefined4 *)(lVar5 + 0x10) = 2;
        *(undefined8 *)(lVar5 + 0x50) = uVar3;
                    /* try { // try from 00539214 to 0053922b has its CatchHandler @ 005392ec */
        plVar6 = (long *)FUN_003d7710(*(undefined8 *)(lVar9 + 0x18),0);
        (**(code **)(*plVar6 + 8))(plVar6,lVar5);
                    /* try { // try from 0053922c to 00539237 has its CatchHandler @ 005392f0 */
        FUN_00538bfc(param_1,2);
        uVar3 = 1;
      }
      else {
                    /* try { // try from 005390dc to 00539193 has its CatchHandler @ 005392f0 */
        FUN_003d79f0(local_38);
        free(local_38);
        uVar3 = 0;
      }
      FUN_00539328(&local_40);
    }
    else {
      FUN_003d5ee0(*puVar8);
      uVar3 = FUN_002f1480(uVar4);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc"
                   ,0x42d,2,"error initializing subchannel stack: %s",uVar3);
      if (4 < uVar4) {
        FUN_002f0430(uVar4,
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc"
                     ,0x42f);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


