/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091c134; name: FUN_0091c134
 */


void FUN_0091c134(long param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_140 [8];
  long local_138;
  long local_130;
  long local_128 [28];
  uint local_48;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  local_38 = 0x502000101;
  FUN_009346d8(auStack_140,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_38);
  if (local_48 != 0) {
    if ((*(int *)(local_138 + 0xa0) == 9) ||
       ((lVar3 = local_130, *(short *)(*(long *)(local_138 + 0x70) + 0x70) == 0x1ed &&
        (sVar1 = FUN_00931f30(local_138), lVar3 = local_130, sVar1 == 0x12)))) {
      FUN_0091c2a4(param_1,local_138);
      lVar3 = local_130;
    }
    if (local_48 != 1) {
      if ((*(int *)(lVar3 + 0xa0) == 9) ||
         ((*(short *)(*(long *)(lVar3 + 0x70) + 0x70) == 0x1ed &&
          (sVar1 = FUN_00931f30(lVar3), sVar1 == 0x12)))) {
        FUN_0091c2a4(param_1,lVar3);
      }
      if (local_48 != 2) {
        plVar4 = local_128;
        lVar3 = (ulong)local_48 * 8 + -0x10;
        do {
          lVar2 = *plVar4;
          if ((*(int *)(lVar2 + 0xa0) == 9) ||
             ((*(short *)(*(long *)(lVar2 + 0x70) + 0x70) == 0x1ed &&
              (sVar1 = FUN_00931f30(lVar2), sVar1 == 0x12)))) {
            FUN_0091c2a4(param_1,lVar2);
          }
          plVar4 = plVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
  }
  return;
}


