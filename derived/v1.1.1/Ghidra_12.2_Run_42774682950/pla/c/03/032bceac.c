/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bceac; name: FUN_032bceac
 */


int FUN_032bceac(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined1 *)(param_1 + 0x31) = 1;
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_032bceac();
    *(undefined1 *)(param_1 + 0x31) = 1;
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    }
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x10))();
  }
  return iVar1;
}


