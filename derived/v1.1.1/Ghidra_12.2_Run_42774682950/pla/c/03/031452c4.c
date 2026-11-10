/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031452c4; name: FUN_031452c4
 */


int FUN_031452c4(long param_1,long *param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong local_60;
  ulong local_58;
  uint local_48 [2];
  
  local_58 = param_4;
  if (param_4 <= param_3) {
    local_58 = param_3;
  }
  local_48[0] = 0;
  local_60 = param_3;
  if (param_4 <= param_3) {
    local_60 = param_4;
  }
  piVar3 = (int *)FUN_0314505c(param_1 + 0x20,&local_60,local_48);
  iVar1 = *piVar3;
  iVar2 = FUN_03144d7c(param_1 + 0x20,PTR_PTR_0434a080,&local_60,local_48);
  puVar4 = (ulong *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
  *puVar4 = local_60;
  puVar4[1] = local_58;
  *(int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18 + 0x10) = iVar1 + 1;
  if (param_2 != (long *)0x0) {
    if ((long)param_3 < 0) {
      uVar5 = param_3 & 0xffffffff;
    }
    else {
      uVar5 = FUN_032c0fa4(param_2 + 0x129,param_3,local_48);
      if ((uVar5 & 1) == 0) {
        uVar5 = 0xffffff;
      }
      else {
        uVar5 = (ulong)local_48[0];
      }
    }
    lVar8 = param_2[7];
    if ((long)param_4 < 0) {
      uVar6 = param_4 & 0xffffffff;
      lVar7 = lVar8;
    }
    else {
      uVar6 = FUN_032c0fa4(param_2 + 0x129,param_4,local_48);
      if ((uVar6 & 1) == 0) {
        uVar6 = 0xffffff;
      }
      else {
        uVar6 = (ulong)local_48[0];
      }
      lVar7 = param_2[7];
    }
    if (((*(byte *)(lVar8 + (uVar5 & 0xffffff) * 0xc0 + 0x54) >> 1 & 1) != 0) &&
       (((*(byte *)(lVar7 + (uVar6 & 0xffffff) * 0xc0 + 0x54) >> 1 & 1) == 0 ||
        ((float)((uint)*(ushort *)(lVar8 + (uVar5 & 0xffffff) * 0xc0 + 0x94) << 0x10) <=
         (float)((uint)*(ushort *)(lVar7 + (uVar6 & 0xffffff) * 0xc0 + 0x94) << 0x10))))) {
      param_4 = param_3;
    }
    (**(code **)(*param_2 + 0x370))(param_2,param_4,param_5);
  }
  return iVar1 + 1;
}


