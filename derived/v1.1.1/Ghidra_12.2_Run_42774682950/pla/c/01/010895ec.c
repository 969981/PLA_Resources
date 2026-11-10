/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010895ec; name: FUN_010895ec
 */


bool FUN_010895ec(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *local_18;
  
  if ((*param_1 == 0) || (FUN_01089924(&local_18), local_18 == (long *)0x0)) {
    bVar1 = true;
  }
  else {
    uVar2 = FUN_01088420();
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_0108838c(local_18);
      bVar1 = lVar3 + -1 == param_1[4] + 1;
    }
    else {
      bVar1 = false;
    }
    if ((local_18 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_18[0xb]), (uVar2 & 1) != 0)) {
      (**(code **)(*local_18 + 0x20))(local_18);
    }
  }
  return bVar1;
}


