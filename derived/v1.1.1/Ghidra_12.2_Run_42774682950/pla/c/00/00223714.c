/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223714; name: FUN_00223714
 */


void FUN_00223714(long *param_1,ulong param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = FUN_0022375c(param_1,*param_1,
                       param_3 << 0x30 | param_2 & 0xffffffff | (ulong)(param_4 & 0xffff) << 0x20);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x39) = 0;
  }
  return;
}


