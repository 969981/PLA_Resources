/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135fa78; name: FUN_0135fa78
 */


void FUN_0135fa78(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_88 [24];
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long *local_28;
  
  lVar3 = FUN_0135fe20();
  if (lVar3 != 0) {
    FUN_02a4754c(&local_68,&DAT_0423e828);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e840);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e858);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e870);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e888);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e8a0);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e8b8);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e8d0);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e8e8);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e900);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02a4754c(&local_68,&DAT_0423e918);
    FUN_01b29e90(lVar3,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_0135f3b4(&local_68,param_2);
    plVar5 = local_60;
    plVar2 = local_68;
    for (plVar1 = local_68; local_68 = plVar2, plVar1 != plVar5; plVar1 = plVar1 + 1) {
      local_28 = (long *)*plVar1;
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))();
      }
      FUN_02a47560(auStack_88,&local_28);
      FUN_01b2b778(lVar3,auStack_88,0);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      plVar2 = local_68;
    }
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2;
      plVar5 = local_60;
      while (local_68 = plVar1, plVar5 != plVar2) {
        plVar5 = plVar5 + -1;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
          plVar1 = local_68;
        }
      }
      uVar4 = FUN_02bcc75c(local_50);
      if ((uVar4 & 1) == 0) {
        (**(code **)(*local_50 + 0x18))(local_50,plVar1,local_58 - (long)plVar1,8);
      }
      else {
        FUN_02bcc824(local_50,plVar1,local_58 - (long)plVar1,8);
      }
    }
  }
  FUN_01e65d58(&local_68);
  if (((local_68 != (long *)0x0) && (FUN_01cd2014(local_68,&DAT_03a7cf98), local_68 != (long *)0x0))
     && (uVar4 = FUN_02a43a5c(local_68[0xb]), (uVar4 & 1) != 0)) {
    (**(code **)(*local_68 + 0x20))(local_68);
  }
  return;
}


