/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00682930; name: FUN_00682930
 */


void FUN_00682930(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_50;
  size_t local_48;
  void *local_40;
  long *local_38;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00612290();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 0068295c to 00682983 has its CatchHandler @ 00682ac8 */
  FUN_002a45d4(param_1,&DAT_03942da7,4);
  FUN_002a45d4(param_1,&DAT_0389ffa9,1);
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  plVar2 = (long *)FUN_00612290();
  local_38 = plVar2;
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 00682a6c to 00682a73 has its CatchHandler @ 00682a74 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)sVar3 << 1));
    pvVar4 = (void *)((ulong)&local_50 | 1);
    if (sVar3 == 0) goto LAB_00682a10;
  }
  else {
    uVar5 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    local_50 = uVar5 | 1;
    local_48 = sVar3;
    local_40 = pvVar4;
  }
  memcpy(pvVar4,param_2,sVar3);
LAB_00682a10:
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  if ((local_50 & 1) == 0) {
    sVar3 = local_50 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_50 + 1);
  }
  else {
    sVar3 = local_48;
    pvVar4 = local_40;
  }
                    /* try { // try from 00682a2c to 00682a33 has its CatchHandler @ 00682a84 */
  FUN_002a45d4(param_1,pvVar4,sVar3);
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
  }
  return;
}


