/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319689c; name: FUN_0319689c
 */


void FUN_0319689c(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short sVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar7 = *(long *)(param_1 + 0x20);
  iVar8 = *param_2;
  if (iVar8 < *(int *)(lVar7 + 0x20)) {
    lVar10 = *(long *)(lVar7 + 0x18);
    iVar9 = iVar8;
    if (*(int *)(lVar7 + 0x98) != 0) {
      iVar9 = *(int *)(*(long *)(lVar7 + 0x90) + (long)iVar8 * 4);
    }
    if (iVar9 == -1) goto LAB_031968d8;
    plVar6 = (long *)(lVar7 + 0xb0);
    iVar8 = iVar9;
  }
  else {
    plVar6 = (long *)(lVar7 + 0xd0);
    iVar8 = iVar8 - *(int *)(lVar7 + 0x20);
  }
  lVar10 = *plVar6;
LAB_031968d8:
  piVar12 = (int *)(lVar10 + (long)iVar8 * 0x10);
  sVar1 = (short)piVar12[2];
  if (sVar1 < 1) {
    auVar14._8_4_ = 0xff7fffee;
    auVar14._0_8_ = 0xff7fffeeff7fffee;
    auVar14._12_4_ = 0xff7fffee;
    auVar13._8_4_ = 0x7f7fffee;
    auVar13._0_8_ = 0x7f7fffee7f7fffee;
    auVar13._12_4_ = 0x7f7fffee;
  }
  else {
    iVar8 = *piVar12;
    lVar10 = (long)iVar8;
    auVar13._8_4_ = 0x7f7fffee;
    auVar13._0_8_ = 0x7f7fffee7f7fffee;
    auVar13._12_4_ = 0x7f7fffee;
    lVar11 = (long)*(int *)(lVar7 + 0x30) * -0x14 + lVar10 * 0x14;
    auVar14._8_4_ = 0xff7fffee;
    auVar14._0_8_ = 0xff7fffeeff7fffee;
    auVar14._12_4_ = 0xff7fffee;
    do {
      if (lVar10 < *(int *)(lVar7 + 0x30)) {
        if (*(int *)(lVar7 + 0x78) == 0) {
          iVar9 = (int)lVar10;
        }
        else {
          iVar9 = *(int *)(*(long *)(lVar7 + 0x70) + lVar10 * 4);
        }
        if (iVar9 == -1) {
          piVar12 = (int *)(*(long *)(lVar7 + 0x28) + lVar10 * 0x14);
        }
        else {
          piVar12 = (int *)(*(long *)(lVar7 + 0xc0) + (long)iVar9 * 0x14);
        }
      }
      else {
        piVar12 = (int *)(*(long *)(lVar7 + 0xe0) + lVar11);
      }
      if (*piVar12 < *(int *)(lVar7 + 0x40)) {
        iVar9 = 0;
        plVar6 = (long *)(lVar7 + 0x38);
      }
      else {
        plVar6 = (long *)(lVar7 + 0xf0);
        iVar9 = *(int *)(lVar7 + 0x40);
      }
      lVar10 = lVar10 + 1;
      puVar2 = (undefined8 *)(*plVar6 + (long)(*piVar12 - iVar9) * 0x10);
      fVar18 = (float)puVar2[1];
      uVar5 = *puVar2;
      fVar20 = (float)uVar5;
      fVar16 = (float)((ulong)uVar5 >> 0x20);
      lVar11 = lVar11 + 0x14;
      fVar15 = (float)*(undefined8 *)(param_1 + 0x90) +
               (float)*(undefined8 *)(param_1 + 0x80) * fVar18 +
               (float)*(undefined8 *)(param_1 + 0x60) * fVar20 +
               (float)*(undefined8 *)(param_1 + 0x70) * fVar16;
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) * fVar18 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar20 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) * fVar16;
      fVar19 = (float)*(undefined8 *)(param_1 + 0x98) +
               (float)*(undefined8 *)(param_1 + 0x88) * fVar18 +
               (float)*(undefined8 *)(param_1 + 0x68) * fVar20 +
               (float)*(undefined8 *)(param_1 + 0x78) * fVar16;
      fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar18 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar20 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar16;
      auVar3._4_4_ = fVar17;
      auVar3._0_4_ = fVar15;
      auVar3._8_4_ = fVar19;
      auVar3._12_4_ = fVar20;
      auVar13 = NEON_fmin(auVar13,auVar3,4);
      auVar4._4_4_ = fVar17;
      auVar4._0_4_ = fVar15;
      auVar4._8_4_ = fVar19;
      auVar4._12_4_ = fVar20;
      auVar14 = NEON_fmax(auVar14,auVar4,4);
    } while (lVar10 < iVar8 + sVar1);
  }
  fVar20 = (float)*param_3;
  fVar15 = (float)((ulong)*param_3 >> 0x20);
  param_4[1] = CONCAT44(auVar13._12_4_ - fVar15,auVar13._8_4_ - fVar20);
  *param_4 = CONCAT44(auVar13._4_4_ - fVar15,auVar13._0_4_ - fVar20);
  param_4[3] = CONCAT44(fVar15 + auVar14._12_4_,fVar20 + auVar14._8_4_);
  param_4[2] = CONCAT44(fVar15 + auVar14._4_4_,fVar20 + auVar14._0_4_);
  return;
}


