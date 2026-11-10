/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137ea50; name: FUN_0137ea50
 */


int FUN_0137ea50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  iVar4 = FUN_0137e5f0();
  puStack_68 = (undefined1 *)*param_4;
  local_70 = (undefined1 *)*param_3;
  if (puStack_68 == &DAT_cbf29ce484222645) {
    bVar2 = true;
    uVar5 = 1000000;
    if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137eaf4;
LAB_0137ed44:
    if ((999999 < uVar5) && (bVar2)) {
      return iVar4;
    }
  }
  else {
    uVar5 = FUN_016acf5c(*param_5,&puStack_68);
    if (*(char *)(param_5 + 1) == '\0') {
      iVar6 = FUN_016acbec(*param_5,&puStack_68);
      bVar2 = iVar6 == 0xff;
    }
    else {
      bVar2 = false;
    }
    if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137ed44;
LAB_0137eaf4:
    uVar7 = FUN_016acf5c(*param_5,&local_70);
    if (*(char *)(param_5 + 1) == '\0') {
      iVar6 = FUN_016acbec(*param_5,&local_70);
      bVar3 = iVar6 != 0xff;
    }
    else {
      bVar3 = true;
    }
    bVar1 = bVar3;
    if ((bVar2) || (bVar1 = false, !bVar3)) {
      if (bVar2) {
        if (uVar7 <= uVar5) {
          return iVar4;
        }
        if (bVar1) {
          return iVar4;
        }
      }
    }
    else if (uVar7 <= uVar5) {
      return iVar4;
    }
  }
  uVar9 = *param_3;
  iVar6 = iVar4 + 1;
  *param_3 = *param_4;
  *param_4 = uVar9;
  puStack_68 = (undefined1 *)*param_3;
  local_70 = (undefined1 *)*param_2;
  if (puStack_68 == &DAT_cbf29ce484222645) {
    bVar2 = true;
    uVar5 = 1000000;
    if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137eba0;
LAB_0137ed6c:
    if ((999999 < uVar5) && (bVar2)) {
      return iVar6;
    }
  }
  else {
    uVar5 = FUN_016acf5c(*param_5,&puStack_68);
    if (*(char *)(param_5 + 1) == '\0') {
      iVar8 = FUN_016acbec(*param_5,&puStack_68);
      bVar2 = iVar8 == 0xff;
    }
    else {
      bVar2 = false;
    }
    if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137ed6c;
LAB_0137eba0:
    uVar7 = FUN_016acf5c(*param_5,&local_70);
    if (*(char *)(param_5 + 1) == '\0') {
      iVar8 = FUN_016acbec(*param_5,&local_70);
      bVar3 = iVar8 != 0xff;
    }
    else {
      bVar3 = true;
    }
    bVar1 = bVar3;
    if ((bVar2) || (bVar1 = false, !bVar3)) {
      if (bVar2) {
        if (uVar7 <= uVar5) {
          return iVar6;
        }
        if (bVar1) {
          return iVar6;
        }
      }
    }
    else if (uVar7 <= uVar5) {
      return iVar6;
    }
  }
  uVar9 = *param_2;
  iVar6 = iVar4 + 2;
  *param_2 = *param_3;
  *param_3 = uVar9;
  puStack_68 = (undefined1 *)*param_2;
  local_70 = (undefined1 *)*param_1;
  if (puStack_68 == &DAT_cbf29ce484222645) {
    bVar2 = true;
    uVar5 = 1000000;
    if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137ed98;
  }
  else {
    uVar5 = FUN_016acf5c(*param_5,&puStack_68);
    if (*(char *)(param_5 + 1) == '\0') {
      iVar8 = FUN_016acbec(*param_5,&puStack_68);
      bVar2 = iVar8 == 0xff;
    }
    else {
      bVar2 = false;
    }
    if (local_70 == &DAT_cbf29ce484222645) {
LAB_0137ed98:
      if ((999999 < uVar5) && (bVar2)) {
        return iVar6;
      }
      goto LAB_0137ec90;
    }
  }
  uVar7 = FUN_016acf5c(*param_5,&local_70);
  if (*(char *)(param_5 + 1) == '\0') {
    iVar8 = FUN_016acbec(*param_5,&local_70);
    bVar3 = iVar8 != 0xff;
  }
  else {
    bVar3 = true;
  }
  bVar1 = bVar3;
  if ((bVar2) || (bVar1 = false, !bVar3)) {
    if (bVar2) {
      if (uVar7 <= uVar5) {
        return iVar6;
      }
      if (bVar1) {
        return iVar6;
      }
    }
  }
  else if (uVar7 <= uVar5) {
    return iVar6;
  }
LAB_0137ec90:
  uVar9 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar9;
  return iVar4 + 3;
}


