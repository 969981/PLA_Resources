/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f70b8; name: FUN_007f70b8
 */


undefined8 FUN_007f70b8(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_38;
  
  lVar4 = param_1[0x22e];
  (**(code **)(*(long *)param_1[0x24] + 0x48))((long *)param_1[0x24],param_2,lVar4);
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar3 = FUN_007f0f48(*(long *)(param_1[0x11] + uVar6 * 8) + 0x10,lVar4);
      if ((uVar3 & 1) != 0) {
        if (-1 < (short)uVar6) {
          lVar4 = *(long *)(param_1[0x11] + (lVar5 >> 0x2d));
          if (*(char *)(lVar4 + 8) == '\x01') {
            *(undefined1 *)(lVar4 + 8) = 2;
            return 1;
          }
          return 0;
        }
        uVar1 = *(ushort *)((long)param_1 + 0x114e);
        break;
      }
      uVar1 = *(ushort *)((long)param_1 + 0x114e);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x1000000000000;
    } while (uVar6 < uVar1);
    if (uVar1 != 0) {
      uVar6 = 0;
      do {
        uVar3 = FUN_007f0ee4(*(long *)(param_1[0x11] + uVar6 * 8) + 0x10);
        if ((uVar3 & 1) == 0) {
          uVar2 = (**(code **)(*param_1 + 0x128))(param_1,lVar4);
          lVar5 = uVar6 * 8;
          FUN_007f0f88(*(long *)(param_1[0x11] + lVar5) + 0x10,lVar4);
          *(undefined1 *)(*(long *)(param_1[0x11] + lVar5) + 9) = uVar2;
          if (param_1[0x230] != 0) {
            local_38 = 0;
            FUN_007ecf14(&local_38);
            *(undefined8 *)(param_1[0x230] + lVar5) = local_38;
            local_38 = 0;
            FUN_007ecf14(&local_38);
            *(undefined8 *)(param_1[0x231] + lVar5) = local_38;
          }
          return 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)((long)param_1 + 0x114e));
    }
  }
  return 0;
}


