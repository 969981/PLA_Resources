/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5f308; name: FUN_00d5f308
 */


void FUN_00d5f308(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  long *local_78;
  undefined1 auStack_70 [24];
  long *local_58;
  
  if (param_2 != 2) {
    lVar6 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)param_2 * 0x28);
    lVar6 = *(long *)(lVar6 + 0x8b0);
    iVar2 = *(int *)(lVar6 + 0x10);
    iVar3 = *(int *)(lVar6 + 0x14);
    piVar1 = (int *)(lVar6 + 0x20);
    if (*(int *)(lVar6 + 0x28) != 0) {
      piVar1 = (int *)(lVar6 + 0x24);
    }
    iVar4 = *piVar1;
    lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)param_2 * 0x28);
    lVar6 = **(long **)(lVar7 + 0x838);
    lVar7 = (*(long **)(lVar7 + 0x838))[1];
    if ((lVar6 != lVar7) &&
       (iVar3 = iVar3 + iVar4 * iVar2,
       *(char *)(lVar6 + 0x20) != '\0' || *(int *)(lVar6 + 0x24) != iVar3)) {
      lVar5 = lVar6 + 0x30;
      do {
        lVar6 = lVar5;
        if (lVar7 == lVar6) {
          lVar6 = lVar7;
          goto LAB_00d5f3d4;
        }
        lVar5 = lVar6 + 0x30;
      } while ((*(char *)(lVar6 + 0x20) != '\0') || (*(int *)(lVar6 + 0x24) != iVar3));
    }
LAB_00d5f3d4:
    if ((lVar6 != 0 && lVar7 != lVar6) && (iVar2 = *(int *)(lVar6 + 0x28), iVar2 != -1)) {
      FUN_00d60034(auStack_70,param_2,iVar2);
      FUN_00d5fec4(auStack_90,param_2,iVar2);
      FUN_00d5fe18(param_1,auStack_70,auStack_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


