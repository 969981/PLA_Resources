/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c31ec; name: FUN_032c31ec
 */


/* WARNING: Removing unreachable block (ram,0x032c3260) */

void FUN_032c31ec(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (-1 < (int)uVar2) {
    uVar3 = (ulong)uVar2 + 1 & 1;
    if (uVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar5 = 0;
      lVar4 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar5) = 0xffffffffffffffff;
        lVar4 = lVar4 + 2;
        lVar1 = *param_1 + lVar5;
        lVar5 = lVar5 + 0x20;
        *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
      } while (((ulong)uVar2 + 1) - uVar3 != lVar4);
      if (uVar3 == 0) goto LAB_032c3248;
    }
    *(undefined8 *)(*param_1 + lVar4 * 0x10) = 0xffffffffffffffff;
  }
LAB_032c3248:
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}


