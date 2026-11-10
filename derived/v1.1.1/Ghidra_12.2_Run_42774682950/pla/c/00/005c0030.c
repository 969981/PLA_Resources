/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c0030; name: FUN_005c0030
 */


void FUN_005c0030(undefined8 *param_1,ulong param_2,ulong *param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = PTR_FUN_04373078;
  if (param_2 == 0) {
    return;
  }
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  puVar2 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,param_2 * 0x18);
  param_1[2] = puVar2 + param_2 * 3;
  *param_1 = puVar2;
  param_1[1] = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if ((*param_3 & 1) != 0) goto LAB_005c00e0;
  do {
    uVar5 = param_3[1];
    uVar4 = *param_3;
    puVar2[2] = param_3[2];
    puVar2[1] = uVar5;
    *puVar2 = uVar4;
    while( true ) {
      lVar3 = param_1[1];
      puVar2 = (ulong *)(lVar3 + 0x18);
      param_2 = param_2 - 1;
      param_1[1] = puVar2;
      if (param_2 == 0) {
        return;
      }
      *puVar2 = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      if ((*param_3 & 1) == 0) break;
LAB_005c00e0:
      uVar4 = param_3[1];
      if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 005c015c to 005c016b has its CatchHandler @ 005c016c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = (void *)param_3[2];
      if (uVar4 < 0x17) {
        __dest = (void *)((long)puVar2 + 1);
        *(char *)puVar2 = (char)((int)uVar4 << 1);
        if (uVar4 != 0) goto LAB_005c012c;
      }
      else {
        uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(puVar1,uVar5);
        puVar2[1] = uVar4;
        puVar2[2] = (ulong)__dest;
        *puVar2 = uVar5 | 1;
LAB_005c012c:
        memcpy(__dest,__src,uVar4);
      }
      *(undefined1 *)((long)__dest + uVar4) = 0;
    }
  } while( true );
}


