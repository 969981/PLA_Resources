/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7368; name: FUN_02ec7368
 */


undefined8 FUN_02ec7368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_24 [4];
  
  lVar1 = FUN_02ec7a5c(param_1 + 0xe0,param_2,auStack_24);
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  else {
    iVar3 = *(int *)(lVar1 + 8);
    if (iVar3 == 0) {
      FUN_02ea7ffc(param_2);
      iVar3 = *(int *)(lVar1 + 8);
    }
    uVar2 = 1;
    *(int *)(lVar1 + 8) = iVar3 + 1;
  }
  return uVar2;
}


