/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314b6f0; name: FUN_0314b6f0
 */


void FUN_0314b6f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (0 < (int)param_1[5]) {
    lVar1 = 0;
    do {
      if (*(char *)(param_1[4] + lVar1) == '\0') {
        *(undefined4 *)(*(long *)(param_4 + 2) + lVar1 * 4) = 0;
      }
      else {
        *(undefined4 *)(*(long *)(param_4 + 2) + lVar1 * 4) = *param_4;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[5]);
  }
  return;
}


