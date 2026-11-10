/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ee1c0; name: FUN_006ee1c0
 */


void FUN_006ee1c0(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  
  plVar1 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar1;
  if ((*param_2 & 1) == 0) {
    uVar6 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar3;
  }
  else {
    uVar3 = param_2[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = (void *)param_2[2];
    if (uVar3 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar3 << 1);
      if (uVar3 != 0) goto LAB_006ee258;
    }
    else {
      uVar6 = uVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
      *param_1 = uVar6 | 1;
      param_1[1] = uVar3;
      param_1[2] = (ulong)pvVar5;
LAB_006ee258:
      memcpy(pvVar5,pvVar4,uVar3);
    }
    *(undefined1 *)((long)pvVar5 + uVar3) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar2 = param_1 + 4;
  *puVar2 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = (ulong)plVar1;
  if ((param_2[4] & 1) == 0) {
    uVar6 = param_2[5];
    uVar3 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    *puVar2 = uVar3;
    goto LAB_006ee30c;
  }
  uVar3 = param_2[5];
  if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 006ee344 to 006ee34b has its CatchHandler @ 006ee34c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = (void *)param_2[6];
  if (uVar3 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x21);
    *(char *)puVar2 = (char)((int)uVar3 << 1);
    if (uVar3 != 0) goto LAB_006ee2f8;
  }
  else {
    uVar6 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
    param_1[4] = uVar6 | 1;
    param_1[5] = uVar3;
    param_1[6] = (ulong)pvVar5;
LAB_006ee2f8:
    memcpy(pvVar5,pvVar4,uVar3);
  }
  *(undefined1 *)((long)pvVar5 + uVar3) = 0;
LAB_006ee30c:
  uVar6 = param_2[9];
  uVar3 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar6;
  param_1[8] = uVar3;
                    /* try { // try from 006ee324 to 006ee327 has its CatchHandler @ 006ee35c */
  FUN_006ee3c0(param_1 + 0xb,param_2 + 0xb);
  return;
}


