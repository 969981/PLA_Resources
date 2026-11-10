/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027625d0; name: FUN_027625d0
 */


void FUN_027625d0(ulong *param_1,void *param_2,ulong param_3)

{
  undefined1 *__dest;
  ulong uVar1;
  
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 == 0) goto LAB_0276264c;
  }
  else {
    uVar1 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1,1);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,param_2,param_3);
LAB_0276264c:
  __dest[param_3] = 0;
  return;
}


