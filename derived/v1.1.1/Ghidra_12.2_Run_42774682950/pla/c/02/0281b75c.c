/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281b75c; name: FUN_0281b75c
 */


void FUN_0281b75c(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long **local_80;
  long local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined4 local_44;
  
  plVar7 = (long *)**(undefined8 **)(param_1 + 0x838);
  plVar3 = (long *)(*(undefined8 **)(param_1 + 0x838))[1];
  if ((plVar7 != plVar3) && (plVar5 = plVar7, (char)plVar7[4] == '\0')) {
    do {
      plVar7 = plVar5 + 6;
      if (plVar3 == plVar7) goto LAB_0281b940;
      plVar1 = plVar5 + 10;
      plVar5 = plVar7;
    } while ((char)*plVar1 == '\0');
  }
  if (plVar3 == plVar7) {
LAB_0281b940:
    plVar7 = (long *)0x0;
  }
  else if (plVar7 != (long *)0x0) {
    *(undefined4 *)((long)plVar7 + 0x24) = param_2;
    *(undefined1 *)(plVar7 + 4) = 0;
  }
  lVar2 = *plVar7;
  lVar4 = plVar7[1];
  plVar3 = (long *)plVar7[2];
  plVar5 = (long *)plVar7[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_80 = &local_58;
  local_58 = (long *)0x0;
  local_78 = lVar2;
  local_70 = lVar4;
  local_68 = plVar3;
  local_60 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_02813244(param_1,&local_80,0);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  plVar3 = local_58;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (*(char *)((long)plVar3 + 0xa3) != '\x01') {
    *(undefined1 *)((long)plVar3 + 0xa3) = 1;
    (**(code **)(*plVar3 + 0xa0))(plVar3,1);
  }
  (**(code **)(*plVar3 + 0xf0))(plVar3);
  pcVar6 = *(code **)(param_1 + 0x110);
  if (pcVar6 != (code *)0x0) {
    local_80 = (long **)*plVar7;
    local_78 = plVar7[1];
    local_70 = plVar7[2];
    local_68 = (long *)plVar7[3];
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
      pcVar6 = *(code **)(param_1 + 0x110);
    }
    local_44 = (undefined4)plVar7[5];
    local_58 = (long *)CONCAT44(local_58._4_4_,param_2);
    (*pcVar6)(param_1 + 0x130,&local_58,&local_80,&local_44);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  FUN_0281b94c(param_1);
  return;
}


