/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046bfa0; name: FUN_0046bfa0
 */


undefined8 FUN_0046bfa0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    FUN_004078c0(*(undefined8 *)(param_1 + 0x30),PTR_FUN_04374318);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      lVar3 = FUN_004071e0();
      *(long *)(param_1 + 0x30) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = FUN_00407950(param_2);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          FUN_00407970(param_2,iVar1);
          lVar3 = FUN_00413930();
          if (lVar3 == 0) {
            return 0;
          }
          iVar2 = FUN_00407800(*(undefined8 *)(param_1 + 0x30),lVar3);
          if (iVar2 == 0) {
            FUN_00409be0(lVar3);
            return 0;
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_00407950(param_2);
        } while (iVar1 < iVar2);
      }
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80;
    }
    uVar4 = 1;
  }
  return uVar4;
}


