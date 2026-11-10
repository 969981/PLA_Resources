/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00609e68; name: FUN_00609e68
 */


void FUN_00609e68(byte *param_1,byte *param_2,int param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte bVar4;
  byte *pbVar5;
  
  puVar3 = PTR_DAT_04375300;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined **)(param_1 + 0x18) = puVar3 + 0x10;
  pbVar5 = param_1 + 0x20;
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar5[4] = 0;
  pbVar5[5] = 0;
  pbVar5[6] = 0;
  pbVar5[7] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
                    /* try { // try from 00609ecc to 00609f3b has its CatchHandler @ 00609f3c */
    FUN_00291910(param_1,pbVar2,uVar1);
  }
  bVar4 = FUN_00607680(param_2,param_1 + 0x18);
  param_1[0x40] = bVar4 & 1;
  if ((bVar4 & 1) == 0) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if ((uint)(CONCAT14(0xffff < param_3,param_3) >> 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\rtc_base/numerics/safe_conversions.h",0x29,
                 "IsValueInRangeForNumericType<Dst>(value)",PTR_DAT_043752a0);
  }
  *(short *)(param_1 + 0x38) = (short)param_3;
  return;
}


