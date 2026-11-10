/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00294ef4; name: FUN_00294ef4
 */


void FUN_00294ef4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  void *pvVar3;
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
    pvVar3 = (void *)param_2[2];
    if (uVar5 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00294f8c;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
      *param_1 = uVar6 | 1;
      param_1[1] = uVar5;
      param_1[2] = (ulong)pvVar4;
LAB_00294f8c:
      memcpy(pvVar4,pvVar3,uVar5);
    }
    *(undefined1 *)((long)pvVar4 + uVar5) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar2 = param_1 + 4;
  *puVar2 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = (ulong)plVar1;
  if ((param_2[4] & 1) == 0) {
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    *puVar2 = uVar5;
  }
  else {
    uVar5 = param_2[5];
    if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 00295100 to 00295107 has its CatchHandler @ 00295154 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = (void *)param_2[6];
    if (uVar5 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x21);
      *(char *)puVar2 = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_0029502c;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
      param_1[4] = uVar6 | 1;
      param_1[5] = uVar5;
      param_1[6] = (ulong)pvVar4;
LAB_0029502c:
      memcpy(pvVar4,pvVar3,uVar5);
    }
    *(undefined1 *)((long)pvVar4 + uVar5) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar2 = param_1 + 8;
  *puVar2 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = (ulong)plVar1;
  if ((param_2[8] & 1) == 0) {
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    *puVar2 = uVar5;
    goto LAB_002950dc;
  }
  uVar5 = param_2[9];
  if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 00295108 to 0029510f has its CatchHandler @ 00295110 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = (void *)param_2[10];
  if (uVar5 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x41);
    *(char *)puVar2 = (char)((int)uVar5 << 1);
    if (uVar5 != 0) goto LAB_002950c8;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
    param_1[8] = uVar6 | 1;
    param_1[9] = uVar5;
    param_1[10] = (ulong)pvVar4;
LAB_002950c8:
    memcpy(pvVar4,pvVar3,uVar5);
  }
  *(undefined1 *)((long)pvVar4 + uVar5) = 0;
LAB_002950dc:
  param_1[0xc] = param_2[0xc];
  return;
}


