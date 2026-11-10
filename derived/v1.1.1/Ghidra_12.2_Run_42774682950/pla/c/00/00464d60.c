/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00464d60; name: FUN_00464d60
 */


/* WARNING: Removing unreachable block (ram,0x00464f78) */

ulong FUN_00464d60(undefined8 *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_80 [64];
  undefined4 local_34;
  
  plVar6 = (long *)param_1[4];
  lVar5 = *plVar6;
  if ((*(byte *)(lVar5 + 4) >> 2 & 1) != 0) {
    if (param_2 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x78);
      param_2 = 0;
LAB_00464e9c:
                    /* WARNING: Could not recover jumptable at 0x00464eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3,param_1);
      return uVar4;
    }
    if ((*(byte *)((long)param_1 + 0x11) >> 1 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x78);
      goto LAB_00464e9c;
    }
    plVar6 = (long *)FUN_00422900(plVar6);
    uVar3 = 0;
    if (plVar6 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar6 + 0x78))(plVar6,param_2,param_3,param_1);
      FUN_00422a10(plVar6);
    }
    goto LAB_00464f40;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x78);
  if (param_2 == 0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      iVar2 = FUN_0041ccc0(*param_1);
      if (iVar2 < 0) goto LAB_00464f38;
      iVar2 = FUN_00465310(plVar6,0,param_3,0,(long)iVar2);
    }
    else {
      iVar2 = (*UNRECOVERED_JUMPTABLE)(plVar6,0,param_3,param_1);
    }
joined_r0x00464e58:
    if (0 < iVar2) {
      uVar3 = 1;
      goto LAB_00464f40;
    }
  }
  else {
    local_34 = 0;
    if ((*(byte *)((long)param_1 + 0x11) >> 1 & 1) != 0) {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3,param_1);
        goto LAB_00464f40;
      }
      uVar3 = FUN_00444b90(param_1,auStack_80,&local_34);
LAB_00464f04:
      bVar1 = uVar3 == 0;
      uVar3 = 0;
      if (bVar1) goto LAB_00464f40;
      iVar2 = FUN_00465310(param_1[4],param_2,param_3,auStack_80,local_34);
      goto joined_r0x00464e58;
    }
    lVar5 = FUN_00444930();
    if (lVar5 != 0) {
      iVar2 = FUN_00444d20(lVar5,param_1);
      if (iVar2 != 0) {
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          uVar3 = FUN_00444b90(lVar5,auStack_80,&local_34);
          FUN_00444950(lVar5);
        }
        else {
          uVar3 = (**(code **)(**(long **)(lVar5 + 0x20) + 0x78))
                            (*(long **)(lVar5 + 0x20),param_2,param_3,lVar5);
          FUN_00444950(lVar5);
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_00464f40;
        }
        goto LAB_00464f04;
      }
      FUN_00444950(lVar5);
    }
  }
LAB_00464f38:
  uVar3 = 0;
LAB_00464f40:
  return (ulong)uVar3;
}


