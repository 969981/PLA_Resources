/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ee3278; name: FUN_01ee3278
 */


undefined8 FUN_01ee3278(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01ee6160();
  if (lVar1 == 0) {
    uVar2 = FUN_01ee44c0();
    return uVar2;
  }
  return *(undefined8 *)(lVar1 + 0x18);
}


