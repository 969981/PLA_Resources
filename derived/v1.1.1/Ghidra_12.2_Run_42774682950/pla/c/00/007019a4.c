/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007019a4; name: FUN_007019a4
 */


void FUN_007019a4(undefined4 *param_1,undefined4 param_2,char *param_3,undefined2 param_4,
                 char *param_5,char *param_6)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  void *pvVar4;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(param_1 + 8) = plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00701b8c to 00701b93 has its CatchHandler @ 00701bf0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00701a48;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(size_t *)(param_1 + 4) = sVar2;
    *(void **)(param_1 + 6) = pvVar4;
LAB_00701a48:
    memcpy(pvVar4,param_3,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 10) = param_4;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(param_1 + 0x12) = plVar1;
  sVar2 = strlen(param_5);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00701b94 to 00701b9b has its CatchHandler @ 00701bdc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x31);
    *(char *)(param_1 + 0xc) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00701ad8;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 0xc) = uVar3 | 1;
    *(size_t *)(param_1 + 0xe) = sVar2;
    *(void **)(param_1 + 0x10) = pvVar4;
LAB_00701ad8:
    memcpy(pvVar4,param_5,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(param_1 + 0x1a) = plVar1;
  sVar2 = strlen(param_6);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00701b9c to 00701ba3 has its CatchHandler @ 00701ba4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x51);
    *(char *)(param_1 + 0x14) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00701b70;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 0x14) = uVar3 | 1;
    *(size_t *)(param_1 + 0x16) = sVar2;
    *(void **)(param_1 + 0x18) = pvVar4;
  }
  memcpy(pvVar4,param_6,sVar2);
LAB_00701b70:
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  return;
}


