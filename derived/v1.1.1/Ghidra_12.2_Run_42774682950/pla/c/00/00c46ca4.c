/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c46ca4; name: FUN_00c46ca4
 */


void FUN_00c46ca4(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  long *local_28;
  long local_18;
  
  local_58 = 0x9855dc82f1f91328;
  local_50 = "GoalPositionKey";
  uStack_48 = 0xf;
  FUN_02a4754c(auStack_40,&local_58);
  FUN_00c3b334(&local_18,param_1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_18 != 0) {
    uVar1 = FUN_00b69480();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  local_58 = 0x41e3debc7e5e2933;
  local_50 = "Radius";
  uStack_48 = 6;
  FUN_02a4754c(auStack_40,&local_58);
  FUN_00c3b334(&local_18,param_1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_18 != 0) {
    fVar2 = (float)FUN_00b6911c();
    *(float *)(param_1 + 0xc0) = fVar2 * fVar2;
  }
  local_58 = 0x7d0770b64fe8d1d7;
  local_50 = "MoveDistanceMax";
  uStack_48 = 0xf;
  FUN_02a4754c(auStack_40,&local_58);
  FUN_00c3b334(&local_18,param_1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_18 != 0) {
    uVar3 = FUN_00b6911c();
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
  }
  local_58 = 0x5b808e88bf7e167b;
  local_50 = "PlayerDistance";
  uStack_48 = 0xe;
  FUN_02a4754c(auStack_40,&local_58);
  FUN_00c3b334(&local_18,param_1,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_18 != 0) {
    fVar2 = (float)FUN_00b6911c();
    *(float *)(param_1 + 200) = fVar2 * fVar2;
  }
  return;
}


