/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070a7d0; name: FUN_0070a7d0
 */


void FUN_0070a7d0(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar1 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar1;
  if ((*param_2 & 1) == 0) {
    uVar6 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar4;
  }
  else {
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      pvVar3 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_0070a868;
    }
    else {
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
      *param_1 = uVar6 | 1;
      param_1[1] = uVar4;
      param_1[2] = (ulong)pvVar3;
LAB_0070a868:
      memcpy(pvVar3,pvVar5,uVar4);
    }
    *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar2 = param_1 + 4;
  *puVar2 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = (ulong)plVar1;
  if ((param_2[4] & 1) == 0) {
    uVar6 = param_2[5];
    uVar4 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    *puVar2 = uVar4;
    goto LAB_0070a918;
  }
  uVar4 = param_2[5];
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 0070a944 to 0070a94b has its CatchHandler @ 0070a94c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar5 = (void *)param_2[6];
  if (uVar4 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 0x21);
    *(char *)puVar2 = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_0070a904;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
    param_1[4] = uVar6 | 1;
    param_1[5] = uVar4;
    param_1[6] = (ulong)pvVar3;
LAB_0070a904:
    memcpy(pvVar3,pvVar5,uVar4);
  }
  *(undefined1 *)((long)pvVar3 + uVar4) = 0;
LAB_0070a918:
  uVar6 = param_2[9];
  uVar4 = param_2[8];
  uVar7 = param_2[10];
  uVar9 = param_2[0xd];
  uVar8 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar7;
  param_1[0xd] = uVar9;
  param_1[0xc] = uVar8;
  param_1[9] = uVar6;
  param_1[8] = uVar4;
  return;
}


