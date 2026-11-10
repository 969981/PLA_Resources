/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc788c; name: FUN_02cc788c
 */


void FUN_02cc788c(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1e0) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x1e9);
    uVar2 = *(undefined8 *)(param_2 + 0x1f1);
    uVar3 = *(undefined8 *)(param_2 + 0x1f6);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 0x1e1);
    *(undefined8 *)(param_1 + 0x16) = uVar3;
    *(undefined8 *)(param_1 + 0x11) = uVar2;
    *(undefined8 *)(param_1 + 9) = uVar1;
    *param_1 = 1;
  }
  return;
}


