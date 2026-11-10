/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331e758; name: FUN_0331e758
 */


uint FUN_0331e758(undefined8 *param_1)

{
  uint uVar1;
  long local_28;
  long local_18;
  
  local_18 = FUN_032e20b0(param_1,0x2000);
  if ((local_18 == 0) || (local_28 = FUN_032e20b0(&DAT_043568f0,0x2000), local_28 == 0)) {
    for (; param_1 != (undefined8 *)0x0; param_1 = (undefined8 *)param_1[1]) {
      if (param_1 == &DAT_043568f0) {
        uVar1 = 1;
        goto LAB_0331e7c8;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_032ddb80(&local_18,&local_28);
  }
LAB_0331e7c8:
  return uVar1 & 1;
}


