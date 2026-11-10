/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b930; name: FUN_0060b930
 */


void FUN_0060b930(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 0060b944 to 0060b957 has its CatchHandler @ 0060b998 */
  uVar1 = FUN_0060b9c0(param_2,
                       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/N3rtc21SecureRandomGeneratorE"
                       ,0x40,param_1);
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 0060b968 to 0060b987 has its CatchHandler @ 0060b988 */
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/helpers.cc",0x80,"CreateRandomString(len, &str)",
                 PTR_DAT_043752a0);
  }
  return;
}


