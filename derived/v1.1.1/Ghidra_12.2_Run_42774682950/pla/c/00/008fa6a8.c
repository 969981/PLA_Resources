/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008fa6a8; name: FUN_008fa6a8
 */


void FUN_008fa6a8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_008fa720();
  FUN_008facf0(uVar2,param_3);
  iVar1 = FUN_00154450(param_1,*param_2);
  if (iVar1 != 0) {
    FUN_001516f0(param_1,&LAB_008fa870,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  return;
}


