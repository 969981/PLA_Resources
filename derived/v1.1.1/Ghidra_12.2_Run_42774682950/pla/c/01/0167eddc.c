/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167eddc; name: FUN_0167eddc
 */


void FUN_0167eddc(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar2 = PTR_DAT_0437a0d8;
  param_1[3] = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[4] = *(undefined8 *)(puVar2 + 8);
  plVar1 = *(long **)(puVar2 + 0x18);
  param_1[5] = *(undefined8 *)(puVar2 + 0x10);
  param_1[6] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x29) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x14];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_2 + uVar6);
    }
  }
  *(undefined4 *)param_1 = uVar5;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2d) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x16];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_2 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 4) = uVar5;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x31) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x18];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_2 + uVar6);
    }
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x35) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x1a];
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(undefined4 *)((long)param_2 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar5;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2b) {
    bVar3 = false;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x15];
    bVar3 = false;
    if (uVar6 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar6) != '\0';
    }
  }
  *(bool *)(param_1 + 2) = bVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x2f) {
    bVar3 = false;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x17];
    bVar3 = false;
    if (uVar6 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar6) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x11) = bVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x33) {
    bVar3 = false;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x19];
    bVar3 = false;
    if (uVar6 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar6) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x12) = bVar3;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x37) {
    bVar3 = false;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x1b];
    bVar3 = false;
    if (uVar6 != 0) {
      bVar3 = *(char *)((long)param_2 + uVar6) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x13) = bVar3;
  return;
}


