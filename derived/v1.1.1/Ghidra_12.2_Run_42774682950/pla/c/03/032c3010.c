/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3010; name: FUN_032c3010
 */


void FUN_032c3010(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
    lVar1 = 0;
    lVar2 = (ulong)*(uint *)((long)param_1 + 0xc) + 1;
    do {
      if (*(long *)(*param_1 + lVar1) != -1) {
        *(undefined8 *)(*param_1 + lVar1) = 0xffffffffffffffff;
      }
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 != 0);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}


