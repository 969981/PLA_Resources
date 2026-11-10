/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd4158; name: FUN_00cd4158
 */


void FUN_00cd4158(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 local_44;
  long local_40 [2];
  long *local_28;
  
  FUN_00b5f5f4(local_40,*(undefined8 *)(param_1 + 0xa0));
  if (local_40[0] != 0) {
    FUN_00b911c4(&local_28);
    plVar1 = local_28;
    if (local_28 != (long *)0x0) {
      FUN_00b5f3e4(&local_28,*(undefined8 *)(param_1 + 0xa0));
      uVar2 = FUN_01b9fba4(plVar1,param_2);
      if ((uVar2 & 1) != 0) {
        *(undefined4 *)(param_1 + 0xb8) = param_2;
        local_44 = CONCAT31(local_44._1_3_,1);
        FUN_00ba9c80(local_28,param_1 + 0xb0,&local_44);
        local_44 = *(undefined4 *)(param_1 + 0xb8);
        FUN_00c24728(local_28,param_1 + 0xa8,&local_44);
      }
      if ((local_28 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_28[0xb]), (uVar2 & 1) != 0)) {
        (**(code **)(*local_28 + 0x20))(local_28);
      }
      uVar2 = FUN_02a43a5c(plVar1[0xb]);
      if ((uVar2 & 1) != 0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
    }
    if (local_40[0] != 0) {
      FUN_02a43934();
    }
  }
  return;
}


