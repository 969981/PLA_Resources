/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00306180; name: FUN_00306180
 */


void FUN_00306180(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  if (param_1[2] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x186,2,
                 "assertion failed: %s","sb->count > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar4 = (undefined8 *)param_1[1];
  plVar8 = (long *)*puVar4;
  if (plVar8 == (long *)0x0) {
    param_1[4] = param_1[4] - (ulong)*(byte *)(puVar4 + 1);
  }
  else {
    param_1[4] = param_1[4] - puVar4[1];
    plVar3 = (long *)*plVar8;
    if (plVar3 != (long *)0x0) {
      plVar6 = plVar3 + 1;
      lVar5 = *plVar3;
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
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar3,lVar7);
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
  }
  lVar5 = param_1[2];
  param_1[1] = param_1[1] + 0x20;
  param_1[2] = lVar5 + -1;
  if (lVar5 + -1 == 0) {
    param_1[1] = *param_1;
    return;
  }
  return;
}


