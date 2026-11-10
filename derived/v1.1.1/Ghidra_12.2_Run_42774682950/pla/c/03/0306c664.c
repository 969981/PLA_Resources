/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306c664; name: FUN_0306c664
 */


void FUN_0306c664(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  FUN_032bfaa0();
  do {
    while( true ) {
      puVar3 = *(undefined8 **)(param_1 + 8);
      *(undefined8 **)(param_1 + 0x30) = puVar3;
      if (puVar3 == (undefined8 *)0x0) goto LAB_0306c6e8;
      *(int *)(param_1 + 0x40) = *(int *)(puVar3 + 1) + -1;
      uVar1 = puVar3[1];
      *(undefined8 *)(param_1 + 0x44) = *puVar3;
      *(undefined8 *)(param_1 + 0x4c) = uVar1;
      iVar2 = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 < 1) break;
      *(undefined8 **)(param_1 + 8) = puVar3 + 2;
      if (*(int *)(param_1 + 0x4c) != 0) goto LAB_0306c6d4;
    }
    FUN_032bfafc(param_1);
  } while (*(int *)(param_1 + 0x4c) == 0);
LAB_0306c6d4:
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_0306c6e8:
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 8);
  }
  return;
}


