/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02623ffc; name: FUN_02623ffc
 */


bool FUN_02623ffc(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_30 [12];
  undefined4 local_24;
  
  local_24 = param_2;
  uVar2 = FUN_026240b4(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  FUN_02624164(auStack_30,uVar2);
  iVar1 = FUN_026241ac(param_1,local_24);
  plVar3 = (long *)FUN_026240f4(auStack_30);
  (**(code **)(*plVar3 + 0x70))(plVar3,local_24,iVar1 == 3);
  FUN_026242e0(auStack_30);
  return iVar1 == 3;
}


