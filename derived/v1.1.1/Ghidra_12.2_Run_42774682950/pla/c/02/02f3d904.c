/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3d904; name: FUN_02f3d904
 */


void FUN_02f3d904(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_180;
  long alStack_178 [31];
  uint local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  undefined4 local_58;
  
  local_80 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),&local_180,0);
  local_58._0_3_ = CONCAT12(1,(undefined2)local_58);
  if (local_78 != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x20);
    do {
      if (*(long *)(local_78 + 0x18) != 0) {
        if (local_80 == 0) {
          iVar2 = 0;
        }
        else {
          lVar3 = *(long *)(*(long *)(local_180 + 8) + 0x68);
          iVar2 = (int)lVar3;
          if (local_80 != 1) {
            lVar4 = (ulong)local_80 - 1;
            plVar5 = alStack_178;
            do {
              lVar4 = lVar4 + -1;
              lVar3 = *(long *)(*(long *)(*plVar5 + 8) + 0x68) + lVar3;
              iVar2 = (int)lVar3;
              plVar5 = plVar5 + 1;
            } while (lVar4 != 0);
          }
        }
        FUN_02f3ce08(*(undefined4 *)(param_1 + 0x4c),local_78,
                     *(int *)(local_70 + 0x88) + (((int)param_2 - iVar2) - *(int *)(local_78 + 8)),
                     param_3,uVar1 & 0x7f00,*(undefined4 *)(param_1 + 0x2c));
      }
      if ((char)local_58 != '\0') {
        return;
      }
      if (local_80 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(*(long *)(local_180 + 8) + 0x68);
        if (local_80 != 1) {
          lVar4 = (ulong)local_80 - 1;
          plVar5 = alStack_178;
          do {
            lVar4 = lVar4 + -1;
            lVar3 = *(long *)(*(long *)(*plVar5 + 8) + 0x68) + lVar3;
            plVar5 = plVar5 + 1;
          } while (lVar4 != 0);
        }
      }
      lVar3 = ((param_2 - lVar3) - *(long *)(local_78 + 8)) + (ulong)*(uint *)(local_70 + 0x88);
      if (lVar3 < local_60) {
        if ((ulong)param_3 <= (ulong)(local_60 - lVar3)) {
          return;
        }
      }
      else if ((ulong)param_3 == 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),&local_180,0);
    } while (local_78 != 0);
  }
  return;
}


