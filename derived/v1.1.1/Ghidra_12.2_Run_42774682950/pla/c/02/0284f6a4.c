/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284f6a4; name: FUN_0284f6a4
 */


void FUN_0284f6a4(long param_1,int param_2,int param_3,long *param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  ppuVar1 = &PTR_s_type_affinity_icon_00_u_042706b8;
  if (param_3 != 0) {
    ppuVar1 = &PTR_s_type_affinity_icon_gtext_00_u_042706d8;
  }
  if (((param_4 == (long *)0x0) || (*(long *)(param_1 + 0x68) == 0)) ||
     (*(char *)(*(long *)(param_1 + 0x68) + 0x1e1) == '\0')) {
    return;
  }
  puVar5 = ppuVar1[param_2];
  plVar2 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))
                             (plVar2,*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x58) + 0x58) +
                                     0x3010,puVar5);
  lVar3 = (**(code **)(*plVar2 + 0x38))();
  if (lVar3 != 0) {
    lVar6 = *(long *)(param_1 + 0x90);
    lVar3 = FUN_0022bff8(*(undefined8 *)(lVar6 + 0x60),puVar5);
    *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
    uVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
    FUN_02c3bc54((undefined8 *)(lVar3 + 8),uVar4,lVar6);
  }
  lVar3 = (**(code **)(*param_4 + 0x58))(param_4,0);
  *(long **)(*(long *)(lVar3 + 0x18) + 8) = plVar2;
  plVar2 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0284f76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,FUN_02c3bc54);
  return;
}


