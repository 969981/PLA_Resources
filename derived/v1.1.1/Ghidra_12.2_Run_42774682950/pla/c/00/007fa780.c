/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fa780; name: FUN_007fa780
 */


undefined8 FUN_007fa780(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_38;
  
  if (*(short *)(param_1 + 0x114e) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_007f0f48(*(long *)(*(long *)(param_1 + 0x88) + uVar4 * 8) + 0x10,param_2);
      if ((uVar1 & 1) != 0) {
        if ((short)uVar4 < 0) {
          return 0;
        }
        lVar2 = *(long *)(*(long *)(param_1 + 0x88) + (lVar3 >> 0x2d));
        *(undefined2 *)(lVar2 + 8) = 0xff00;
        *(undefined1 *)(lVar2 + 10) = 0;
        FUN_007f0d58(lVar2 + 0x10);
        if (*(long *)(param_1 + 0x1180) != 0) {
          local_38 = 0;
          FUN_007ecf14(&local_38);
          *(undefined8 *)(*(long *)(param_1 + 0x1180) + (lVar3 >> 0x30) * 8) = local_38;
        }
        if (*(long *)(param_1 + 0x1188) != 0) {
          local_38 = 0;
          FUN_007ecf14(&local_38);
          *(undefined8 *)(*(long *)(param_1 + 0x1188) + (lVar3 >> 0x30) * 8) = local_38;
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x1000000000000;
    } while (uVar4 < *(ushort *)(param_1 + 0x114e));
  }
  return 0;
}


