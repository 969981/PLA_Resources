/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00609f60; name: FUN_00609f60
 */


void FUN_00609f60(undefined8 *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_04375300;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = puVar2 + 0x10;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  if ((uint)(CONCAT14(0xffff < param_3,param_3) >> 0x1f) != 0) {
                    /* try { // try from 00609fc4 to 00609fe3 has its CatchHandler @ 00609fe4 */
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc\\rtc_base/numerics/safe_conversions.h",0x29,
                 "IsValueInRangeForNumericType<Dst>(value)",PTR_DAT_043752a0);
  }
  *(short *)(param_1 + 7) = (short)param_3;
  return;
}


