/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128c148; name: FUN_0128c148
 */


undefined8 FUN_0128c148(short *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  FUN_02c4fb44(auStack_30,*param_1);
  if ((((*param_1 == 0) || (param_1[1] == 0)) || (iVar1 = FUN_02c4fc60(auStack_30,0xc), iVar1 != 0))
     || (iVar1 = FUN_02c4fc60(auStack_30,3), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


