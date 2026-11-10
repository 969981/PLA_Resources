/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fb198; name: FUN_011fb198
 */


void FUN_011fb198(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  ulong uVar1;
  
  if (((((*(char *)(param_1 + 0x164) == '\0') || (*(char *)(param_1 + 0x16c) == '\0')) ||
       (*(char *)(param_1 + 0x174) == '\0')) ||
      ((*(int *)(param_1 + 0x168) != param_3 || (*(int *)(param_1 + 0x170) != param_5)))) ||
     (*(int *)(param_1 + 0x178) != param_4)) {
    if ((*(long *)(*(long *)(param_1 + 0x68) + 0x78) != 0) &&
       (uVar1 = FUN_027d9458(), (uVar1 & 1) != 0)) {
      *(int *)(param_1 + 0x168) = param_3;
      *(int *)(param_1 + 0x170) = param_5;
      *(undefined1 *)(param_1 + 0x164) = 1;
      *(undefined1 *)(param_1 + 0x16c) = 1;
      *(int *)(param_1 + 0x178) = param_4;
      *(undefined1 *)(param_1 + 0x174) = 1;
    }
  }
  return;
}


