/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0175f070; name: FUN_0175f070
 */


void FUN_0175f070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  undefined8 local_18;
  
  local_18 = 0;
  FUN_0175f0cc(auStack_40,param_1,&local_18,param_2,param_3);
  FUN_0014ff10(param_1,0);
  uVar1 = FUN_0175f2b8();
  FUN_0175f264(param_1,uVar1,auStack_40);
  return;
}


