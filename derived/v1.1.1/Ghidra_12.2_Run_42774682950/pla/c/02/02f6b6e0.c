/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6b6e0; name: FUN_02f6b6e0
 */


void FUN_02f6b6e0(long *param_1,uint *param_2,int param_3)

{
  undefined1 auVar1 [16];
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  if ((0 < param_3) && (*(char *)(param_1[2] + 9) == '\0')) {
    iVar8 = 1;
    do {
      lVar9 = param_1[1];
      switch(iVar8) {
      case 1:
        uVar5 = *param_2;
        break;
      case 2:
        uVar5 = param_2[1];
        break;
      case 3:
        uVar5 = param_2[2];
        break;
      case 4:
        uVar5 = param_2[3];
        break;
      default:
        uVar5 = 0;
      }
      uVar10 = (ulong)uVar5;
      plVar2 = *(long **)(*param_1 + 8);
      if (((plVar2 == (long *)0x0) ||
          (uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,6,*param_1 + 0x10,lVar9 + uVar10 * 0xc0),
          (uVar3 & 1) != 0)) && ((~*(uint *)(lVar9 + uVar10 * 0xc0 + 0x50) & 0xffffff) != 0)) {
        plVar2 = (long *)param_1[2];
        if ((*(byte *)(plVar2 + 1) & 3) == 0) {
          lVar7 = *param_1;
          lVar9 = lVar9 + uVar10 * 0xc0;
          uVar4 = *(undefined8 *)(lVar9 + 0xb0);
          pcVar6 = *(code **)(*plVar2 + 0x20);
          fVar11 = *(float *)(lVar9 + 0x30) +
                   ((float)*(undefined8 *)(lVar7 + 0x30) + *(float *)(lVar7 + 0x40)) * -0.5;
          fVar12 = *(float *)(lVar9 + 0x34) +
                   ((float)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20) + *(float *)(lVar7 + 0x44)
                   ) * -0.5;
          fVar13 = *(float *)(lVar9 + 0x38) +
                   ((float)*(undefined8 *)(lVar7 + 0x38) + *(float *)(lVar7 + 0x48)) * -0.5;
          fVar14 = *(float *)(lVar9 + 0x3c) +
                   ((float)((ulong)*(undefined8 *)(lVar7 + 0x38) >> 0x20) + *(float *)(lVar7 + 0x4c)
                   ) * -0.5;
          fVar11 = fVar11 * fVar11;
          fVar12 = fVar12 * fVar12;
          fVar13 = fVar13 * fVar13;
          fVar14 = fVar14 * fVar14;
          auVar15._4_4_ = fVar12;
          auVar15._0_4_ = fVar11;
          auVar15._8_4_ = fVar13;
          auVar15._12_4_ = fVar14;
          auVar1._4_4_ = fVar12;
          auVar1._0_4_ = fVar11;
          auVar1._8_4_ = fVar13;
          auVar1._12_4_ = fVar14;
          auVar15 = NEON_ext(auVar15,auVar1,8,1);
          fVar11 = fVar11 + fVar12 + auVar15._0_4_;
        }
        else {
          uVar4 = *(undefined8 *)(lVar9 + uVar10 * 0xc0 + 0xb0);
          pcVar6 = *(code **)(*plVar2 + 0x20);
          fVar11 = 0.0;
        }
        (*pcVar6)(fVar11,plVar2,uVar4);
      }
    } while ((iVar8 < param_3) && (iVar8 = iVar8 + 1, *(char *)(param_1[2] + 9) == '\0'));
  }
  return;
}


