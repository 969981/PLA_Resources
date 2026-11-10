/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006547cc; name: FUN_006547cc
 */


void FUN_006547cc(ulong *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  ulong *puVar4;
  ulong uVar5;
  void *pvVar6;
  
  plVar1 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar1;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar5 = *(ulong *)(param_2 + 0x18);
    uVar2 = *(ulong *)(param_2 + 0x10);
    param_1[2] = *(ulong *)(param_2 + 0x20);
    param_1[1] = uVar5;
    *param_1 = uVar2;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x18);
    if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 006549d8 to 006549df has its CatchHandler @ 00654a3c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x20);
    if (uVar2 < 0x17) {
      pvVar6 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar2 << 1);
      if (uVar2 != 0) goto LAB_00654868;
    }
    else {
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
      *param_1 = uVar5 | 1;
      param_1[1] = uVar2;
      param_1[2] = (ulong)pvVar6;
LAB_00654868:
      memcpy(pvVar6,pvVar3,uVar2);
    }
    *(undefined1 *)((long)pvVar6 + uVar2) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar4 = param_1 + 4;
  *puVar4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = (ulong)plVar1;
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    uVar5 = *(ulong *)(param_2 + 0x38);
    uVar2 = *(ulong *)(param_2 + 0x30);
    param_1[6] = *(ulong *)(param_2 + 0x40);
    param_1[5] = uVar5;
    *puVar4 = uVar2;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x38);
    if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 006549e0 to 006549e7 has its CatchHandler @ 00654a28 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x40);
    if (uVar2 < 0x17) {
      pvVar6 = (void *)((long)param_1 + 0x21);
      *(char *)puVar4 = (char)((int)uVar2 << 1);
      if (uVar2 != 0) goto LAB_00654908;
    }
    else {
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
      param_1[4] = uVar5 | 1;
      param_1[5] = uVar2;
      param_1[6] = (ulong)pvVar6;
LAB_00654908:
      memcpy(pvVar6,pvVar3,uVar2);
    }
    *(undefined1 *)((long)pvVar6 + uVar2) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar4 = param_1 + 8;
  *puVar4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = (ulong)plVar1;
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    uVar5 = *(ulong *)(param_2 + 0x58);
    uVar2 = *(ulong *)(param_2 + 0x50);
    param_1[10] = *(ulong *)(param_2 + 0x60);
    param_1[9] = uVar5;
    *puVar4 = uVar2;
    goto LAB_006549b8;
  }
  uVar2 = *(ulong *)(param_2 + 0x58);
  if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 006549e8 to 006549ef has its CatchHandler @ 006549f0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_2 + 0x60);
  if (uVar2 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x41);
    *(char *)puVar4 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_006549a4;
  }
  else {
    uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    param_1[8] = uVar5 | 1;
    param_1[9] = uVar2;
    param_1[10] = (ulong)pvVar6;
LAB_006549a4:
    memcpy(pvVar6,pvVar3,uVar2);
  }
  *(undefined1 *)((long)pvVar6 + uVar2) = 0;
LAB_006549b8:
  uVar2 = FUN_00612430();
  param_1[0xc] = 0;
  param_1[0xd] = uVar2;
  FUN_006d99d8(param_1 + 0xe);
  return;
}


