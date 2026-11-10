/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e100c; name: FUN_001e100c
 */


void FUN_001e100c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  iVar1 = FUN_001e35d0(2,param_1,auStack_38);
  if (iVar1 < 1) {
    lVar2 = nnsocketGetHostByNameWithOptions(param_1,param_3,param_4);
    if (lVar2 != 0) {
      FUN_001dffe8(lVar2,param_2);
    }
  }
  else {
    FUN_001e0100(2,auStack_38,param_1,param_2);
  }
  return;
}


