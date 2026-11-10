/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a4908; name: FUN_031a4908
 */


void FUN_031a4908(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (lVar1 != 0) {
    FUN_032d647c();
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


