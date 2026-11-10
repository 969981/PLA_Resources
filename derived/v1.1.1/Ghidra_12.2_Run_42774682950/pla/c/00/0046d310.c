/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046d310; name: FUN_0046d310
 */


bool FUN_0046d310(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) >> 2 & 1) != 0) || ((*pbVar4 & 3) == 0)) {
    iVar1 = FUN_00413a60(*(undefined8 *)(pbVar4 + 8),param_3);
    return iVar1 == 0;
  }
  iVar1 = FUN_00407950(*(undefined8 *)(pbVar4 + 0x18));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = FUN_00407970(*(undefined8 *)(pbVar4 + 0x18),iVar1);
      iVar2 = FUN_00413a60(uVar3,param_3);
      if (iVar2 == 0) {
        return true;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(*(undefined8 *)(pbVar4 + 0x18));
    } while (iVar1 < iVar2);
  }
  return false;
}


