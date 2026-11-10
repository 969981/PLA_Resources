/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e4a0; name: FUN_0044e4a0
 */


undefined4 FUN_0044e4a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_34 [5];
  
  FUN_0044abd0(param_1,0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = FUN_0044f830();
  iVar1 = FUN_00444ea0(uVar3,(long)iVar1,local_34,0,uVar2,0);
  if (iVar1 == 0) {
    return 0;
  }
  return local_34[0];
}


