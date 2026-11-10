/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba65c; name: FUN_031ba65c
 */


void FUN_031ba65c(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  *(uint *)(param_1 + 0x28) = uVar2;
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = tpidr_el0;
    lVar4 = *(long *)(lVar3 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar4;
    }
    lVar4 = *(long *)(lVar4 + 8);
    if ((ulong)((long)(int)uVar2 * 0x80) <= *(ulong *)(lVar4 + 0x10)) {
      lVar3 = *(long *)(lVar4 + 0x18);
      uVar1 = lVar3 + (long)(int)uVar2 * 0x80;
      if (uVar1 <= *(ulong *)(lVar4 + 0x20)) {
        *(ulong *)(lVar4 + 0x18) = uVar1;
        goto LAB_031ba6cc;
      }
    }
    lVar3 = FUN_032ce670(lVar4);
  }
LAB_031ba6cc:
  *(long *)(param_1 + 0x10) = lVar3;
  *(long *)(param_1 + 0x20) = lVar3;
  *(uint *)(param_1 + 0x1c) = uVar2 | 0x80000000;
  *(long *)(param_1 + 0x30) = param_2;
  return;
}


