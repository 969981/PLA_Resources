/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536b7c; name: FUN_00536b7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536b7c(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  FUN_002ef750(param_2 + 0x48);
  if (*(long *)(param_2 + 0x40) == 0) {
                    /* try { // try from 00536ca8 to 00536ccf has its CatchHandler @ 00536cd0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x280,2,"assertion failed: %s","!connectivity_state_queue_.empty()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar1 = (undefined4 *)
           (*(long *)(*(long *)(param_2 + 0x20) +
                     (*(ulong *)(param_2 + 0x38) >> 5 & 0x7fffffffffffff8)) +
           (*(ulong *)(param_2 + 0x38) & 0xff) * 0x10);
  *param_1 = *puVar1;
  *(undefined8 *)(param_1 + 2) = 0;
  plVar8 = (long *)(puVar1 + 2);
  lVar6 = *plVar8;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 0x10);
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = *(long *)(lVar6 + 8);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 00536c00 to 00536c1b has its CatchHandler @ 00536cd0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                   lVar5 + 1);
    }
  }
  *(long *)(param_1 + 2) = *plVar8;
  FUN_0052ea88(*(long *)(*(long *)(param_2 + 0x20) +
                        (*(ulong *)(param_2 + 0x38) >> 5 & 0x7fffffffffffff8)) +
               (*(ulong *)(param_2 + 0x38) & 0xff) * 0x10 + 8);
  uVar9 = *(long *)(param_2 + 0x38) + _DAT_03889360;
  *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + _UNK_03889368;
  *(ulong *)(param_2 + 0x38) = uVar9;
  if (0x1ff < uVar9) {
    FUN_002e2ea0(PTR_LAB_04373088,**(undefined8 **)(param_2 + 0x20));
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 8;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + -0x100;
  }
                    /* try { // try from 00536c90 to 00536c97 has its CatchHandler @ 00536ce8 */
  FUN_002ef790(param_2 + 0x48);
  return;
}


