/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5113c; name: FUN_02e5113c
 */


long * FUN_02e5113c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if (uVar3 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x28);
    fVar15 = 3.4028235e+38;
    plVar7 = (long *)0x0;
    plVar10 = plVar5;
    do {
      lVar11 = *plVar10;
      if ((*(char *)(lVar11 + 0x690) != '\0') && (uVar6 = *(uint *)(lVar11 + 0x80), uVar6 != 0)) {
        plVar4 = *(long **)(lVar11 + 0x78);
        plVar8 = plVar7;
        plVar5 = plVar4;
        do {
          plVar7 = plVar8;
          if (plVar5[(ulong)((int)plVar5[0x10] - 1) + 8] != param_1) {
            lVar9 = *plVar5;
            lVar2 = FUN_02e5312c(param_2 + 0x30,*(undefined8 *)(lVar9 + 0x40),&local_70);
            if (lVar2 == 0 || local_70._0_1_ == '\0') {
LAB_02e511c8:
              fVar12 = *(float *)(param_2 + 0x58);
            }
            else if (*(char *)(lVar2 + 0x14) == '\0') {
              lVar2 = FUN_02e58f1c(lVar2 + 8);
              if (lVar2 == 0) goto LAB_02e511c8;
              fVar12 = *(float *)(lVar2 + 0x80);
            }
            else {
              lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x10);
              local_80 = *(undefined4 *)(lVar2 + 0x78);
              local_7c = *(undefined4 *)(lVar2 + 0x7c);
              uStack_78 = *(undefined4 *)(lVar2 + 0x80);
              FUN_02e54328(&local_70,lVar9,&local_80);
              lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x10);
              fVar13 = fStack_6c - *(float *)(lVar2 + 0x7c);
              fVar12 = local_70 - *(float *)(lVar2 + 0x78);
              fVar14 = local_68 - *(float *)(lVar2 + 0x80);
              fVar12 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
            }
            fVar12 = *(float *)((long)plVar5 + 0x84) + fVar12;
            bVar1 = fVar15 <= fVar12;
            fVar15 = (float)NEON_fminnm(fVar12,fVar15);
            plVar4 = *(long **)(lVar11 + 0x78);
            uVar6 = *(uint *)(lVar11 + 0x80);
            plVar7 = plVar5;
            if (bVar1) {
              plVar7 = plVar8;
            }
          }
          plVar5 = plVar5 + 0x12;
          plVar8 = plVar7;
        } while (plVar5 != plVar4 + (ulong)uVar6 * 0x12);
        plVar5 = *(long **)(param_1 + 0x28);
        uVar3 = *(uint *)(param_1 + 0x30);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar5 + uVar3);
  }
  return plVar7;
}


