/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a259c; name: FUN_032a259c
 */


undefined8 FUN_032a259c(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (*(char *)((long)param_1 + 0xc) == '\n') {
    iVar1 = (uint)*(byte *)((long)param_1 + 0xd) * 4;
    if (4 < *(byte *)((long)param_1 + 0xd)) {
      FUN_032a26a4(*param_1 + 0x10,(int)param_1[1],iVar1 + -0x10,param_3);
    }
    FUN_032a2398(param_2,0x10,*param_1,(int)param_1[1],iVar1,param_3);
  }
  else {
    if (*(char *)((long)param_1 + 0xc) != '\b') {
      return 0x80040200;
    }
    if (0 < (int)param_3) {
      lVar3 = param_1[1];
      uVar4 = 0;
      puVar5 = (uint *)*param_1;
      uVar6 = (ulong)param_3;
      do {
        uVar7 = uVar4 & 0xfffffffc;
        uVar4 = uVar4 + 4;
        pfVar2 = (float *)(param_2 + uVar7 * 4);
        uVar6 = uVar6 - 1;
        auVar8._0_4_ = *pfVar2 * 255.0;
        auVar8._4_4_ = pfVar2[1] * 255.0;
        auVar8._8_4_ = pfVar2[2] * 255.0;
        auVar8._12_4_ = pfVar2[3] * 255.0;
        auVar9._8_4_ = 0x437f0000;
        auVar9._0_8_ = 0x437f0000437f0000;
        auVar9._12_4_ = 0x437f0000;
        auVar9 = NEON_fminnm(auVar8,auVar9,4);
        auVar9 = NEON_fmax(auVar9,ZEXT816(0),4);
        *puVar5 = (int)auVar9._0_4_ | (int)auVar9._4_4_ << 8 | (int)auVar9._8_4_ << 0x10 |
                  (int)auVar9._12_4_ << 0x18;
        puVar5 = (uint *)((long)puVar5 + (long)(int)lVar3);
      } while (uVar6 != 0);
    }
  }
  return 0;
}


