/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c478c0; name: FUN_02c478c0
 */


void FUN_02c478c0(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  param_1[2] = param_3;
  plVar1 = param_1 + 3;
  uVar5 = (**(code **)(**(long **)(param_4 + 0x60) + 0x50))
                    (*(long **)(param_4 + 0x60),0x616e696d,param_5);
  FUN_00229dc4(plVar1,uVar5);
  uVar2 = FUN_00229ee8(plVar1);
  if (uVar2 == 0) {
    lVar6 = param_1[4];
    uVar8 = (uint)*(ushort *)(lVar6 + 0xe);
  }
  else {
    lVar6 = FUN_00229f00(plVar1);
    uVar8 = 0;
    uVar9 = (ulong)uVar2;
    do {
      lVar7 = FUN_00230558(*(undefined8 *)(param_2 + 0x20),lVar6);
      if (lVar7 != 0) {
        uVar3 = FUN_00229f1c(plVar1);
        iVar4 = FUN_00229f6c(plVar1,lVar7,uVar3 & 1);
        uVar8 = iVar4 + uVar8;
      }
      uVar9 = uVar9 - 1;
      lVar6 = lVar6 + 0x24;
    } while (uVar9 != 0);
    lVar6 = param_1[4];
  }
  (**(code **)(*(long *)param_1[2] + 0x48))
            ((long *)param_1[2],*(long *)(*param_1 + 0x58) + 0x3010,*(undefined8 *)(param_4 + 0x60),
             lVar6,uVar8);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  return;
}


