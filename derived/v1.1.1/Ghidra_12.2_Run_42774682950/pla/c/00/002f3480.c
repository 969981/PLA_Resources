/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3480; name: FUN_002f3480
 */


void FUN_002f3480(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  size_t __n;
  ulong *puVar1;
  
  *param_1 = 0;
  __n = param_4 - param_3;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_4 < param_3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x159,2,
                 "assertion failed: %s","end >= begin");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar1 = (ulong *)(param_2 + 1);
  if (*param_2 == 0) {
    if ((byte)*puVar1 < param_4) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x166,2,
                   "assertion failed: %s","source.data.inlined.length >= end");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    memcpy((void *)((long)param_1 + 9),(byte *)((long)puVar1 + param_3 + 1),__n);
    return;
  }
  if (*puVar1 < param_4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice.cc",0x15d,2,
                 "assertion failed: %s","source.data.refcounted.length >= end");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *param_1 = *(undefined8 *)(*param_2 + 0x10);
  param_1[1] = __n;
  param_1[2] = param_2[2] + param_3;
  return;
}


