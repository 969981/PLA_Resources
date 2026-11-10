/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003016b8; name: FUN_003016b8
 */


void FUN_003016b8(long *param_1,int param_2,long param_3)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  
  *(int *)(param_1 + 2) = param_2;
  *(int *)((long)param_1 + 0x14) = param_2;
  FUN_002ef6d0(param_1 + 3);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
                    /* try { // try from 00301714 to 00301723 has its CatchHandler @ 003017c4 */
  lVar1 = FUN_002ebd50(((long)param_2 + (long)param_2 * 4) * 0x40);
  *param_1 = lVar1;
  lVar1 = FUN_002ebd50((long)param_2 << 3);
  param_1[1] = lVar1;
  __ptr = (void *)*param_1;
  if ((lVar1 == 0) || (__ptr == (void *)0x0)) {
                    /* try { // try from 00301784 to 003017af has its CatchHandler @ 003017c4 */
    free(__ptr);
    free((void *)param_1[1]);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0xc6,1,
                 "Disabling TCP TX zerocopy due to memory pressure.\n");
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else if (0 < (int)param_1[2]) {
    lVar2 = 0;
    lVar1 = 0;
    while( true ) {
      *(undefined8 *)((long)__ptr + lVar2 + 0x128) = 0;
      *(undefined8 *)((long)__ptr + lVar2 + 0x130) = 0;
      *(undefined8 *)((long)__ptr + lVar2 + 0x138) = 0;
                    /* try { // try from 00301758 to 0030175b has its CatchHandler @ 003017d4 */
      FUN_00305000();
      *(long *)(param_1[1] + lVar1 * 8) = *param_1 + lVar2;
      lVar1 = lVar1 + 1;
      if ((int)param_1[2] <= lVar1) break;
      __ptr = (void *)*param_1;
      lVar2 = lVar2 + 0x140;
    }
  }
  return;
}


