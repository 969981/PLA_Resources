/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cfe0a8; name: FUN_00cfe0a8
 */


void FUN_00cfe0a8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  long lVar13;
  undefined8 local_38;
  
  uVar4 = *(undefined4 *)(param_2 + 1);
  local_38 = (long *)param_2[2];
  if (local_38 == (long *)0x0) {
    FUN_00cea9e4(param_1,uVar4,&local_38);
  }
  else {
    lVar13 = local_38[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00cfe290;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar10;
    }
    plVar8 = local_38;
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_00cea9e4(param_1,uVar4,&local_38);
    if (plVar8 != (long *)0x0) {
      lVar13 = plVar8[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
  }
  *param_1 = &PTR_LAB_041e90e0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = &PTR_LAB_041e9318;
  param_1[9] = &PTR_LAB_041e9210;
  param_1[10] = &PTR_LAB_041e92f0;
  uVar10 = *param_2;
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(param_2 + 1);
  param_1[0x4e] = uVar10;
  lVar13 = param_2[2];
  param_1[0x50] = lVar13;
  if (lVar13 != 0) {
    lVar13 = *(long *)(lVar13 + 0x58);
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_00cfe290:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_00cfe2a8(param_1 + 0x51);
  *(undefined1 *)(param_1 + 0x5c) = 1;
  uVar9 = local_38._4_4_;
  local_38 = (long *)CONCAT44(local_38._4_4_,0x3dcccccd);
  if (*(float *)(param_1 + 0x4e) < 0.1) {
    puVar11 = &local_38;
  }
  else {
    puVar11 = param_1 + 0x4e;
  }
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)puVar11;
  local_38 = (long *)((ulong)local_38._4_4_ << 0x20);
  pfVar2 = (float *)((long)param_1 + 0x274);
  if (*(float *)((long)param_1 + 0x274) < 0.0) {
    pfVar12 = (float *)&local_38;
  }
  else {
    pfVar12 = pfVar2;
  }
  fVar5 = *pfVar12;
  *pfVar2 = fVar5;
  local_38 = (long *)CONCAT44(uVar9,0x3f800000);
  if (1.0 < fVar5) {
    pfVar12 = (float *)&local_38;
  }
  else {
    pfVar12 = pfVar2;
  }
  *pfVar2 = *pfVar12;
  return;
}


