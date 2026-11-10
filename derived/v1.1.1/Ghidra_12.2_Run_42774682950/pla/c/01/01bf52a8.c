/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf52a8; name: FUN_01bf52a8
 */


bool FUN_01bf52a8(long param_1,undefined4 param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01a59ec8();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_01a51334(param_1,param_1 + 0xfe0,param_2);
    FUN_01a4f4d4(param_1,param_1 + 0xff8,1);
    FUN_01a4f4d4(param_1,&DAT_03a7cce8,0);
  }
  return bVar1;
}


