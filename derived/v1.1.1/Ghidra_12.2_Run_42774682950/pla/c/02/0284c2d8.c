/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284c2d8; name: FUN_0284c2d8
 */


undefined8 FUN_0284c2d8(long param_1,long param_2,long *param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  
  if (*(short *)(param_2 + 0x74) == 0) {
    lVar6 = 6;
  }
  else {
    uVar5 = FUN_02950c34(param_2);
    if ((uVar5 & 1) == 0) {
      iVar3 = FUN_02950c4c(param_2);
      if (6 < iVar3 - 1U) {
        return 0;
      }
      lVar6 = *(long *)(&DAT_03a7e590 + (long)(int)(iVar3 - 1U) * 8);
    }
    else {
      lVar6 = 5;
    }
  }
  ppuVar1 = &PTR_s_iconSickMark_mahi_00_u_04270480;
  if (param_4 == 0) {
    ppuVar1 = &PTR_s_iconSickMark_mahi_00_u_04270480 + lVar6;
  }
  ppuVar2 = &PTR_s_iconSick_mahi_00_u_042704c8 + lVar6;
  if (param_4 != 1) {
    ppuVar2 = ppuVar1;
  }
  if ((*(long *)(param_1 + 0x68) != 0) && (*(char *)(*(long *)(param_1 + 0x68) + 0x1e1) != '\0')) {
    puVar7 = *ppuVar2;
    plVar4 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                               (plVar4,*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x58) + 0x58)
                                       + 0x3010,puVar7);
    lVar6 = (**(code **)(*plVar4 + 0x38))();
    if (lVar6 != 0) {
      FUN_02c3c390(*(undefined8 *)(param_1 + 0x90),plVar4,puVar7);
    }
    lVar6 = (**(code **)(*param_3 + 0x58))(param_3,0);
    *(long **)(*(long *)(lVar6 + 0x18) + 8) = plVar4;
    plVar4 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
    (**(code **)(*plVar4 + 0x18))(plVar4,FUN_02c3bc54);
  }
  return 1;
}


