/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d7aa8; name: FUN_031d7aa8
 */


void FUN_031d7aa8(long param_1,long *param_2,int *param_3,int *param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  short sVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  undefined4 local_98 [2];
  int local_90 [2];
  undefined4 local_88 [2];
  int local_80 [2];
  int local_78 [2];
  undefined4 local_70 [2];
  int local_68 [2];
  
  lVar5 = FUN_031dbecc(param_2,param_3);
  if (((lVar5 != 0) &&
      (uVar8 = (ulong)*(uint *)(lVar5 + 4) | (lVar5 - param_2[2]) * 0x20000000, -1 < (int)uVar8)) &&
     (uVar11 = *(uint *)(*param_2 + ((long)(uVar8 << 0x20) >> 0x1d) + 4), (uVar11 >> 0x16 & 1) != 0)
     ) {
    sVar7 = (short)param_4[2];
    uVar4 = (int)*(short *)((long)param_4 + 10) + (int)sVar7;
    if (0 < (int)uVar4) {
      uVar8 = 0;
      while( true ) {
        iVar2 = *param_4;
        if ((long)sVar7 <= (long)uVar8) {
          iVar2 = param_4[1] - (int)sVar7;
        }
        if ((1 << (ulong)((uint)uVar8 & 0x1f) & uVar11) != 0) {
          lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x28);
          lVar10 = (long)(int)((uint)uVar8 + iVar2);
          iVar2 = *(int *)(lVar5 + lVar10 * 0x14 + 0xc);
          if (iVar2 != -1) {
            if (iVar2 != *param_3) {
              local_70[0] = *(undefined4 *)(lVar5 + lVar10 * 0x14 + 8);
              local_68[0] = iVar2;
              FUN_031d9978(param_1,local_68,local_70,param_5);
            }
            uVar11 = uVar11 & ((uint)(1L << (uVar8 & 0x3f)) ^ 0xffffffff);
          }
        }
        if ((ulong)uVar4 - 1 == uVar8) break;
        sVar7 = (short)param_4[2];
        uVar8 = uVar8 + 1;
      }
    }
    if ((uVar11 >> 0x17 & 1) == 0) {
      if (uVar11 >> 0x18 == 0) {
        iVar6 = (int)param_5[1];
        iVar2 = iVar6 + 1;
        iVar3 = *param_3;
        lVar5 = *param_5;
        if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar6) {
          lVar5 = FUN_031db48c(PTR_PTR_0434a080,iVar2);
          iVar6 = (int)param_5[1];
          *param_5 = lVar5;
        }
        puVar9 = (undefined1 *)(lVar5 + (long)iVar6 * 0xc);
        *puVar9 = 3;
        *(int *)(puVar9 + 4) = iVar3;
        *(int *)(param_5 + 1) = iVar2;
        local_80[0] = *param_3;
        local_88[0] = 0xffffffff;
        FUN_031d87ac(param_1,local_80,local_88,param_5 + 2);
        lVar5 = FUN_031dbecc(param_2,param_3);
        if (lVar5 != 0) {
          FUN_031dbf4c(param_2,lVar5);
          return;
        }
      }
      else {
        iVar6 = (int)param_5[1];
        iVar3 = *param_3;
        iVar2 = iVar6 + 1;
        lVar5 = *param_5;
        if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar6) {
          lVar5 = FUN_031db48c(PTR_PTR_0434a080,iVar2);
          iVar6 = (int)param_5[1];
          *param_5 = lVar5;
        }
        puVar9 = (undefined1 *)(lVar5 + (long)iVar6 * 0xc);
        *puVar9 = 2;
        *(int *)(puVar9 + 4) = iVar3;
        *(int *)(param_5 + 1) = iVar2;
        local_90[0] = *param_3;
        local_98[0] = 0xffffffff;
        FUN_031dbc7c(param_1,local_90,local_98,param_5 + 2);
        uVar4 = FUN_031dd9a8(param_2,param_3);
        if (*(uint *)(param_2 + 1) == uVar4) {
          lVar5 = *param_2;
          iVar2 = uVar4 + 1;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= (int)uVar4) {
            lVar5 = FUN_031dda90(PTR_PTR_0434a080,iVar2);
            uVar4 = *(uint *)(param_2 + 1);
            *param_2 = lVar5;
          }
          piVar1 = (int *)(lVar5 + (long)(int)uVar4 * 8);
          *piVar1 = *param_3;
          piVar1[1] = uVar11 & 0xffbfffff;
          *(int *)(param_2 + 1) = iVar2;
        }
        else {
          *(uint *)(*param_2 + ((long)((ulong)uVar4 << 0x20) >> 0x1d) + 4) = uVar11 & 0xffbfffff;
        }
      }
    }
    else {
      iVar6 = (int)param_5[1];
      iVar3 = *param_3;
      iVar2 = iVar6 + 1;
      lVar5 = *param_5;
      if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar6) {
        lVar5 = FUN_031db48c(PTR_PTR_0434a080,iVar2);
        iVar6 = (int)param_5[1];
        *param_5 = lVar5;
      }
      puVar9 = (undefined1 *)(lVar5 + (long)iVar6 * 0xc);
      *puVar9 = 1;
      *(int *)(puVar9 + 4) = iVar3;
      *(int *)(param_5 + 1) = iVar2;
      local_78[0] = *param_3;
      FUN_031dba30(param_1,local_78,param_5 + 2);
      uVar4 = FUN_031dd9a8(param_2,param_3);
      if (*(uint *)(param_2 + 1) == uVar4) {
        lVar5 = *param_2;
        iVar2 = uVar4 + 1;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= (int)uVar4) {
          lVar5 = FUN_031dda90(PTR_PTR_0434a080,iVar2);
          uVar4 = *(uint *)(param_2 + 1);
          *param_2 = lVar5;
        }
        piVar1 = (int *)(lVar5 + (long)(int)uVar4 * 8);
        *piVar1 = *param_3;
        piVar1[1] = uVar11 & 0xffbfffff;
        *(int *)(param_2 + 1) = iVar2;
      }
      else {
        *(uint *)(*param_2 + ((long)((ulong)uVar4 << 0x20) >> 0x1d) + 4) = uVar11 & 0xffbfffff;
      }
    }
  }
  return;
}


