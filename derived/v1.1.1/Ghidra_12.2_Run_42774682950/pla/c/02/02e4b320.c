/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b320; name: FUN_02e4b320
 */


undefined8
FUN_02e4b320(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,long *param_5,
            int *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  iVar9 = *(int *)(param_4 + 0x50);
  uVar5 = (ulong)iVar9;
  if (*(int *)((long)param_4 + 0x284) < 1) {
    if (0 < iVar9) {
      uVar6 = 0;
      do {
        if (param_4[uVar6 + 0x40] == *param_3) {
          puVar11 = param_4 + (uVar5 - 1) * 4;
          uVar7 = puVar11[3];
          puVar8 = param_4 + (uVar6 & 0xffffffff) * 4;
          puVar8[1] = puVar11[1];
          puVar8[3] = uVar7;
          uVar7 = *puVar11;
          puVar8[2] = puVar11[2];
          *puVar8 = uVar7;
          param_4[(uVar6 & 0xffffffff) + 0x40] = param_4[uVar5 + 0x3f];
          *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + -1;
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
  }
  else if (0 < iVar9) {
    lVar12 = 0;
    puVar11 = param_4 + 0x40;
    puVar8 = param_4;
    do {
      uVar5 = FUN_02e4b578(param_2,puVar8);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = FUN_02e4b320(param_1,param_2,param_3,*puVar11,param_5,param_6), (uVar5 & 1) == 0))
      {
        pauVar10 = (undefined1 (*) [16])*puVar11;
        iVar9 = *(int *)pauVar10[0x28];
        if (3 < iVar9) {
          auVar14 = *pauVar10;
          auVar13 = pauVar10[1];
          lVar12 = (((ulong)(iVar9 - 1U) & 1) - (long)iVar9) + 1;
          pauVar10 = pauVar10 + 3;
          do {
            pauVar4 = pauVar10;
            auVar14 = NEON_fmin(auVar14,pauVar4[-1],4);
            auVar14 = NEON_fmin(auVar14,pauVar4[1],4);
            lVar12 = lVar12 + 2;
            auVar13 = NEON_fmax(auVar13,*pauVar4,4);
            auVar13 = NEON_fmax(auVar13,pauVar4[2],4);
            pauVar10 = pauVar4 + 4;
          } while (lVar12 != 0);
          if ((iVar9 - 1U & 1) != 0) {
            auVar13 = NEON_fmax(auVar13,pauVar4[4],4);
            auVar14 = NEON_fmin(auVar14,pauVar4[3],4);
          }
          puVar8[1] = auVar14._8_8_;
          *puVar8 = auVar14._0_8_;
          puVar8[3] = auVar13._8_8_;
          puVar8[2] = auVar13._0_8_;
          return 0;
        }
        plVar3 = (long *)FUN_02e4b5dc(param_1 + 0x20);
        if (plVar3 == (long *)0x0) {
          iVar9 = 0x34;
        }
        else {
          plVar3[1] = (long)pauVar10;
          *plVar3 = *param_5;
          *param_5 = (long)plVar3;
          iVar9 = 1;
        }
        iVar2 = *(int *)(param_4 + 0x50);
        puVar1 = param_4 + ((long)iVar2 + -1) * 4;
        uVar7 = puVar1[1];
        puVar8[3] = puVar1[3];
        puVar8[1] = uVar7;
        uVar7 = *puVar1;
        puVar8[2] = puVar1[2];
        *puVar8 = uVar7;
        *puVar11 = param_4[(long)iVar2 + 0x3f];
        *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + -1;
        if (iVar9 == 1) {
          return 0;
        }
        FUN_02e46974(param_1 + 0x18,pauVar10);
        *param_6 = iVar9;
        return 0;
      }
      lVar12 = lVar12 + 1;
      puVar11 = puVar11 + 1;
      puVar8 = puVar8 + 4;
    } while (lVar12 < *(int *)(param_4 + 0x50));
  }
  return 1;
}


