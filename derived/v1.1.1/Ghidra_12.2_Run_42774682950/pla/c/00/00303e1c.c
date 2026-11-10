/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00303e1c; name: FUN_00303e1c
 */


void FUN_00303e1c(ulong *param_1,ulong param_2)

{
  int iVar1;
  
  if ((param_2 < *param_1) || (*param_1 + (long)(int)param_1[2] * 0x140 <= param_2)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x11b,2,
                 "assertion failed: %s",
                 "record >= send_records_ && record < send_records_ + max_sends_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ef750(param_1 + 3);
  iVar1 = *(int *)((long)param_1 + 0x14);
  if ((int)param_1[2] <= iVar1) {
                    /* try { // try from 00303eb4 to 00303edb has its CatchHandler @ 00303edc */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x14c,2,
                 "assertion failed: %s","free_send_records_size_ < max_sends_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(ulong *)(param_1[1] + (long)iVar1 * 8) = param_2;
  *(int *)((long)param_1 + 0x14) = iVar1 + 1;
                    /* try { // try from 00303e78 to 00303e7f has its CatchHandler @ 00303ef4 */
  FUN_002ef790(param_1 + 3);
  return;
}


