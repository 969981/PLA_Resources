/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d2d30; name: FUN_008d2d30
 */


int FUN_008d2d30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_008d2c60();
  uVar3 = *param_4;
  iVar2 = iVar1;
  if (((int)uVar3 != 0) &&
     (uVar4 = *param_3, (int)((ulong)uVar4 >> 0x20) < (int)((ulong)uVar3 >> 0x20))) {
    *param_3 = uVar3;
    iVar2 = iVar1 + 1;
    *param_4 = uVar4;
    uVar3 = *param_3;
    if (((int)uVar3 != 0) &&
       (uVar4 = *param_2, (int)((ulong)uVar4 >> 0x20) < (int)((ulong)uVar3 >> 0x20))) {
      *param_2 = uVar3;
      iVar2 = iVar1 + 2;
      *param_3 = uVar4;
      uVar3 = *param_2;
      if (((int)uVar3 != 0) &&
         (uVar4 = *param_1, (int)((ulong)uVar4 >> 0x20) < (int)((ulong)uVar3 >> 0x20))) {
        iVar2 = iVar1 + 3;
        *param_1 = uVar3;
        *param_2 = uVar4;
      }
    }
  }
  return iVar2;
}


