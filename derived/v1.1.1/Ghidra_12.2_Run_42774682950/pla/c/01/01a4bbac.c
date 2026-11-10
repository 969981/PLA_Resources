/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4bbac; name: FUN_01a4bbac
 */


undefined1  [16] FUN_01a4bbac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar3;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + 0x370) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x348);
    uVar1 = *(undefined8 *)(param_1 + 0x340);
  }
  else {
    auVar2 = FUN_01a4b7e0(param_1);
    uVar1 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20) - auVar2._4_4_,
                     (float)*(undefined8 *)(param_1 + 0x340) - auVar2._0_4_);
    uVar3 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x348) >> 0x20) - auVar2._12_4_,
                     (float)*(undefined8 *)(param_1 + 0x348) - auVar2._8_4_);
  }
  auVar2._8_8_ = uVar3;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


