/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012152b8; name: FUN_012152b8
 */


void FUN_012152b8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (**(int **)(param_1 + 0x1648) == 0) {
    uVar1 = FUN_012174d4(param_1);
    if (((uVar1 & 1) != 0) && ((param_2 & 1) != 0)) {
      puVar2 = &DAT_03a7a000;
      uVar3 = 4;
      goto LAB_012152f8;
    }
    puVar2 = &DAT_03a7a040;
  }
  else {
    if (**(int **)(param_1 + 0x1648) == 1) {
      puVar2 = &DAT_03a7a070;
      uVar3 = 2;
      goto LAB_012152f8;
    }
    puVar2 = &UNK_03a7a090;
  }
  uVar3 = 3;
LAB_012152f8:
  FUN_012201cc(param_1,puVar2,uVar3);
  return;
}


