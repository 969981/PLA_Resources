/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f7eb0; name: FUN_002f7eb0
 */


void FUN_002f7eb0(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = (param_1 >> 4 ^ param_1 >> 9 ^ param_1 >> 0xe) % 0x3f1;
  puVar1 = &DAT_0438f928 + uVar5 * 0x20;
  FUN_002ef750(puVar1);
  puVar4 = (ulong *)(&DAT_04397748 + uVar5 * 8);
  uVar5 = *puVar4;
  if (uVar5 == param_1) {
LAB_002f7f3c:
    *puVar4 = *(ulong *)(param_1 + 0x28);
    FUN_002ef790(puVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  if (uVar5 != 0) {
    do {
      uVar3 = uVar5;
      uVar5 = *(ulong *)(uVar3 + 0x28);
    } while (uVar5 != param_1 && uVar5 != 0);
    if (uVar5 == param_1) {
      puVar4 = (ulong *)(uVar3 + 0x28);
      goto LAB_002f7f3c;
    }
  }
  FUN_002ef790(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_generic.cc",0xab,2,
               "** Removing timer (%p) that is not added to hash table. Closure (%p), created at: (%s:%d), scheduled at: (%s:%d) **"
               ,param_1,lVar2,*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x30),
               *(undefined8 *)(lVar2 + 0x38),*(undefined4 *)(lVar2 + 0x40));
                    /* WARNING: Subroutine does not return */
  abort();
}


