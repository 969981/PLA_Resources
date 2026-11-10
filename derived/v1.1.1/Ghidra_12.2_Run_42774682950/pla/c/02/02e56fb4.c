/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56fb4; name: FUN_02e56fb4
 */


void FUN_02e56fb4(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 local_48;
  undefined8 local_38;
  
  if (*(uint *)(*(long *)(param_2 + 8) + 0x40) < 6) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x38) + 0x28);
  }
  FUN_02e56d0c(param_1,0);
  FUN_02e56150(param_2 + 0x40,param_1,*(undefined8 *)(param_2 + 0x78),param_2);
  lVar1 = *(long *)(param_1 + 2);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 8) == 0)) {
    if (param_1[6] == 0) {
      param_1[6] = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
      puVar5 = *(undefined4 **)(param_1 + 4);
      do {
        puVar6 = puVar5 + 1;
        FUN_02ea8058(*puVar5,uVar3,3,0,0xab,0,0,0);
        puVar5 = puVar6;
      } while (puVar6 != (undefined4 *)(*(long *)(param_1 + 4) + (ulong)(uint)param_1[6] * 4));
      lVar1 = *(long *)(param_1 + 2);
      param_1[6] = 0;
    }
    if (lVar1 != 0) {
      FUN_02f59e60(9);
    }
    uVar2 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  else {
    if (*(int *)(lVar4 + 0x68) != 0) {
      puVar5 = *(undefined4 **)(lVar4 + 0x60);
      do {
        puVar6 = puVar5 + 2;
        FUN_02e578bc(param_1 + 4,*puVar5,&local_38);
        puVar5 = puVar6;
      } while (puVar6 != (undefined4 *)
                         (*(long *)(lVar4 + 0x60) + (ulong)*(uint *)(lVar4 + 0x68) * 8));
    }
    local_38 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x48);
    local_48 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x48);
    FUN_02e57134(param_1,&local_38,&local_48);
    uVar2 = 1;
  }
  *(undefined1 *)(lVar4 + 0xfa) = uVar2;
  return;
}


