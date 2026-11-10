/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079d260; name: FUN_0079d260
 */


void FUN_0079d260(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00612290();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 0079d294 to 0079d2bb has its CatchHandler @ 0079d52c */
  FUN_002a45d4(param_1,"tenants",7);
  FUN_002a45d4(param_1,&DAT_0389ffa9,1);
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  plVar2 = (long *)FUN_00612290();
  local_48 = plVar2;
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 0079d4b8 to 0079d4bf has its CatchHandler @ 0079d4d8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar4 = (void *)((ulong)&local_60 | 1);
    if (sVar3 != 0) goto LAB_0079d338;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    local_60 = uVar5 | 1;
    local_58 = sVar3;
    local_50 = pvVar4;
LAB_0079d338:
    memcpy(pvVar4,param_2,sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  if ((local_60 & 1) == 0) {
    sVar3 = local_60 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_60 + 1);
  }
  else {
    sVar3 = local_58;
    pvVar4 = local_50;
  }
                    /* try { // try from 0079d364 to 0079d36b has its CatchHandler @ 0079d4f8 */
  FUN_002a45d4(param_1,pvVar4,sVar3);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 0079d390 to 0079d3cb has its CatchHandler @ 0079d52c */
  FUN_002a45d4(param_1,&DAT_0389ffa9,1);
  FUN_002a45d4(param_1,"content",7);
  FUN_002a45d4(param_1,&DAT_0389ffa9,1);
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  plVar2 = (long *)FUN_00612290();
  local_48 = plVar2;
  sVar3 = strlen(param_3);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 0079d4c0 to 0079d4c7 has its CatchHandler @ 0079d4c8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar4 = (void *)((ulong)&local_60 | 1);
    if (sVar3 == 0) goto LAB_0079d458;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    local_60 = uVar5 | 1;
    local_58 = sVar3;
    local_50 = pvVar4;
  }
  memcpy(pvVar4,param_3,sVar3);
LAB_0079d458:
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  if ((local_60 & 1) == 0) {
    sVar3 = local_60 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_60 + 1);
  }
  else {
    sVar3 = local_58;
    pvVar4 = local_50;
  }
                    /* try { // try from 0079d474 to 0079d47b has its CatchHandler @ 0079d4e8 */
  FUN_002a45d4(param_1,pvVar4,sVar3);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return;
}


