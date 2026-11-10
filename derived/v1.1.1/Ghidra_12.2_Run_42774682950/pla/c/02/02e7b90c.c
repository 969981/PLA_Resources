/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b90c; name: FUN_02e7b90c
 */


void FUN_02e7b90c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_60;
  undefined1 local_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  plVar5 = *(long **)(lVar2 + 0x40);
  if (plVar5 != (long *)0x0) {
    do {
      plVar3 = (long *)plVar5[2];
      iVar4 = *(int *)(param_1 + 0x2c);
      if (plVar3[0xd] == 0) {
        *(int *)(plVar3 + 0xe) = iVar4;
      }
      else {
        FUN_02ec6ca0(plVar3[0xd],iVar4);
      }
      uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
      if ((uVar1 & 1) == 0) {
        if ((int)plVar5[1] == 2) {
          (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_1 + 0x20));
        }
        else if ((int)plVar5[1] == 3) goto LAB_02e7b950;
      }
      else {
        *(undefined4 *)(plVar5 + 1) = 3;
        iVar4 = -1;
LAB_02e7b950:
        *(int *)(plVar3 + 0x5f) = iVar4;
        local_58 = 0;
        local_60 = 0x400000000;
        FUN_02ecc3d4(plVar3,&local_60,iVar4 == -1);
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  for (plVar5 = *(long **)(lVar2 + 0x68); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    FUN_02e84770(DAT_0440a128,plVar5[2],*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(plVar5 + 1))
    ;
  }
  return;
}


