/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00846e20; name: FUN_00846e20
 */


long FUN_00846e20(long param_1,undefined8 param_2,undefined8 param_3,short param_4,
                 undefined1 *param_5,long param_6)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_043773c0;
  plVar3 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,param_2);
  if ((*(char *)(param_6 + 6) == '\0') && (uVar4 = FUN_007f0ee4(param_2), (uVar4 & 1) != 0)) {
    if (plVar3 != (long *)0x0) {
      if ((short)plVar3[7] != 0) goto LAB_00846e94;
      local_58 = 0;
      local_60 = 0x20000000;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
    }
    lVar5 = 0;
  }
  else {
LAB_00846e94:
    lVar5 = FUN_00845c94(*(undefined8 *)(param_1 + 0x40));
    if (lVar5 == 0) {
      local_60 = 0x200000000;
      local_58 = 0;
      FUN_00845e68(*(undefined8 *)(param_1 + 0x40),&local_60);
    }
    else {
      FUN_007f0744(lVar5);
      *(undefined1 *)(lVar5 + 0x648) = 1;
      FUN_007f0f88(lVar5 + 0x600,param_2);
      FUN_007f0810(lVar5,param_3);
      *(undefined1 *)(lVar5 + 0x621) = *(undefined1 *)(param_6 + 4);
      *(undefined1 *)(lVar5 + 0x622) = *param_5;
      *(undefined1 *)(lVar5 + 0x623) = *(undefined1 *)(param_6 + 6);
      *(undefined1 *)(lVar5 + 0x624) = param_5[1];
      if ((plVar3 != (long *)0x0) && (uVar4 = FUN_007f0ee4(param_2), (uVar4 & 1) != 0)) {
        bVar1 = *(byte *)(plVar3 + 5);
        if ((bVar1 != 0xfd) && (*(char *)(param_6 + 6) == '\0')) {
          param_1 = param_1 + ((ulong)(bVar1 >> 3) & 0x1c);
          *(uint *)(param_1 + 0x7c8) = *(uint *)(param_1 + 0x7c8) | 1 << (ulong)(bVar1 & 0x1f);
        }
      }
      if (param_4 == 0) {
        lVar6 = FUN_00855004(*(undefined8 *)puVar2);
        if (*(long *)(lVar6 + 0x98) == 0) {
          *(undefined2 *)(lVar5 + 0x10) = 0;
        }
        else {
          lVar6 = FUN_00855004(*(undefined8 *)puVar2);
          *(undefined2 *)(lVar5 + 0x10) = *(undefined2 *)(*(long *)(lVar6 + 0x98) + 0x38);
        }
      }
      else {
        *(short *)(lVar5 + 0x10) = param_4;
      }
    }
  }
  return lVar5;
}


