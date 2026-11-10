/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00542580; name: FUN_00542580
 */


undefined * FUN_00542580(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined *local_20;
  long lStack_18;
  
  uStack_28 = 0;
  local_20 = (undefined *)0x0;
  lStack_18 = 0;
  local_30 = param_3;
  uVar1 = FUN_00540fb0(&local_30,param_1,param_2);
  if ((uVar1 & 1) == 0) {
    *param_4 = 0;
    return (undefined *)0x0;
  }
  *param_4 = lStack_18 - (long)local_20;
  if (lStack_18 - (long)local_20 == 0) {
    return &DAT_0439ecc8;
  }
  if (local_20 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("e.ptr","external/upb/upb/encode.c",0x19f,"upb_encode");
  }
  return local_20;
}


