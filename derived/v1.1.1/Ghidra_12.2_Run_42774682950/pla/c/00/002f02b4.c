/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f02b4; name: FUN_002f02b4
 */


void FUN_002f02b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
    lVar3 = tpidr_el0;
    cVar2 = *(char *)(puVar4 + 4);
    while( true ) {
      if (cVar2 != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0xd4,2,
                     "Closure already scheduled. (closure: %p, created: [%s:%d], previously scheduled at: [%s: %d], newly scheduled at [%s:%d]"
                     ,puVar4,puVar4[5],*(undefined4 *)(puVar4 + 6),puVar4[7],
                     *(undefined4 *)(puVar4 + 8),*param_1,*(undefined4 *)(param_1 + 1));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined1 *)(puVar4 + 4) = 1;
      puVar4[7] = *param_1;
      *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 1);
      *(undefined1 *)((long)puVar4 + 0x21) = 0;
      puVar1 = (undefined8 *)*puVar4;
      if (puVar4[1] == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/exec_ctx.cc",0xdf,2,
                     "assertion failed: %s","c->cb != nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar3 + 0x30);
      *puVar4 = 0;
      plVar6 = (long *)(lVar5 + 8);
      if (*plVar6 != 0) {
        plVar6 = *(long **)(lVar5 + 0x10);
      }
      *plVar6 = (long)puVar4;
      *(undefined8 **)(lVar5 + 0x10) = puVar4;
      if (puVar1 == (undefined8 *)0x0) break;
      cVar2 = *(char *)(puVar1 + 4);
      puVar4 = puVar1;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


