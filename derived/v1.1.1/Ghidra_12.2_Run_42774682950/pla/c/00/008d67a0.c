/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d67a0; name: FUN_008d67a0
 */


undefined8 FUN_008d67a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *param_2;
  uVar1 = *param_1;
  uVar4 = *param_3;
  iVar3 = (int)((ulong)uVar1 >> 0x20);
  iVar5 = (int)((ulong)uVar2 >> 0x20);
  iVar6 = (int)((ulong)uVar4 >> 0x20);
  if (iVar3 < iVar5) {
    if (iVar5 < iVar6) {
      *param_1 = uVar4;
      *param_3 = uVar1;
      return 1;
    }
    *param_1 = uVar2;
    *param_2 = uVar1;
    if (iVar3 < (int)((ulong)*param_3 >> 0x20)) {
      *param_2 = *param_3;
      *param_3 = uVar1;
      return 2;
    }
  }
  else {
    if (iVar6 <= iVar5) {
      return 0;
    }
    *param_2 = uVar4;
    *param_3 = uVar2;
    uVar1 = *param_1;
    if ((int)((ulong)uVar1 >> 0x20) < (int)((ulong)*param_2 >> 0x20)) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      return 2;
    }
  }
  return 1;
}


