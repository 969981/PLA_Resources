/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e4b8; name: FUN_00d2e4b8
 */


undefined8 FUN_00d2e4b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_2 + 0x148) != 0) {
    uVar1 = FUN_0283b5c4();
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_2 + 0x148) == 0) {
        return 0;
      }
      FUN_0283b1e8(*(long *)(param_2 + 0x148),param_3);
    }
    FUN_0283b748(param_1,*(undefined8 *)(param_2 + 0x148),param_3);
    uVar2 = 1;
  }
  return uVar2;
}


