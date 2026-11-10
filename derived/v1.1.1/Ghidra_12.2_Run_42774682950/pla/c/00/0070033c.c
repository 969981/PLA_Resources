/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070033c; name: FUN_0070033c
 */


void FUN_0070033c(ulong *param_1,char *param_2,undefined2 param_3,undefined4 param_4,char *param_5)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  void *pvVar4;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[3] = (ulong)plVar1;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00700494 to 0070049b has its CatchHandler @ 007004b8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_007003d8;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *param_1 = uVar3 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)pvVar4;
LAB_007003d8:
    memcpy(pvVar4,param_2,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[8] = (ulong)plVar1;
  sVar2 = strlen(param_5);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0070049c to 007004a3 has its CatchHandler @ 007004a4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x29);
    *(char *)(param_1 + 5) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00700478;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[5] = uVar3 | 1;
    param_1[6] = sVar2;
    param_1[7] = (ulong)pvVar4;
  }
  memcpy(pvVar4,param_5,sVar2);
LAB_00700478:
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  return;
}


