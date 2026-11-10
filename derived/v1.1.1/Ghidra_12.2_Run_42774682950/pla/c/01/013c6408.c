/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6408; name: FUN_013c6408
 */


void FUN_013c6408(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0x5b0;
  }
  if (*(long *)(param_1 + 0x88) == lVar1) {
    iVar2 = FUN_013c1dcc();
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x7c) = 2;
      uVar3 = FUN_013c1dc4(*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0x80) = uVar3;
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
    }
  }
  return;
}


