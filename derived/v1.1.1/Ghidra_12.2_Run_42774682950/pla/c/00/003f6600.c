/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f6600; name: FUN_003f6600
 */


void FUN_003f6600(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  if (PTR_DAT_04374130[0x10] == '\0') {
    iVar3 = FUN_002ef660(param_1 + 0x458);
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/secure_endpoint.cc",
                 param_3,0,"SECENDP unref %p : %s %ld -> %ld",param_1,param_2,
                 *(long *)(param_1 + 0x458),*(long *)(param_1 + 0x458) + -1);
    iVar3 = FUN_002ef660(param_1 + 0x458);
  }
  if ((param_1 == 0) || (iVar3 == 0)) {
    return;
  }
                    /* try { // try from 003f6630 to 003f6743 has its CatchHandler @ 003f67f0 */
  FUN_00308320(*(undefined8 *)(param_1 + 8));
  FUN_003f4930(*(undefined8 *)(param_1 + 0x10));
  FUN_003f68e0(*(undefined8 *)(param_1 + 0x18));
  FUN_00305020(param_1 + 0xa0);
  FUN_00305020(param_1 + 0x1c8);
  plVar8 = *(long **)(param_1 + 0x2f0);
  if ((plVar8 != (long *)0x0) && (plVar4 = (long *)*plVar8, plVar4 != (long *)0x0)) {
    plVar6 = plVar4 + 1;
    lVar5 = *plVar4;
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
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 003f67a0 to 003f67ef has its CatchHandler @ 003f67f0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (*(code *)plVar8[3])(plVar8[4]);
    }
  }
  plVar8 = *(long **)(param_1 + 0x310);
  if ((plVar8 != (long *)0x0) && (plVar4 = (long *)*plVar8, plVar4 != (long *)0x0)) {
    plVar6 = plVar4 + 1;
    lVar5 = *plVar4;
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
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar7);
    }
    if (lVar7 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (*(code *)plVar8[3])(plVar8[4]);
    }
  }
  FUN_00305020(param_1 + 0x330);
  FUN_002ef710(param_1 + 0x20);
  FUN_002e2ea0(PTR_LAB_04373088,param_1);
  return;
}


