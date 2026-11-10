/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084d06c; name: FUN_0084d06c
 */


long FUN_0084d06c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long local_38;
  
  local_38 = 0;
  FUN_007ecf14(&local_38);
  lVar3 = local_38;
  puVar2 = PTR_DAT_043773c0;
  lVar8 = 0;
  plVar1 = (long *)(param_1 + 0x3f8);
  iVar7 = -1;
  lVar6 = *plVar1;
  while( true ) {
    iVar4 = iVar7;
    if (lVar6 != 0) {
      plVar5 = (long *)FUN_00855004(*(undefined8 *)puVar2);
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined8 *)((long)plVar1 + lVar8));
      if ((lVar6 != 0) && (iVar4 = FUN_00850bf0(lVar6,8), iVar4 <= iVar7)) {
        iVar4 = iVar7;
      }
    }
    iVar7 = iVar4;
    lVar8 = lVar8 + 8;
    if (lVar8 == 0xc0) break;
    lVar6 = *(long *)((long)plVar1 + lVar8);
  }
  if (iVar7 < 0) {
    lVar8 = *(long *)(param_1 + 0x4e8) + lVar3 + *(long *)(param_1 + 0x4f8);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x4f8) + lVar3 +
            (*(long *)PTR_DAT_043774c8 * (long)(int)((float)iVar7 * 1.4)) / 1000;
  }
  return lVar8;
}


