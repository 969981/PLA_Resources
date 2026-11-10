/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1ed2c; name: FUN_01f1ed2c
 */


/* WARNING: Removing unreachable block (ram,0x01f1edb8) */

void FUN_01f1ed2c(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar1 = *param_2;
  if (0 < iVar1) {
    fVar7 = (float)param_1;
    lVar3 = 0;
    piVar4 = param_2 + 0x17;
    pfVar5 = (float *)(param_3 + 0x50);
    pfVar6 = (float *)(param_4 + 0x50);
    while( true ) {
      lVar2 = *(long *)(piVar4 + -5);
      if (lVar2 == -0x5552164181650ed6) {
        FUN_009a7ff4(pfVar5[1],*pfVar5,pfVar5[2]);
        local_70 = extraout_d0;
        uStack_68 = extraout_var;
        FUN_009a7ff4(pfVar6[1],*pfVar6,pfVar6[2]);
        auVar9._8_8_ = uStack_98;
        auVar9._0_8_ = param_1;
        local_80 = extraout_d0_00;
        uStack_78 = extraout_var_00;
        auVar9 = FUN_009c6b1c(auVar9,&local_70,&local_80);
        uStack_88 = auVar9._8_8_;
        local_90 = auVar9._0_8_;
        auVar9 = FUN_00cb8d18(&local_90);
        *(long *)(piVar4 + -3) = auVar9._0_8_;
        piVar4[-1] = auVar9._8_4_;
        *piVar4 = 0;
        iVar1 = *param_2;
      }
      else {
        auVar8._0_8_ = CONCAT44(pfVar5[1] + (pfVar6[1] - pfVar5[1]) * fVar7,
                                *pfVar5 + (*pfVar6 - *pfVar5) * fVar7);
        auVar8._8_4_ = pfVar5[2] + ((float)*(undefined8 *)(pfVar6 + 2) - pfVar5[2]) * fVar7;
        auVar8._12_4_ =
             pfVar5[3] + ((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) - pfVar5[3]) * fVar7;
        *(undefined8 *)(piVar4 + -3) = auVar8._0_8_;
        auVar9 = NEON_ext(auVar8,auVar8,8,1);
        *(long *)(piVar4 + -1) = auVar9._0_8_;
        if ((lVar2 == 0x5d486426e00af3fc) || (lVar2 == -0x730a4df14d6436b4)) {
          *piVar4 = 0x3f800000;
        }
      }
      lVar3 = lVar3 + 1;
      piVar4 = piVar4 + 0x18;
      pfVar5 = pfVar5 + 0x18;
      pfVar6 = pfVar6 + 0x18;
      if (iVar1 <= lVar3) break;
      if (lVar3 == 0x100) {
                    /* WARNING: Subroutine does not return */
        FUN_01f22c10();
      }
    }
  }
  return;
}


