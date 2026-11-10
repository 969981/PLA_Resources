/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a88a74; name: FUN_01a88a74
 */


void FUN_01a88a74(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  long *local_28;
  
  FUN_01839c8c(&local_28,param_1 + 0x15a);
  uVar6 = (**(code **)(*param_1 + 0x1a0))(param_1);
  if ((uVar6 & 1) == 0) {
    fVar8 = 1.0;
    if (local_28 == (long *)0x0) goto LAB_01a88b04;
  }
  else {
    if (local_28 == (long *)0x0) {
      fVar8 = 1.0;
      goto LAB_01a88b04;
    }
    fVar8 = (float)local_28[0x2a] * (float)DAT_0388a140;
    fVar9 = (float)((ulong)local_28[0x2a] >> 0x20) * (float)((ulong)DAT_0388a140 >> 0x20);
    fVar10 = (float)local_28[0x2b] * (float)DAT_0388a148;
    fVar11 = (float)((ulong)local_28[0x2b] >> 0x20) * (float)((ulong)DAT_0388a148 >> 0x20);
    auVar12._4_4_ = fVar9;
    auVar12._0_4_ = fVar8;
    auVar12._8_4_ = fVar10;
    auVar12._12_4_ = fVar11;
    auVar5._4_4_ = fVar9;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = fVar10;
    auVar5._12_4_ = fVar11;
    auVar12 = NEON_ext(auVar12,auVar5,8,1);
    fVar9 = auVar12._0_4_ + fVar8 + auVar12._4_4_ + fVar9;
    fVar8 = -1.0;
    if ((-1.0 <= fVar9) && (fVar8 = fVar9, 1.0 < fVar9)) {
      fVar8 = 1.0;
    }
  }
  lVar7 = local_28[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
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
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_28 + 0x20))();
  }
LAB_01a88b04:
  FUN_0095d8f0(fVar8);
  return;
}


