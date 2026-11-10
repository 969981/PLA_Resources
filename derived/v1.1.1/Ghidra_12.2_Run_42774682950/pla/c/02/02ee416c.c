/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee416c; name: FUN_02ee416c
 */


void FUN_02ee416c(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_38;
  
  uVar2 = *param_2;
  if (uVar2 == 0) {
    if ((((param_2[2] == 0) && ((char)param_2[4] == -1)) && ((char)param_2[6] == -1)) &&
       (*(long *)(param_2 + 8) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x18) != 0) {
        lVar7 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
        do {
          FUN_02ee4658(puVar6);
          puVar6 = puVar6 + 5;
          lVar7 = lVar7 + -0x28;
        } while (lVar7 != 0);
        puVar6 = *(undefined8 **)(param_1 + 0x10);
      }
      if (puVar6 != (undefined8 *)0x0) {
        if (*(uint *)(param_1 + 0x18) != 0) {
          lVar7 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
          do {
            (**(code **)*puVar6)(puVar6);
            lVar7 = lVar7 + -0x28;
            puVar6 = puVar6 + 5;
          } while (lVar7 != 0);
          puVar6 = *(undefined8 **)(param_1 + 0x10);
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        (*DAT_0442d150)(0,puVar6);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else {
      local_38 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x18) != 0) {
        do {
          lVar7 = local_38;
          FUN_02ee4504(local_38,param_2 + 2);
          if ((*(char *)(lVar7 + 0xc) == '\0') && (*(int *)(lVar7 + 0x18) == 0)) {
            FUN_02ee4658(lVar7);
            local_38 = FUN_02ee46a8((long *)(param_1 + 0x10),&local_38);
          }
          else {
            local_38 = local_38 + 0x28;
          }
        } while (local_38 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28);
      }
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      iVar5 = 0;
      do {
        iVar1 = iVar5 + (uVar4 >> 1);
        lVar9 = (long)iVar1;
        uVar3 = *(uint *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
        if (uVar3 == uVar2) {
          lVar8 = lVar7 + lVar9 * 0x28;
          if (lVar8 == 0) {
            return;
          }
          FUN_02ee4504(lVar8,param_2 + 2);
          if (*(char *)(lVar7 + lVar9 * 0x28 + 0xc) != '\0') {
            return;
          }
          if (*(int *)(lVar7 + lVar9 * 0x28 + 0x18) == 0) {
            FUN_02ee4658(lVar8);
            FUN_02ee4734((long *)(param_1 + 0x10),*param_2);
            return;
          }
          return;
        }
        if (uVar3 < uVar2) {
          iVar5 = iVar1 + 1;
        }
        uVar4 = uVar4 - (uVar3 < uVar2) >> 1;
      } while (uVar4 != 0);
    }
  }
  return;
}


