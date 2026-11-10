/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e990a8; name: FUN_02e990a8
 */


void FUN_02e990a8(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  FUN_02e99d5c(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0xd8);
  if (iVar3 != 0) {
    lVar4 = (ulong)(iVar3 - 1) << 3;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0xd0) + lVar4);
      if (((*(char *)(param_2 + 0x20) == '\0') || (plVar2[0x11] == 0)) &&
         (uVar1 = FUN_02ed525c(plVar2,*(undefined8 *)(param_2 + 0x30)), (uVar1 & 1) == 0)) {
        (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -8;
    } while (iVar3 != 0);
  }
  return;
}


