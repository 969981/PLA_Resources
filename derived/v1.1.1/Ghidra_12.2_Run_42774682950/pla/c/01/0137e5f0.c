/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137e5f0; name: FUN_0137e5f0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0137e5f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  puStack_68 = (undefined1 *)*param_2;
  local_70 = (undefined1 *)*param_1;
  if (puStack_68 == &DAT_cbf29ce484222645) {
    bVar2 = true;
    uVar5 = 1000000;
    if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137e684;
LAB_0137e9c4:
    bVar2 = uVar5 < 1000000 || !bVar2;
  }
  else {
    uVar5 = FUN_016acf5c(*param_4,&puStack_68);
    if (*(char *)(param_4 + 1) == '\0') {
      iVar6 = FUN_016acbec(*param_4,&puStack_68);
      bVar2 = iVar6 == 0xff;
    }
    else {
      bVar2 = false;
    }
    if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e9c4;
LAB_0137e684:
    uVar7 = FUN_016acf5c(*param_4,&local_70);
    if (*(char *)(param_4 + 1) == '\0') {
      iVar6 = FUN_016acbec(*param_4,&local_70);
      bVar3 = iVar6 != 0xff;
    }
    else {
      bVar3 = true;
    }
    bVar4 = bVar3;
    if ((bVar2) || (bVar4 = false, !bVar3)) {
      if (bVar2) {
        bVar2 = (bool)(uVar5 < uVar7 & (bVar4 ^ 1U));
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = uVar5 < uVar7;
    }
  }
  puStack_68 = (undefined1 *)*param_3;
  local_70 = (undefined1 *)*param_2;
  if (puStack_68 == &DAT_cbf29ce484222645) {
    bVar3 = true;
    uVar5 = 1000000;
    if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137e718;
LAB_0137e9ec:
    bVar3 = uVar5 < 1000000 || !bVar3;
    if (bVar2) goto LAB_0137e864;
LAB_0137e764:
    if (!bVar3) {
      return 0;
    }
    uVar8 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar8;
    puStack_68 = (undefined1 *)*param_2;
    local_70 = (undefined1 *)*param_1;
    if (puStack_68 == &DAT_cbf29ce484222645) {
      bVar2 = true;
      uVar5 = 1000000;
      if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137e7e8;
LAB_0137ea18:
      if ((999999 < uVar5) && (bVar2)) goto LAB_0137e950;
    }
    else {
      uVar5 = FUN_016acf5c(*param_4,&puStack_68);
      if (*(char *)(param_4 + 1) == '\0') {
        iVar6 = FUN_016acbec(*param_4,&puStack_68);
        bVar2 = iVar6 == 0xff;
      }
      else {
        bVar2 = false;
      }
      if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137ea18;
LAB_0137e7e8:
      uVar7 = FUN_016acf5c(*param_4,&local_70);
      if (*(char *)(param_4 + 1) == '\0') {
        iVar6 = FUN_016acbec(*param_4,&local_70);
        bVar3 = iVar6 != 0xff;
      }
      else {
        bVar3 = true;
      }
      bVar4 = bVar3;
      if ((bVar2) || (bVar4 = false, !bVar3)) {
        if (bVar2) {
          if (uVar7 <= uVar5) {
            return 1;
          }
          if (bVar4) {
            return 1;
          }
        }
      }
      else if (uVar7 <= uVar5) goto LAB_0137e950;
    }
    uVar9 = *param_1;
    uVar8 = 2;
    *param_1 = *param_2;
    *param_2 = uVar9;
  }
  else {
    uVar5 = FUN_016acf5c(*param_4,&puStack_68);
    if (*(char *)(param_4 + 1) == '\0') {
      iVar6 = FUN_016acbec(*param_4,&puStack_68);
      bVar3 = iVar6 == 0xff;
    }
    else {
      bVar3 = false;
    }
    if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e9ec;
LAB_0137e718:
    uVar7 = FUN_016acf5c(*param_4,&local_70);
    if (*(char *)(param_4 + 1) == '\0') {
      iVar6 = FUN_016acbec(*param_4,&local_70);
      bVar4 = iVar6 != 0xff;
      if (bVar3) goto LAB_0137e74c;
LAB_0137e748:
      bVar1 = !bVar4;
      bVar4 = false;
      if (bVar1) goto LAB_0137e74c;
      bVar3 = uVar5 < uVar7;
    }
    else {
      bVar4 = true;
      if (!bVar3) goto LAB_0137e748;
LAB_0137e74c:
      if (bVar3) {
        bVar3 = (bool)(uVar5 < uVar7 & (bVar4 ^ 1U));
      }
      else {
        bVar3 = true;
      }
    }
    if (!bVar2) goto LAB_0137e764;
LAB_0137e864:
    local_70 = (undefined1 *)*param_1;
    if (bVar3) {
      *param_1 = *param_3;
      *param_3 = local_70;
    }
    else {
      *param_1 = *param_2;
      *param_2 = local_70;
      puStack_68 = (undefined1 *)*param_3;
      if (puStack_68 == &DAT_cbf29ce484222645) {
        bVar2 = true;
        uVar5 = 1000000;
        if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137e8c0;
      }
      else {
        uVar5 = FUN_016acf5c(*param_4,&puStack_68);
        if (*(char *)(param_4 + 1) == '\0') {
          iVar6 = FUN_016acbec(*param_4,&puStack_68);
          bVar2 = iVar6 == 0xff;
        }
        else {
          bVar2 = false;
        }
        if (local_70 != &DAT_cbf29ce484222645) {
LAB_0137e8c0:
          uVar7 = FUN_016acf5c(*param_4,&local_70);
          if (*(char *)(param_4 + 1) == '\0') {
            iVar6 = FUN_016acbec(*param_4,&local_70);
            bVar3 = iVar6 != 0xff;
          }
          else {
            bVar3 = true;
          }
          bVar4 = bVar3;
          if ((bVar2) || (bVar4 = false, !bVar3)) {
            if (bVar2) {
              if (uVar7 <= uVar5) {
                return 1;
              }
              if (bVar4) {
                return 1;
              }
            }
            goto LAB_0137e90c;
          }
          if (uVar5 < uVar7) goto LAB_0137e90c;
          goto LAB_0137e950;
        }
      }
      if ((uVar5 < 1000000) || (!bVar2)) {
LAB_0137e90c:
        uVar8 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar8;
        return 2;
      }
    }
LAB_0137e950:
    uVar8 = 1;
  }
  return uVar8;
}


