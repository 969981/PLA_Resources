/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3008; name: FUN_031f3008
 */


undefined8 FUN_031f3008(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x168);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined4 *)(*(long *)(param_1 + 0x168) + 0x58) = *(undefined4 *)(param_1 + 0x180);
  return *(undefined8 *)(param_1 + 0x168);
}


