/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f019c; name: FUN_002f019c
 */


void FUN_002f019c(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    if (4 < param_3) {
      FUN_002f0430(param_3,"external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0xb7);
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 4) != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0xbc,2,
                   "Closure already scheduled. (closure: %p, created: [%s:%d], previously scheduled at: [%s: %d], newly scheduled at [%s: %d]"
                   ,param_2,param_2[5],*(undefined4 *)(param_2 + 6),param_2[7],
                   *(undefined4 *)(param_2 + 8),*param_1,*(undefined4 *)(param_1 + 1));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined1 *)(param_2 + 4) = 1;
    param_2[7] = *param_1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 1);
    *(undefined1 *)((long)param_2 + 0x21) = 0;
    if (param_2[1] == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",200,2,
                   "assertion failed: %s","closure->cb != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = tpidr_el0;
    lVar1 = *(long *)(lVar1 + 0x30);
    param_2[3] = param_3;
    *param_2 = 0;
    plVar2 = (long *)(lVar1 + 8);
    if (*plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 0x10);
    }
    *plVar2 = (long)param_2;
    *(undefined8 **)(lVar1 + 0x10) = param_2;
  }
  return;
}


