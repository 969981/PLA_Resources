/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004079a0; name: FUN_004079a0
 */


undefined8 FUN_004079a0(int *param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (-1 < (int)param_2)) {
    if (*param_1 <= (int)param_2) {
      return 0;
    }
    uVar2 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
    *(undefined8 *)(*(long *)(param_1 + 2) + uVar2) = param_3;
    param_1[4] = 0;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 2) + uVar2);
  }
  return uVar1;
}


