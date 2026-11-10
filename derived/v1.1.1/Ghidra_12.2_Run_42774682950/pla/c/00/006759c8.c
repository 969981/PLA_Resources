/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006759c8; name: FUN_006759c8
 */


void FUN_006759c8(byte *param_1,byte param_2,char *param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,char *param_8)

{
  long *plVar1;
  size_t sVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  
  *param_1 = param_2 & 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  pbVar3 = param_1 + 8;
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(param_1 + 0x20) = plVar1;
  sVar2 = strlen(param_3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00675bc8 to 00675bcf has its CatchHandler @ 00675c2c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pbVar5 = param_1 + 9;
    *pbVar3 = (byte)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00675a7c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pbVar5 = (byte *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 8) = uVar4 | 1;
    *(size_t *)(param_1 + 0x10) = sVar2;
    *(byte **)(param_1 + 0x18) = pbVar5;
LAB_00675a7c:
    memcpy(pbVar5,param_3,sVar2);
  }
  pbVar5[sVar2] = 0;
  pbVar3 = param_1 + 0x28;
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(param_1 + 0x40) = plVar1;
  sVar2 = strlen(param_4);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00675bd0 to 00675bd7 has its CatchHandler @ 00675c18 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pbVar5 = param_1 + 0x29;
    *pbVar3 = (byte)((int)sVar2 << 1);
    if (sVar2 != 0) goto LAB_00675b08;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pbVar5 = (byte *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 0x28) = uVar4 | 1;
    *(size_t *)(param_1 + 0x30) = sVar2;
    *(byte **)(param_1 + 0x38) = pbVar5;
LAB_00675b08:
    memcpy(pbVar5,param_4,sVar2);
  }
  pbVar5[sVar2] = 0;
  pbVar3 = param_1 + 0x58;
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  *(undefined4 *)(param_1 + 0x48) = param_5;
  *(undefined4 *)(param_1 + 0x4c) = param_6;
  *(undefined4 *)(param_1 + 0x50) = param_7;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(param_1 + 0x70) = plVar1;
  sVar2 = strlen(param_8);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00675bd8 to 00675bdf has its CatchHandler @ 00675be0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pbVar5 = param_1 + 0x59;
    *pbVar3 = (byte)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00675ba8;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pbVar5 = (byte *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 0x58) = uVar4 | 1;
    *(size_t *)(param_1 + 0x60) = sVar2;
    *(byte **)(param_1 + 0x68) = pbVar5;
  }
  memcpy(pbVar5,param_8,sVar2);
LAB_00675ba8:
  pbVar5[sVar2] = 0;
  return;
}


