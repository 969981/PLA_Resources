/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bd4b0; name: FUN_013bd4b0
 */


void FUN_013bd4b0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  local_48 = param_1[4];
  lVar3 = param_1[2];
  lVar5 = param_1[3];
  if (lVar2 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  iVar6 = nn::time::ToCalendarTime
                    ((CalendarTime *)&local_50,(CalendarAdditionalInfo *)&local_68,
                     (PosixTime *)&local_48);
  local_70 = 0x2d1369c00638f590;
  if (iVar6 != 0) {
    local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    iVar6 = 0;
    uVar9 = 0;
    goto LAB_013bd52c;
  }
  uVar1 = -local_58._4_4_;
  if (-1 < local_58) {
    uVar1 = local_58._4_4_;
  }
  uVar9 = (long)((ulong)uVar1 * 0x12345678a000) >> 0x38;
  uVar1 = (int)(uVar1 + (char)((ulong)uVar1 * 0x12345678a000 >> 0x38) * -0xe10) / 0x3c;
  if ((int)local_58._4_4_ < 1) {
    if (local_58 < 0) {
      uVar7 = 0x2d136dc00638fc5c;
      uVar8 = 0x72c0063904db;
      goto LAB_013bd6b0;
    }
    local_70 = 0x2d1370c006390175;
  }
  else {
    uVar7 = 0x2d136ec00638fe0f;
    uVar8 = 0x6fc00638ffc2;
LAB_013bd6b0:
    local_70 = uVar8 | 0x2d13000000000000;
    if ((uVar1 & 0xff) != 0) {
      local_70 = uVar7;
    }
  }
  iVar6 = (int)(char)uVar1;
LAB_013bd52c:
  FUN_02c2e7d0(lVar3,&local_70,lVar4);
  FUN_02c395d0(lVar5,0,(int)(short)local_50 +
                       (((int)(short)local_50 / 100 + ((int)(short)local_50 >> 0x1f)) -
                       (int)((long)(short)local_50 * 0x51eb851f >> 0x3f)) * -100,2,2,1);
  FUN_02c395d0(lVar5,1,(long)local_50._2_1_,2,2,1);
  FUN_02c395d0(lVar5,2,(long)local_50._3_1_,2,2,1);
  FUN_02c395d0(lVar5,3,(long)local_50._4_1_,2,2,1);
  FUN_02c395d0(lVar5,4,(long)local_50._5_1_,2,2,1);
  FUN_02c395d0(lVar5,5,uVar9 & 0xffffffff,2,2,1);
  FUN_02c395d0(lVar5,6,iVar6,2,2,1);
  FUN_02c333a8(lVar5,lVar2,lVar4);
  return;
}


