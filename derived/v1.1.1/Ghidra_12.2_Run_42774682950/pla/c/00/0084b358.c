/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084b358; name: FUN_0084b358
 */


void FUN_0084b358(undefined8 param_1,long *param_2,long param_3,uint param_4,undefined2 param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if ((short)param_2[5] == 0) {
    local_50[0] = 0x1040c;
  }
  else if ((((param_3 == 0) || (param_2[1] == param_3)) ||
           ((uint)*(byte *)(param_2 + 2) == (param_4 & 0xff))) ||
          (bVar1 = (byte)param_4, param_2[(ulong)bVar1 + 0x7f] != 0)) {
    local_50[0] = 0x10407;
  }
  else {
    lVar7 = (**(code **)(*param_2 + 0x40))(param_2,param_4);
    if (*(char *)(lVar7 + 0x1f) == '\0') {
      param_2[(ulong)bVar1 + 0x7f] = param_3;
      plVar8 = (long *)(**(code **)(*param_2 + 0x40))(param_2,param_4);
      (**(code **)(*plVar8 + 0x10))();
      lVar7 = (**(code **)(*param_2 + 0x40))(param_2,param_4);
      uVar9 = param_4 >> 5 & 7;
      *(byte *)(lVar7 + 0x24) = bVar1;
      *(undefined2 *)(lVar7 + 0x26) = param_5;
      *(uint *)((long)param_2 + (ulong)uVar9 * 4 + 0x4f0) =
           *(uint *)((long)param_2 + (ulong)uVar9 * 4 + 0x4f0) | 1 << (ulong)(param_4 & 0x1f);
      uVar5 = *(ushort *)((long)param_2 + 0x32);
      if (uVar5 != 0) {
        iVar4 = *(int *)((long)param_2 + 0x2c);
        uVar6 = *(ushort *)(param_2 + 5);
        iVar10 = 0;
        lVar7 = param_2[4];
        uVar9 = (uint)uVar6;
        if (uVar5 != 1) {
          do {
            uVar2 = iVar4 + iVar10;
            iVar10 = iVar10 + 2;
            uVar3 = 0;
            if (uVar6 <= uVar2) {
              uVar3 = (uint)uVar6;
            }
            *(undefined8 *)(lVar7 + (ulong)(uVar2 - uVar3) * 0x5d0 + 8) = 0;
            uVar3 = 0;
            if (uVar9 <= uVar2 + 1) {
              uVar3 = uVar9;
            }
            *(undefined8 *)(lVar7 + (ulong)((uVar2 - uVar3) + 1) * 0x5d0 + 8) = 0;
          } while ((uint)uVar5 - (uVar5 & 1) != iVar10);
        }
        if ((uVar5 & 1) != 0) {
          uVar2 = iVar4 + iVar10;
          uVar3 = 0;
          if (uVar9 <= uVar2) {
            uVar3 = uVar9;
          }
          *(undefined8 *)(lVar7 + (ulong)(uVar2 - uVar3) * 0x5d0 + 8) = 0;
        }
      }
      local_50[0] = 0;
    }
    else {
      local_50[0] = 0x10408;
    }
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  return;
}


