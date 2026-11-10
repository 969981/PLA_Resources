/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d8360; name: FUN_005d8360
 */


void FUN_005d8360(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_190 [176];
  undefined8 local_e0 [19];
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((*(char *)(param_1 + 0x1b0) != '\0') && (*(char *)(param_1 + 0x1b1) == '\0')) {
    if (*(char *)(param_1 + 0x1b2) == '\0') {
      if (*(char *)(param_1 + 0x40) != '\0') {
        local_48 = (undefined8 *)0x0;
        uStack_40 = 0;
        local_e0[0] = 0;
        local_38 = 0;
                    /* try { // try from 005d83fc to 005d8487 has its CatchHandler @ 005d8540 */
        FUN_0050d35c(local_e0,param_1 + 0x48);
        puVar3 = local_48;
        uVar4 = *(undefined8 *)(param_1 + 0xe0);
        if (local_48 != (undefined8 *)0x0) {
          lVar5 = local_48[1];
          plVar6 = local_48 + 2;
          do {
            lVar7 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),local_48 + 1,lVar7);
          }
          if (lVar7 < 1) {
                    /* try { // try from 005d84fc to 005d8523 has its CatchHandler @ 005d8540 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar7 == 1) {
            (**(code **)*puVar3)(puVar3);
            FUN_002e2ea0(PTR_LAB_04373088,puVar3);
          }
        }
        uStack_40 = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        local_48 = (undefined8 *)uVar4;
        local_38 = FUN_002e45f0(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x30));
        plVar6 = *(long **)(param_1 + 0x28);
        FUN_0050d238(auStack_190,local_e0);
                    /* try { // try from 005d84a4 to 005d84af has its CatchHandler @ 005d8524 */
        (**(code **)(*plVar6 + 0x10))(plVar6,auStack_190);
        FUN_0050ce98(auStack_190);
        *(undefined1 *)(param_1 + 0x40) = 0;
        FUN_0050ce98(local_e0);
      }
    }
    else {
      plVar6 = *(long **)(param_1 + 0x28);
      FUN_002f2c60(local_e0,"Resolver transient failure");
      uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/fake/fake_resolver.cc"
                           ,0x90,local_e0,0,0);
      uVar4 = FUN_002f0d20(uVar4,3,0xe);
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar4);
      *(undefined1 *)(param_1 + 0x1b2) = 0;
    }
  }
  return;
}


