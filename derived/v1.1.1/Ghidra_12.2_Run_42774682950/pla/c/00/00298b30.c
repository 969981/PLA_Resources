/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00298b30; name: FUN_00298b30
 */


void FUN_00298b30(ulong *param_1,char *param_2,char *param_3)

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
                    /* try { // try from 00298c70 to 00298c77 has its CatchHandler @ 00298c94 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00298bc0;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *param_1 = uVar4 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)pvVar3;
LAB_00298bc0:
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
                    /* try { // try from 00298c78 to 00298c7f has its CatchHandler @ 00298c80 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00298c58;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    param_1[4] = uVar4 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)pvVar3;
  }
  memcpy(pvVar3,param_3,sVar2);
LAB_00298c58:
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  return;
}


