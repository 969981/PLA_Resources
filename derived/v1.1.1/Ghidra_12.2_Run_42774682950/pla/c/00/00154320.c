/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154320; name: FUN_00154320
 */


void FUN_00154320(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_a0 [40];
  int local_78;
  undefined1 auStack_68 [72];
  
  iVar1 = FUN_00159110(param_1,param_2,auStack_a0);
  if (iVar1 != 0) {
    FUN_001594c0(param_1,&DAT_039a7c86,auStack_a0);
    if (0 < local_78) {
      FUN_00151650(param_1,"%s:%d: ",auStack_68);
      return;
    }
  }
  FUN_00151650(param_1,&DAT_03996322);
  return;
}


