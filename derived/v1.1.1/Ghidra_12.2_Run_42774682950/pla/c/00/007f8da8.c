/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f8da8; name: FUN_007f8da8
 */


void FUN_007f8da8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  int local_c8 [4];
  undefined *local_b8 [2];
  char local_a4;
  int local_a0;
  int iStack_9c;
  uint local_94;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  int local_30;
  int iStack_2c;
  
  if (*(char *)((long)param_1 + 0x284) == '\0') {
    FUN_007fe25c(local_b8,*param_2,*(undefined4 *)((long)param_2 + 0xc),0x50,param_1);
    local_b8[0] = PTR_DAT_043775d0 + 0x10;
    uVar1 = FUN_007fe558(local_b8);
    if ((((uVar1 & 1) != 0) && (*(int *)((long)param_2 + 0xc) == iStack_9c + local_a0)) &&
       (local_a4 == 'P')) {
      uVar2 = *(uint *)((long)param_1 + 100);
      if (uVar2 < local_94) {
        uVar1 = (**(code **)(*param_1 + 0x348))(param_1,local_b8);
        if ((uVar1 & 1) == 0) {
          return;
        }
        (**(code **)(*param_1 + 0x340))(local_c8,param_1,local_b8);
        if (local_c8[0] != 0) {
          return;
        }
        uVar2 = *(uint *)((long)param_1 + 100);
      }
      FUN_007fe73c(auStack_48,param_1 + 0x52,0x4d8,uVar2);
      FUN_007fe768(auStack_48);
      FUN_007ff084(auStack_60,param_1 + 0x188,0x4d8);
      FUN_007ff094(auStack_60,local_40,iStack_2c + local_30,0x51);
      (**(code **)(*param_1 + 0x140))(param_1,auStack_60,param_3,0);
    }
  }
  return;
}


