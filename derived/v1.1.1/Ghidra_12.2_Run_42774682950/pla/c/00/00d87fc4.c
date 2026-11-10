/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d87fc4; name: FUN_00d87fc4
 */


void FUN_00d87fc4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != param_2) {
    *(long *)(param_1 + 0x10) = lVar2 + -0x20;
    lVar1 = *(long *)(lVar2 + -0x20);
    *(undefined8 *)(lVar2 + -0x20) = 0;
    if (lVar1 != 0) {
      FUN_00d85e08(lVar2 + -0x18);
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  return;
}


