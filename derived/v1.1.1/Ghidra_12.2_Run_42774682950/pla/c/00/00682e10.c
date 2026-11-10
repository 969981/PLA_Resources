/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00682e10; name: FUN_00682e10
 */


void FUN_00682e10(undefined8 *param_1,char *param_2,char *param_3)

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
                    /* try { // try from 00682e44 to 00682e6b has its CatchHandler @ 006830dc */
  FUN_002a45d4(param_1,"userSessions",0xc);
  FUN_002a45d4(param_1,&DAT_0389ffa9,1);
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  plVar2 = (long *)FUN_00612290();
  local_48 = plVar2;
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 00683068 to 0068306f has its CatchHandler @ 00683088 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar4 = (void *)((ulong)&local_60 | 1);
    if (sVar3 != 0) goto LAB_00682ee8;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    local_60 = uVar5 | 1;
    local_58 = sVar3;
    local_50 = pvVar4;
LAB_00682ee8:
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
                    /* try { // try from 00682f14 to 00682f1b has its CatchHandler @ 006830a8 */
  FUN_002a45d4(param_1,pvVar4,sVar3);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 00682f40 to 00682f7b has its CatchHandler @ 006830dc */
  FUN_002a45d4(param_1,&DAT_0389ffa9,1);
  FUN_002a45d4(param_1,"targets",7);
  FUN_002a45d4(param_1,&DAT_0389ffa9,1);
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  plVar2 = (long *)FUN_00612290();
  local_48 = plVar2;
  sVar3 = strlen(param_3);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 00683070 to 00683077 has its CatchHandler @ 00683078 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    pvVar4 = (void *)((ulong)&local_60 | 1);
    if (sVar3 == 0) goto LAB_00683008;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    local_60 = uVar5 | 1;
    local_58 = sVar3;
    local_50 = pvVar4;
  }
  memcpy(pvVar4,param_3,sVar3);
LAB_00683008:
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  if ((local_60 & 1) == 0) {
    sVar3 = local_60 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_60 + 1);
  }
  else {
    sVar3 = local_58;
    pvVar4 = local_50;
  }
                    /* try { // try from 00683024 to 0068302b has its CatchHandler @ 00683098 */
  FUN_002a45d4(param_1,pvVar4,sVar3);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return;
}


