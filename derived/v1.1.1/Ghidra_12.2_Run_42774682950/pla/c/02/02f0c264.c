/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c264; name: FUN_02f0c264
 */


undefined8 FUN_02f0c264(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 2) = 0;
  uVar1 = FUN_02f0d200();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)param_1[1] != 0) {
      uVar1 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 1));
    }
    uVar2 = 1;
  }
  return uVar2;
}


