/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bc870; name: FUN_013bc870
 */


void FUN_013bc870(undefined2 *param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_28);
  *param_1 = *(undefined2 *)(param_2 + 0x220);
  param_1[1] = (ushort)*(byte *)(param_2 + 0x222);
  param_1[2] = *(undefined2 *)(param_2 + 0x210);
  param_1[3] = *(undefined2 *)(param_2 + 0x212);
  param_1[4] = *(undefined2 *)(param_2 + 0x214);
  param_1[5] = *(undefined2 *)(param_2 + 0x216);
  param_1[6] = *(undefined2 *)(param_2 + 0x20e);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x225);
  *(undefined1 *)((long)param_1 + 0xf) = *(undefined1 *)(param_2 + 0x223);
  bVar3 = *(byte *)(param_2 + 0x252);
  if (1 < bVar3) {
    bVar3 = FUN_01123ce8(local_28);
  }
  *(byte *)(param_1 + 8) = bVar3;
  uVar6 = FUN_013970a0();
  param_2 = param_2 + (uVar6 & 0xff) * 0x1c;
  cVar4 = *(char *)(param_2 + 0x126);
  psVar1 = (short *)(param_2 + 0x10c);
  if (cVar4 == '\0') {
    cVar4 = FUN_01123cf0(local_28);
  }
  *(char *)((long)param_1 + 0x11) = cVar4;
  if (*psVar1 == 0) {
    FUN_01123bb4(local_28,param_1 + 9);
    plVar2 = local_28;
  }
  else {
    FUN_02c30490(param_1 + 9,psVar1);
    plVar2 = local_28;
  }
  if ((plVar2 != (long *)0x0) && (uVar6 = FUN_02a43a5c(plVar2[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  return;
}


