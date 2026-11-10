/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021263c; name: FUN_0021263c
 */


undefined8 FUN_0021263c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0020d65c(param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xfffffffffffffe0b;
  }
  else {
    if ((ulong)(param_4 * 6) <= param_2) {
      uVar2 = FUN_0020ce40(param_1,param_3,param_4);
      return uVar2;
    }
    uVar2 = 0xfffffffffffffdf3;
  }
  return uVar2;
}


