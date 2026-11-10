/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a6d6c; name: FUN_031a6d6c
 */


void FUN_031a6d6c(long param_1,int param_2)

{
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0xb4) != param_2) {
    local_28 = *(undefined4 *)(param_1 + 0x23c);
    local_30 = 0x8000010;
    local_2c = 0x39;
    iStack_24 = param_2;
    FUN_031aa380(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_30);
    *(undefined1 *)(param_1 + 0x199) = 1;
    *(int *)(param_1 + 0xb4) = param_2;
    if ((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_031a7148(param_1);
    }
  }
  return;
}


