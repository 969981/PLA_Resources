/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f37980; name: FUN_01f37980
 */


void FUN_01f37980(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  
  if (param_1 != param_2) {
    do {
      FUN_0087fcf0(param_3,param_1);
      FUN_00b6081c(param_3 + 0x10,param_1 + 0x10);
      puVar1 = (undefined1 *)(param_1 + 0x20);
      param_1 = param_1 + 0x28;
      *(undefined1 *)(param_3 + 0x20) = *puVar1;
      param_3 = param_3 + 0x28;
    } while (param_1 != param_2);
  }
  return;
}


