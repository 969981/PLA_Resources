/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03385724; name: FUN_03385724
 */


uint FUN_03385724(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  
  puVar10 = (uint *)*param_1;
  lVar9 = (long)puVar10 - param_1[2];
  if (lVar9 < (long)param_1[4]) {
    if (7 < (long)(param_1[1] - (long)puVar10)) {
      uVar6 = puVar10[1];
      if (uVar6 != 0) {
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        if ((param_2 != 0) && (uVar6 != param_2)) goto LAB_033857f4;
        uVar4 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
        uVar5 = uVar4 >> 0x10;
        uVar4 = uVar4 << 0x10;
        uVar3 = uVar5 | uVar4 & 0x3fffffff;
        if ((7 < uVar3) && (uVar2 = lVar9 + (ulong)uVar3, uVar2 <= param_1[4])) {
          iVar8 = (int)param_1[6];
          uVar7 = param_1[5];
          iVar1 = iVar8 + 1;
          if ((int)(*(uint *)((long)param_1 + 0x34) & 0x3fffffff) <= iVar8) {
            uVar7 = FUN_0338eb98(PTR_PTR_0434a080,iVar1);
            param_1[5] = uVar7;
            iVar8 = (int)param_1[6];
          }
          *(int *)(param_1 + 6) = iVar1;
          puVar10 = (uint *)(uVar7 + (long)iVar8 * 0x18);
          *(long *)(puVar10 + 2) = lVar9;
          *puVar10 = uVar6;
          puVar10[1] = uVar5 | uVar4;
          *(ulong *)(puVar10 + 4) = param_1[4];
          param_1[4] = uVar2;
          if (param_1[1] < *param_1 + 8) {
            *param_1 = param_1[1];
            *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          }
          else {
            *param_1 = *param_1 + 8;
          }
          return *puVar10;
        }
      }
      *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
    }
    uVar6 = 1;
  }
  else {
LAB_033857f4:
    uVar6 = 0;
  }
  return uVar6;
}


