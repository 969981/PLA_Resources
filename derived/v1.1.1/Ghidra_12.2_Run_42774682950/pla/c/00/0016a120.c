/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016a120; name: FUN_0016a120
 */


undefined8 FUN_0016a120(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x101) {
    uVar1 = FUN_00162fa0(*(undefined8 *)(param_1 + 0x38),&DAT_038ee34c);
    return uVar1;
  }
  if (param_2 < 0x121) {
    uVar1 = FUN_00162fa0(*(undefined8 *)(param_1 + 0x38),&DAT_038ee351,
                         *(undefined8 *)(&DAT_0411a2b0 + (long)param_2 * 8));
    return uVar1;
  }
  return *(undefined8 *)(&DAT_0411a2b0 + (long)param_2 * 8);
}


