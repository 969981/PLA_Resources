/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136dde0; name: FUN_0136dde0
 */


void FUN_0136dde0(long param_1,int param_2,int param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  char *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  char acStack_a0 [64];
  long *local_48;
  
  snprintf(acStack_a0,0x40,"anime_L_mngm_score_info_00_%02d_L_mngm_num_00_%02d_switch_num",param_2,
           param_3);
  local_c8 = acStack_a0;
  FUN_009313e8(&local_48,&local_c8);
  plVar4 = local_48;
  if (local_48 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04379c88;
LAB_0136dfc0:
    lStack_b8 = *(long *)PTR_PTR_04379d00;
    if (local_48 != (long *)0x0) goto LAB_0136de58;
LAB_0136dfd0:
    local_b0 = 0;
  }
  else {
    lVar10 = local_48[0xb];
    if (local_48 == (long *)0x0) goto LAB_0136dfc0;
    lStack_b8 = local_48[0xc];
    if (local_48 == (long *)0x0) goto LAB_0136dfd0;
LAB_0136de58:
    local_b0 = local_48[0xd];
  }
  local_a8 = (long *)0x0;
  local_c0 = lVar10;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  local_a8 = plVar4;
  lVar11 = *(long *)(param_1 + 0x2c8);
  if (lVar11 == 0) goto LAB_0136e004;
  plVar6 = *(long **)(lVar11 + 0x1a0);
  lVar2 = *(long *)(lVar11 + 0x1a8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar3 = plVar6;
  if ((lVar2 != 0) && (*plVar6 != lVar10)) {
    lVar8 = lVar2 * 0x30;
    plVar9 = plVar6 + lVar2 * 6;
    do {
      lVar8 = lVar8 + -0x30;
      plVar3 = plVar9;
      if (lVar8 == 0) break;
      plVar1 = plVar6 + 6;
      plVar6 = plVar6 + 6;
      plVar3 = plVar6;
    } while (*plVar1 != lVar10);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  plVar6 = (long *)(*(long *)(lVar11 + 0x1a0) + *(long *)(lVar11 + 0x1a8) * 0x30);
  if (plVar3 == plVar6) {
    plVar9 = (long *)0x0;
    if (plVar3 != plVar6) goto LAB_0136def0;
LAB_0136dfe4:
    if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_0136e004;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_c0);
  }
  else {
    plVar9 = plVar3 + 4;
    if (plVar3 == plVar6) goto LAB_0136dfe4;
LAB_0136def0:
    uVar7 = (ulong)*(uint *)(plVar9 + 1);
    if (((*(uint *)(*plVar9 + 0x278) <= *(uint *)(plVar9 + 1)) ||
        (lVar10 = *(long *)(*plVar9 + 600), *(char *)(lVar10 + uVar7 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar10 + uVar7 * 0x48 + 0xb) == '\0')) goto LAB_0136dfe4;
    plVar6 = (long *)(lVar10 + uVar7 * 0x48 + 0x10);
    lVar11 = *plVar6;
    if ((lVar11 != 0) && (*(char *)(lVar10 + uVar7 * 0x48 + 9) == '\0')) {
      fVar12 = *(float *)(lVar11 + 0x20);
      uVar5 = FUN_00227728();
      uVar7 = FUN_00227744(*plVar6);
      if (((float)uVar5 <= fVar12) && ((uVar7 & 1) == 0)) goto LAB_0136dfe4;
    }
  }
  FUN_0283b748((float)param_4,*(undefined8 *)(param_1 + 0x2c8),&local_c0);
LAB_0136e004:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


