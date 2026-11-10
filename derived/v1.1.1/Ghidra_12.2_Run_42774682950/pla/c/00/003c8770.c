/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c8770; name: FUN_003c8770
 */


undefined8 FUN_003c8770(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if ((ulong)*(uint *)(param_1 + 2) < *(ulong *)(param_1[1] + 0x28)) {
      puVar2 = (undefined8 *)(*(long *)(param_1[1] + 0x20) + (ulong)*(uint *)(param_1 + 2) * 0x20);
      if (((long *)*puVar2 != (long *)0x0) && (plVar5 = *(long **)*puVar2, plVar5 != (long *)0x0)) {
        plVar1 = plVar5 + 1;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar6 = *plVar5;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar7,lVar7 + 1);
        }
        if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("prior > 0",
                        "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                        "RefNonZero");
        }
      }
      uVar8 = *puVar2;
      uVar10 = puVar2[3];
      uVar9 = puVar2[2];
      param_2[1] = puVar2[1];
      *param_2 = uVar8;
      param_2[3] = uVar10;
      param_2[2] = uVar9;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      return 1;
    }
  }
  return 0;
}


