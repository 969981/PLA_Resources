/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337a23c; name: FUN_0337a23c
 */


long FUN_0337a23c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  ulong uVar6;
  uint uVar7;
  ulong local_70 [2];
  undefined *local_60;
  uint *puStack_58;
  uint local_44;
  
  uVar6 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = *param_5;
  uVar3 = (uVar7 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  local_44 = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_44 = uVar3;
  }
  uVar3 = uVar7 & 0x3fffffff;
  local_70[0] = (ulong)local_44 << 5;
  if ((int)local_44 < (int)uVar3 || 0x3fffffff < (int)local_44) {
    local_70[1] = 1;
    puStack_58 = &local_44;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_70 + 1);
    uVar7 = *param_5;
    uVar3 = uVar7 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_70[0],local_70);
  if (0 < (int)param_4) {
    puVar4 = (undefined1 *)(lVar2 + 0x18);
    pcVar5 = (char *)(param_3 + 0x18);
    do {
      uVar1 = *(undefined8 *)(pcVar5 + -0x10);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(pcVar5 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = uVar1;
      *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(pcVar5 + -8);
      *puVar4 = 0;
      if (*pcVar5 != '\0') {
        *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(pcVar5 + -4);
        *puVar4 = 1;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 0x20;
      pcVar5 = pcVar5 + 0x20;
    } while (uVar6 != 0);
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar3 << 5);
  }
  if (local_70[0] < 0x7ffffffe0) {
    uVar7 = (uint)(local_70[0] >> 5);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *param_5 = uVar7;
  return lVar2;
}


