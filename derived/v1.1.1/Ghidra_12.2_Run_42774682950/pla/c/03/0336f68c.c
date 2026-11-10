/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336f68c; name: FUN_0336f68c
 */


void FUN_0336f68c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  FUN_03373a40(param_1,param_2,*param_3);
  FUN_03373a40(auStack_50,param_2 + 0x10,param_3[1]);
  FUN_03373a40(auStack_70,param_2 + 0x20,param_3[2]);
  FUN_03373860(param_1,param_1,auStack_50);
  FUN_03373860(param_1,param_1,auStack_70);
  return;
}


