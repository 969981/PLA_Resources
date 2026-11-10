/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407820; name: FUN_00407820
 */


undefined8 FUN_00407820(int *param_1)

{
  uint uVar1;
  undefined8 *__dest;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  __dest = *(undefined8 **)(param_1 + 2);
  uVar1 = *param_1 - 1;
  uVar3 = *__dest;
  iVar2 = 0;
  if (uVar1 != 0) {
    memmove(__dest,__dest + 1,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
    iVar2 = *param_1 + -1;
  }
  *param_1 = iVar2;
  return uVar3;
}


