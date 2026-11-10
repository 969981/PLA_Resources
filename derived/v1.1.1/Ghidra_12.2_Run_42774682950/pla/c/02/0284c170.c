/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284c170; name: FUN_0284c170
 */


undefined8 FUN_0284c170(long param_1,long param_2,long *param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  if (*(long *)(*(long *)(param_2 + 0x98) + 8) == 0) {
    uVar1 = FUN_02c5e31c(param_2);
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = FUN_02c66b3c();
  }
  if (uVar1 == 0) {
    uVar5 = 6;
  }
  else {
    uVar5 = 5;
    if (uVar1 != 0 && (param_5 & 1) == 0) {
      iVar2 = FUN_02c667f4(*(undefined8 *)(param_2 + 0x98));
      if (6 < iVar2 - 1U) {
        return 0;
      }
      uVar5 = (ulong)*(uint *)(&DAT_03a7e574 + (long)(int)(iVar2 - 1U) * 4);
    }
  }
  if (param_4 == 1) {
    ppuVar6 = &PTR_s_iconSick_mahi_00_u_042704c8;
  }
  else {
    ppuVar6 = &PTR_s_iconSickMark_mahi_00_u_04270480;
    if (param_4 != 0) goto LAB_0284c1f4;
  }
  ppuVar6 = ppuVar6 + uVar5;
LAB_0284c1f4:
  if ((*(long *)(param_1 + 0x68) != 0) && (*(char *)(*(long *)(param_1 + 0x68) + 0x1e1) != '\0')) {
    puVar7 = *ppuVar6;
    plVar3 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                               (plVar3,*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x58) + 0x58)
                                       + 0x3010,puVar7);
    lVar4 = (**(code **)(*plVar3 + 0x38))();
    if (lVar4 != 0) {
      FUN_02c3c390(*(undefined8 *)(param_1 + 0x90),plVar3,puVar7);
    }
    lVar4 = (**(code **)(*param_3 + 0x58))(param_3,0);
    *(long **)(*(long *)(lVar4 + 0x18) + 8) = plVar3;
    plVar3 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
    (**(code **)(*plVar3 + 0x18))(plVar3,FUN_02c3bc54);
  }
  return 1;
}


