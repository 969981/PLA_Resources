/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb51a4; name: FUN_02eb51a4
 */


undefined8 FUN_02eb51a4(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((*(uint *)(param_1 + 1) <= param_2) && (*(uint *)((long)param_1 + 0xc) < param_2)) {
    uVar1 = *(uint *)((long)param_1 + 0xc) + (param_2 - *(uint *)(param_1 + 1));
    lVar2 = FUN_02f59e50(0,*param_1,(ulong)uVar1 * 0x18);
    if (lVar2 == 0) {
      return 0;
    }
    *param_1 = lVar2;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


