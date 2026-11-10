/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032abf44; name: FUN_032abf44
 */


void FUN_032abf44(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (*param_2 != 0) {
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  auVar12 = NEON_fmov(0x3f800000,4);
  uVar5 = 0;
  do {
    if (*(uint *)((long)param_2 + 0xc) <= uVar5) {
      if (*param_2 == 0) {
        return;
      }
      iVar4 = FUN_0332c1f8(*param_2,param_2);
      if (iVar4 < 0) {
        return;
      }
      uVar5 = *(uint *)(param_2 + 1);
    }
    lVar7 = (long)(int)(uVar5 << 5) * 0xc;
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + lVar7);
      lVar7 = lVar7 + 0xc;
      uVar3 = *(undefined4 *)(puVar1 + 1);
      uVar8 = CONCAT44(uVar3,uVar3);
      auVar11._0_8_ = *puVar1;
      auVar11._8_8_ = uVar8;
      auVar9 = NEON_fminnm(auVar11,auVar12,4);
      auVar9 = NEON_fmax(auVar9,ZEXT816(0),4);
      auVar10._0_8_ = CONCAT44((int)(auVar9._4_4_ * 255.0 + 0.5),(int)(auVar9._0_4_ * 255.0 + 0.5));
      auVar10._8_4_ = (int)(auVar9._8_4_ * 255.0 + 0.5);
      auVar10._12_4_ = 0xff;
      auVar9._0_8_ = NEON_sqxtn(auVar11._0_8_,auVar10,4);
      auVar9._8_8_ = uVar8;
      auVar9 = NEON_sqxtn2(auVar9,auVar10,4);
      uVar8 = NEON_sqxtun(auVar10._0_8_,auVar9,2);
      puVar2 = (undefined1 *)(param_1[1] + (long)(int)(uVar5 << 7) + lVar6);
      lVar6 = lVar6 + 4;
      *puVar2 = (char)uVar8;
      puVar2[1] = (char)((ulong)uVar8 >> 8);
      puVar2[2] = (char)((ulong)uVar8 >> 0x10);
      puVar2[3] = (char)((ulong)uVar8 >> 0x18);
    } while (lVar6 != 0x80);
    uVar5 = uVar5 + 1;
  } while( true );
}


