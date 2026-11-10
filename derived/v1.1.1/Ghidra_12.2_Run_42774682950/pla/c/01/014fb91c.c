/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fb91c; name: FUN_014fb91c
 */


void FUN_014fb91c(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  local_70 = 0x3e15d4fcf512bfb7;
  pcStack_68 = "waza_custom_list";
  local_60 = 0x10;
  local_58 = (long *)0x0;
  uVar3 = FUN_00d2ee28(param_1 + 0x180,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  uVar1 = FUN_0281a508(uVar3);
  uVar5 = *(uint *)(*(long *)(param_1 + 0x630) + 0xb8);
  if (6 < uVar5) {
    uVar5 = 7;
  }
  uVar5 = uVar5 + uVar1;
  if (uVar1 < uVar5) {
    uVar8 = (ulong)param_2;
    if ((param_3 & 1) == 0) {
      uVar6 = (ulong)uVar1;
      lVar7 = uVar6 << 3;
      do {
        iVar2 = FUN_0281efbc(uVar3,uVar6 & 0xffffffff);
        if (iVar2 != -1) {
          if (uVar8 == uVar6) {
            FUN_014fc014(param_1,*(undefined4 *)
                                  (*(long *)(*(long *)(param_1 + 0x630) + 0xa8) + uVar8 * 8),iVar2,0
                        );
          }
          else {
            plVar4 = (long *)FUN_014fc0f8(param_1,iVar2);
            if (((((plVar4 != (long *)0x0) &&
                  (iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x630) + 0xa8) + lVar7),
                  *(int *)(param_1 + 0x640) != iVar2)) && (*(int *)(param_1 + 0x644) != iVar2)) &&
                ((*(int *)(param_1 + 0x648) != iVar2 && (*(int *)(param_1 + 0x64c) != iVar2)))) &&
               (*(char *)((long)plVar4 + 0xa2) != '\x01')) {
              *(undefined1 *)((long)plVar4 + 0xa2) = 1;
              (**(code **)(*plVar4 + 0x98))(plVar4,1);
            }
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (uVar6 < uVar5);
    }
    else {
      do {
        iVar2 = FUN_0281efbc(uVar3,uVar1);
        if (iVar2 != -1) {
          if (param_2 == uVar1) {
            FUN_014fc014(param_1,*(undefined4 *)
                                  (*(long *)(*(long *)(param_1 + 0x630) + 0xa8) + uVar8 * 8),iVar2,1
                        );
          }
          else {
            plVar4 = (long *)FUN_014fc0f8(param_1,iVar2);
            if ((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0xa2) != '\0')) {
              *(undefined1 *)((long)plVar4 + 0xa2) = 0;
              (**(code **)(*plVar4 + 0x98))(plVar4,0);
            }
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar5);
    }
  }
  return;
}


