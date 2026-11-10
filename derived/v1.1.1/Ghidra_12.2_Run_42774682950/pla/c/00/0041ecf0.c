/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ecf0; name: FUN_0041ecf0
 */


ulong FUN_0041ecf0(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    if (iVar1 != *param_2) {
      return 0xffffffff;
    }
    if (iVar1 != 1) {
      if (iVar1 == 5) {
        return 0;
      }
      if (iVar1 == 6) {
        uVar2 = FUN_00413a60(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar2;
      }
      uVar2 = FUN_0040a680(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    }
    uVar3 = param_1[2] - param_2[2];
  }
  return (ulong)uVar3;
}


