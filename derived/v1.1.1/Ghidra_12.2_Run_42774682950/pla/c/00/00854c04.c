/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00854c04; name: FUN_00854c04
 */


void FUN_00854c04(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_6930 [16];
  undefined1 auStack_6920 [16];
  int local_6910 [4];
  ulong local_6900 [3354];
  int local_30 [4];
  
  local_6910[0] = 0;
  local_6900[0] = local_6900[0] & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_6910 | 4),(Result *)local_6900);
  local_6900[0] = 0;
  FUN_007ecf14(local_6900);
  *param_1 = local_6900[0];
  *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + 1;
  if (param_1[0xe] != 0) {
    FUN_008581e8(local_6900,*(undefined8 *)(param_1[0xe] + 0x20));
    FUN_007ee660(local_6910,local_6900);
    if (local_6910[0] != 0) {
      FUN_007ee578(auStack_6920,local_6910);
      uVar2 = FUN_007f01a4(auStack_6920,(long)param_1 + 0xc4);
      if ((uVar2 & 1) != 0) {
        FUN_007ee660((long)param_1 + 0xc4,auStack_6920);
      }
    }
    FUN_008581e8(local_6900,*(undefined8 *)(param_1[0xe] + 0x18));
    FUN_007ee660(local_6910,local_6900);
    if (local_6910[0] != 0) {
      FUN_007ee578(auStack_6930,local_6910);
      uVar2 = FUN_007f01a4(auStack_6930,(long)param_1 + 0xc4);
      if ((uVar2 & 1) != 0) {
        FUN_007ee660((long)param_1 + 0xc4,auStack_6930);
      }
    }
    (**(code **)(*(long *)param_1[8] + 0x40))((long *)param_1[8],param_1);
    (**(code **)(*(long *)param_1[9] + 0x40))((long *)param_1[9],param_1);
    FUN_00848058(param_1 + 2);
    (**(code **)(*(long *)param_1[8] + 0x48))((long *)param_1[8],param_1);
    (**(code **)(*(long *)param_1[9] + 0x48))((long *)param_1[9],param_1);
    if (((*(char *)((long)param_1 + 0x52) != '\0') && ((int)param_1[0x13] != 0)) &&
       (param_1[0xd] != 0)) {
      uVar2 = *param_1;
      uVar4 = param_1[0x14];
      plVar3 = (long *)FUN_007ed01c();
      lVar1 = 0;
      if (*plVar3 != 0) {
        lVar1 = (long)(uVar2 - uVar4) / *plVar3;
      }
      if (((int)param_1[0x13] <= lVar1) && (FUN_008570f0(local_30,param_1[0xd]), local_30[0] == 0))
      {
        memcpy(local_6900,(void *)(param_1[0xd] + 0x10),0x68d0);
        FUN_00856c34(local_6900,(char)param_1[0x15],*(undefined1 *)((long)param_1 + 0xa9));
        param_1[0x14] = *param_1;
      }
    }
  }
  return;
}


