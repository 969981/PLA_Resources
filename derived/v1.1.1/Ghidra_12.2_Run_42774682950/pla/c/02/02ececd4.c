/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ececd4; name: FUN_02ececd4
 */


undefined8 FUN_02ececd4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [12];
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x238);
  if (lVar3 == 0) {
    return 0;
  }
  plVar7 = *(long **)(lVar3 + 0x128);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
    plVar4 = *(long **)(lVar3 + 0x130);
  }
  else {
    if (plVar7[3] != param_1) {
      plVar7 = (long *)0x0;
    }
    plVar4 = *(long **)(lVar3 + 0x130);
  }
  if (((plVar4 == (long *)0x0) || (plVar4[3] != param_1)) &&
     (plVar4 = plVar7, plVar7 == (long *)0x0)) {
    return 0;
  }
  local_38 = 0;
  uVar2 = (**(code **)(*plVar4 + 200))(plVar4);
  if ((uVar2 & 1) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x230);
    lVar3 = *(long *)(puVar5 + 4);
    if (lVar3 == 0) {
      auVar8 = FUN_02e966f8(DAT_0440a148,*puVar5,&local_38);
      lVar3 = auVar8._0_8_;
    }
    else {
      auVar8._8_4_ = puVar5[2];
      auVar8._0_8_ = lVar3;
    }
    if (lVar3 != 0) {
      lVar3 = auVar8._0_8_;
      if ((auVar8._8_4_ == *(int *)(param_1 + 0x2d0)) &&
         (iVar1 = (**(code **)(*plVar4 + 0xd0))(plVar4,lVar3,*(undefined8 *)(param_1 + 0x2c8)),
         iVar1 == 1)) {
        uVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4);
        if (((uVar2 & 1) != 0) &&
           (plVar7 = *(long **)(param_1 + 0x238), plVar7[1] == param_1 + 0x18)) {
          (**(code **)(*plVar7 + 0x80))(plVar7,lVar3,*(undefined8 *)(param_1 + 0x2c8));
        }
        uVar2 = (**(code **)(*plVar4 + 0xe0))(plVar4);
        if ((uVar2 & 1) == 0) {
          lVar6 = *(long *)(param_1 + 0x2c8);
        }
        else {
          plVar4[2] = (lVar3 - *(long *)(param_1 + 0x2c8)) + plVar4[2];
          lVar6 = *(long *)(param_1 + 0x2c8);
        }
        if ((lVar6 != 0) && (*(long *)(*(undefined4 **)(param_1 + 0x230) + 4) == 0)) {
          FUN_02e968c8(DAT_0440a148,**(undefined4 **)(param_1 + 0x230));
        }
        if (*(long *)(param_1 + 0x1d0) != 0) {
          FUN_02e8e5e0(*(long *)(param_1 + 0x1d0),0);
        }
        *(long *)(param_1 + 0x2c8) = lVar3;
        *(long *)(param_1 + 0x1d0) = local_38;
        return 1;
      }
      if (*(long *)(*(undefined4 **)(param_1 + 0x230) + 4) == 0) {
        FUN_02e968c8(DAT_0440a148,**(undefined4 **)(param_1 + 0x230));
      }
    }
  }
  if (local_38 == 0) {
    return 0;
  }
  FUN_02e8e5e0(local_38,0);
  return 0;
}


