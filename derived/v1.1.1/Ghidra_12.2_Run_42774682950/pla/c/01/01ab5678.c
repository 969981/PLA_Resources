/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab5678; name: FUN_01ab5678
 */


bool FUN_01ab5678(float param_1,float param_2,float param_3,undefined1 param_4 [16],long param_5,
                 undefined8 *param_6)

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
  undefined8 uVar12;
  undefined8 uVar13;
  long *local_38;
  
  uVar13 = param_4._8_8_;
  uVar12 = param_4._0_8_;
  if (*(char *)(param_5 + 0x20c) != '\0') {
    FUN_009c69bc(&local_38);
    (**(code **)(*local_38 + 0x40))();
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[0xb];
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
        (**(code **)(*local_38 + 0x20))();
      }
    }
    fVar9 = (float)((ulong)*param_6 >> 0x20);
    fVar8 = (float)((ulong)uVar12 >> 0x20);
    if (ABS(fVar8 - fVar9) <= param_2) {
      fVar7 = (float)uVar12 - (float)*param_6;
      fVar8 = fVar8 - fVar9;
      fVar9 = (float)uVar13 - (float)param_6[1];
      fVar10 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)param_6[1] >> 0x20);
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
      param_1 = *(float *)(param_5 + 0x204) * param_3 + param_1;
      return auVar11._0_4_ + fVar7 + auVar11._4_4_ + fVar8 <= param_1 * param_1;
    }
  }
  return false;
}


