/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d2c60; name: FUN_008d2c60
 */


undefined8 FUN_008d2c60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar4 = *param_2;
  uVar3 = *param_1;
  iVar5 = (int)((ulong)uVar3 >> 0x20);
  iVar7 = (int)((ulong)uVar4 >> 0x20);
  uVar6 = *param_3;
  bVar1 = iVar7 < (int)((ulong)uVar6 >> 0x20);
  bVar2 = (int)uVar6 != 0;
  if ((int)uVar4 == 0 || iVar7 <= iVar5) {
    if (!bVar2 || !bVar1) {
      return 0;
    }
    *param_2 = uVar6;
    *param_3 = uVar4;
    uVar3 = *param_2;
    if (((int)uVar3 != 0) &&
       (uVar4 = *param_1, (int)((ulong)uVar4 >> 0x20) < (int)((ulong)uVar3 >> 0x20))) {
      *param_1 = uVar3;
      *param_2 = uVar4;
      return 2;
    }
  }
  else {
    if (bVar2 && bVar1) {
      *param_1 = uVar6;
      *param_3 = uVar3;
      return 1;
    }
    *param_1 = uVar4;
    *param_2 = uVar3;
    uVar4 = *param_3;
    if (((int)uVar4 != 0) && (iVar5 < (int)((ulong)uVar4 >> 0x20))) {
      *param_2 = uVar4;
      *param_3 = uVar3;
      return 2;
    }
  }
  return 1;
}


