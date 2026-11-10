/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079c688; name: FUN_0079c688
 */


void FUN_0079c688(undefined8 *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[3] = plVar1;
  if (param_3 != 0) {
    if (param_3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_3 * 0x20;
    puVar2 = (ulong *)(**(code **)(*plVar1 + 0x10))(plVar1,lVar3,8);
    param_1[2] = puVar2 + param_3 * 4;
    *param_1 = puVar2;
    param_1[1] = puVar2;
    do {
      plVar1 = (long *)FUN_00612290();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = (ulong)plVar1;
      if ((*param_2 & 1) == 0) {
        uVar5 = param_2[1];
        uVar4 = *param_2;
        puVar2[2] = param_2[2];
        puVar2[1] = uVar5;
        *puVar2 = uVar4;
      }
      else {
        uVar4 = param_2[1];
        if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 0079c7a8 to 0079c7b7 has its CatchHandler @ 0079c7b8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        __src = (void *)param_2[2];
        if (uVar4 < 0x17) {
          __dest = (void *)((long)puVar2 + 1);
          *(char *)puVar2 = (char)((int)uVar4 << 1);
          if (uVar4 != 0) goto LAB_0079c77c;
        }
        else {
          uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
          puVar2[1] = uVar4;
          puVar2[2] = (ulong)__dest;
          *puVar2 = uVar5 | 1;
LAB_0079c77c:
          memcpy(__dest,__src,uVar4);
        }
        *(undefined1 *)((long)__dest + uVar4) = 0;
      }
      param_2 = param_2 + 4;
      lVar3 = lVar3 + -0x20;
      puVar2 = (ulong *)(param_1[1] + 0x20);
      param_1[1] = puVar2;
    } while (lVar3 != 0);
  }
  return;
}


