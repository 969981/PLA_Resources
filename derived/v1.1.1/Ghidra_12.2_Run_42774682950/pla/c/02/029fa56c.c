/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fa56c; name: FUN_029fa56c
 */


void FUN_029fa56c(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_029fab48();
  if ((iVar1 != 0) &&
     (iVar1 = FUN_0298af18(*(undefined8 *)(param_1 + 0x38),param_2,param_3,iVar1), iVar1 != 0)) {
    uVar2 = FUN_029fae1c(param_1,param_2,iVar1,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_029fae78(param_1,param_2,param_3);
      FUN_029fb338(param_1,param_2,iVar1,param_3);
      return;
    }
  }
  return;
}


