/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033266e0; name: FUN_033266e0
 */


void FUN_033266e0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *local_468;
  undefined1 *local_460;
  undefined1 *local_458;
  undefined1 auStack_450 [1024];
  undefined1 auStack_48 [8];
  
  lVar4 = (long)DAT_0444b3b8;
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
    iVar1 = DAT_0444b3bc;
    lVar4 = *(long *)(lVar3 + lVar4 * 8 + 0x18);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar3;
    }
  }
  else {
    lVar4 = *(long *)(lVar3 + lVar4 * 8 + 0x18);
    iVar1 = DAT_0444b3bc;
  }
  uVar5 = *(undefined8 *)(lVar3 + (long)iVar1 * 8 + 0x18);
  if (((*(int *)(param_1 + 0x1c) == 0) || (lVar2 = FUN_03328858(&DAT_0444b368), lVar2 == 0)) ||
     ((int)(*(uint *)(lVar2 + 4) | ((int)lVar2 - (int)DAT_0444b378) * 0x20000000) < 0)) {
    FUN_03328e3c(auStack_48);
    local_460 = (undefined1 *)0x0;
    local_458 = (undefined1 *)0x0;
    local_468 = (undefined1 *)0x0;
    if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
      iVar1 = FUN_03328dc8(auStack_48,auStack_450,0x80,1,0);
      local_460 = auStack_450 + (long)iVar1 * 8;
      *(undefined1 ***)(param_1 + 0x48) = &local_468;
      local_468 = auStack_450;
      local_458 = auStack_48;
    }
    iVar1 = FUN_03326940(param_1,uVar5,lVar4);
    if (iVar1 != 1) {
      plVar7 = *(long **)(param_1 + 0x10);
      if ((int)plVar7[1] != 0) {
        lVar2 = (long)((int)plVar7[1] + -1);
        if (lVar4 == 0) {
          lVar3 = lVar2 + 1;
          lVar2 = lVar2 << 4;
          do {
            plVar6 = *(long **)(*plVar7 + lVar2);
            if (((plVar6 != (long *)0x0) &&
                (*(byte *)(param_1 + 0x18) <= *(byte *)(*plVar7 + lVar2 + 8))) &&
               (iVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1), iVar1 == 1)) break;
            lVar3 = lVar3 + -1;
            lVar2 = lVar2 + -0x10;
          } while (lVar3 != 0);
        }
        else {
          lVar3 = lVar2 + 1;
          lVar2 = lVar2 << 4;
          do {
            plVar6 = *(long **)(*plVar7 + lVar2);
            if ((plVar6 != (long *)0x0) &&
               (*(byte *)(param_1 + 0x18) <= *(byte *)(*plVar7 + lVar2 + 8))) {
              FUN_03326dfc(lVar4,plVar6);
              iVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
              if (iVar1 == 1) break;
            }
            lVar3 = lVar3 + -1;
            lVar2 = lVar2 + -0x10;
          } while (lVar3 != 0);
        }
      }
    }
    FUN_03328e4c(auStack_48);
  }
  return;
}


