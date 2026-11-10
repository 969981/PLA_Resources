/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f15844; name: FUN_02f15844
 */


void FUN_02f15844(long param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long local_30;
  undefined8 local_28;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x10c) >> 3 & 1) == 0) {
    lVar5 = *(long *)(lVar6 + 0x48);
    uVar3 = *(ulong *)(param_1 + 0x28);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar3;
    if (uVar3 != 0) {
      iVar4 = *(int *)(uVar3 + 0x164);
      while( true ) {
        local_28 = auVar10._8_8_;
        local_30 = auVar10._0_8_;
        if ((iVar4 == 0) && (*(long *)(local_30 + 0xd0) != lVar5)) {
          auVar10 = FUN_02f246d0(param_1,&local_30);
        }
        else {
          auVar10._8_8_ = local_30;
          auVar10._0_8_ = *(undefined8 *)(local_30 + 0x48);
        }
        if (auVar10._0_8_ == 0) break;
        iVar4 = *(int *)(auVar10._0_8_ + 0x164);
      }
    }
    return;
  }
  if (((*(uint *)(lVar6 + 0x40) < 2) || (lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 8), lVar5 == 0)
      ) && (lVar5 = DAT_0440a410, DAT_0440a410 == 0)) {
    FUN_02e43d1c();
    cVar2 = *(char *)(DAT_0440a410 + 0xb8);
    lVar5 = DAT_0440a410;
  }
  else {
    cVar2 = *(char *)(lVar5 + 0xb8);
  }
  lVar6 = DAT_0440a410;
  if (cVar2 == '\0') {
    while( true ) {
      if (lVar6 == 0) {
        FUN_02e43d1c();
        cVar2 = *(char *)(DAT_0440a410 + 0xb8);
        lVar5 = DAT_0440a410;
      }
      else {
        cVar2 = *(char *)(lVar6 + 0xb8);
        lVar5 = lVar6;
      }
      if (cVar2 != '\0') break;
      lVar6 = lVar5;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  if (uVar3 == 0) {
    return;
  }
  iVar4 = *(int *)(uVar3 + 0x164);
  do {
    local_28 = auVar9._8_8_;
    local_30 = auVar9._0_8_;
    if (iVar4 == 0) {
      uVar7 = *(uint *)(lVar5 + 0x58);
      if (uVar7 != 0) {
        uVar3 = *(ulong *)(local_30 + 0xd0);
        iVar4 = 0;
        do {
          iVar1 = iVar4 + (uVar7 >> 1);
          uVar8 = *(ulong *)(*(long *)(lVar5 + 0x50) + (long)iVar1 * 8);
          if (uVar8 == uVar3) {
            if (*(long *)(lVar5 + 0x50) + (long)iVar1 * 8 != 0) goto LAB_02f1592c;
            break;
          }
          if (uVar8 < uVar3) {
            iVar4 = iVar1 + 1;
          }
          uVar7 = uVar7 - (uVar8 < uVar3) >> 1;
        } while (uVar7 != 0);
      }
      auVar9 = FUN_02f246d0(param_1,&local_30);
      lVar6 = auVar9._0_8_;
    }
    else {
LAB_02f1592c:
      lVar6 = *(long *)(local_30 + 0x48);
      auVar9._8_8_ = local_30;
      auVar9._0_8_ = lVar6;
    }
    if (lVar6 == 0) {
      return;
    }
    local_30 = auVar9._0_8_;
    iVar4 = *(int *)(local_30 + 0x164);
  } while( true );
}


