/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edde2c; name: FUN_02edde2c
 */


undefined8 FUN_02edde2c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((long)param_1 + 0xc) < 0xb)) {
    lVar1 = ((ulong)*(uint *)((long)param_1 + 0xc) - (ulong)*(uint *)(param_1 + 1)) + 0xb;
    lVar2 = (*DAT_0442d148)(0,*param_1,lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *param_1 = lVar2;
    *(int *)((long)param_1 + 0xc) = (int)lVar1;
  }
  *(undefined4 *)(param_1 + 1) = 0xb;
  return 1;
}


