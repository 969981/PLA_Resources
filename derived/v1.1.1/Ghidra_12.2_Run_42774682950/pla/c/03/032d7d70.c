/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d7d70; name: FUN_032d7d70
 */


void FUN_032d7d70(long *param_1,long *param_2,long param_3,undefined8 param_4,uint param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long local_a8;
  long lStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80 [2];
  undefined *local_70;
  undefined8 local_68;
  
  uVar9 = param_3 - (long)param_2;
  iVar1 = FUN_032e2120(param_4);
  iVar7 = (int)(uVar9 >> 4);
  iVar3 = iVar1 * iVar7;
  uVar8 = uVar9 >> 4 & 0xffffffff;
  if (0 < iVar7) {
    uVar4 = uVar9 >> 4 & 1;
    if (uVar8 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      plVar6 = param_2 + 2;
      do {
        lVar5 = lVar5 + 2;
        iVar3 = iVar3 + ((int)plVar6[-1] - (int)plVar6[-2]) + ((int)plVar6[1] - (int)*plVar6) + 2;
        plVar6 = plVar6 + 4;
      } while (uVar8 - uVar4 != lVar5);
    }
    if (uVar4 != 0) {
      iVar3 = iVar3 + ((int)(param_2 + lVar5 * 2)[1] - (int)param_2[lVar5 * 2]) + 1;
    }
  }
  FUN_032d8450(param_1,uVar9 >> 4 & 0xffffffff,param_4,param_5 & 1,param_6,iVar3,local_80);
  uStack_90 = local_80[0] + (long)iVar3;
  lVar5 = *param_1;
  local_88 = local_80[0];
  local_98 = local_80[0];
  if (0 < iVar7) {
    uVar9 = 0;
    do {
      uVar2 = FUN_032d6888(&local_98,(long)iVar1);
      *(undefined8 *)(*(long *)(lVar5 + 0x20) + uVar9 * 8) = uVar2;
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
    uVar9 = 0;
    do {
      uVar4 = local_98;
      local_a8 = *param_2;
      lStack_a0 = param_2[1];
      iVar3 = (int)(lStack_a0 - local_a8);
      local_98 = local_98 + ((lStack_a0 - local_a8 << 0x20) + 0x100000000 >> 0x20);
      if (uStack_90 < local_98) {
        local_80[1] = 0;
        local_68 = 0;
        local_70 = PTR_DAT_04372528;
        FUN_03320b50(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f
                     ,"hkLinearBuffer exhausted",local_80 + 1);
        iVar3 = (int)lStack_a0 - (int)local_a8;
      }
      FUN_032c42d0(&local_a8,uVar4,iVar3 + 1,iVar3 + 1);
      *(ulong *)(*(long *)(lVar5 + 0x18) + uVar9 * 8) = uVar4;
      uVar9 = uVar9 + 1;
      param_2 = param_2 + 2;
    } while (uVar8 != uVar9);
  }
  return;
}


