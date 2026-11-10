/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060a284; name: FUN_0060a284
 */


void FUN_0060a284(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  byte local_460 [16];
  undefined8 local_450;
  char *local_448 [3];
  undefined1 auStack_430 [1024];
  
  FUN_00609050(local_448,auStack_430,0x400);
  FUN_0060a088(local_460,param_2);
                    /* try { // try from 0060a2b8 to 0060a2d7 has its CatchHandler @ 0060a380 */
  uVar1 = FUN_006092e0(local_448,local_460);
  uVar1 = FUN_0060916c(uVar1,&DAT_039b07fe);
  FUN_006092fc(uVar1,*(undefined2 *)(param_2 + 0x38));
  if ((local_460[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_450);
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  __n = strlen(local_448[0]);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0060a360;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,local_448[0],__n);
LAB_0060a360:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


