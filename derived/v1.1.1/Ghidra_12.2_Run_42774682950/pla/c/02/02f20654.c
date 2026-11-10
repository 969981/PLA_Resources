/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f20654; name: FUN_02f20654
 */


undefined8 FUN_02f20654(long param_1,undefined8 param_2,undefined1 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  byte local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x230);
  if ((((*(ushort *)(lVar5 + 0xc) & 0x7c) == 4) && (*(long *)(lVar5 + 0x10) == 0)) &&
     (*(int *)(lVar5 + 4) == -1)) {
    uVar3 = 2;
  }
  else {
    local_18 = 0;
    local_20 = 0x3f800000;
    local_13 = (undefined1)(int)*(float *)(lVar4 + 0x2a8);
    bVar2 = (*(ushort *)(lVar5 + 0xc) & 0x7c) == 0xc;
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | bVar2 << 5;
    local_14 = param_3;
    if (bVar2) {
      if (*(long *)(lVar4 + 0x2c8) == 0) {
        uVar3 = 0x2e;
      }
      else {
        uVar3 = (**(code **)(*DAT_0440a098 + 0x40))
                          (DAT_0440a098,*(long *)(lVar4 + 0x2c8),*(undefined4 *)(lVar4 + 0x2d0),
                           &local_20,param_1 + 0x58);
      }
    }
    else {
      uVar1 = *(ushort *)(lVar5 + 0xc);
      if ((uVar1 >> 9 & 1) == 0) {
        if ((uVar1 & 0x500) == 0) {
          local_2c = *(undefined4 *)(lVar5 + 4);
        }
        else {
          local_2c = 0xffffffff;
        }
        local_30 = (byte)uVar1 & 1;
        uStack_44 = (uint)*(ushort *)(lVar5 + 0x1a);
        local_40 = 0;
        local_38 = 0;
        uStack_28 = 0;
        local_48 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar3 = (**(code **)(*DAT_0440a098 + 0x38))
                          (DAT_0440a098,*(undefined4 *)(lVar5 + 4),&local_48,&local_20,param_2,
                           param_1 + 0x58,0);
      }
      else {
        if ((uVar1 & 0x500) == 0) {
          local_2c = *(undefined4 *)(lVar5 + 4);
        }
        else {
          local_2c = 0xffffffff;
        }
        local_30 = (byte)uVar1 & 1;
        uStack_44 = (uint)*(ushort *)(lVar5 + 0x1a);
        local_40 = 0;
        local_38 = 0;
        uStack_28 = 0;
        local_48 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar3 = (**(code **)(*DAT_0440a098 + 0x30))
                          (DAT_0440a098,*(undefined8 *)(lVar5 + 0x10),&local_48,&local_20,param_2,
                           param_1 + 0x58,0);
      }
    }
  }
  return uVar3;
}


