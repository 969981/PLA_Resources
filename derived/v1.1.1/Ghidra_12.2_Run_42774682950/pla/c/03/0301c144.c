/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301c144; name: FUN_0301c144
 */


void FUN_0301c144(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)*param_1;
  if (1 < (int)param_1[1]) {
    lVar4 = ((long *)*param_1)[1];
    uVar2 = *(undefined8 *)(lVar3 + 0x4e0);
    FUN_032be7c0(lVar4 + 0x520,uVar2);
    FUN_032be7c0(lVar4 + 0x620,uVar2);
    if (2 < (int)param_1[1]) {
      lVar4 = *(long *)(*param_1 + 0x10);
      uVar2 = *(undefined8 *)(lVar3 + 0x4e0);
      FUN_032be7c0(lVar4 + 0x520,uVar2);
      FUN_032be7c0(lVar4 + 0x620,uVar2);
      if (3 < (int)param_1[1]) {
        lVar4 = 3;
        do {
          lVar5 = *(long *)(*param_1 + lVar4 * 8);
          uVar2 = *(undefined8 *)(lVar3 + 0x4e0);
          FUN_032be7c0(lVar5 + 0x520,uVar2);
          FUN_032be7c0(lVar5 + 0x620,uVar2);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)param_1[1]);
      }
    }
  }
  FUN_032be7c0(param_1 + 0xa8,*(undefined8 *)(lVar3 + 0x4e0));
  uVar2 = *(undefined8 *)(lVar3 + 0x4e0);
  FUN_032be7c0(lVar3 + 0x520,uVar2);
  FUN_032be7c0(lVar3 + 0x620,uVar2);
  uVar1 = *(uint *)(param_1 + 1);
  if (((uVar1 != 0) && (*(undefined4 *)((long)param_1 + 0x114) = 1, uVar1 != 1)) &&
     (*(undefined4 *)(param_1 + 0x23) = 2, uVar1 != 2)) {
    lVar3 = 0;
    do {
      *(int *)((long)param_1 + lVar3 * 4 + 0x11c) = (int)lVar3 + 3;
      lVar3 = lVar3 + 1;
    } while ((ulong)uVar1 - 2 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xa2) = 0x1ff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return;
}


