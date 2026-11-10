/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b51aa4; name: FUN_01b51aa4
 */


bool FUN_01b51aa4(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  long *local_28;
  
  fVar10 = param_4._12_4_;
  fVar9 = param_4._8_4_;
  fVar8 = param_4._4_4_;
  fVar7 = param_4._0_4_;
  if (*(char *)(param_5 + 0x218) == '\0') {
    bVar5 = false;
  }
  else {
    FUN_009c69bc(&local_28);
    (**(code **)(*local_28 + 0x40))();
    fVar7 = fVar7 - (float)*param_6;
    fVar8 = fVar8 - (float)((ulong)*param_6 >> 0x20);
    fVar9 = fVar9 - (float)param_6[1];
    fVar10 = fVar10 - (float)((ulong)param_6[1] >> 0x20);
    fVar7 = fVar7 * fVar7;
    fVar8 = fVar8 * fVar8;
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    auVar11._4_4_ = fVar8;
    auVar11._0_4_ = fVar7;
    auVar11._8_4_ = fVar9;
    auVar11._12_4_ = fVar10;
    auVar4._4_4_ = fVar8;
    auVar4._0_4_ = fVar7;
    auVar4._8_4_ = fVar9;
    auVar4._12_4_ = fVar10;
    auVar11 = NEON_ext(auVar11,auVar4,8,1);
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    param_1 = *(float *)(param_5 + 0x210) + param_1;
    bVar5 = auVar11._0_4_ + fVar7 + auVar11._4_4_ + fVar8 <= param_1 * param_1;
  }
  return bVar5;
}


