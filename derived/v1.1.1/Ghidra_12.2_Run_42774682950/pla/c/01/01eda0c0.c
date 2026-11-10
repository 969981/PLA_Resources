/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eda0c0; name: FUN_01eda0c0
 */


void FUN_01eda0c0(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    FUN_00151860(param_2,PTR_DAT_04380778);
    FUN_00150260(param_2,0xffffffff);
    uVar1 = FUN_00155070(param_2,0xfff0b9d8);
    FUN_0014ff10(param_2,0xfffffffe);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}


