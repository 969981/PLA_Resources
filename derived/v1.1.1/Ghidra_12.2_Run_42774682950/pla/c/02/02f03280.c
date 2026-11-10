/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f03280; name: FUN_02f03280
 */


undefined8 FUN_02f03280(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  uint local_68;
  uint uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  if ((((*(ushort *)(lVar6 + 0xc) & 0x7c) == 4) && (*(long *)(lVar6 + 0x10) == 0)) &&
     (*(int *)(lVar6 + 4) == -1)) {
    uVar4 = 2;
  }
  else {
    local_24 = 0;
    local_28 = 0;
    local_30 = 0x3f800000;
    local_23 = *(undefined1 *)((long)param_2 + 10);
    local_40 = 0x80000000000;
    local_38 = 0;
    *(short *)(param_1 + 8) = (short)param_2[1];
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)param_2 + 10);
    bVar2 = (*(ushort *)(lVar6 + 0xc) & 0x7c) == 0xc;
    *(char *)((long)param_1 + 0x42) = bVar2 << 1;
    if (bVar2) {
      if (param_2[2] == 0) {
        return 0x2e;
      }
      uVar4 = (**(code **)(*DAT_0440a098 + 0x40))
                        (DAT_0440a098,param_2[2],(int)param_2[3],&local_30,param_1);
      iVar3 = (int)uVar4;
    }
    else {
      uVar1 = *(ushort *)(lVar6 + 0xc);
      if ((uVar1 >> 9 & 1) == 0) {
        if ((uVar1 & 0x500) == 0) {
          local_4c = *(undefined4 *)(lVar6 + 4);
        }
        else {
          local_4c = 0xffffffff;
        }
        local_50 = (byte)uVar1 & 1;
        uStack_64 = (uint)*(ushort *)(lVar6 + 0x1a);
        local_60 = 0;
        local_58 = 0;
        uStack_48 = 0;
        local_68 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar4 = (**(code **)(*DAT_0440a098 + 0x38))
                          (DAT_0440a098,*(undefined4 *)(lVar6 + 4),&local_68,&local_30,&local_40,
                           param_1,0);
        iVar3 = (int)uVar4;
      }
      else {
        if ((uVar1 & 0x500) == 0) {
          local_4c = *(undefined4 *)(lVar6 + 4);
        }
        else {
          local_4c = 0xffffffff;
        }
        local_50 = (byte)uVar1 & 1;
        uStack_64 = (uint)*(ushort *)(lVar6 + 0x1a);
        local_60 = 0;
        local_58 = 0;
        uStack_48 = 0;
        local_68 = (uint)((uVar1 >> 8 & 1) != 0);
        uVar4 = (**(code **)(*DAT_0440a098 + 0x30))
                          (DAT_0440a098,*(undefined8 *)(lVar6 + 0x10),&local_68,&local_30,&local_40,
                           param_1,0);
        iVar3 = (int)uVar4;
      }
    }
    if (iVar3 == 1) {
      bVar5 = *(byte *)((long)param_1 + 0x42);
      if ((((bVar5 >> 1 & 1) == 0) && (param_2[2] != 0)) && ((int)param_2[3] != 0)) {
        param_1[2] = param_2[2];
        lVar6 = param_2[3];
        bVar5 = bVar5 & 0xcf | 8;
        *(byte *)((long)param_1 + 0x42) = bVar5;
        *(int *)((long)param_1 + 0x24) = (int)lVar6;
      }
      else {
        *(byte *)((long)param_1 + 0x42) = bVar5 & 199;
        uVar4 = (**(code **)(*(long *)*param_1 + 0x68))();
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        bVar5 = *(byte *)((long)param_1 + 0x42);
      }
      uVar4 = 1;
      *(byte *)((long)param_1 + 0x42) = bVar5 & 0x3f;
    }
  }
  return uVar4;
}


