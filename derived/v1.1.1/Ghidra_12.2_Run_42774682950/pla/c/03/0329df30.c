/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329df30; name: FUN_0329df30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0329df30(long param_1,int param_2,undefined8 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  uVar10 = DAT_0388a148;
  uVar9 = DAT_0388a140;
  uVar8 = _UNK_0388a138;
  uVar7 = _DAT_0388a130;
  uVar6 = _UNK_03889a88;
  uVar5 = _DAT_03889a80;
  uVar4 = _UNK_03888d18;
  uVar3 = _DAT_03888d10;
  if (*(int *)(param_1 + 0x30) < 1) {
    if (0 < (int)param_4) {
      uVar12 = (ulong)param_4;
      param_3 = param_3 + 4;
      do {
        param_3[1] = uVar4;
        *param_3 = uVar3;
        param_3[3] = uVar8;
        param_3[2] = uVar7;
        uVar12 = uVar12 - 1;
        param_3[-3] = uVar6;
        param_3[-4] = uVar5;
        param_3[-1] = uVar10;
        param_3[-2] = uVar9;
        param_3 = param_3 + 8;
      } while (uVar12 != 0);
    }
  }
  else if ((0 < (int)param_4) && (iVar11 = param_4 * 4, 0 < iVar11)) {
    puVar13 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)param_2 * 0x40);
    do {
      iVar11 = iVar11 + -1;
      uVar1 = *(undefined4 *)(puVar13 + 1);
      uVar2 = *(undefined4 *)((long)puVar13 + 0xc);
      *param_3 = *puVar13;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *(undefined4 *)((long)param_3 + 0xc) = uVar2;
      puVar13 = puVar13 + 2;
      param_3 = param_3 + 2;
    } while (iVar11 != 0);
  }
  return;
}


