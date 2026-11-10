/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009415c0; name: FUN_009415c0
 */


void FUN_009415c0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *local_18;
  
  uVar1 = FUN_00923bc4(*(undefined8 *)(param_1 + 8));
  FUN_009a5218(&local_18,uVar1,0);
  if ((local_18 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_18[0xb]), (uVar2 & 1) != 0)) {
    (**(code **)(*local_18 + 0x20))(local_18);
  }
  return;
}


