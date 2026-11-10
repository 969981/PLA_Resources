/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00838a94; name: FUN_00838a94
 */


undefined8 FUN_00838a94(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_043773c0;
  lVar4 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar7 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN_00855004(*(undefined8 *)puVar2);
  lVar4 = lVar4 + 0x18;
  if (lVar7 == lVar4) {
    return 1;
  }
  lVar6 = 0;
LAB_00838ad4:
  bVar3 = lVar6 == 0;
  do {
    if (bVar3) {
      lVar5 = *(long *)(param_1 + 0x140);
      if (lVar5 == param_1 + 0x138) break;
      plVar1 = (long *)(lVar7 + 0x10);
      while (*(long *)(lVar5 + 0x10) != *(long *)(*plVar1 + 0x30)) {
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 == param_1 + 0x138) goto LAB_00838b40;
      }
      bVar3 = true;
      lVar7 = *(long *)(lVar7 + 8);
      lVar6 = *plVar1;
    }
    else {
      bVar3 = *(long *)(lVar7 + 0x10) == lVar6;
      lVar7 = *(long *)(lVar7 + 8);
    }
    if (lVar7 == lVar4) {
      return 1;
    }
  } while( true );
LAB_00838b40:
  lVar4 = FUN_00855004(*(undefined8 *)puVar2);
  if (*(long *)(lVar7 + 0x10) == *(long *)(lVar4 + 0x98)) {
    *(undefined1 *)(param_1 + 0x780) = 0;
    if (*(int *)(param_1 + 0x784) == 0) {
      *(undefined4 *)(param_1 + 0x784) = 3;
      return 0;
    }
    return 0;
  }
  FUN_00835b90(param_1);
  lVar4 = FUN_00855004(*(undefined8 *)puVar2);
  lVar7 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN_00855004(*(undefined8 *)puVar2);
  lVar4 = lVar4 + 0x18;
  if (lVar7 == lVar4) {
    return 1;
  }
  goto LAB_00838ad4;
}


