/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012faa4c; name: FUN_012faa4c
 */


void FUN_012faa4c(long param_1,short *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined4 local_38;
  undefined4 local_24;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    return;
  }
  if (*param_2 == 0) {
    bVar3 = false;
    plVar2 = *(long **)(lVar6 + 0x148);
    lVar6 = *(long *)(lVar6 + 0x150);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      local_40 = (long *)0x0;
      local_38 = 0;
      local_24 = 0;
      local_50 = &DAT_03996322;
      uStack_48 = 0;
      local_60 = (long *)0x0;
      puStack_58 = &DAT_cbf29ce484222645;
      FUN_0284eb30(&local_60,&local_24);
      uVar4 = FUN_02c4d8d4(*(undefined8 *)(lVar6 + 8),&local_60,local_24,0);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(lVar6 + 0x30) = 0;
        *(undefined4 *)(lVar6 + 0x34) = 0;
      }
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
    }
    FUN_012fabf8(param_1,param_2);
    FUN_012fae24(param_1,param_2,1);
    FUN_012fb060(param_1,param_2);
    FUN_012fb2dc(param_1,param_2);
    FUN_012fb51c(param_1,param_2);
    FUN_012fb75c(param_1,param_2);
    bVar3 = *param_2 != 0;
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x148);
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x150);
  }
  if ((lVar6 == 0) || (*plVar2 == *(long *)(param_1 + 0x28))) {
    plVar8 = plVar2;
  }
  else {
    lVar7 = lVar6 * 0x30;
    plVar5 = plVar2;
    do {
      lVar7 = lVar7 + -0x30;
      if (lVar7 == 0) {
        plVar8 = plVar2 + lVar6 * 6;
        break;
      }
      plVar8 = plVar5 + 6;
      plVar1 = plVar5 + 6;
      plVar5 = plVar8;
    } while (*plVar1 != *(long *)(param_1 + 0x28));
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe | bVar3;
  return;
}


