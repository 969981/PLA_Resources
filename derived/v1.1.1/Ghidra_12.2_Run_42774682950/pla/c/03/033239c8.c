/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033239c8; name: FUN_033239c8
 */


undefined8 FUN_033239c8(char *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  FileHandle aFStack_c8 [152];
  
  iVar1 = FUN_032c4c10(param_1,0x3a,0,0x7fffffff);
  iVar2 = FUN_032c4be0(param_1,0x3a);
  if (iVar1 == iVar2) {
    FUN_032c4d5c(aFStack_c8,param_1);
    FUN_032c5c98(aFStack_c8,iVar1 + 1);
    FUN_032c5f98(aFStack_c8);
    uVar3 = FUN_032c521c(aFStack_c8,&DAT_0390f73e);
    FUN_032c4ce8(aFStack_c8);
    if (((uVar3 & 1) == 0) && (iVar1 = nn::fs::OpenFile(aFStack_c8,param_1,1), iVar1 == 0)) {
      uVar4 = FUN_032cf5b0(0x38);
      FUN_03323a94(uVar4,aFStack_c8);
      return uVar4;
    }
  }
  return 0;
}


