/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0097b668; name: FUN_0097b668
 */


bool FUN_0097b668(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x68) == 0) || (*(int *)(*(long *)(param_1 + 0x68) + 0xc) == 0)) {
    bVar1 = false;
  }
  else {
    FUN_0097d824(&local_28,*(undefined8 *)(param_1 + 0x68));
    bVar1 = (char)local_28[0xd2] != '\0';
    if ((local_28 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_28[0xb]), (uVar2 & 1) != 0)) {
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return bVar1;
}


