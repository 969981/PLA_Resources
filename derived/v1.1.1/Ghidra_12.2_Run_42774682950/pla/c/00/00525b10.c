/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00525b10; name: FUN_00525b10
 */


void FUN_00525b10(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 & 1) == 0) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  else {
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar1 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      pvVar3 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_00525ba0;
    }
    else {
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      *param_1 = uVar5 | 1;
      param_1[1] = uVar4;
      param_1[2] = (ulong)pvVar3;
LAB_00525ba0:
      memcpy(pvVar3,pvVar1,uVar4);
    }
    *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  }
  puVar2 = param_1 + 3;
  *puVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((param_2[3] & 1) == 0) {
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    *puVar2 = uVar4;
    return;
  }
  uVar4 = param_2[4];
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 00525c60 to 00525c67 has its CatchHandler @ 00525c68 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar1 = (void *)param_2[5];
  if (uVar4 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 0x19);
    *(char *)puVar2 = (char)((int)uVar4 << 1);
    if (uVar4 == 0) goto LAB_00525c40;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    param_1[3] = uVar5 | 1;
    param_1[4] = uVar4;
    param_1[5] = (ulong)pvVar3;
  }
  memcpy(pvVar3,pvVar1,uVar4);
LAB_00525c40:
  *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  return;
}


