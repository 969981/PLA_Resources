/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012223c8; name: FUN_012223c8
 */


void FUN_012223c8(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x698) + 0xa8) + (ulong)param_2 * 0x10);
  iVar1 = FUN_01215f58();
  iVar2 = FUN_00d48ac0(lVar3);
  if (iVar2 != iVar1) {
    FUN_00d48ac8(lVar3,iVar1);
    iVar1 = FUN_00d53034(param_1,1,param_2);
    if (iVar1 != -1) {
      FUN_00d53568(param_1,lVar3,iVar1,1);
    }
  }
  FUN_012160fc(param_1,param_2);
  FUN_00d53960(param_1,1,param_2,*(undefined4 *)(lVar3 + 0x48));
  return;
}


