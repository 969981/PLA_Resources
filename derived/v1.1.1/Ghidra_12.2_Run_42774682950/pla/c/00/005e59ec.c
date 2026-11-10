/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e59ec; name: FUN_005e59ec
 */


void FUN_005e59ec(long *param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  *param_1 = (long)(PTR_DAT_04375138 + 0x10);
  if (param_1[4] != 0) {
    uVar7 = 0;
    lVar8 = param_1[6];
    cVar1 = *(char *)(lVar8 + 0x28);
    while( true ) {
      if (cVar1 != '\0') {
        plVar9 = *(long **)(lVar8 + uVar7 * 0x30);
        if ((plVar9 != (long *)0x0) && (plVar3 = (long *)*plVar9, plVar3 != (long *)0x0)) {
          plVar5 = plVar3 + 1;
          lVar4 = *plVar3;
          do {
            lVar6 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 005e5aa4 to 005e5ad3 has its CatchHandler @ 005e5b3c */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar3,lVar6);
          }
          if (lVar6 < 1) {
                    /* try { // try from 005e5b0c to 005e5b33 has its CatchHandler @ 005e5b34 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar6 == 1) {
            (*(code *)plVar9[3])(plVar9[4]);
          }
        }
        lVar8 = lVar8 + uVar7 * 0x30;
        __ptr = *(void **)(lVar8 + 0x20);
        *(undefined8 *)(lVar8 + 0x20) = 0;
        if (__ptr != (void *)0x0) {
                    /* try { // try from 005e5ae4 to 005e5ae7 has its CatchHandler @ 005e5b40 */
          free(__ptr);
        }
      }
      uVar7 = uVar7 + 1;
      if ((ulong)param_1[4] <= uVar7) break;
      lVar8 = param_1[6];
      cVar1 = *(char *)(lVar8 + uVar7 * 0x30 + 0x28);
    }
  }
                    /* try { // try from 005e5af0 to 005e5af3 has its CatchHandler @ 005e5b38 */
  free((void *)param_1[6]);
  return;
}


