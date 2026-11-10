/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136c2d4; name: FUN_0136c2d4
 */


void FUN_0136c2d4(double param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  uVar5 = (uint)param_1;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  FUN_02a4754c(&local_70,&DAT_04207530);
  lVar4 = FUN_0283ac34(*(undefined8 *)(param_2 + 0x2c8),&local_70);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_02a4754c(&local_70,&DAT_04207590);
  lVar4 = FUN_0283ac34(*(undefined8 *)(param_2 + 0x2c8),&local_70);
  bVar3 = (byte)(uVar5 >> 0x18);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | (byte)~bVar3 >> 7;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_02a4754c(&local_70,&DAT_042075a8);
  lVar4 = FUN_0283ac34(*(undefined8 *)(param_2 + 0x2c8),&local_70);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | bVar3 >> 7;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (0x5b8d7e < uVar2) {
    uVar2 = 5999999;
  }
  uVar6 = uVar2 / 1000 + (uVar2 / 60000) * -0x3c;
  uVar7 = (uVar6 & 0xff) / 10;
  uVar1 = uVar5 >> 0x1d & 4;
  FUN_0136c534(param_2,uVar1,uVar6 + uVar7 * -10 & 0xff);
  FUN_0136c534(param_2,uVar1 | 1,uVar7);
  uVar2 = uVar2 / 60000 + (uVar2 / 6000000) * -100;
  uVar6 = (uVar2 & 0xff) / 10;
  FUN_0136c534(param_2,uVar1 | 2,uVar2 + uVar6 * -10 & 0xff);
  FUN_0136c534(param_2,uVar5 >> 0x1d | 3,uVar6);
  local_70 = 0xc95cd43bb4095e6c;
  pcStack_68 = "anime_L_mngm_time_bonus_00_wake";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  FUN_00d2df7c(param_2 + 0x180,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x4e34a1a0e2b1dced;
  pcStack_68 = "anime_L_mngm_time_bonus_00_keep";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  FUN_00d2df7c(param_2 + 0x180,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


