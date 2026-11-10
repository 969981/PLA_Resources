/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0a684; name: FUN_02f0a684
 */


void FUN_02f0a684(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  FUN_02f0a718();
  lVar2 = *(long *)(param_1 + 0x78);
  if ((lVar2 != 0) &&
     (((0 < *(short *)(lVar2 + 0x90) || (0 < *(short *)(lVar2 + 0x94))) &&
      (iVar3 = *(int *)(param_1 + 0xd8), iVar3 != 0)))) {
    lVar2 = (ulong)(iVar3 - 1) << 3;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xd0) + lVar2);
      if ((*(char *)(param_2 + 0x20) == '\0') || (plVar1[0x11] == 0)) {
        (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
      }
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar3 != 0);
  }
  return;
}


