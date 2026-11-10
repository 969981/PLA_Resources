/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4ac88; name: FUN_01a4ac88
 */


void FUN_01a4ac88(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  long *local_28;
  
  FUN_018fc9a0(&local_28,param_1 + 0x2f0);
  plVar7 = local_28;
  if (local_28 != (long *)0x0) {
    fVar10 = *(float *)(local_28 + 0x66) - (float)local_28[100];
    fVar11 = *(float *)((long)local_28 + 0x334) - (float)((ulong)local_28[100] >> 0x20);
    fVar12 = *(float *)(local_28 + 0x67) - (float)local_28[0x65];
    fVar13 = *(float *)((long)local_28 + 0x33c) - (float)((ulong)local_28[0x65] >> 0x20);
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    fVar13 = fVar13 * fVar13;
    auVar14._4_4_ = fVar11;
    auVar14._0_4_ = fVar10;
    auVar14._8_4_ = fVar12;
    auVar14._12_4_ = fVar13;
    auVar6._4_4_ = fVar11;
    auVar6._0_4_ = fVar10;
    auVar6._8_4_ = fVar12;
    auVar6._12_4_ = fVar13;
    auVar14 = NEON_ext(auVar14,auVar6,8,1);
    local_28[0x70] = local_28[0x70] & 0xffffffffffffffefU | 3;
    *(float *)(local_28 + 0x71) = SQRT(auVar14._0_4_ + fVar10 + auVar14._4_4_ + fVar11);
    plVar1 = local_28 + 0x40;
    (**(code **)(local_28[0x40] + 0x10))(plVar1);
    (**(code **)(plVar7[0x40] + 0x18))(plVar1);
    uVar8 = local_28[0x43];
    if (((uint)(uVar8 >> 0x20) <
         (uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) - *(long *)(DAT_043ef5a8 + 0x100)) >> 2)) &&
       (iVar3 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) + (uVar8 >> 0x20) * 4), -1 < iVar3)) {
      *(ulong *)(*(long *)(*(long *)(DAT_043ef5a8 + 0x60) + (long)iVar3 * 0x20) + 0xd0) = uVar8;
    }
    if (local_28 != (long *)0x0) {
      lVar9 = local_28[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


