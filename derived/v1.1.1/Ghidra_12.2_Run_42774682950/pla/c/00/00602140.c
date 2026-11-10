/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00602140; name: FUN_00602140
 */


byte * FUN_00602140(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_003d9f90(param_1,&LAB_006021c0);
  if (pbVar2 != (byte *)0x0) {
    return pbVar2;
  }
  pbVar2 = (byte *)FUN_002ebd50(1);
  if (*(code **)PTR_DAT_04375190 != (code *)0x0) {
    bVar1 = (**(code **)PTR_DAT_04375190)(param_1);
    *pbVar2 = bVar1 & 1;
  }
  FUN_003da0b0(param_1,&LAB_006021c0,pbVar2);
  return pbVar2;
}


