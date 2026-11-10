/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050ff38; name: FUN_0050ff38
 */


void FUN_0050ff38(undefined8 *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  byte *local_70;
  ulong local_68;
  long local_58;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
                    /* try { // try from 0050ff6c to 0050ff6f has its CatchHandler @ 005100e8 */
  lVar5 = FUN_00521638(param_2 + 0x188);
  if (param_2 + 400 != lVar5) {
    plVar11 = *(long **)(lVar5 + 0x70);
    if (plVar11 != (long *)(lVar5 + 0x78)) {
      plVar1 = (long *)(param_2 + 0x10);
      local_70 = (byte *)(plVar11 + 4);
      bVar2 = *local_70;
      if ((bVar2 & 1) != 0) goto LAB_0050ffe0;
      do {
        local_70 = local_70 + 1;
        uVar7 = (ulong)(bVar2 >> 1);
        plVar12 = plVar11;
        while( true ) {
          local_68 = uVar7;
                    /* try { // try from 0050fff0 to 0050ffff has its CatchHandler @ 005100f0 */
          FUN_0052329c(param_1,&local_70,&local_70);
          lVar10 = plVar12[7];
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar8 = *(long *)(param_2 + 8);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 0051002c to 00510043 has its CatchHandler @ 005100ec */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(param_2 + 8),
                         lVar6,lVar6 + 1);
          }
                    /* try { // try from 00510048 to 00510053 has its CatchHandler @ 005100f8 */
          local_58 = param_2;
          FUN_005171e0(lVar10,&local_58);
          FUN_0050f3a4(&local_58);
          plVar9 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar9 = plVar12 + 2;
            plVar11 = (long *)*plVar9;
            if ((long *)*plVar11 != plVar12) {
              do {
                lVar10 = *plVar9;
                plVar9 = (long *)(lVar10 + 0x10);
                plVar11 = (long *)*plVar9;
              } while (*plVar11 != lVar10);
            }
          }
          else {
            do {
              plVar11 = plVar9;
              plVar9 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          if (plVar11 == (long *)(lVar5 + 0x78)) {
            return;
          }
          local_70 = (byte *)(plVar11 + 4);
          bVar2 = *local_70;
          if ((bVar2 & 1) == 0) break;
LAB_0050ffe0:
          uVar7 = plVar11[5];
          local_70 = (byte *)plVar11[6];
          plVar12 = plVar11;
          if ((long)uVar7 < 0) {
                    /* try { // try from 005100c4 to 005100e3 has its CatchHandler @ 005100e4 */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
        }
      } while( true );
    }
  }
  return;
}


