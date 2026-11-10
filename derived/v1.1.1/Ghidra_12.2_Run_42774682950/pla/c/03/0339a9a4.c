/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a9a4; name: FUN_0339a9a4
 */


bool FUN_0339a9a4(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0339aa00(param_1,param_3);
  if (iVar2 < param_3) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_032c4860(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


