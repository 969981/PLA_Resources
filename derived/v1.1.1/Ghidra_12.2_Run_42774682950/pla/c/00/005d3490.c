/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d3490; name: FUN_005d3490
 */


void FUN_005d3490(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  void *__dest;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  ulong *puVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    lVar4 = param_2[1] - *param_2 >> 3;
    if (0xaaaaaaaaaaaaaaa < (ulong)(lVar4 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = (ulong *)FUN_002e2e80(PTR_FUN_04373078);
    param_1[2] = puVar3 + lVar4;
    *param_1 = puVar3;
    param_1[1] = puVar3;
    puVar2 = PTR_FUN_04373078;
    puVar7 = (ulong *)*param_2;
    puVar1 = (ulong *)param_2[1];
    if (puVar7 != puVar1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if ((*puVar7 & 1) != 0) goto LAB_005d3560;
      do {
        uVar6 = puVar7[1];
        uVar5 = *puVar7;
        puVar3[2] = puVar7[2];
        puVar3[1] = uVar6;
        *puVar3 = uVar5;
        while( true ) {
          lVar4 = param_1[1];
          puVar7 = puVar7 + 3;
          puVar3 = (ulong *)(lVar4 + 0x18);
          param_1[1] = puVar3;
          if (puVar1 == puVar7) {
            return;
          }
          *puVar3 = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          if ((*puVar7 & 1) == 0) break;
LAB_005d3560:
          uVar5 = puVar7[1];
          if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 005d35dc to 005d35eb has its CatchHandler @ 005d35ec */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __src = (void *)puVar7[2];
          if (uVar5 < 0x17) {
            __dest = (void *)((long)puVar3 + 1);
            *(char *)puVar3 = (char)((int)uVar5 << 1);
            if (uVar5 != 0) goto LAB_005d35ac;
          }
          else {
            uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_002e2e80(puVar2,uVar6);
            puVar3[1] = uVar5;
            puVar3[2] = (ulong)__dest;
            *puVar3 = uVar6 | 1;
LAB_005d35ac:
            memcpy(__dest,__src,uVar5);
          }
          *(undefined1 *)((long)__dest + uVar5) = 0;
        }
      } while( true );
    }
  }
  return;
}


