/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002985e8; name: FUN_002985e8
 */


void FUN_002985e8(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  void *pvVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar1 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar1;
  if ((*param_2 & 1) == 0) {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  else {
    uVar5 = param_2[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar2 = (void *)param_2[2];
    if (uVar5 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00298680;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
      *param_1 = uVar6 | 1;
      param_1[1] = uVar5;
      param_1[2] = (ulong)pvVar4;
LAB_00298680:
      memcpy(pvVar4,pvVar2,uVar5);
    }
    *(undefined1 *)((long)pvVar4 + uVar5) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar3 = param_1 + 4;
  *puVar3 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = (ulong)plVar1;
  if ((param_2[4] & 1) == 0) {
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    *puVar3 = uVar5;
    return;
  }
  uVar5 = param_2[5];
  if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 0029874c to 00298753 has its CatchHandler @ 00298754 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar2 = (void *)param_2[6];
  if (uVar5 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x21);
    *(char *)puVar3 = (char)((int)uVar5 << 1);
    if (uVar5 == 0) goto LAB_0029872c;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
    param_1[4] = uVar6 | 1;
    param_1[5] = uVar5;
    param_1[6] = (ulong)pvVar4;
  }
  memcpy(pvVar4,pvVar2,uVar5);
LAB_0029872c:
  *(undefined1 *)((long)pvVar4 + uVar5) = 0;
  return;
}


