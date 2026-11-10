/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d72c0; name: FUN_006d72c0
 */


void FUN_006d72c0(size_t *param_1,long param_2,char *param_3)

{
  long *plVar1;
  size_t sVar2;
  size_t *psVar3;
  void *__dest;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  size_t sVar7;
  size_t *local_70;
  size_t local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  size_t *local_50;
  size_t local_48;
  void *pvStack_40;
  long *local_38;
  
  local_48 = 0;
  pvStack_40 = (void *)FUN_00612290();
  local_38 = (long *)0x0;
  local_50 = &local_48;
  if (*(char *)(param_2 + 0x28) == '\0') {
    sVar2 = 0;
    local_70 = &local_68;
    local_58 = 0;
    local_68 = local_48;
    uStack_60 = pvStack_40;
  }
  else {
                    /* try { // try from 006d7300 to 006d7307 has its CatchHandler @ 006d74f0 */
    FUN_006d7544(&local_70,param_2 + 0x30);
    sVar2 = local_48;
  }
  FUN_02767254(&local_50,sVar2);
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_50 = (size_t *)0x0;
  plVar1 = (long *)FUN_00612290();
  local_38 = plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 006d74d4 to 006d74db has its CatchHandler @ 006d74e8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_50 = (size_t *)CONCAT71(local_50._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_50 | 1);
    if (sVar2 != 0) goto LAB_006d73b0;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    local_50 = (size_t *)(uVar4 | 1);
    local_48 = sVar2;
    pvStack_40 = pvVar5;
LAB_006d73b0:
    memcpy(pvVar5,param_3,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
                    /* try { // try from 006d73c4 to 006d73cf has its CatchHandler @ 006d7508 */
  psVar3 = (size_t *)FUN_006d768c(&local_70,&local_50);
  if (((ulong)local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))(local_38,pvStack_40,(ulong)local_50 & 0xfffffffffffffffe,1);
  }
  if (&local_68 == psVar3) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    sVar2 = FUN_00612290();
    param_1[2] = 0;
    param_1[3] = sVar2;
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_006d74b4;
  }
  plVar1 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (size_t)plVar1;
  if ((psVar3[8] & 1) == 0) {
    sVar7 = psVar3[9];
    sVar2 = psVar3[8];
    param_1[2] = psVar3[10];
    param_1[1] = sVar7;
    *param_1 = sVar2;
    goto LAB_006d74b4;
  }
  uVar4 = psVar3[9];
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 006d74dc to 006d74e3 has its CatchHandler @ 006d74e4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar5 = (void *)psVar3[10];
  if (uVar4 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_006d74a0;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar6,1);
    param_1[1] = uVar4;
    param_1[2] = (size_t)__dest;
    *param_1 = uVar6 | 1;
LAB_006d74a0:
    memcpy(__dest,pvVar5,uVar4);
  }
  *(undefined1 *)((long)__dest + uVar4) = 0;
LAB_006d74b4:
  FUN_02767254(&local_70,local_68);
  return;
}


