/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d92a4; name: FUN_031d92a4
 */


void FUN_031d92a4(undefined8 param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 long *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined4 local_48 [2];
  undefined4 local_38 [2];
  
  lVar5 = FUN_031dbecc(param_2,param_3);
  if ((lVar5 == 0) ||
     (uVar7 = (ulong)*(uint *)(lVar5 + 4) | (lVar5 - param_2[2]) * 0x20000000, (int)uVar7 < 0)) {
    local_38[0] = *param_3;
    local_48[0] = *param_4;
    FUN_031dbc7c(param_1,local_38,local_48,param_5 + 2);
    uVar4 = FUN_031dd9a8(param_2,param_3);
    if (*(uint *)(param_2 + 1) == uVar4) {
      lVar5 = *param_2;
      iVar2 = uVar4 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= (int)uVar4) {
        lVar5 = FUN_031dda90(PTR_PTR_0434a080,iVar2);
        uVar4 = *(uint *)(param_2 + 1);
        *param_2 = lVar5;
      }
      puVar1 = (undefined4 *)(lVar5 + (long)(int)uVar4 * 8);
      *puVar1 = *param_3;
      puVar1[1] = 0x1000000;
      *(int *)(param_2 + 1) = iVar2;
    }
    else {
      *(undefined4 *)(*param_2 + ((long)((ulong)uVar4 << 0x20) >> 0x1d) + 4) = 0x1000000;
    }
    iVar6 = (int)param_5[1];
    uVar3 = *param_3;
    iVar2 = iVar6 + 1;
    lVar5 = *param_5;
    if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar6) {
      lVar5 = FUN_031db48c(PTR_PTR_0434a080,iVar2);
      iVar6 = (int)param_5[1];
      *param_5 = lVar5;
    }
    puVar8 = (undefined1 *)(lVar5 + (long)iVar6 * 0xc);
    *puVar8 = 2;
    *(undefined4 *)(puVar8 + 4) = uVar3;
    *(int *)(param_5 + 1) = iVar2;
  }
  else {
    lVar5 = *param_2 + ((long)(uVar7 << 0x20) >> 0x1d);
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 0x1000000;
  }
  return;
}


