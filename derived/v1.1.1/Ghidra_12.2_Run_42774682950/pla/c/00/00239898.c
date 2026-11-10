/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239898; name: FUN_00239898
 */


void FUN_00239898(long *param_1)

{
  long lVar1;
  
  if (0 < (int)param_1[10]) {
    lVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[9] + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[10]);
  }
  return;
}


