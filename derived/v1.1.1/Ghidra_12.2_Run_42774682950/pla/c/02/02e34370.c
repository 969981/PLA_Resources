/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e34370; name: FUN_02e34370
 */


undefined8 FUN_02e34370(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar2 = FUN_02e04084();
  if ((int)uVar2 == 1) {
    if (param_3 != 0) {
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 << 5);
      *(long *)(param_1 + 0x50) = lVar3;
      if (lVar3 == 0) {
        return 0x34;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    if (uVar4 != 0) {
      lVar3 = 0;
      uVar5 = 0;
      do {
        if (*(long *)(param_1 + 0x50) + lVar3 != 0) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar3);
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar4 = *(uint *)(param_1 + 0x38);
        }
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0x20;
      } while (uVar5 < uVar4);
      if (uVar4 != 0) {
        lVar3 = 0;
        uVar5 = 0;
        do {
          uVar2 = FUN_02e07244(*(long *)(param_1 + 0x50) + lVar3,param_2,
                               *(uint *)(param_1 + 0x40) + (*(uint *)(param_1 + 0x40) >> 2));
          if ((int)uVar2 != 1) {
            return uVar2;
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x20;
        } while (uVar5 < *(uint *)(param_1 + 0x38));
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


