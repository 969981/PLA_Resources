/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cff30; name: FUN_032cff30
 */


undefined8
FUN_032cff30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 uVar1;
  
  FUN_032d0064(&DAT_04445710,param_1,param_2);
  FUN_032d2538(&DAT_04446c80,param_1,&DAT_04445710,&DAT_04445718,param_5);
  DAT_04445700 = &DAT_04446c80;
  DAT_04449ee0 = &DAT_04445710;
  FUN_032d4998(&DAT_04446c80);
  DAT_04445708 = &LAB_032cfff0;
  uVar1 = (**(code **)(DAT_04446c80 + 0x10))(&DAT_04446c80,param_3,3);
  thunk_FUN_0333d334();
  return uVar1;
}


