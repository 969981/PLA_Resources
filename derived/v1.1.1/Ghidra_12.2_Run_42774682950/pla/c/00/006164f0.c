/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006164f0; name: FUN_006164f0
 */


undefined4 FUN_006164f0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  size_t __n;
  long lVar3;
  char *__s;
  void *__dest;
  ulong uVar4;
  ulong local_60;
  size_t sStack_58;
  void *local_50;
  long *local_48;
  
  uVar1 = FUN_00615e30();
  __s = *(char **)PTR_PTR_04375458;
  local_60 = 0;
  sStack_58 = 0;
  local_50 = (void *)0x0;
  plVar2 = (long *)FUN_00612290();
  local_48 = plVar2;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00616614 to 0061661b has its CatchHandler @ 0061661c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_006165a4;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
    local_60 = uVar4 | 1;
    sStack_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_006165a4:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006165a8 to 006165b3 has its CatchHandler @ 00616628 */
  lVar3 = FUN_00616660(param_2,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (param_2 + 8 != lVar3) {
    uVar1 = FUN_00616120(uVar1,lVar3 + 0x40);
  }
  return uVar1;
}


