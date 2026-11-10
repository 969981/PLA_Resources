/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a78100; name: FUN_01a78100
 */


undefined1  [16] FUN_01a78100(long *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  param_1 = (long *)*param_1;
  if ((char)param_1[0x48] == '\0') {
    auVar1 = (**(code **)(*param_1 + 0x120))(param_1,*param_2);
    return auVar1;
  }
  auVar1._8_8_ = DAT_0388a148;
  auVar1._0_8_ = DAT_0388a140;
  return auVar1;
}


