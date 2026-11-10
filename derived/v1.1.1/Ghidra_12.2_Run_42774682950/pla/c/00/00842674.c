/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00842674; name: FUN_00842674
 */


void FUN_00842674(undefined8 param_1,long param_2,short *param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  uVar3 = *(ushort *)(param_2 + 0x18);
  if (*(ushort *)(param_2 + 0x1a) != 0) {
    uVar4 = 0;
    do {
      uVar1 = *(int *)(param_2 + 0x14) + uVar4;
      uVar2 = 0;
      if (*(ushort *)(param_2 + 0x10) <= uVar1) {
        uVar2 = (uint)*(ushort *)(param_2 + 0x10);
      }
      if (*(char *)(*(long *)(param_2 + 8) + (ulong)(uVar1 - uVar2) * 0x5b8) == '\0') break;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar4 < *(ushort *)(param_2 + 0x1a));
  }
  if (uVar3 < *(ushort *)(param_2 + 0x1c)) {
    *param_3 = 0;
    local_30[0] = 0x10408;
  }
  else {
    *param_3 = uVar3 - *(ushort *)(param_2 + 0x1c);
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


