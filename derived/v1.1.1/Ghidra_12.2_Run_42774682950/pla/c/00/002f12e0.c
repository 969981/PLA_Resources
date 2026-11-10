/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f12e0; name: FUN_002f12e0
 */


undefined8 FUN_002f12e0(ulong param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 < 5) {
    if (param_2 != 3) {
      return 0;
    }
    lVar2 = (long)*(int *)(&DAT_04153068 + param_1 * 0x18);
  }
  else {
    uVar1 = (ulong)*(byte *)(param_1 + param_2 + 0x10);
    if (uVar1 == 0xff) {
      return 0;
    }
    if (param_3 == (long *)0x0) {
      return 1;
    }
    lVar2 = *(long *)(param_1 + uVar1 * 8 + 0x38);
  }
  *param_3 = lVar2;
  return 1;
}


