/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03190ea0; name: FUN_03190ea0
 */


void FUN_03190ea0(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  
  plVar2 = (long *)(param_1 + 0x188);
  lVar7 = FUN_031920dc(plVar2,param_3);
  if (lVar7 == 0) {
    lVar7 = -0x100000000;
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = *(uint *)(lVar7 + 4);
    lVar7 = (lVar7 - *(long *)(param_1 + 0x198)) * 0x20000000;
  }
  lVar14 = *plVar2;
  uVar15 = uVar15 | (uint)lVar7;
  piVar16 = (int *)(lVar14 + (long)(int)uVar15 * 0x38 + 0x10);
  FUN_02ff1f1c(param_4 + 2,0,*piVar16,0);
  puVar6 = PTR_PTR_0434a090;
  iVar8 = *piVar16;
  if (iVar8 < 1) {
    *(undefined1 *)(param_4 + 5) = 0;
  }
  else {
    lVar14 = lVar14 + (long)(int)uVar15 * 0x38;
    bVar11 = 0;
    uVar13 = 0;
    lVar12 = 0x10;
    bVar5 = false;
    do {
      lVar10 = *(long *)(lVar14 + 8);
      bVar3 = *(byte *)(lVar10 + lVar12);
      if ((bVar3 >> 3 & 1) == 0) {
        if (*(int *)(*(long *)(lVar14 + 0x28) + uVar13 * 4) == param_2) {
          bVar11 = bVar11 | bVar3 & 0x40;
          *(undefined1 *)(lVar10 + lVar12) = 8;
          iVar8 = (int)param_4[1];
          uVar9 = *(uint *)((long)param_4 + 0xc);
          uVar1 = iVar8 + 1;
          if (iVar8 < (int)(uVar9 & 0x3fffffff)) {
            lVar10 = *param_4;
          }
          else {
            lVar10 = *param_4;
            if (0x3ffffffe < iVar8) {
              FUN_032bd0a8(uVar1);
              uVar9 = *(uint *)((long)param_4 + 0xc);
            }
            uVar9 = (uVar9 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar9) {
              uVar9 = 0x3fffffff;
            }
            uVar4 = uVar1;
            if ((int)uVar1 <= (int)uVar9) {
              uVar4 = uVar9;
            }
            lVar10 = FUN_032bd1d4(puVar6,uVar4,2,lVar10,iVar8,(uint *)((long)param_4 + 0xc));
            iVar8 = (int)param_4[1];
            *param_4 = lVar10;
          }
          *(short *)(lVar10 + (long)iVar8 * 2) = (short)uVar13;
          *(uint *)(param_4 + 1) = uVar1;
          lVar10 = (uVar13 >> 5 & 0x7ffffff) * 4;
          *(uint *)(param_4[2] + lVar10) =
               *(uint *)(param_4[2] + lVar10) | 1 << (ulong)((uint)uVar13 & 0x1f);
          iVar8 = *piVar16;
        }
        else {
          bVar5 = true;
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x14;
    } while ((long)uVar13 < (long)iVar8);
    *(bool *)(param_4 + 5) = bVar11 != 0;
    if (bVar5) {
      return;
    }
  }
  if ((uint)((ulong)lVar7 >> 0x20) <= *(uint *)(param_1 + 0x1a0)) {
    lVar7 = *(long *)(param_1 + 0x198) + (lVar7 >> 0x20) * 8;
    if (*(uint *)(lVar7 + 4) == uVar15) goto LAB_03190fc0;
  }
  lVar7 = FUN_031920dc(plVar2,*plVar2 + (long)(int)uVar15 * 0x38);
LAB_03190fc0:
  FUN_03192a2c(plVar2,lVar7);
  return;
}


