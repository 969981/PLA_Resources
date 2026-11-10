/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f9fcc; name: FUN_007f9fcc
 */


void FUN_007f9fcc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 local_58 [2];
  undefined2 local_48 [4];
  int local_40 [4];
  
  lVar1 = FUN_00847424();
  uVar7 = *(undefined4 *)((long)param_2 + 0xc);
  uVar5 = *param_2;
  FUN_00846d20(local_40,lVar1,uVar5,uVar7);
  if (local_40[0] == 0) {
    uVar7 = *(undefined4 *)(lVar1 + 0x30);
    uVar4 = 0x1010100000000;
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
  }
  else {
    uVar4 = 0x1000100000000;
  }
  local_58[0] = CONCAT44(local_58[0]._4_4_,0x2c000000);
  local_48[0] = 0;
  lVar2 = FUN_008469d8(lVar1,local_58,param_3,uVar7,local_48,uVar4,0);
  if (lVar2 != 0) {
    FUN_0084695c(local_58,lVar1,uVar5);
    FUN_007ee660(local_40,local_58);
    if (((local_40[0] == 0) && (*(long *)(param_1 + 0x1188) != 0)) &&
       (*(short *)(param_1 + 0x114e) != 0)) {
      lVar1 = 0;
      uVar6 = 0;
      do {
        uVar3 = FUN_007f0f48(*(long *)(*(long *)(param_1 + 0x88) + uVar6 * 8) + 0x10,param_3);
        if ((uVar3 & 1) != 0) {
          if ((short)uVar6 < 0) {
            return;
          }
          uVar6 = FUN_007f0ee4(*(long *)(*(long *)(param_1 + 0x88) + (lVar1 >> 0x2d)) + 0x10);
          if ((uVar6 & 1) == 0) {
            return;
          }
          local_58[0] = 0;
          FUN_007ecf14(local_58);
          *(undefined8 *)(*(long *)(param_1 + 0x1188) + (lVar1 >> 0x30) * 8) = local_58[0];
          return;
        }
        uVar6 = uVar6 + 1;
        lVar1 = lVar1 + 0x1000000000000;
      } while (uVar6 < *(ushort *)(param_1 + 0x114e));
    }
  }
  return;
}


