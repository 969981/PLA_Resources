/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051f1a8; name: FUN_0051f1a8
 */


uint FUN_0051f1a8(long param_1,long param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = (ulong)(*(byte *)(param_2 + 0x18) >> 1);
  pvVar3 = (void *)(param_2 + 0x19);
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x20);
    pvVar3 = *(void **)(param_2 + 0x28);
  }
  sVar4 = uVar2;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar6 = (ulong)(*(byte *)(param_1 + 0x18) >> 1);
    pvVar1 = (void *)(param_1 + 0x19);
    if (uVar6 <= uVar2) {
      sVar4 = uVar6;
    }
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x20);
    pvVar1 = *(void **)(param_1 + 0x28);
    if (uVar6 <= uVar2) {
      sVar4 = uVar6;
    }
  }
  if ((sVar4 == 0) || (uVar5 = memcmp(pvVar1,pvVar3,sVar4), uVar5 == 0)) {
    uVar5 = 1;
    if (uVar6 < uVar2) {
      uVar5 = 0xffffffff;
    }
    if (uVar2 == uVar6) {
      uVar2 = (ulong)(*(byte *)(param_2 + 0x30) >> 1);
      pvVar3 = (void *)(param_2 + 0x31);
      if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 0x38);
        pvVar3 = *(void **)(param_2 + 0x40);
      }
      sVar4 = uVar2;
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        uVar6 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
        pvVar1 = (void *)(param_1 + 0x31);
        if (uVar6 <= uVar2) {
          sVar4 = uVar6;
        }
      }
      else {
        uVar6 = *(ulong *)(param_1 + 0x38);
        pvVar1 = *(void **)(param_1 + 0x40);
        if (uVar6 <= uVar2) {
          sVar4 = uVar6;
        }
      }
      if ((sVar4 == 0) || (uVar5 = memcmp(pvVar1,pvVar3,sVar4), uVar5 == 0)) {
        uVar5 = 1;
        if (uVar6 < uVar2) {
          uVar5 = 0xffffffff;
        }
        if (uVar2 == uVar6) {
          uVar2 = (ulong)(*(byte *)(param_2 + 0x48) >> 1);
          pvVar3 = (void *)(param_2 + 0x49);
          if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
            uVar2 = *(ulong *)(param_2 + 0x50);
            pvVar3 = *(void **)(param_2 + 0x58);
          }
          sVar4 = uVar2;
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            uVar6 = (ulong)(*(byte *)(param_1 + 0x48) >> 1);
            pvVar1 = (void *)(param_1 + 0x49);
            if (uVar6 <= uVar2) {
              sVar4 = uVar6;
            }
          }
          else {
            uVar6 = *(ulong *)(param_1 + 0x50);
            pvVar1 = *(void **)(param_1 + 0x58);
            if (uVar6 <= uVar2) {
              sVar4 = uVar6;
            }
          }
          if (((sVar4 == 0) || (uVar5 = memcmp(pvVar1,pvVar3,sVar4), uVar5 == 0)) &&
             (uVar5 = (uint)(uVar2 < uVar6), uVar6 < uVar2)) {
            uVar5 = 0xffffffff;
          }
        }
      }
    }
  }
  return uVar5;
}


