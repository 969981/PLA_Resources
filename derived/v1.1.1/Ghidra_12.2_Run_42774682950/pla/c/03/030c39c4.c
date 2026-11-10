/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c39c4; name: FUN_030c39c4
 */


void FUN_030c39c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  lVar4 = (long)iVar1;
  if (iVar1 < 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = 0;
    puVar2[lVar4 * 4] = &PTR_LAB_042b49e0;
    if (puVar2 + lVar4 * 4 + 4 != puVar2) {
      lVar4 = lVar4 * 0x20 + 0x20;
      do {
        *(undefined ***)((long)puVar2 + lVar4) = &PTR_LAB_042b49e0;
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != 0);
    }
  }
  else if (iVar1 != 0) {
    plVar5 = *(long **)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = 0;
    plVar3 = plVar5 + lVar4 * 4 + -4;
    (**(code **)(*plVar3 + 8))(plVar3);
    if (plVar3 != plVar5) {
      plVar3 = plVar5 + lVar4 * 4 + -8;
      (**(code **)(*plVar3 + 8))(plVar3);
      if (plVar3 != plVar5) {
        lVar4 = lVar4 << 5;
        do {
          (**(code **)(*(long *)((long)plVar5 + lVar4 + -0x60) + 8))();
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != 0x40);
      }
    }
  }
  FUN_030c3aec(param_1 + 0x68,param_2,param_3,param_4,param_1 + 0x20,param_1,param_5,param_6,param_7
              );
  return;
}


