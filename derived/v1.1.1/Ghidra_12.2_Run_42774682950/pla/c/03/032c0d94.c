/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c0d94; name: FUN_032c0d94
 */


void FUN_032c0d94(float param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  uVar2 = (long)((float)param_3 / param_1) + 6;
  *param_2 = 0;
  if (uVar2 < 7) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar2 / 7;
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
  }
  uVar3 = 7L << (uVar2 & 0x3f);
  while( true ) {
    if (param_3 <= (ulong)(long)((float)uVar3 * param_1)) break;
    uVar3 = uVar3 << 1;
    uVar2 = (ulong)((int)uVar2 + 1);
  }
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar6 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  lVar4 = 0x80L << (uVar2 & 0x3f);
  lVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,lVar4 + 0x90,0);
  puVar5 = (undefined8 *)(lVar1 + 0x8fU & 0xffffffffffffff80);
  *(int *)(puVar5 + -1) = (int)lVar4 + 0x80;
  *(int *)((long)puVar5 + -4) = (int)puVar5 - (int)lVar1;
  puVar5[-2] = plVar6;
  *param_2 = (long)puVar5;
  param_2[1] = ~(-1L << (uVar2 & 0x3f));
  *(int *)(param_2 + 2) = 0x38 - (int)uVar2;
  *puVar5 = 0;
  puVar5[1] = 0;
  if (param_2[1] != 0) {
    uVar2 = 1;
    lVar1 = 0x80;
    do {
      lVar4 = *param_2;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar4 + lVar1) = 0;
      ((undefined8 *)(lVar4 + lVar1))[1] = 0;
      lVar1 = lVar1 + 0x80;
    } while (uVar2 <= (ulong)param_2[1]);
  }
  return;
}


