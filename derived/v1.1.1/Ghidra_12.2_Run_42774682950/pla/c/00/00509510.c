/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00509510; name: FUN_00509510
 */


long FUN_00509510(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auStack_a0 [80];
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x1e0);
  if (lVar1 != 0) {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
                    /* try { // try from 0050955c to 00509567 has its CatchHandler @ 005095cc */
    FUN_003ee80c(auStack_a0,param_2);
                    /* try { // try from 0050956c to 0050957b has its CatchHandler @ 005095b4 */
    FUN_00506efc(lVar1,&local_50,auStack_a0,*param_3);
    FUN_003ee5f8(auStack_a0);
    if ((local_50 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
    }
  }
  return lVar1;
}


