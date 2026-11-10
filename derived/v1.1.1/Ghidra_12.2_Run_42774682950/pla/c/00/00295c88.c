/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00295c88; name: FUN_00295c88
 */


void FUN_00295c88(ulong *param_1,char *param_2,char *param_3,char *param_4,long *param_5)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[3] = (ulong)plVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00295e7c to 00295e83 has its CatchHandler @ 00295ee0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00295d24;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *param_1 = uVar4 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)pvVar5;
LAB_00295d24:
    memcpy(pvVar5,param_2,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[7] = (ulong)plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00295e84 to 00295e8b has its CatchHandler @ 00295ecc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00295db0;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[4] = uVar4 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)pvVar5;
LAB_00295db0:
    memcpy(pvVar5,param_3,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[0xb] = (ulong)plVar1;
  sVar2 = strlen(param_4);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00295e8c to 00295e93 has its CatchHandler @ 00295e94 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x41);
    *(char *)(param_1 + 8) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00295e48;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[8] = uVar4 | 1;
    param_1[9] = sVar2;
    param_1[10] = (ulong)pvVar5;
  }
  memcpy(pvVar5,param_4,sVar2);
LAB_00295e48:
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  lVar3 = std::chrono::steady_clock::now();
  param_1[0xc] = lVar3 + *param_5 * 1000000000;
  return;
}


