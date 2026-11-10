/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148830; name: FUN_03148830
 */


void FUN_03148830(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,long param_5,
                 uint param_6,uint param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  FUN_03148014(param_2,param_5,param_3);
  lVar1 = (**(code **)(*param_3 + 0x118))(param_3,param_4);
  if ((param_6 & 1) == 0) {
    if ((param_7 & 1) != 0) {
      if (*(int *)(param_2 + 0x58) == *(int *)(param_2 + 0x60)) {
        if (*(int *)(param_2 + 0x58) != 0) {
          FUN_03148294(param_2,param_3);
        }
        local_58 = *(undefined8 *)(lVar1 + 0x38);
        local_60 = *(undefined8 *)(lVar1 + 0x30);
        if (0 < *(int *)(param_2 + 0x38)) {
          lVar1 = 0;
          do {
            plVar4 = *(long **)(*(long *)(param_2 + 0x30) + lVar1 * 8);
            (**(code **)(*plVar4 + 0x30))(plVar4,&local_60,0);
            lVar1 = lVar1 + 1;
          } while (lVar1 < *(int *)(param_2 + 0x38));
        }
      }
      else {
        FUN_03148338(param_2,param_5,param_3);
        local_58 = *(undefined8 *)(param_5 + 0x38);
        local_60 = *(undefined8 *)(param_5 + 0x30);
        local_68 = *(undefined8 *)(lVar1 + 0x38);
        local_70 = *(undefined8 *)(lVar1 + 0x30);
        if (0 < *(int *)(param_2 + 0x38)) {
          lVar1 = 0;
          do {
            plVar4 = *(long **)(*(long *)(param_2 + 0x30) + lVar1 * 8);
            (**(code **)(*plVar4 + 0x30))(plVar4,&local_60,&local_70);
            lVar1 = lVar1 + 1;
          } while (lVar1 < *(int *)(param_2 + 0x38));
        }
      }
    }
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x118))(param_3,param_4);
    uVar3 = (**(code **)(*param_3 + 0x270))(param_3,*(undefined4 *)(lVar2 + 0x80));
    FUN_03148420(param_2,param_5,uVar3,param_3);
    local_58 = *(undefined8 *)(lVar1 + 0x38);
    local_60 = *(undefined8 *)(lVar1 + 0x30);
    if (0 < *(int *)(param_2 + 0x38)) {
      lVar1 = 0;
      do {
        plVar4 = *(long **)(*(long *)(param_2 + 0x30) + lVar1 * 8);
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_60,0);
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_2 + 0x38));
    }
  }
  FUN_031485a0(param_1,param_2,param_5,param_4,param_3);
  if (*(char *)(param_2 + 0x44) != '\0') {
    if (0 < *(int *)(param_2 + 0x38)) {
      lVar1 = 0;
      do {
        plVar4 = *(long **)(*(long *)(param_2 + 0x30) + lVar1 * 8);
        (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_2 + 0x38));
    }
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}


