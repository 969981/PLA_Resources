/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046d090; name: FUN_0046d090
 */


undefined8 FUN_0046d090(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0x20;
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
      lVar1 = 0x18;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  return uVar2;
}


