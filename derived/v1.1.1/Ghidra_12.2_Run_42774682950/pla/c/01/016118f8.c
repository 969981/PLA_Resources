/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016118f8; name: FUN_016118f8
 */


undefined8 FUN_016118f8(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((char)param_1[1] == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x10))();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


