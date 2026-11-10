/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3d740; name: FUN_01b3d740
 */


void FUN_01b3d740(float param_1,long param_2)

{
  int *piVar1;
  ulong *puVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong **ppuVar10;
  float fVar11;
  ulong *local_48;
  undefined8 uStack_40;
  long *local_38;
  ulong *local_28;
  
  if (*(char *)(param_2 + 0xdd0) == '\0') {
    return;
  }
  local_48 = (ulong *)0x0;
  uStack_40 = 0;
  FUN_01a2bf84(&local_48,param_2 + 0x5c8);
  if (local_48 == (ulong *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_00ba1e00(&local_38);
    puVar6 = local_48;
    if (local_48 != (ulong *)0x0) {
      puVar2 = local_48 + 1;
      do {
        iVar7 = (int)*puVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *(int *)puVar2 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = (ulong *)*puVar6;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 == (long *)0x0) {
    return;
  }
  uVar8 = FUN_01c02c80();
  if ((uVar8 & 1) != 0) {
    fVar11 = *(float *)(param_2 + 0xdc0);
    if (*(float *)(param_2 + 0xdc4) < fVar11) {
      param_1 = *(float *)(param_2 + 0xdc4) + param_1;
      ppuVar10 = (ulong **)(param_2 + 0xdc0);
      if (param_1 <= fVar11) {
        ppuVar10 = &local_48;
      }
      local_48 = (ulong *)CONCAT44(local_48._4_4_,param_1);
      local_28 = (ulong *)((ulong)local_28 & 0xffffffff00000000);
      if (param_1 < 0.0) {
        ppuVar10 = &local_28;
      }
      fVar3 = *(float *)ppuVar10;
      *(float *)(param_2 + 0xdc4) = fVar3;
      if (fVar11 <= fVar3) {
        *(float *)(param_2 + 0xdc4) = fVar11;
        FUN_01c029b4(local_38);
      }
    }
    goto joined_r0x01b3d8c8;
  }
  uVar8 = FUN_01c02f44(local_38);
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_01c03208(local_38);
    if ((uVar8 & 1) == 0) {
      if (*(char *)(param_2 + 0xdd1) != '\0') {
        FUN_01a9b7f0(param_2,param_2 + 0xe00);
        FUN_01a8734c(*(undefined4 *)(param_2 + 0xe04),param_2);
        *(undefined2 *)(param_2 + 0xdd0) = 0;
      }
      goto joined_r0x01b3d8c8;
    }
LAB_01b3d8d8:
    cVar4 = *(char *)(param_2 + 0x6a0);
    *(undefined8 *)(param_2 + 0x6b0) = 0;
    *(undefined8 *)(param_2 + 0x6b8) = 0;
  }
  else {
    if (*(char *)(param_2 + 0xdd2) != '\0') goto LAB_01b3d8d8;
    fVar11 = *(float *)(param_2 + 0xdc8);
    cVar4 = *(char *)(param_2 + 0x6a0);
    *(ulong *)(param_2 + 0x6b8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xdf8) >> 0x20) * fVar11,
                  (float)*(undefined8 *)(param_2 + 0xdf8) * fVar11);
    *(ulong *)(param_2 + 0x6b0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xdf0) >> 0x20) * fVar11,
                  (float)*(undefined8 *)(param_2 + 0xdf0) * fVar11);
  }
  if (cVar4 == '\0') {
    *(undefined1 *)(param_2 + 0x6a0) = 1;
  }
joined_r0x01b3d8c8:
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


