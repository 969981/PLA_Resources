/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4ba4c; name: FUN_02a4ba4c
 */


undefined1  [16]
FUN_02a4ba4c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long *local_18;
  
  uVar14 = param_4._8_8_;
  uVar13 = param_4._0_8_;
  uVar12 = param_3._8_8_;
  uVar11 = param_3._0_8_;
  uVar10 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  FUN_00956dac(&local_18,param_5 + 0x1a8);
  if (local_18 == (long *)0x0) {
    if (*(char *)(param_5 + 0x260) == '\0') {
      return *(undefined1 (*) [16])(param_5 + 0x1f0);
    }
    auVar7 = FUN_02bcb330(param_5 + 0x230);
    *(undefined1 *)(param_5 + 0x260) = 0;
    *(undefined1 (*) [16])(param_5 + 0x1f0) = auVar7;
    *(undefined8 *)(param_5 + 0x208) = uVar10;
    *(undefined8 *)(param_5 + 0x200) = uVar9;
    *(undefined8 *)(param_5 + 0x218) = uVar12;
    *(undefined8 *)(param_5 + 0x210) = uVar11;
    *(undefined8 *)(param_5 + 0x228) = uVar14;
    *(undefined8 *)(param_5 + 0x220) = uVar13;
  }
  else {
    if (*(char *)(param_5 + 0x260) == '\0') {
      auVar6 = SUB1612(*(undefined1 (*) [16])(param_5 + 0x1f0),0);
    }
    else {
      auVar7 = FUN_02bcb330(param_5 + 0x230);
      auVar6 = auVar7._0_12_;
      *(undefined1 *)(param_5 + 0x260) = 0;
      *(undefined1 (*) [16])(param_5 + 0x1f0) = auVar7;
      *(undefined8 *)(param_5 + 0x208) = uVar10;
      *(undefined8 *)(param_5 + 0x200) = uVar9;
      *(undefined8 *)(param_5 + 0x218) = uVar12;
      *(undefined8 *)(param_5 + 0x210) = uVar11;
      *(undefined8 *)(param_5 + 0x228) = uVar14;
      *(undefined8 *)(param_5 + 0x220) = uVar13;
    }
    auVar8 = (**(code **)(*local_18 + 0x40))();
    fVar15 = auVar6._0_4_;
    fVar16 = auVar6._4_4_;
    fVar17 = auVar6._8_4_;
    auVar7._4_4_ = auVar8._4_4_ * fVar15 + (float)((ulong)uVar9 >> 0x20) * fVar16 +
                   (float)((ulong)uVar11 >> 0x20) * fVar17;
    auVar7._0_4_ = auVar8._0_4_ * fVar15 + (float)uVar9 * fVar16 + (float)uVar11 * fVar17;
    auVar7._12_4_ =
         auVar8._12_4_ * fVar15 + (float)((ulong)uVar10 >> 0x20) * fVar16 +
         (float)((ulong)uVar12 >> 0x20) * fVar17;
    auVar7._8_4_ = auVar8._8_4_ * fVar15 + (float)uVar10 * fVar16 + (float)uVar12 * fVar17;
  }
  if (local_18 != (long *)0x0) {
    lVar5 = local_18[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return auVar7;
}


