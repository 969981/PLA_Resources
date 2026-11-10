/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dbe4c; name: FUN_006dbe4c
 */


void FUN_006dbe4c(undefined8 param_1,ulong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  size_t sVar2;
  char *pcVar3;
  void *pvVar4;
  ulong uVar5;
  
  pcVar3 = (char *)*param_3;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar1 = (long *)FUN_00612290();
  param_2[3] = (ulong)plVar1;
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_2 + 1);
    *(char *)param_2 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_006dbedc;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    *param_2 = uVar5 | 1;
    param_2[1] = sVar2;
    param_2[2] = (ulong)pvVar4;
LAB_006dbedc:
    memcpy(pvVar4,pcVar3,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  pcVar3 = (char *)*param_4;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  plVar1 = (long *)FUN_00612290();
  param_2[7] = (ulong)plVar1;
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 006dbf98 to 006dbf9f has its CatchHandler @ 006dbfa0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_2 + 0x21);
    *(char *)(param_2 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_006dbf78;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    param_2[4] = uVar5 | 1;
    param_2[5] = sVar2;
    param_2[6] = (ulong)pvVar4;
  }
  memcpy(pvVar4,pcVar3,sVar2);
LAB_006dbf78:
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  return;
}


