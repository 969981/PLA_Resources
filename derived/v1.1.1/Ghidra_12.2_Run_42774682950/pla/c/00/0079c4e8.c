/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079c4e8; name: FUN_0079c4e8
 */


void FUN_0079c4e8(long *param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  *param_1 = (long)(PTR_DAT_04376f20 + 0x10);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  plVar1 = (long *)FUN_00612290();
  local_48 = plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0079c604 to 0079c60b has its CatchHandler @ 0079c60c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_0079c5a4;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    local_60 = uVar2 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0079c5a4:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0079c5ac to 0079c5b7 has its CatchHandler @ 0079c610 */
  FUN_0079c688(param_1 + 1,&local_60,1);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  FUN_006e4bd8(param_1 + 5,param_3);
  *(undefined4 *)(param_1 + 6) = param_4;
  return;
}


