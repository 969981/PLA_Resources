/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4f580; name: FUN_02f4f580
 */


int FUN_02f4f580(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_160;
  long alStack_158 [31];
  uint local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined8 local_40;
  uint3 local_38;
  undefined1 uStack_35;
  
  local_60 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  _local_38 = 0x1000001;
  (**(code **)(*param_1 + 0xb8))(param_1,&local_160,0);
  local_38 = (uint3)(ushort)local_38;
  while (local_58 != param_2) {
    (**(code **)(*param_1 + 0xb8))(param_1,&local_160,1);
  }
  uVar6 = *(undefined8 *)(param_1[0xc] + 8);
  iVar1 = FUN_02f3c75c(param_1);
  if (*(long *)(local_58 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    if (local_60 == 0) {
      iVar2 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(local_160 + 8) + 0x68);
      iVar2 = (int)lVar3;
      if (local_60 != 1) {
        lVar4 = (ulong)local_60 - 1;
        plVar5 = alStack_158;
        do {
          lVar4 = lVar4 + -1;
          lVar3 = *(long *)(*(long *)(*plVar5 + 8) + 0x68) + lVar3;
          iVar2 = (int)lVar3;
          plVar5 = plVar5 + 1;
        } while (lVar4 != 0);
      }
    }
    iVar1 = *(int *)(local_50 + 0x88) + ((((int)uVar6 - iVar1) - iVar2) - *(int *)(local_58 + 8));
  }
  return iVar1;
}


