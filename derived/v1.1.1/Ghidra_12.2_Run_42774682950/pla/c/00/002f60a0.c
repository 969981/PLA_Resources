/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f60a0; name: FUN_002f60a0
 */


/* WARNING: Removing unreachable block (ram,0x002f6164) */

void FUN_002f60a0(void)

{
  int *piVar1;
  undefined2 local_50 [4];
  undefined8 local_48;
  int local_40 [2];
  long local_38;
  char local_30;
  undefined1 uStack_2f;
  undefined6 uStack_2e;
  undefined8 uStack_28;
  
  if ((DAT_0438f848 & 1) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_manager.cc",0x56,2,
                 "assertion failed: %s","g_threaded");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_0438f850 = DAT_0438f850 + 1;
  DAT_0438f84c = DAT_0438f84c + 1;
  FUN_002ef790(&DAT_0438f878);
  if (PTR_DAT_043738d8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_manager.cc",0x5b,1,
                 "Spawn timer thread");
  }
  piVar1 = (int *)FUN_002ebd50(0x28);
  local_50[0] = 0x101;
  local_48 = 0;
  FUN_002f6abc(local_40,"grpc_global_timer",&LAB_002f6290,piVar1,0,local_50);
  if (local_40 == piVar1) {
    if ((local_30 != '\0') && (local_38 != 0)) {
                    /* try { // try from 002f6210 to 002f6237 has its CatchHandler @ 002f6288 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x7e,2,
                   "assertion failed: %s","!options_.joinable() || impl_ == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    *piVar1 = local_40[0];
    *(long *)(piVar1 + 2) = local_38;
    *(undefined8 *)(piVar1 + 6) = uStack_28;
    *(ulong *)(piVar1 + 4) = CONCAT62(uStack_2e,CONCAT11(uStack_2f,local_30));
    local_40[0] = 5;
    local_38 = 0;
    local_30 = '\x01';
    uStack_2f = 1;
    uStack_28 = 0;
  }
  if (*(long **)(piVar1 + 2) == (long *)0x0) {
    if (*piVar1 != 4) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x8b,2,
                   "assertion failed: %s","state_ == FAILED");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    return;
  }
  if (*piVar1 != 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x82,2,
                 "assertion failed: %s","state_ == ALIVE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *piVar1 = 2;
  (**(code **)(**(long **)(piVar1 + 2) + 0x10))();
  return;
}


