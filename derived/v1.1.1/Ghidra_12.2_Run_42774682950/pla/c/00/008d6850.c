/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d6850; name: FUN_008d6850
 */


ulong FUN_008d6850(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008d67a0();
  uVar3 = *param_3;
  if ((int)((ulong)uVar3 >> 0x20) < (int)((ulong)*param_4 >> 0x20)) {
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar3 = *param_2;
    iVar1 = (int)uVar2;
    if ((int)((ulong)uVar3 >> 0x20) < (int)((ulong)*param_3 >> 0x20)) {
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar3 = *param_1;
      if ((int)((ulong)uVar3 >> 0x20) < (int)((ulong)*param_2 >> 0x20)) {
        uVar2 = (ulong)(iVar1 + 3);
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
      else {
        uVar2 = (ulong)(iVar1 + 2);
      }
    }
    else {
      uVar2 = (ulong)(iVar1 + 1);
    }
  }
  return uVar2;
}


