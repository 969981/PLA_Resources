/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c1e54; name: FUN_032c1e54
 */


void FUN_032c1e54(float param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  
  lVar1 = *param_2;
  lVar5 = param_2[1];
  uVar6 = (long)((float)param_3 / param_1) + 6;
  *param_2 = 0;
  if (uVar6 < 7) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 / 7;
    uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
  }
  uVar7 = 7L << (uVar6 & 0x3f);
  while ((ulong)(long)((float)uVar7 * param_1) < param_3) {
    uVar7 = uVar7 << 1;
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar9 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  lVar10 = 0x80L << (uVar6 & 0x3f);
  lVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar10 + 0x90,0);
  puVar4 = (undefined8 *)(lVar3 + 0x8fU & 0xffffffffffffff80);
  *(int *)(puVar4 + -1) = (int)lVar10 + 0x80;
  *(int *)((long)puVar4 + -4) = (int)puVar4 - (int)lVar3;
  puVar4[-2] = plVar9;
  *param_2 = (long)puVar4;
  param_2[1] = ~(-1L << (uVar6 & 0x3f));
  *(int *)(param_2 + 2) = 0x38 - (int)uVar6;
  *puVar4 = 0;
  puVar4[1] = 0;
  if (param_2[1] != 0) {
    uVar6 = 1;
    lVar3 = 0x80;
    do {
      lVar10 = *param_2;
      uVar6 = uVar6 + 1;
      *(undefined8 *)(lVar10 + lVar3) = 0;
      ((undefined8 *)(lVar10 + lVar3))[1] = 0;
      lVar3 = lVar3 + 0x80;
    } while (uVar6 <= (ulong)param_2[1]);
  }
  if (lVar5 != -1) {
    lVar3 = 0;
    puVar4 = (undefined8 *)(lVar1 + 0x18);
    do {
      uVar6 = *(ulong *)(lVar1 + lVar3 * 0x80 + 8) >> 8 & 0x101010101010101;
      if (uVar6 != 0) {
        puVar8 = puVar4;
        do {
          if ((uVar6 & 1) != 0) {
            FUN_032c11b0(param_2,puVar8[-1],*puVar8);
          }
          uVar6 = uVar6 >> 8;
          puVar8 = puVar8 + 2;
        } while (uVar6 != 0);
      }
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 0x10;
    } while (lVar3 != lVar5 + 1);
  }
  lVar5 = *(long *)(lVar2 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar5;
  }
  if (lVar1 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
  *(undefined8 *)(lVar1 + -0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x032c201c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))
            (plVar9,lVar1 - *(int *)(lVar1 + -4),(long)*(int *)(lVar1 + -8) + 0x10);
  return;
}


