/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bde340; name: FUN_01bde340
 */


undefined8 FUN_01bde340(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01a59ec8();
  uVar2 = 0;
  if ((param_2 < 3) && ((uVar1 & 1) != 0)) {
    FUN_01a51334(param_1,&DAT_03a7cc28,*(undefined4 *)(&DAT_03a7cbb0 + (long)(int)param_2 * 4));
    uVar2 = 1;
    FUN_01a4f4d4(param_1,&DAT_03a7cc30,1);
  }
  return uVar2;
}


