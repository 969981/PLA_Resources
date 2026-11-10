/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bdbe50; name: FUN_01bdbe50
 */


void FUN_01bdbe50(long param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(int *)(param_1 + 0x21c) = param_2;
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(int *)(param_1 + 0x224) = param_3;
      if (param_2 == 1) {
        *(undefined4 *)(param_1 + 0x228) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x22c);
      return;
    }
    if (*(int *)(param_1 + 0x21c) != param_2) {
      *(int *)(param_1 + 0x21c) = param_2;
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(int *)(param_1 + 0x224) = param_3;
      return;
    }
    if ((param_3 < *(int *)(param_1 + 0x224)) &&
       (*(int *)(param_1 + 0x224) = param_3, param_3 < *(int *)(param_1 + 0x220))) {
      *(int *)(param_1 + 0x220) = param_3;
    }
  }
  return;
}


