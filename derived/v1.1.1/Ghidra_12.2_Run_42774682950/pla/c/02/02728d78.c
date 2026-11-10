/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728d78; name: FUN_02728d78
 */


void FUN_02728d78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined4 local_40 [2];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_013b2b18();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437b480 = lVar2;
  uVar3 = *(undefined8 *)(lVar2 + 0x50);
  local_40[0] = 1;
  local_38 = 0x2000;
  FUN_02739024(auStack_50,param_3);
  FUN_02738f98(param_1,uVar3,param_2,local_40,auStack_50);
  FUN_013b348c(auStack_50);
  FUN_013b22f8(*param_1);
  return;
}


