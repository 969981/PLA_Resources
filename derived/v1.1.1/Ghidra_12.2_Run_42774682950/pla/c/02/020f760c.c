/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f760c; name: FUN_020f760c
 */


void FUN_020f760c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = FUN_020ecf68(param_1,1,&local_28);
  local_28 = 0;
  uVar1 = FUN_020f7444(param_1,&local_28,param_2,uVar2);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar1 & 1);
  return;
}


