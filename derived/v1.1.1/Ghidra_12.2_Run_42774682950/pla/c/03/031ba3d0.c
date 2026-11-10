/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba3d0; name: FUN_031ba3d0
 */


void FUN_031ba3d0(int *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (param_3 == 1) {
    iVar7 = *param_1 + -1;
    if (*param_1 < 1) {
      uVar1 = param_1[4];
      puVar4 = *(undefined8 **)(param_1 + 2);
      if ((int)(param_1[5] & 0x3fffffffU) <= (int)uVar1) {
        puVar4 = (undefined8 *)FUN_031bd3f4(PTR_PTR_0434a090,uVar1 + 1,puVar4,uVar1);
        *(undefined8 **)(param_1 + 2) = puVar4;
      }
      if (0 < (int)uVar1) {
        puVar8 = puVar4 + (long)(int)(uVar1 - 1) * 6;
        puVar5 = puVar8 + 6;
        if (uVar1 - 1 != 0) {
          iVar7 = (uVar1 & 1) - uVar1;
          do {
            puVar8 = puVar5;
            iVar7 = iVar7 + 2;
            puVar8[2] = puVar8[-4];
            puVar8[3] = puVar8[-3];
            puVar8[4] = puVar8[-2];
            puVar8[5] = puVar8[-1];
            *puVar8 = puVar8[-6];
            puVar8[1] = puVar8[-5];
            puVar8[-4] = puVar8[-10];
            puVar8[-3] = puVar8[-9];
            puVar8[-2] = puVar8[-8];
            puVar8[-1] = puVar8[-7];
            puVar5 = puVar8 + -0xc;
            puVar8[-6] = *puVar5;
            puVar8[-5] = puVar8[-0xb];
          } while (iVar7 != 0);
          puVar8 = puVar8 + -0x12;
        }
        if ((uVar1 & 1) != 0) {
          uVar6 = puVar8[5];
          puVar5[3] = puVar8[3];
          puVar5[5] = uVar6;
          puVar5[1] = puVar8[1];
          *puVar5 = *puVar8;
          uVar6 = puVar8[2];
          puVar5[4] = puVar8[4];
          puVar5[2] = uVar6;
        }
      }
      uVar6 = param_2[5];
      puVar4[3] = param_2[3];
      puVar4[5] = uVar6;
      puVar4[1] = param_2[1];
      *puVar4 = *param_2;
      uVar6 = param_2[2];
      puVar4[4] = param_2[4];
      puVar4[2] = uVar6;
      param_1[4] = uVar1 + 1;
      param_1[1] = param_1[1] + 1;
    }
    else {
      *param_1 = iVar7;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (long)iVar7 * 0x30);
      uVar6 = *param_2;
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_2 + 1);
      *puVar4 = uVar6;
      uVar6 = param_2[2];
      puVar4[3] = param_2[3];
      puVar4[2] = uVar6;
      uVar6 = param_2[4];
      puVar4[5] = param_2[5];
      puVar4[4] = uVar6;
    }
  }
  else {
    iVar3 = param_1[4];
    lVar2 = *(long *)(param_1 + 2);
    iVar7 = iVar3 + 1;
    if ((int)(param_1[5] & 0x3fffffffU) <= iVar3) {
      lVar2 = FUN_031bd3f4(PTR_PTR_0434a090,iVar7);
      iVar3 = param_1[4];
      *(long *)(param_1 + 2) = lVar2;
    }
    uVar6 = param_2[5];
    puVar4 = (undefined8 *)(lVar2 + (long)iVar3 * 0x30);
    puVar4[3] = param_2[3];
    puVar4[5] = uVar6;
    puVar4[1] = param_2[1];
    *puVar4 = *param_2;
    uVar6 = param_2[2];
    puVar4[4] = param_2[4];
    puVar4[2] = uVar6;
    param_1[4] = iVar7;
  }
  return;
}


