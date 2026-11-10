/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01053030; name: FUN_01053030
 */


undefined8 FUN_01053030(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_0104f954();
  puVar1 = DAT_043b90e0;
  if ((DAT_043b90d0 & 1) == 0) {
    puVar1 = &DAT_043b90d1;
  }
  FUN_00151a70(param_1,0xfff0b9d8,puVar1);
  iVar2 = FUN_00150310(param_1,0xffffffff);
  if ((iVar2 == 0) || (iVar2 = FUN_00150750(param_1,0xffffffff,param_2), iVar2 != 1)) {
    uVar4 = 0;
    uVar3 = 0xfffffffe;
  }
  else {
    uVar4 = 1;
    uVar3 = 0xfffffffd;
  }
  FUN_0014ff10(param_1,uVar3);
  return uVar4;
}


