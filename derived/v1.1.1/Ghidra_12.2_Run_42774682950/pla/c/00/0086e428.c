/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086e428; name: FUN_0086e428
 */


void FUN_0086e428(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_043783c0;
  pcVar8 = *(code **)(PTR_DAT_043783c0 + 0x38);
  local_78 = PTR_DAT_043783c0 + 0x10;
  (*pcVar8)(&local_78);
  local_70 = 0;
  lVar2 = param_1 + 0x938;
  if (*(char *)(param_1 + 0xa18) != '\0') {
    lVar2 = param_1 + 0x918;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar5 = param_1 + 0x48;
    lVar1 = param_1 + 0x30;
    lVar4 = FUN_007e9088(lVar5);
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
    puVar7 = (undefined8 *)(lVar4 + 0x10);
    *puVar7 = 0;
    plVar6 = (long *)(lVar4 + 0x30);
    *plVar6 = 0;
    FUN_007e3400(puVar7);
    *plVar6 = (long)(puVar3 + 0x10);
    (*pcVar8)(plVar6);
    FUN_007e8fa0(lVar1,lVar1,lVar4);
    FUN_007e346c(puVar7,lVar2);
    *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
    *(undefined8 *)(lVar4 + 0x40) = uStack_68;
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_007e9088(lVar5);
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
      puVar7 = (undefined8 *)(lVar4 + 0x10);
      *puVar7 = 0;
      plVar6 = (long *)(lVar4 + 0x30);
      *plVar6 = 0;
      FUN_007e3400(puVar7);
      *plVar6 = (long)(puVar3 + 0x10);
      (*pcVar8)(plVar6);
      FUN_007e8fa0(lVar1,lVar1,lVar4);
      FUN_007e346c(puVar7,lVar2);
      *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      if (*(int *)(param_1 + 0x58) != 0) {
        lVar5 = FUN_007e9088(lVar5);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = lVar5 - *(int *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar5 + 0x38) = 0;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        puVar7 = (undefined8 *)(lVar5 + 0x10);
        *puVar7 = 0;
        plVar6 = (long *)(lVar5 + 0x30);
        *plVar6 = 0;
        FUN_007e3400(puVar7);
        *plVar6 = (long)(puVar3 + 0x10);
        (*pcVar8)(plVar6);
        FUN_007e8fa0(lVar1,lVar1,lVar5);
        FUN_007e346c(puVar7,lVar2);
        *(ulong *)(lVar5 + 0x38) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(lVar5 + 0x40) = uStack_68;
      }
    }
  }
  return;
}


