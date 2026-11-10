/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec9dbc; name: FUN_02ec9dbc
 */


undefined8 FUN_02ec9dbc(int *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0;
  local_68 = *(undefined8 *)param_1;
  uStack_60 = *(undefined8 *)(param_1 + 2);
  if ((param_1[1] == 0) || ((int)local_68 == 0)) {
    FUN_02ec9f10(&local_68,(ulong)&local_68 | 4);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  lVar2 = FUN_02e78670((int)local_68,local_68._4_4_);
  plVar5 = DAT_0440a7e0;
  do {
    if (plVar5 == (long *)0x0) {
LAB_02ec9e5c:
      bVar1 = true;
      uVar4 = FUN_02ec94a8(lVar2,&local_68,auStack_58,1,1,uVar4);
      if ((int)uVar4 == 1) {
        if (DAT_0440a7e0 == (long *)0x0) {
          bVar1 = true;
        }
        else {
          bVar1 = (int)DAT_0440a7e0[0xb] != *param_1;
        }
      }
      DAT_042aa0f4 = bVar1;
      return uVar4;
    }
    uVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
    if ((uVar3 & 1) != 0) {
      if (plVar5[2] == lVar2) {
        if ((*(char *)((long)plVar5 + 0x165) != '\0') && ((int)plVar5[0x2c] != 0)) {
          if ((int)plVar5[3] != 0xb5) {
            return 1;
          }
          goto LAB_02ec9e4c;
        }
LAB_02ec9f00:
        bVar1 = false;
      }
      else {
        if ((*(char *)((long)plVar5 + 0x165) == '\0') || ((int)plVar5[0x2c] == 0))
        goto LAB_02ec9f00;
LAB_02ec9e4c:
        bVar1 = (int)plVar5[3] != 0xb5;
      }
      FUN_02eca0c4(plVar5[2],bVar1);
      goto LAB_02ec9e5c;
    }
    plVar5 = (long *)plVar5[1];
  } while( true );
}


