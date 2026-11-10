/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086e620; name: FUN_0086e620
 */


void FUN_0086e620(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  pcVar9 = *(code **)(PTR_DAT_043783c0 + 0x38);
  puVar1 = PTR_DAT_043783c0 + 0x10;
  local_78 = puVar1;
  (*pcVar9)(&local_78);
  local_70 = 0x65;
  lVar6 = param_1 + 0x48;
  lVar3 = param_1 + 0x8b8;
  if (*(char *)(param_1 + 0xa18) != '\0') {
    lVar3 = param_1 + 0x898;
  }
  lVar2 = param_1 + 0x30;
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar4 = FUN_007e9088(lVar6);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    puVar8 = (undefined8 *)(lVar4 + 0x10);
    *puVar8 = 0;
    plVar7 = (long *)(lVar4 + 0x30);
    *plVar7 = 0;
    FUN_007e3400(puVar8);
    *plVar7 = (long)(PTR_DAT_043783c0 + 0x10);
    (*pcVar9)(plVar7);
    FUN_007e8fa0(lVar2,lVar2,lVar4);
    FUN_007e346c(puVar8,lVar3);
    *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
    *(undefined8 *)(lVar4 + 0x40) = uStack_68;
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_007e9088(lVar6);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      *puVar8 = 0;
      plVar7 = (long *)(lVar4 + 0x30);
      *plVar7 = 0;
      FUN_007e3400(puVar8);
      *plVar7 = (long)(PTR_DAT_043783c0 + 0x10);
      (*pcVar9)(plVar7);
      FUN_007e8fa0(lVar2,lVar2,lVar4);
      FUN_007e346c(puVar8,lVar3);
      *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      if (*(int *)(param_1 + 0x58) != 0) {
        lVar4 = FUN_007e9088(lVar6);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = 0;
        plVar7 = (long *)(lVar4 + 0x30);
        *plVar7 = 0;
        FUN_007e3400(puVar8);
        *plVar7 = (long)(PTR_DAT_043783c0 + 0x10);
        (*pcVar9)(plVar7);
        FUN_007e8fa0(lVar2,lVar2,lVar4);
        FUN_007e346c(puVar8,lVar3);
        *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      }
    }
  }
  local_78 = puVar1;
  (*pcVar9)(&local_78);
  puVar1 = PTR_DAT_043783c0;
  local_70 = 0x66;
  lVar3 = param_1 + 0x8b8;
  if (*(char *)(param_1 + 0xa18) != '\0') {
    lVar3 = param_1 + 0x898;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar4 = FUN_007e9088(lVar6);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    puVar8 = (undefined8 *)(lVar4 + 0x10);
    *puVar8 = 0;
    plVar7 = (long *)(lVar4 + 0x30);
    *plVar7 = 0;
    FUN_007e3400(puVar8);
    *plVar7 = (long)(puVar1 + 0x10);
    (*pcVar9)(plVar7);
    FUN_007e8fa0(lVar2,lVar2,lVar4);
    FUN_007e346c(puVar8,lVar3);
    *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
    *(undefined8 *)(lVar4 + 0x40) = uStack_68;
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_007e9088(lVar6);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      *puVar8 = 0;
      plVar7 = (long *)(lVar4 + 0x30);
      *plVar7 = 0;
      FUN_007e3400(puVar8);
      *plVar7 = (long)(puVar1 + 0x10);
      (*pcVar9)(plVar7);
      FUN_007e8fa0(lVar2,lVar2,lVar4);
      FUN_007e346c(puVar8,lVar3);
      *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      if (*(int *)(param_1 + 0x58) != 0) {
        lVar4 = FUN_007e9088(lVar6);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = 0;
        plVar7 = (long *)(lVar4 + 0x30);
        *plVar7 = 0;
        FUN_007e3400(puVar8);
        *plVar7 = (long)(puVar1 + 0x10);
        (*pcVar9)(plVar7);
        FUN_007e8fa0(lVar2,lVar2,lVar4);
        FUN_007e346c(puVar8,lVar3);
        *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      }
    }
  }
  lVar3 = param_1 + 0x8f8;
  if (*(char *)(param_1 + 0xa18) != '\0') {
    lVar3 = param_1 + 0x8d8;
  }
  uVar5 = FUN_007e4430(lVar3);
  if ((uVar5 & 1) != 0) {
    local_78 = puVar1 + 0x10;
    (*pcVar9)(&local_78);
    local_70 = 0x67;
    lVar3 = param_1 + 0x8f8;
    if (*(char *)(param_1 + 0xa18) != '\0') {
      lVar3 = param_1 + 0x8d8;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_007e9088(lVar6);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      *puVar8 = 0;
      plVar7 = (long *)(lVar4 + 0x30);
      *plVar7 = 0;
      FUN_007e3400(puVar8);
      *plVar7 = (long)(puVar1 + 0x10);
      (*pcVar9)(plVar7);
      FUN_007e8fa0(lVar2,lVar2,lVar4);
      FUN_007e346c(puVar8,lVar3);
      *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      if (*(int *)(param_1 + 0x58) != 0) {
        lVar4 = FUN_007e9088(lVar6);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = 0;
        plVar7 = (long *)(lVar4 + 0x30);
        *plVar7 = 0;
        FUN_007e3400(puVar8);
        *plVar7 = (long)(puVar1 + 0x10);
        (*pcVar9)(plVar7);
        FUN_007e8fa0(lVar2,lVar2,lVar4);
        FUN_007e346c(puVar8,lVar3);
        *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(lVar4 + 0x40) = uStack_68;
        if (*(int *)(param_1 + 0x58) != 0) {
          lVar6 = FUN_007e9088(lVar6);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = lVar6 - *(int *)(param_1 + 0x5c);
          }
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          puVar8 = (undefined8 *)(lVar6 + 0x10);
          *puVar8 = 0;
          plVar7 = (long *)(lVar6 + 0x30);
          *plVar7 = 0;
          FUN_007e3400(puVar8);
          *plVar7 = (long)(puVar1 + 0x10);
          (*pcVar9)(plVar7);
          FUN_007e8fa0(lVar2,lVar2,lVar6);
          FUN_007e346c(puVar8,lVar3);
          *(ulong *)(lVar6 + 0x38) = CONCAT44(uStack_6c,local_70);
          *(undefined8 *)(lVar6 + 0x40) = uStack_68;
        }
      }
    }
  }
  return;
}


