/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091a994; name: FUN_0091a994
 */


void FUN_0091a994(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long alStack_138 [31];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 0xd0);
  alStack_138[0] = 0;
  alStack_138[1] = 0;
  alStack_138[2] = 0;
  alStack_138[3] = 0;
  alStack_138[4] = 0;
  alStack_138[5] = 0;
  alStack_138[6] = 0;
  alStack_138[7] = 0;
  alStack_138[8] = 0;
  alStack_138[9] = 0;
  alStack_138[10] = 0;
  alStack_138[0xb] = 0;
  alStack_138[0xc] = 0;
  alStack_138[0xd] = 0;
  alStack_138[0xe] = 0;
  alStack_138[0xf] = 0;
  alStack_138[0x10] = 0;
  alStack_138[0x11] = 0;
  alStack_138[0x12] = 0;
  alStack_138[0x13] = 0;
  alStack_138[0x14] = 0;
  alStack_138[0x15] = 0;
  alStack_138[0x16] = 0;
  alStack_138[0x17] = 0;
  alStack_138[0x18] = 0;
  alStack_138[0x19] = 0;
  alStack_138[0x1a] = 0;
  alStack_138[0x1b] = 0;
  alStack_138[0x1c] = 0;
  alStack_138[0x1d] = 0;
  alStack_138[0x1e] = 0;
  uVar2 = *(uint *)(lVar3 + 0x1a0);
  if (uVar2 != 0) {
    __n = (ulong)uVar2 << 3;
    memcpy(alStack_138,(void *)(lVar3 + 0xb0),__n);
    alStack_138[0x1e] = (long)uVar2;
    plVar4 = alStack_138;
    do {
      lVar5 = *plVar4;
      lVar3 = *(long *)(lVar5 + 0x70);
      puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x68) + 0x78);
      FUN_0295e190(puVar6[1],*puVar6);
      **(undefined8 **)(puVar6[5] + 0x10) = 0;
      lVar7 = *(long *)(*(long *)(puVar6[5] + 0x130) + 0xa40);
      uVar1 = FUN_0296eaa8(*(undefined8 *)(lVar7 + 0x38));
      uVar1 = FUN_0296ed7c(*(undefined8 *)(lVar7 + 0x38),*(undefined1 *)(lVar3 + 0x7d),uVar1);
      uVar2 = FUN_02977520(*(undefined8 *)(lVar7 + 0x38),lVar3,0,uVar1);
      __n = __n - 8;
      *(uint *)(lVar5 + 0xc4) = uVar2 & 0xffff;
      plVar4 = plVar4 + 1;
    } while (__n != 0);
  }
  return;
}


