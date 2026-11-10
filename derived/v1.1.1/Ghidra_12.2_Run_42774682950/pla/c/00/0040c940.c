/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c940; name: FUN_0040c940
 */


int FUN_0040c940(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  int iVar12;
  long local_40;
  undefined8 uStack_38;
  ulong local_30;
  
  if (param_3 < 0) {
    return -1;
  }
  iVar4 = FUN_0040c070();
  iVar12 = iVar4 + 0xe;
  if (-1 < iVar4 + 7) {
    iVar12 = iVar4 + 7;
  }
  iVar12 = iVar12 >> 3;
  if ((param_3 != -1) && (bVar1 = param_3 < iVar12, iVar12 = param_3, bVar1)) {
    uStack_38 = param_1[1];
    local_40 = *param_1;
    local_30 = param_1[2];
    uVar6 = uStack_38 & 0xffffffff;
    uVar7 = (uint)uStack_38;
    if (0 < (int)(uint)uStack_38) {
      piVar8 = (int *)(local_40 + (long)(int)(uint)uStack_38 * 4);
      do {
        uVar7 = (uint)uVar6;
        piVar8 = piVar8 + -1;
        if (*piVar8 != 0) break;
        uVar7 = uVar7 - 1;
        uVar6 = (ulong)uVar7;
      } while (0 < (int)uVar7);
      uVar6 = uStack_38 >> 0x20;
      uStack_38 = CONCAT44((int)uVar6,uVar7);
    }
    if (uVar7 == 0) {
      local_30 = local_30 & 0xffffffff00000000;
    }
    iVar5 = FUN_0040c070(&local_40);
    iVar4 = iVar5 + 0xe;
    if (-1 < iVar5 + 7) {
      iVar4 = iVar5 + 7;
    }
    if (param_3 < iVar4 >> 3) {
      return -1;
    }
  }
  iVar4 = *(int *)((long)param_1 + 0xc);
  if (iVar4 == 0) {
    FUN_004006a0(param_2,(long)iVar12);
  }
  else if (iVar12 != 0) {
    lVar3 = param_1[1];
    pbVar10 = (byte *)(iVar12 + param_2);
    uVar6 = 0;
    uVar9 = 0;
    do {
      pbVar10 = pbVar10 + -1;
      uVar11 = uVar9 & 0xfffffffffffffffc;
      uVar7 = (uint)uVar9;
      lVar2 = (long)(int)lVar3 * -4 + uVar6;
      uVar9 = uVar9 - ((long)((long)iVar4 * -4 + 1 + uVar9) >> 0x3f);
      uVar6 = uVar6 + 1;
      *pbVar10 = (byte)(lVar2 >> 0x3f) & (byte)(*(uint *)(*param_1 + uVar11) >> ((uVar7 & 3) << 3));
    } while (uVar6 < (ulong)(long)iVar12);
  }
  return iVar12;
}


