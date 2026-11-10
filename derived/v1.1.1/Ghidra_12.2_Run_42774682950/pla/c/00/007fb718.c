/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fb718; name: FUN_007fb718
 */


void FUN_007fb718(int *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_30 [2];
  
  FUN_007fa3fc(param_2,*(undefined8 *)(param_2 + 0x140));
  if (*param_1 == 0) {
    if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
      FUN_007e5bd8(param_2 + 0x1118);
      *(undefined4 *)(param_2 + 0x1148) = 0;
    }
    FUN_007f2550(*(undefined8 *)(param_2 + 0x218));
    FUN_00803478(local_30,*(undefined8 *)(param_2 + 0x140),param_2 + 0x1118);
    FUN_007ee660(param_1,local_30);
    if (*param_1 == 0) {
      FUN_007e5e70(*(undefined8 *)(param_2 + 0x140),0);
      *(undefined4 *)(param_2 + 0x1148) = 7;
      *(undefined4 *)(param_2 + 100) = 0;
      if ((*(long *)(param_2 + 0x1180) != 0) && (*(short *)(param_2 + 0x114e) != 0)) {
        uVar2 = 0;
        do {
          uVar1 = FUN_007f0ee4(*(long *)(*(long *)(param_2 + 0x88) + uVar2 * 8) + 0x10);
          if ((uVar1 & 1) != 0) {
            local_30[0] = 0;
            FUN_007ecf14(local_30);
            *(undefined8 *)(*(long *)(param_2 + 0x1180) + uVar2 * 8) = local_30[0];
            local_30[0] = 0;
            FUN_007ecf14(local_30);
            *(undefined8 *)(*(long *)(param_2 + 0x1188) + uVar2 * 8) = local_30[0];
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(ushort *)(param_2 + 0x114e));
      }
    }
  }
  return;
}


