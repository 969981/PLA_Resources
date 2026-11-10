/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00394c28; name: FUN_00394c28
 */


/* WARNING: Removing unreachable block (ram,0x00394c78) */

void FUN_00394c28(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  undefined1 *__dest;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  
                    /* try { // try from 00394c48 to 00394c4f has its CatchHandler @ 00394d20 */
  puVar1 = (ulong *)(**(code **)(*param_2 + 0x10))();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*puVar1 & 1) == 0) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    param_1[2] = puVar1[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  else {
    uVar2 = puVar1[1];
    if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 00394d18 to 00394d1f has its CatchHandler @ 00394d20 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = (void *)puVar1[2];
    if (uVar2 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar2 << 1);
      if (uVar2 == 0) {
        *__dest = 0;
        return;
      }
    }
    else {
      uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
      param_1[1] = uVar2;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar3 | 1;
    }
    memcpy(__dest,__src,uVar2);
    __dest[uVar2] = 0;
  }
  return;
}


