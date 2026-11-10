/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc2c8; name: FUN_027dc2c8
 */


undefined8 FUN_027dc2c8(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  long local_30 [2];
  
  FUN_02728988(local_30);
  if (local_30[0] == 0) {
LAB_027dc3b8:
    uVar6 = 0;
  }
  else {
    uVar4 = FUN_02a43a8c();
    if ((uVar4 & 1) == 0) {
      if (local_30[0] == 0) goto LAB_027dc3b8;
      plVar5 = (long *)FUN_0120ccf0();
      if (plVar5 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 1;
        *(undefined4 *)(param_1 + 0x18) = 0;
        bVar2 = (**(code **)(*plVar5 + 0xa8))();
        *(byte *)(param_1 + 0x1c) = bVar2 & 1;
        *(undefined1 *)(param_1 + 0x1d) = 0;
        iVar3 = FUN_027dc400();
        *(int *)(param_1 + 0x20) = iVar3 + 2;
        FUN_027dc4a0(&local_38,*(undefined8 *)(param_1 + 8));
        plVar5 = *(long **)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x28) = 0;
        if ((plVar5 != (long *)0x0) && (uVar4 = FUN_02a43a5c(plVar5[0xb]), (uVar4 & 1) != 0)) {
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        lVar1 = local_38;
        *(long *)(param_1 + 0x28) = local_38;
        local_48 = 0;
        uStack_40 = 0;
        FUN_014d70b0(&local_48,local_30);
        uVar6 = 1;
        local_38 = 1;
        FUN_027d7aa0(lVar1,&local_48,&local_38);
        if (local_48 != 0) {
          FUN_02a43934();
          uVar6 = 1;
        }
      }
    }
    else {
      uVar6 = 0;
    }
    if (local_30[0] != 0) {
      FUN_02a43934();
    }
  }
  return uVar6;
}


