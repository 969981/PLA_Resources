/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fa32c; name: FUN_007fa32c
 */


void FUN_007fa32c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x1180) != 0) && (*(short *)(param_1 + 0x114e) != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_007f0f48(*(long *)(*(long *)(param_1 + 0x88) + uVar3 * 8) + 0x10,param_2);
      if ((uVar1 & 1) != 0) {
        if ((short)uVar3 < 0) {
          return;
        }
        uVar3 = FUN_007f0ee4(*(long *)(*(long *)(param_1 + 0x88) + (lVar2 >> 0x2d)) + 0x10);
        if ((uVar3 & 1) == 0) {
          return;
        }
        local_38 = 0;
        FUN_007ecf14(&local_38);
        lVar2 = (lVar2 >> 0x30) * 8;
        *(undefined8 *)(*(long *)(param_1 + 0x1180) + lVar2) = local_38;
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(undefined8 *)(*(long *)(param_1 + 0x1188) + lVar2) = local_38;
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x1000000000000;
    } while (uVar3 < *(ushort *)(param_1 + 0x114e));
  }
  return;
}


