/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e636c; name: FUN_030e636c
 */


void FUN_030e636c(undefined4 param_1,long param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  local_70 = CONCAT26(local_70._6_2_,0x1002000010);
  plVar8 = *(long **)(param_2 + 0x7f0);
  local_68 = param_3;
  local_64 = param_1;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
  }
  if (param_3 != 0) {
    lVar10 = *(long *)(param_2 + 0x150) + (ulong)param_3 * 0x80;
    local_70 = CONCAT44(param_1,param_1);
    FUN_03016c3c(lVar10,&local_70,param_2 + 0x540);
    iVar5 = (int)((float)*(undefined8 *)(param_2 + 0x578) * 0.0);
    iVar12 = (int)((float)((ulong)*(undefined8 *)(param_2 + 0x578) >> 0x20) * 0.0);
    auVar3._12_4_ = iVar12;
    auVar3._8_4_ = iVar5;
    auVar3._4_4_ = iVar12;
    auVar3._0_4_ = iVar5;
    uVar6 = NEON_sqxtun(CONCAT44(iVar12,iVar5),auVar3,4);
    uVar1 = *(uint *)(lVar10 + 0x48);
    uVar11 = uVar1;
    do {
      lVar10 = *(long *)(param_2 + 0x38) + (ulong)(uVar11 & 0xffffff) * 0xc0;
      FUN_030192b0(param_2 + 0x530,
                   *(long *)(param_2 + 0x8a8) + (ulong)*(byte *)(lVar10 + 0x89) * 0x40 + 0x20,
                   param_2 + 0x4e0,lVar10,
                   *(long *)(param_2 + 0x150) + (ulong)*(uint *)(lVar10 + 0x80) * 0x80);
      fVar2 = (float)((uint)*(ushort *)(lVar10 + 0x94) << 0x10);
      iVar5 = (int)((float)*(undefined8 *)(param_2 + 0x578) * fVar2 * 0.0);
      iVar12 = (int)((float)((ulong)*(undefined8 *)(param_2 + 0x578) >> 0x20) * fVar2 * 0.0);
      auVar4._12_4_ = iVar12;
      auVar4._8_4_ = iVar5;
      auVar4._4_4_ = iVar12;
      auVar4._0_4_ = iVar5;
      uVar7 = NEON_sqxtun(CONCAT44(iVar12,iVar5),auVar4,4);
      uVar9 = (uint)uVar7 & 0xffff;
      uVar11 = (uint)*(ushort *)(lVar10 + 0x5c) + ((uint)uVar6 & 0xffff) + uVar9;
      uVar9 = *(ushort *)(lVar10 + 0x5e) + uVar9;
      if (0xfffe < uVar11) {
        uVar11 = 0xffff;
      }
      if (0xfffe < uVar9) {
        uVar9 = 0xffff;
      }
      *(short *)(lVar10 + 0x5c) = (short)uVar11;
      *(short *)(lVar10 + 0x5e) = (short)uVar9;
      uVar11 = *(uint *)(lVar10 + 0x84);
      *(ushort *)(lVar10 + 0x58) = *(ushort *)(lVar10 + 0x58) | 4;
    } while (uVar11 != uVar1);
  }
  return;
}


