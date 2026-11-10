/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f36c0; name: FUN_003f36c0
 */


void FUN_003f36c0(long param_1)

{
  long lVar1;
  void *__ptr;
  ulong uVar2;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "external/com_google_grpc_base\\src/core/lib/security/context/security_context.h";
  local_38 = 0x41;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 003f36f4 to 003f3703 has its CatchHandler @ 003f3774 */
    FUN_003f3870(lVar1,&local_40,"chained");
  }
  __ptr = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (__ptr != (void *)0x0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar1 = 0;
      uVar2 = 1;
      while( true ) {
                    /* try { // try from 003f3724 to 003f3727 has its CatchHandler @ 003f3778 */
        FUN_003f5760((long)__ptr + lVar1);
        if (*(ulong *)(param_1 + 0x20) <= uVar2) break;
        __ptr = *(void **)(param_1 + 0x18);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x18;
      }
      __ptr = *(void **)(param_1 + 0x18);
    }
                    /* try { // try from 003f3748 to 003f374b has its CatchHandler @ 003f3770 */
    free(__ptr);
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 003f3754 to 003f3757 has its CatchHandler @ 003f376c */
      FUN_003f3604();
    }
  }
  return;
}


