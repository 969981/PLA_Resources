/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844644; name: FUN_00844644
 */


undefined8 FUN_00844644(undefined8 param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar3 = PTR_DAT_043773c0;
  if (0x1b < *(uint *)(param_2 + 0x5f8)) {
    plVar4 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    lVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2 + 0x628);
    if ((lVar5 == 0) || ((*(char *)(lVar5 + 0x78) == '\0' && (*(int *)(lVar5 + 0x3c) != 3)))) {
      lVar6 = FUN_00855004(*(undefined8 *)puVar3);
      if (*(long *)(lVar6 + 0x98) != 0) {
        lVar6 = FUN_00855004(*(undefined8 *)puVar3);
        uVar1 = *(ushort *)(*(long *)(lVar6 + 0x98) + 0x38);
        uVar2 = *(ushort *)(param_2 + 0xe);
        if (uVar1 == 0) goto joined_r0x008446fc;
        if (uVar2 < 2) goto LAB_00844700;
        if (uVar1 != uVar2) goto LAB_00844764;
        bVar8 = false;
        if (*(short *)(param_2 + 0x10) != 0) goto LAB_0084470c;
        goto LAB_00844734;
      }
      uVar2 = *(ushort *)(param_2 + 0xe);
joined_r0x008446fc:
      if (1 < uVar2) goto LAB_00844764;
LAB_00844700:
      bVar8 = true;
      if (*(short *)(param_2 + 0x10) == 0) {
LAB_00844734:
        if (lVar5 == 0) {
          return 1;
        }
        if (*(short *)(param_2 + 0xe) == 1) {
          uVar7 = FUN_00850728(lVar5 + 0x60,*(undefined2 *)(param_2 + 0x12));
        }
        else {
          uVar7 = FUN_00850728(lVar5 + 0x48,*(undefined2 *)(param_2 + 0x12));
        }
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
      else {
LAB_0084470c:
        if ((bVar8) && (*(char *)(param_2 + 0x14) == '\0')) goto LAB_00844734;
        plVar4 = (long *)FUN_00855004(*(undefined8 *)puVar3);
        lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined2 *)(param_2 + 0x10));
        if (lVar6 != 0) goto LAB_00844734;
      }
      local_40 = 0x400000000;
      goto LAB_00844770;
    }
  }
LAB_00844764:
  local_40 = 0x20000000;
LAB_00844770:
  local_38 = 0;
  FUN_008439a8(param_1,&local_40,param_2);
  return 0;
}


