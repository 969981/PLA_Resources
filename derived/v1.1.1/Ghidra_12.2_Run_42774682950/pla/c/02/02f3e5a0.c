/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3e5a0; name: FUN_02f3e5a0
 */


undefined8 FUN_02f3e5a0(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_170;
  long alStack_168 [31];
  uint local_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_70 = 0;
  local_50 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_48 = 1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),&local_170,0);
  local_48._0_3_ = CONCAT12(1,(undefined2)local_48);
  if (local_68 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),&local_170,0);
    }
    plVar2 = (long *)(*DAT_0442d138)(0,0x20);
    if (plVar2 != (long *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 1;
      if (local_70 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(*(long *)(local_170 + 8) + 0x68);
        if (local_70 != 1) {
          lVar4 = (ulong)local_70 - 1;
          plVar5 = alStack_168;
          do {
            lVar4 = lVar4 + -1;
            lVar3 = *(long *)(*(long *)(*plVar5 + 8) + 0x68) + lVar3;
            plVar5 = plVar5 + 1;
          } while (lVar4 != 0);
        }
      }
      lVar4 = *(long *)(local_68 + 8);
      uVar1 = *(uint *)(lStack_60 + 0x88);
      plVar2[2] = param_2;
      *plVar2 = ((param_4 - lVar3) - lVar4) + (ulong)uVar1;
      if (*(long *)(local_68 + 0x10) == 0) {
        *(long **)(local_68 + 0x10) = plVar2;
        plVar2[3] = 0;
        return 1;
      }
      plVar2[3] = *(long *)(local_68 + 0x10);
      *(long **)(local_68 + 0x10) = plVar2;
      return 1;
    }
  }
  return 2;
}


