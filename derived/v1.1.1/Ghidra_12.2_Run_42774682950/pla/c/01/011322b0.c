/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011322b0; name: FUN_011322b0
 */


void FUN_011322b0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint local_48;
  undefined2 local_44;
  int local_40;
  undefined2 local_3c;
  undefined8 local_38;
  uint local_24;
  
  uVar2 = FUN_02c6cf3c(*(undefined8 *)(param_2 + 0x98));
  if (((uVar2 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0xffffffff00000000;
    FUN_01090b20(&local_48,param_2);
    uVar1 = FUN_02c6d5b0(*(undefined8 *)(param_2 + 0x98));
    if (local_3c._1_1_ == '\0') {
      lVar3 = FUN_01136910(param_1 + 0x6c,&local_48,uVar1 & 1,&local_24);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 4) = *(byte *)(lVar3 + 4) | (byte)(1 << (ulong)(local_24 & 0x1f));
        if ((0x3d4 < (int)local_48) ||
           (*(short *)(param_1 + 0x6c + (ulong)local_48 * 0x58 + 0x7a) == 0)) {
          FUN_01136b44(param_1,(ulong)local_48,local_44,local_40 == 1,(undefined1)local_3c,uVar1 & 1
                      );
        }
      }
    }
  }
  return;
}


