/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001852a8; name: FUN_001852a8
 */


void FUN_001852a8(long *param_1)

{
  uint uVar1;
  void *__src;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *__dest;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  param_1[2] = 1;
  puVar2 = PTR_DAT_04372370;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_04372418;
  param_1[10] = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  lVar10 = *(long *)(puVar2 + 0x248);
  lVar9 = *(long *)(puVar2 + 0x240);
  param_1[0x19] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[7] = lVar10;
  param_1[6] = lVar9;
  param_1[9] = CONCAT44(-(float)((ulong)lVar10 >> 0x20),-(float)lVar10);
  param_1[8] = CONCAT44(-(float)((ulong)lVar9 >> 0x20),-(float)lVar9);
  plVar8 = param_1 + 0x18;
  *plVar8 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar7 = tpidr_el0;
  lVar5 = *(long *)(lVar7 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar5;
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
  __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0x100,0);
  __src = (void *)0x0;
  if (param_1[0x18] != 0) {
    __src = (void *)(param_1[0x18] + (long)plVar8);
  }
  memcpy(__dest,__src,(long)(int)param_1[0x19] << 7);
  if ((int)*(uint *)((long)param_1 + 0xcc) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0xcc) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 0x19)) {
      uVar1 = *(uint *)(param_1 + 0x19);
    }
    lVar5 = 0;
    if (param_1[0x18] != 0) {
      lVar5 = param_1[0x18] + (long)plVar8;
    }
    lVar6 = *(long *)(lVar7 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,(ulong)uVar1 << 7);
  }
  lVar7 = 0;
  if (__dest != (void *)0x0) {
    lVar7 = (long)__dest - (long)plVar8;
  }
  param_1[0x18] = lVar7;
  param_1[0x19] = -0x7ffffffdfffffffe;
  lVar6 = *(long *)(puVar2 + 0x298);
  lVar5 = *(long *)(puVar2 + 0x290);
  plVar4 = (long *)(lVar7 + (long)plVar8);
  *(undefined2 *)(plVar4 + 0xe) = 0;
  plVar4[1] = lVar10;
  *plVar4 = lVar9;
  plVar4[3] = lVar6;
  plVar4[2] = lVar5;
  plVar4[5] = lVar10;
  plVar4[4] = lVar9;
  plVar4[7] = lVar6;
  plVar4[6] = lVar5;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[9] = lVar10;
  plVar4[8] = lVar9;
  plVar4[0xb] = lVar6;
  plVar4[10] = lVar5;
  lVar7 = param_1[0x18];
  *(undefined2 *)((long)plVar8 + lVar7 + 0xf0) = 0;
  *(undefined8 *)((long)plVar8 + lVar7 + 0xe0) = 0;
  *(undefined8 *)((long)plVar8 + lVar7 + 0xe8) = 0;
  *(long *)((long)plVar8 + lVar7 + 0x88) = lVar10;
  *(long *)((long)plVar8 + lVar7 + 0x80) = lVar9;
  *(long *)((long)plVar8 + lVar7 + 0x98) = lVar6;
  *(long *)((long)plVar8 + lVar7 + 0x90) = lVar5;
  *(long *)((long)plVar8 + lVar7 + 0xa8) = lVar10;
  *(long *)((long)plVar8 + lVar7 + 0xa0) = lVar9;
  *(long *)((long)plVar8 + lVar7 + 0xb8) = lVar6;
  *(long *)((long)plVar8 + lVar7 + 0xb0) = lVar5;
  *(long *)((long)plVar8 + lVar7 + 200) = lVar10;
  *(long *)((long)plVar8 + lVar7 + 0xc0) = lVar9;
  *(long *)((long)plVar8 + lVar7 + 0xd8) = lVar6;
  *(long *)((long)plVar8 + lVar7 + 0xd0) = lVar5;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}


