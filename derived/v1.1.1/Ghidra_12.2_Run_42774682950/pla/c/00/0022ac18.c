/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022ac18; name: FUN_0022ac18
 */


void FUN_0022ac18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_0022d8ac(param_1 + 0x80);
  FUN_0024f9dc(param_1 + 0x90,param_2);
  FUN_0024b8fc(param_1 + 0xa0,param_2);
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) == *(long *)(lVar1 + 0x40)) {
      FUN_00878520(*(long *)(lVar1 + 0x48),param_2);
    }
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


