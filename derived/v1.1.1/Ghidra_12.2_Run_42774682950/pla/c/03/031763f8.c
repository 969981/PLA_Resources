/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031763f8; name: FUN_031763f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031763f8(int *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  
  iVar7 = *(int *)(param_2 + 0x40);
  lVar6 = *(long *)(param_2 + 0x38);
  if (0 < iVar7) {
    lVar8 = 0;
    piVar9 = (int *)(lVar6 + 0x1c);
    do {
      if (*piVar9 == param_3) goto LAB_03176520;
      lVar8 = lVar8 + 1;
      piVar9 = piVar9 + 0x3c;
    } while (iVar7 != lVar8);
    lVar8 = 0;
    piVar9 = (int *)(lVar6 + 0x1c);
    do {
      if (*piVar9 == -1) {
        *piVar9 = param_3;
LAB_03176520:
        *param_1 = (int)lVar8;
        return;
      }
      lVar8 = lVar8 + 1;
      piVar9 = piVar9 + 0x3c;
    } while (iVar7 != lVar8);
  }
  *param_1 = iVar7;
  iVar1 = iVar7 + 1;
  if ((int)(*(uint *)(param_2 + 0x44) & 0x3fffffff) <= iVar7) {
    lVar6 = FUN_0317bca0(PTR_PTR_0434a080,iVar1);
    iVar7 = *(int *)(param_2 + 0x40);
    *(long *)(param_2 + 0x38) = lVar6;
  }
  *(int *)(param_2 + 0x40) = iVar1;
  uVar5 = DAT_0388a148;
  uVar4 = DAT_0388a140;
  uVar3 = _UNK_03889a88;
  uVar2 = _DAT_03889a80;
  puVar10 = (undefined8 *)(lVar6 + (long)iVar7 * 0xf0);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0xffffffffffffffff;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0x8000000000000000;
  puVar10[5] = uVar3;
  puVar10[4] = uVar2;
  puVar10[7] = uVar5;
  puVar10[6] = uVar4;
  uVar4 = _UNK_0388a138;
  uVar3 = _DAT_0388a130;
  uVar2 = _DAT_03888d10;
  puVar10[9] = _UNK_03888d18;
  puVar10[8] = uVar2;
  puVar10[0xb] = uVar4;
  puVar10[10] = uVar3;
  FUN_032c2320(puVar10 + 0x16);
  puVar10[0x18] = 0;
  puVar10[0x19] = 0x8000000000000000;
  FUN_032c2320(puVar10 + 0x1a);
  *(undefined1 *)(puVar10 + 0x1c) = 0;
  *(undefined1 *)(puVar10 + 0x10) = 0;
  *(int *)((long)puVar10 + 0x1c) = param_3;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  return;
}


