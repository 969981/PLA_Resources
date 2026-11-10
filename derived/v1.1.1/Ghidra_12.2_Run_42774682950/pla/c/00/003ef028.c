/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ef028; name: FUN_003ef028
 */


void FUN_003ef028(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  FUN_002ef750();
  if ((0 < param_3) && (param_3 <= *(long *)(param_2 + 0x38))) {
    plVar5 = (long *)(param_2 + 0x28);
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      plVar3 = plVar5;
      do {
        if (param_3 <= plVar7[4]) {
          plVar3 = plVar7;
        }
        plVar7 = (long *)plVar7[plVar7[4] < param_3];
      } while (plVar7 != (long *)0x0);
      if ((plVar3 != plVar5) && (plVar3[4] <= param_3)) {
        lVar9 = plVar3[5];
        lVar4 = *(long *)(lVar9 + 8);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 003ef0b4 to 003ef0cf has its CatchHandler @ 003ef128 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x96,1,
                       "%s:%p ref_if_non_zero %ld -> %ld",*(undefined8 *)(lVar4 + 8),
                       (long *)(lVar9 + 8),*(long *)(lVar9 + 0x10),*(long *)(lVar9 + 0x10) + 1);
        }
        plVar5 = (long *)(lVar9 + 0x10);
        lVar4 = *plVar5;
        if (*plVar5 != 0) {
          do {
            lVar8 = *plVar5;
            if (lVar8 == lVar4) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar4 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') {
                lVar6 = lVar9;
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            lVar6 = 0;
            lVar4 = lVar8;
          } while (lVar8 != 0);
          goto LAB_003ef0e0;
        }
      }
    }
  }
  lVar6 = 0;
LAB_003ef0e0:
  *param_1 = lVar6;
                    /* try { // try from 003ef0e4 to 003ef0eb has its CatchHandler @ 003ef140 */
  FUN_002ef790(param_2);
  return;
}


