/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028378a4; name: FUN_028378a4
 */


void FUN_028378a4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0xb0);
  iVar4 = 0;
  if (lVar5 != 0) {
    plVar6 = *(long **)(lVar5 + 0x270);
    if (plVar6 != *(long **)(lVar5 + 0x278)) {
      iVar4 = 0;
      do {
        plVar1 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar1 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar1 == param_2) goto LAB_02837914;
        plVar6 = plVar6 + 1;
        iVar4 = iVar4 + 1;
      } while (*(long **)(lVar5 + 0x278) != plVar6);
    }
    iVar4 = 0;
  }
LAB_02837914:
  FUN_02c2e33c(*(long *)(param_1 + 0x88),iVar4,*(undefined8 *)(param_1 + 0x90));
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    plVar6 = *(long **)(param_1 + 0xa8);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(long *)(param_1 + 0x98);
    *(undefined2 *)(lVar5 + 0x128) = 0;
    *(undefined4 *)(lVar5 + 300) = 0;
    *(undefined4 *)(lVar5 + 0x124) = 0;
    *(undefined4 *)(lVar5 + 0x134) = 0;
    FUN_02c33414(lVar5,uVar3);
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar5,lVar2,uVar3,0,0);
    plVar6 = *(long **)(param_1 + 0xa8);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
  }
  (**(code **)(*plVar6 + 0x48))(plVar6,uVar3);
  if (*(int *)(param_1 + 0x80) == 6) {
    *(undefined4 *)(param_1 + 0x80) = 4;
  }
  return;
}


