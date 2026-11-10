/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334db7c; name: FUN_0334db7c
 */


void FUN_0334db7c(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  void *__src;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < 2) {
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar3;
      uVar8 = uVar3;
    }
    uVar2 = uVar8 & 0x7fffffff;
    if ((int)(uVar8 & 0x7fffffff) <= (int)uVar3) {
      uVar2 = uVar3;
    }
    if ((int)uVar2 < 2) {
      lVar5 = tpidr_el0;
      lVar6 = *(long *)(lVar5 + 0x38d490);
      if (lVar6 == 0) {
        lVar6 = FUN_0333d16c(0,1);
        *(long *)(lVar5 + 0x38d490) = lVar6;
      }
      plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
      __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0x100,0);
      if (*param_1 == 0) {
        __src = (void *)0x0;
      }
      else {
        __src = (void *)(*param_1 + (long)param_1);
      }
      memcpy(__dest,__src,(long)(int)param_1[1] << 7);
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar3 <= (int)*(uint *)(param_1 + 1)) {
          uVar3 = *(uint *)(param_1 + 1);
        }
        if (*param_1 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *param_1 + (long)param_1;
        }
        lVar7 = *(long *)(lVar5 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar7;
        }
        plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,(ulong)uVar3 << 7);
      }
      if (__dest == (void *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (long)__dest - (long)param_1;
      }
      *param_1 = lVar5;
      *(undefined4 *)((long)param_1 + 0xc) = 0x80000002;
    }
    else {
      lVar5 = *param_1;
    }
    *(undefined4 *)(param_1 + 1) = 2;
    puVar1 = (undefined8 *)(lVar5 + (long)param_1);
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
    lVar5 = *param_1;
    *(undefined8 *)((long)param_1 + lVar5 + 0xe0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0xe8) = 0;
    *(undefined2 *)((long)param_1 + lVar5 + 0xf0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x88) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xa8) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 200) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}


