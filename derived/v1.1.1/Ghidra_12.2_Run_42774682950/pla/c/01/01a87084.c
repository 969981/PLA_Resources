/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a87084; name: FUN_01a87084
 */


void FUN_01a87084(long *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  long lVar8;
  float extraout_s0;
  float fVar9;
  float extraout_var;
  float fVar10;
  float extraout_var_00;
  float extraout_var_01;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  long local_40;
  long lStack_38;
  long *local_30;
  long *local_28;
  
  if (0.0 < *(float *)(param_1[0xb8] + 0x88)) {
    (**(code **)(*param_1 + 0x288))();
    lStack_38 = CONCAT44(extraout_var_01,extraout_var_00);
    local_40 = CONCAT44(extraout_var,extraout_s0);
    FUN_01839c8c(&local_30,param_1 + 0x15a);
    if (local_30 != (long *)0x0) {
      FUN_01839c8c(&local_28,param_1 + 0x15a);
      if (local_28 != (long *)0x0) {
        lVar8 = local_28[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        iVar3 = *(int *)((long)local_28 + 0x7c);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
        if (iVar3 == 2) {
          lVar8 = local_30[0x1a];
          *(undefined8 *)(lVar8 + 0xc0) = 0;
          *(undefined8 *)(lVar8 + 200) = 0;
        }
      }
      if (local_30 != (long *)0x0) {
        lVar8 = local_30[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
    uVar7 = (**(code **)(*param_1 + 0x1a0))(param_1);
    if ((uVar7 & 1) == 0) {
      param_1[0xde] = local_40;
      param_1[0xdf] = lStack_38;
      if ((char)param_1[0xdc] == '\0') {
        *(undefined1 *)(param_1 + 0xdc) = 1;
      }
      fVar9 = extraout_s0;
      fVar10 = extraout_var;
      fVar12 = extraout_var_00;
      fVar11 = extraout_var_01;
    }
    else {
      (**(code **)(*param_1 + 0x100))(param_1,&local_40);
      fVar12 = (float)lStack_38;
      fVar11 = (float)((ulong)lStack_38 >> 0x20);
      fVar9 = (float)local_40;
      fVar10 = (float)((ulong)local_40 >> 0x20);
    }
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = fVar12 * fVar12;
    auVar13._12_4_ = fVar11 * fVar11;
    auVar6._4_4_ = fVar10;
    auVar6._0_4_ = fVar9;
    auVar6._8_4_ = fVar12 * fVar12;
    auVar6._12_4_ = fVar11 * fVar11;
    auVar13 = NEON_ext(auVar13,auVar6,8,1);
    fVar12 = DAT_0423a0f8 * *(float *)(param_1 + 0x17d);
    *(undefined1 *)((long)param_1 + 0x704) = 1;
    *(float *)(param_1 + 0xe0) = fVar12;
    *(float *)(param_1 + 0xe1) = fVar12 + SQRT(auVar13._0_4_ + fVar9 + auVar13._4_4_ + fVar10);
    if (((*(int *)((long)param_1 + 0x914) != 1) &&
        (FUN_009c685c(&local_28,param_1 + 0xb9), local_28 != (long *)0x0)) &&
       ((**(code **)(*local_28 + 0x1f0))(), local_28 != (long *)0x0)) {
      lVar8 = local_28[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    *(undefined1 *)((long)param_1 + 0x9c4) = 0;
    *(undefined4 *)((long)param_1 + 0x914) = 2;
  }
  return;
}


