/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dee1b0; name: FUN_02dee1b0
 */


void FUN_02dee1b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (**(long **)(param_1 + 0x28) != 0) {
      (*DAT_0442d158)(5,**(long **)(param_1 + 0x28));
      **(undefined8 **)(param_1 + 0x28) = 0;
      lVar1 = *(long *)(param_1 + 0x20);
    }
    (*DAT_0442d158)(5,lVar1);
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


