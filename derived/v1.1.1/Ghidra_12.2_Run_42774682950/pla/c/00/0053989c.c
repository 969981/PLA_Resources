/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053989c; name: FUN_0053989c
 */


long FUN_0053989c(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *local_50;
  long local_48;
  long local_38;
  
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x128);
  if (lVar5 != 0) {
    uVar9 = *param_1;
    local_38 = 0;
    lVar7 = *param_2;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x10);
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar8 = *(long *)(lVar7 + 8);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar7 + 8),lVar6,
                     lVar6 + 1);
      }
    }
    local_38 = *param_2;
    uVar10 = *param_3;
    local_48 = 0;
    lVar7 = *param_4;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x10);
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar8 = *(long *)(lVar7 + 8);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 00539980 to 0053999b has its CatchHandler @ 00539aac */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar7 + 8),lVar6,
                     lVar6 + 1);
      }
    }
    local_48 = *param_4;
    local_50 = (long *)*param_5;
    *param_5 = 0;
                    /* try { // try from 005399b0 to 005399cb has its CatchHandler @ 00539ac0 */
    FUN_0053c458(lVar5,uVar9,&local_38,uVar10,&local_48,&local_50);
    plVar1 = local_50;
    if (local_50 != (long *)0x0) {
      lVar7 = local_50[1];
      plVar2 = local_50 + 2;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 00539a00 to 00539a1f has its CatchHandler @ 00539aa8 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),local_50 + 1,lVar6);
      }
      if (lVar6 < 1) {
                    /* try { // try from 00539a80 to 00539aa7 has its CatchHandler @ 00539aa8 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar6 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1);
        FUN_002e2ea0(PTR_LAB_04373088,plVar1);
      }
    }
    FUN_00535c40(&local_48);
    FUN_0052ea88(&local_38);
  }
  return lVar5;
}


