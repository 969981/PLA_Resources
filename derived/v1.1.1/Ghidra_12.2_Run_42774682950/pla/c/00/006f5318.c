/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f5318; name: FUN_006f5318
 */


void FUN_006f5318(ulong *param_1,char *param_2,char *param_3,undefined4 param_4,ulong param_5,
                 ulong param_6,char *param_7,char *param_8,char *param_9)

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
                    /* try { // try from 006f562c to 006f5633 has its CatchHandler @ 006f5728 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_006f53c4;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *param_1 = uVar3 | 1;
    param_1[1] = sVar2;
    param_1[2] = (ulong)pvVar4;
LAB_006f53c4:
    memcpy(pvVar4,param_2,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[7] = (ulong)plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 006f5634 to 006f563b has its CatchHandler @ 006f5714 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 4) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_006f5450;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[4] = uVar3 | 1;
    param_1[5] = sVar2;
    param_1[6] = (ulong)pvVar4;
LAB_006f5450:
    memcpy(pvVar4,param_3,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[0xe] = (ulong)plVar1;
  sVar2 = strlen(param_7);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 006f563c to 006f5643 has its CatchHandler @ 006f56dc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x59);
    *(char *)(param_1 + 0xb) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_006f54e4;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[0xb] = uVar3 | 1;
    param_1[0xc] = sVar2;
    param_1[0xd] = (ulong)pvVar4;
LAB_006f54e4:
    memcpy(pvVar4,param_7,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[0x12] = (ulong)plVar1;
  sVar2 = strlen(param_8);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 006f5644 to 006f564b has its CatchHandler @ 006f56a8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x79);
    *(char *)(param_1 + 0xf) = (char)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_006f5574;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[0xf] = uVar3 | 1;
    param_1[0x10] = sVar2;
    param_1[0x11] = (ulong)pvVar4;
LAB_006f5574:
    memcpy(pvVar4,param_8,sVar2);
  }
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[0x16] = (ulong)plVar1;
  sVar2 = strlen(param_9);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 006f564c to 006f5653 has its CatchHandler @ 006f5654 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x99);
    *(char *)(param_1 + 0x13) = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_006f560c;
  }
  else {
    uVar3 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[0x13] = uVar3 | 1;
    param_1[0x14] = sVar2;
    param_1[0x15] = (ulong)pvVar4;
  }
  memcpy(pvVar4,param_9,sVar2);
LAB_006f560c:
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  return;
}


