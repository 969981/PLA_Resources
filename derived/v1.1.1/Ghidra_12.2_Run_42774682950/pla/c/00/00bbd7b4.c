/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbd7b4; name: FUN_00bbd7b4
 */


void FUN_00bbd7b4(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  int local_68 [2];
  
  iVar3 = (int)param_2[0x22];
  if (iVar3 != 4) {
    plVar11 = (long *)param_2[0x14];
    plVar1 = (long *)param_2[0x15];
    if (plVar11 != plVar1) {
      (**(code **)(*(long *)*plVar11 + 0x38))((long *)*plVar11,param_4);
      plVar6 = (long *)*plVar11;
      if ((plVar6[0x13] == 0x464f51c08c21b2ed) &&
         (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
        (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
      }
      while (plVar11 = plVar11 + 1, plVar11 != plVar1) {
        (**(code **)(*(long *)*plVar11 + 0x38))((long *)*plVar11,param_4);
        plVar6 = (long *)*plVar11;
        if ((plVar6[0x13] == 0x464f51c08c21b2ed) &&
           (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
          (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
        }
      }
    }
  }
  plVar11 = (long *)param_2[0x14];
  plVar1 = (long *)param_2[0x15];
  if (plVar11 != plVar1) {
    plVar6 = (long *)*plVar11;
    if ((plVar6[0x13] == -0x79919925d9118ca8) &&
       (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
      (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
    }
    plVar6 = plVar11 + 1;
    if (plVar6 != plVar1) {
      plVar8 = (long *)*plVar6;
      if ((plVar8[0x13] == -0x79919925d9118ca8) &&
         (uVar7 = (**(code **)(*plVar8 + 0x48))(plVar8,param_4), (uVar7 & 1) != 0)) {
        (**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,param_4);
      }
      for (plVar11 = plVar11 + 2; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        plVar6 = (long *)*plVar11;
        if ((plVar6[0x13] == -0x79919925d9118ca8) &&
           (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
          (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
        }
      }
    }
  }
  plVar11 = (long *)param_2[0xd];
  plVar1 = (long *)param_2[0xe];
  piVar10 = &DAT_041e7bf8;
  if (iVar3 == 4) {
    for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      plVar6 = (long *)*plVar11;
      if (*(char *)((long)plVar6 + 0x54) == '\0') {
        if (((int)plVar6[0xb] == 4) &&
           (uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,param_4), (uVar7 & 1) == 0))
        goto LAB_00bbda28;
      }
      else {
        uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,param_4);
        if ((uVar7 & 1) != 0) goto LAB_00bbdc70;
      }
    }
  }
  else {
    for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      (**(code **)(*(long *)*plVar11 + 0x38))((long *)*plVar11,param_4);
      plVar6 = (long *)*plVar11;
      cVar5 = *(char *)((long)plVar6 + 0x54);
      uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,param_4);
      if (cVar5 == '\0') {
        if ((uVar7 & 1) == 0) goto LAB_00bbda28;
      }
      else if ((uVar7 & 1) != 0) goto LAB_00bbdc70;
    }
  }
LAB_00bbda30:
  iVar4 = *piVar10;
  *param_1 = iVar4;
  if (iVar4 == 1) {
    plVar11 = (long *)param_2[0x14];
    plVar1 = (long *)param_2[0x15];
    if (plVar11 != plVar1) {
      plVar6 = (long *)*plVar11;
      if ((plVar6[0x13] == -0x3b0909b185dfe25e) &&
         (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
        (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
      }
      plVar6 = plVar11 + 1;
      if (plVar6 != plVar1) {
        plVar8 = (long *)*plVar6;
        if ((plVar8[0x13] == -0x3b0909b185dfe25e) &&
           (uVar7 = (**(code **)(*plVar8 + 0x48))(plVar8,param_4), (uVar7 & 1) != 0)) {
          (**(code **)(*(long *)*plVar6 + 0x30))((long *)*plVar6,param_4);
        }
        for (plVar11 = plVar11 + 2; plVar11 != plVar1; plVar11 = plVar11 + 1) {
          plVar6 = (long *)*plVar11;
          if ((plVar6[0x13] == -0x3b0909b185dfe25e) &&
             (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
            (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
          }
        }
      }
    }
    if (iVar3 != 4) {
      (**(code **)(*param_2 + 0x60))(param_2,param_4);
    }
    (**(code **)(*param_2 + 0x68))(local_68,param_2,param_3,param_4);
    *param_1 = local_68[0];
    if (1 < local_68[0] - 3U) {
      (**(code **)(*param_2 + 0x70))(param_2,param_4,param_1);
      plVar11 = (long *)param_2[0x14];
      plVar1 = (long *)param_2[0x15];
      if (plVar11 != plVar1) {
        plVar6 = (long *)*plVar11;
        if ((plVar6[0x13] == 0x2c02645014d5a2a5) &&
           (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
          (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
        }
        (**(code **)(*(long *)*plVar11 + 0x40))((long *)*plVar11,param_4,param_1);
        while (plVar11 = plVar11 + 1, plVar11 != plVar1) {
          plVar6 = (long *)*plVar11;
          if ((plVar6[0x13] == 0x2c02645014d5a2a5) &&
             (uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_4), (uVar7 & 1) != 0)) {
            (**(code **)(*(long *)*plVar11 + 0x30))((long *)*plVar11,param_4);
          }
          (**(code **)(*(long *)*plVar11 + 0x40))((long *)*plVar11,param_4,param_1);
        }
      }
      puVar2 = (undefined8 *)param_2[0xe];
      for (puVar9 = (undefined8 *)param_2[0xd]; puVar9 != puVar2; puVar9 = puVar9 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x40))((long *)*puVar9,param_4,param_1);
      }
    }
  }
  return;
LAB_00bbda28:
  piVar10 = (int *)(*plVar11 + 0x58);
  goto LAB_00bbda30;
LAB_00bbdc70:
  piVar10 = &DAT_041e7c00;
  goto LAB_00bbda30;
}


