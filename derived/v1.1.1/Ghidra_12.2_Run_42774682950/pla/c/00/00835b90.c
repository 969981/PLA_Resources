/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00835b90; name: FUN_00835b90
 */


void FUN_00835b90(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_043773c0;
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  plVar4 = (long *)FUN_00827d64(lVar3,lVar3 + 0x120);
  lVar3 = FUN_00855004(*(undefined8 *)puVar2);
  plVar8 = *(long **)(lVar3 + 0x98);
  local_60 = 0x10000000000;
  local_58 = (long *)((ulong)local_58._4_4_ << 0x20);
  (**(code **)(*param_2 + 0x18))(param_2,&local_60);
  if (param_2 == plVar8) {
    lVar5 = FUN_00855004(*(undefined8 *)puVar2);
    lVar3 = *(long *)(lVar5 + 0x20);
    if (lVar3 != lVar5 + 0x18) {
      plVar6 = *(long **)(lVar3 + 0x10);
      while( true ) {
        if (plVar6 == param_2) {
          lVar3 = *(long *)(lVar3 + 8);
        }
        else {
          local_60 = 0x10000000000;
          local_58 = (long *)((ulong)local_58 & 0xffffffff00000000);
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
          FUN_00835b90(param_1,*(undefined8 *)(lVar3 + 0x10));
          lVar3 = *(long *)(lVar3 + 8);
        }
        if (lVar3 == lVar5 + 0x18) break;
        plVar6 = *(long **)(lVar3 + 0x10);
      }
    }
  }
  if (*(int *)((long)param_2 + 0x3c) != 3) {
    if (*(int *)((long)param_2 + 0x3c) == 2) {
      *(undefined4 *)((long)param_2 + 0x3c) = 3;
    }
    uVar7 = FUN_00839e9c(param_1 + 0x860,param_2[6],(short)param_2[7]);
    if ((uVar7 & 1) == 0) {
      FUN_0083a0ec(param_1 + 0x860,param_2[6],(short)param_2[7]);
      if (*(code **)(param_1 + 0x778) != (code *)0x0) {
        local_60 = CONCAT44(local_60._4_4_,1);
        local_58 = param_2;
        (**(code **)(param_1 + 0x778))(&local_60);
      }
    }
  }
  if (plVar4 == param_2) {
    FUN_008473fc(param_1,0);
  }
  if (param_2 == plVar8) {
    FUN_008473a8(param_1,0);
    *(undefined1 *)(param_1 + 0x780) = 0;
    lVar3 = *(long *)(param_1 + 0x130);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x130);
  }
  if (lVar3 != 0) {
    FUN_0083ebec(lVar3,param_2);
  }
  bVar1 = *(byte *)(param_2 + 5);
  if ((bVar1 != 0xfd) && ((ushort)bVar1 < *(ushort *)(*(long *)puVar2 + 0x50))) {
    *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)bVar1) = 0;
  }
  FUN_0082fdd8(*(undefined8 *)PTR_DAT_04377ce8,param_2);
  plVar4 = (long *)FUN_00855004(*(undefined8 *)puVar2);
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  FUN_00854f64(*(undefined8 *)puVar2);
  FUN_00835048(param_1);
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_0083e2d4();
  }
  *(undefined1 *)(param_1 + 0x792) = 1;
  return;
}


