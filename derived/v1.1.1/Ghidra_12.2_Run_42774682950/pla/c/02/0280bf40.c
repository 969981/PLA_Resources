/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280bf40; name: FUN_0280bf40
 */


void FUN_0280bf40(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar3 = param_1 + (long)(int)param_2 * 0x40;
  lVar1 = param_1 + 0x338;
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))(*(long **)(param_1 + 0xe8),lVar1,1);
  *(uint *)(*(long *)(param_1 + 0x4e0) + 8) = param_2;
  local_60 = 0;
  uStack_58 = 0;
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x28))(*(long **)(param_1 + 0xe8),lVar1,&local_60);
  (**(code **)(**(long **)(param_1 + 0xe8) + 0xd0))(*(long **)(param_1 + 0xe8),lVar3 + 0x118,lVar1);
  if (0 < *(int *)(param_1 + 0x510)) {
    plVar4 = *(long **)(param_1 + 0xe8);
    lVar1 = param_1 + 0x794;
    lVar3 = lVar3 + 0xf8;
    lVar2 = param_1 + 0x790;
    if (param_2 == 0) {
      lVar7 = *plVar4;
      lVar5 = lVar3;
      lVar6 = lVar2;
    }
    else {
      lVar7 = *plVar4;
      lVar5 = param_1 + 0xf8;
      lVar6 = lVar1;
    }
    (**(code **)(lVar7 + 200))(plVar4,lVar5,lVar6);
    if (1 < *(int *)(param_1 + 0x510)) {
      plVar4 = *(long **)(param_1 + 0xe8);
      if (param_2 == 1) {
        lVar7 = *plVar4;
        lVar5 = lVar3;
        lVar6 = lVar2;
      }
      else {
        lVar7 = *plVar4;
        lVar5 = param_1 + 0x138;
        lVar6 = lVar1;
      }
      (**(code **)(lVar7 + 200))(plVar4,lVar5,lVar6);
      if (2 < *(int *)(param_1 + 0x510)) {
        plVar4 = *(long **)(param_1 + 0xe8);
        if (param_2 == 2) {
          lVar7 = *plVar4;
          lVar5 = lVar3;
          lVar6 = lVar2;
        }
        else {
          lVar7 = *plVar4;
          lVar5 = param_1 + 0x178;
          lVar6 = lVar1;
        }
        (**(code **)(lVar7 + 200))(plVar4,lVar5,lVar6);
        if (3 < *(int *)(param_1 + 0x510)) {
          lVar5 = param_1 + 0x1b8;
          uVar9 = 3;
          do {
            plVar4 = *(long **)(param_1 + 0xe8);
            if (param_2 == uVar9) {
              lVar8 = *plVar4;
              lVar6 = lVar3;
              lVar7 = lVar2;
            }
            else {
              lVar8 = *plVar4;
              lVar6 = lVar5;
              lVar7 = lVar1;
            }
            (**(code **)(lVar8 + 200))(plVar4,lVar6,lVar7);
            uVar9 = uVar9 + 1;
            lVar5 = lVar5 + 0x40;
          } while ((long)uVar9 < (long)*(int *)(param_1 + 0x510));
        }
      }
    }
  }
  return;
}


