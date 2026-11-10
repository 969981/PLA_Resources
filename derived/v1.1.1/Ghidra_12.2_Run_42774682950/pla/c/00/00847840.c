/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847840; name: FUN_00847840
 */


ulong FUN_00847840(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x30))
                    (*(long **)(param_1 + 8),param_3 >> 0x18 & 0xff);
  if ((uVar4 & 1) == 0) {
LAB_00847900:
    param_3 = (ulong)*(uint *)PTR_DAT_043779d0;
  }
  else {
    FUN_00847240(param_2,param_3 & 0xffffffff);
    lVar1 = param_1 + 0x10;
    iVar5 = *(int *)(param_1 + 0x24);
    lVar6 = (long)iVar5;
    uVar3 = (uint)param_3;
    if (*(long *)(param_1 + 0x18) != lVar1) {
      plVar8 = (long *)(*(long *)(param_1 + 0x18) - lVar6);
      do {
        uVar2 = (**(code **)(*plVar8 + 0x18))(plVar8);
        if (uVar3 == uVar2) goto LAB_00847900;
        if (uVar3 < uVar2) {
          FUN_007e8fa0(lVar1,(long)plVar8 + (long)*(int *)(param_1 + 0x24),
                       *(int *)(param_1 + 0x24) + param_2);
          puVar7 = PTR_DAT_043773b8;
          uVar2 = *(uint *)(PTR_DAT_043773b8 + 0xa4);
          uVar3 = FUN_00847960(uVar3 >> 0x18);
          uVar2 = uVar2 & (uVar3 ^ 0xffffffff);
          goto LAB_00847940;
        }
        iVar5 = *(int *)(param_1 + 0x24);
        plVar8 = (long *)(*(long *)((long)plVar8 + (long)iVar5 + 8) - (long)iVar5);
      } while (plVar8 != (long *)(lVar1 - lVar6));
    }
    FUN_007e8fa0(lVar1,lVar1,param_2 + iVar5);
    puVar7 = PTR_DAT_043773b8;
    uVar2 = *(uint *)(PTR_DAT_043773b8 + 0xa4);
    uVar3 = FUN_00847960(uVar3 >> 0x18);
    uVar2 = uVar2 & (uVar3 ^ 0xffffffff);
LAB_00847940:
    *(uint *)(puVar7 + 0xa4) = uVar2;
  }
  return param_3 & 0xffffffff;
}


