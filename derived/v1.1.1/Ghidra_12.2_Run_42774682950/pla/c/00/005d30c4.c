/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d30c4; name: FUN_005d30c4
 */


void FUN_005d30c4(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((long)param_3 - (long)param_2 != 0) {
    lVar3 = (long)param_3 - (long)param_2 >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulong)(lVar3 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar2 = (ulong *)FUN_002e2e80(PTR_FUN_04373078);
    *param_1 = puVar2;
    param_1[1] = puVar2;
    param_1[2] = puVar2 + lVar3;
    puVar1 = PTR_FUN_04373078;
    if (param_2 != param_3) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      if ((*param_2 & 1) != 0) goto LAB_005d3190;
      do {
        uVar5 = param_2[1];
        uVar4 = *param_2;
        puVar2[2] = param_2[2];
        puVar2[1] = uVar5;
        *puVar2 = uVar4;
        while( true ) {
          lVar3 = param_1[1];
          param_2 = param_2 + 3;
          puVar2 = (ulong *)(lVar3 + 0x18);
          param_1[1] = puVar2;
          if (param_3 == param_2) {
            return;
          }
          *puVar2 = 0;
          *(undefined8 *)(lVar3 + 0x20) = 0;
          *(undefined8 *)(lVar3 + 0x28) = 0;
          if ((*param_2 & 1) == 0) break;
LAB_005d3190:
          uVar4 = param_2[1];
          if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 005d320c to 005d321b has its CatchHandler @ 005d321c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __src = (void *)param_2[2];
          if (uVar4 < 0x17) {
            __dest = (void *)((long)puVar2 + 1);
            *(char *)puVar2 = (char)((int)uVar4 << 1);
            if (uVar4 != 0) goto LAB_005d31dc;
          }
          else {
            uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_002e2e80(puVar1,uVar5);
            puVar2[1] = uVar4;
            puVar2[2] = (ulong)__dest;
            *puVar2 = uVar5 | 1;
LAB_005d31dc:
            memcpy(__dest,__src,uVar4);
          }
          *(undefined1 *)((long)__dest + uVar4) = 0;
        }
      } while( true );
    }
  }
  return;
}


