/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012925ec; name: FUN_012925ec
 */


void FUN_012925ec(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar3 = *param_1;
  uVar2 = FUN_00d55250(lVar3);
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar3 + 0x6f8) == '\0') {
      local_40 = 0x1f7e1ba02170001c;
      pcStack_38 = "PLAY_UI_COMMON_RELEASE";
      local_30 = 0x16;
      local_28 = (long *)0x0;
      FUN_028354b0(&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    else {
      local_40 = 0x898ac1bbdbe7b512;
      pcStack_38 = "PLAY_UI_COMMON_CATCH";
      local_30 = 0x14;
      local_28 = (long *)0x0;
      FUN_028354b0(&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x6d8);
      FUN_00d607c4(lVar3,uVar1,0);
      FUN_00d6089c(lVar3,uVar1,1);
    }
    FUN_0128eecc(lVar3,&DAT_03a7a510,2);
    FUN_00d52954(lVar3,*(undefined1 *)(lVar3 + 0x6f8));
    FUN_0128adac(lVar3,*(char *)(lVar3 + 0x6f8) == '\0');
  }
  return;
}


