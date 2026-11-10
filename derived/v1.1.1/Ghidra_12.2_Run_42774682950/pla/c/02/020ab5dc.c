/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ab5dc; name: FUN_020ab5dc
 */


void FUN_020ab5dc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 uStack_18;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  uVar2 = FUN_020aa950(param_1,1,&local_28);
  uStack_18 = 0;
  FUN_020ab468(param_1,&uStack_18,lVar1 + 0xd8,uVar2);
  FUN_0014ff10(param_1,0);
  return;
}


