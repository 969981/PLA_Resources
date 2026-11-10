/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ad0fc; name: FUN_032ad0fc
 */


void FUN_032ad0fc(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*param_2 != 0) {
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  auVar7 = NEON_fmov(0x3f800000,4);
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
    puVar2 = (undefined8 *)(*param_1 + ((long)((ulong)(uVar5 * 3) << 0x20) >> 0x1e));
    uVar3 = *(undefined4 *)(puVar2 + 1);
    auVar6._12_4_ = uVar3;
    auVar6._8_4_ = uVar3;
    puVar1 = (undefined1 *)(param_1[1] + (long)(int)(uVar5 * 3));
    auVar6._0_8_ = *puVar2;
    auVar6 = NEON_fminnm(auVar6,auVar7,4);
    auVar6 = NEON_fmax(auVar6,ZEXT816(0),4);
    puVar1[2] = (char)(int)(auVar6._0_4_ * 255.0 + 0.5);
    *puVar1 = (char)(int)(auVar6._8_4_ * 255.0 + 0.5);
    puVar1[1] = (char)(int)(auVar6._4_4_ * 255.0 + 0.5);
    uVar5 = uVar5 + 1;
  } while( true );
}


