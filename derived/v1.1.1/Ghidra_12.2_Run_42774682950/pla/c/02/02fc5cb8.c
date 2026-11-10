/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc5cb8; name: FUN_02fc5cb8
 */


void FUN_02fc5cb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  void *__dest;
  void *__src;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_042b0770;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  puVar7 = param_1 + 9;
  *puVar7 = 0;
  lVar5 = tpidr_el0;
  lVar4 = *(long *)(lVar5 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
  }
  plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,0x100,0);
  if (param_1[9] == 0) {
    __src = (void *)0x0;
  }
  else {
    __src = (void *)(param_1[9] + (long)puVar7);
  }
  memcpy(__dest,__src,(long)*(int *)(param_1 + 10) << 7);
  if ((int)*(uint *)((long)param_1 + 0x54) < 0) {
    uVar2 = *(uint *)((long)param_1 + 0x54) & 0x7fffffff;
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 10)) {
      uVar2 = *(uint *)(param_1 + 10);
    }
    lVar4 = param_1[9];
    if (lVar4 != 0) {
      lVar4 = lVar4 + (long)puVar7;
    }
    lVar6 = *(long *)(lVar5 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,(ulong)uVar2 << 7);
  }
  if (__dest == (void *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)__dest - (long)puVar7;
  }
  puVar1 = (undefined8 *)(lVar5 + (long)puVar7);
  param_1[9] = lVar5;
  param_1[10] = 0x8000000200000002;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  puVar1[1] = 0x7f7fffee7f7fffee;
  *puVar1 = 0x7f7fffee7f7fffee;
  puVar1[3] = 0xff7fffeeff7fffee;
  puVar1[2] = 0xff7fffeeff7fffee;
  puVar1[5] = 0x7f7fffee7f7fffee;
  puVar1[4] = 0x7f7fffee7f7fffee;
  puVar1[7] = 0xff7fffeeff7fffee;
  puVar1[6] = 0xff7fffeeff7fffee;
  puVar1[9] = 0x7f7fffee7f7fffee;
  puVar1[8] = 0x7f7fffee7f7fffee;
  puVar1[0xb] = 0xff7fffeeff7fffee;
  puVar1[10] = 0xff7fffeeff7fffee;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  lVar5 = param_1[9];
  *(undefined8 *)((long)puVar7 + lVar5 + 0xe0) = 0;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xe8) = 0;
  *(undefined2 *)((long)puVar7 + lVar5 + 0xf0) = 0;
  *(undefined8 *)((long)puVar7 + lVar5 + 0x88) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0x98) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xa8) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xb8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 200) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xd8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)puVar7 + lVar5 + 0xd0) = 0xff7fffeeff7fffee;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


