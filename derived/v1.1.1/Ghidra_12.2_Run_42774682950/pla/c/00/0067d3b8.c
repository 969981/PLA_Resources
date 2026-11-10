/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067d3b8; name: FUN_0067d3b8
 */


void FUN_0067d3b8(undefined8 param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long *local_58;
  ulong local_50 [3];
  long *local_38;
  
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_38 = (long *)FUN_00612290();
  local_50[0] = CONCAT26(local_50[0]._6_2_,0x73755f5f08);
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  plVar1 = (long *)FUN_00612290();
  local_58 = plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0067d4f0 to 0067d4f7 has its CatchHandler @ 0067d4f8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_0067d480;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    local_70 = uVar2 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0067d480:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_0067d580(param_1,local_50,&local_70);
  if ((local_70 & 1) != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if ((local_50[0] & 1) != 0) {
    (**(code **)(*local_38 + 0x18))(local_38,local_50[2],local_50[0] & 0xfffffffffffffffe,1);
  }
  return;
}


