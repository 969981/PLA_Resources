/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070a414; name: FUN_0070a414
 */


void FUN_0070a414(ulong *param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 *param_5)

{
  long *plVar1;
  size_t sVar2;
  void *pvVar3;
  ulong uVar4;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[3] = (ulong)plVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0070a594 to 0070a59b has its CatchHandler @ 0070a5b8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_0070a4b0;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *param_1 = uVar4 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)pvVar3;
LAB_0070a4b0:
    memcpy(pvVar3,param_2,sVar2);
  }
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[7] = (ulong)plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0070a59c to 0070a5a3 has its CatchHandler @ 0070a5a4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_0070a548;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[4] = uVar4 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)pvVar3;
  }
  memcpy(pvVar3,param_3,sVar2);
LAB_0070a548:
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar4 = DAT_0388a6c0;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)((long)param_1 + 0x44) = *param_5;
  param_1[9] = uVar4;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


