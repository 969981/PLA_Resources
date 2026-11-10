/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009791cc; name: FUN_009791cc
 */


void FUN_009791cc(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 0xc) != 0)) {
    FUN_0097b1cc(&local_28,*(undefined8 *)(param_1 + 0x68));
    plVar2 = local_28;
    lVar1 = local_28[0xd2];
    if ((local_28 != (long *)0x0) && (uVar3 = FUN_02a43a5c(local_28[0xb]), (uVar3 & 1) != 0)) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if ((char)lVar1 != '\0') {
      FUN_0097b1cc(&local_28,*(undefined8 *)(param_1 + 0x68));
      FUN_011b8d74(local_28[0xd1],0);
      if ((local_28 != (long *)0x0) && (uVar3 = FUN_02a43a5c(local_28[0xb]), (uVar3 & 1) != 0)) {
        (**(code **)(*local_28 + 0x20))(local_28);
      }
    }
  }
  return;
}


