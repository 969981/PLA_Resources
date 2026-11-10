/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5330c; name: FUN_01c5330c
 */


bool FUN_01c5330c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 in_q3 [16];
  long *local_18;
  
  fVar10 = in_q3._12_4_;
  fVar9 = in_q3._8_4_;
  fVar8 = in_q3._4_4_;
  fVar7 = in_q3._0_4_;
  FUN_00956dac(&local_18,param_1 + 0x1a8);
  (**(code **)(*local_18 + 0x40))();
  fVar7 = fVar7 - (float)*param_2;
  fVar8 = fVar8 - (float)((ulong)*param_2 >> 0x20);
  fVar9 = fVar9 - (float)param_2[1];
  fVar10 = fVar10 - (float)((ulong)param_2[1] >> 0x20);
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  auVar11._4_4_ = fVar8;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = fVar9;
  auVar11._12_4_ = fVar10;
  auVar5._4_4_ = fVar8;
  auVar5._0_4_ = fVar7;
  auVar5._8_4_ = fVar9;
  auVar5._12_4_ = fVar10;
  auVar11 = NEON_ext(auVar11,auVar5,8,1);
  if (local_18 != (long *)0x0) {
    lVar6 = local_18[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return auVar11._0_4_ + fVar7 + auVar11._4_4_ + fVar8 <= 2304.0;
}


