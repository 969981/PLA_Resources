/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef7fa0; name: FUN_02ef7fa0
 */


undefined8 * FUN_02ef7fa0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if (DAT_0440aa78 == '\0') {
    return (undefined8 *)0x0;
  }
  if ((*(byte *)(param_1 + 0x10c) >> 3 & 1) == 0) {
    return (undefined8 *)0x0;
  }
  if ((*(ushort *)(param_1 + 0x134) & 7) == 2) {
    return (undefined8 *)0x0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(uint *)(lVar4 + 0x40) < 9) {
    if (*(uint *)(lVar4 + 0x40) < 6) goto LAB_02ef8010;
    lVar4 = *(long *)(lVar4 + 0x38);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x38);
    if ((*(long *)(lVar4 + 0x40) != 0) &&
       (*(int *)(*(long *)(param_1 + 0x168) + 0x10) == *(int *)(*(long *)(lVar4 + 0x40) + 0x20))) {
      return (undefined8 *)0x0;
    }
  }
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x168) + 0x10);
    if (*(uint *)(lVar4 + 0x78) != 0) {
      lVar6 = (ulong)*(uint *)(lVar4 + 0x78) << 2;
      piVar5 = *(int **)(lVar4 + 0x70);
      do {
        if (*piVar5 == iVar1) {
          return (undefined8 *)0x0;
        }
        lVar6 = lVar6 + -4;
        piVar5 = piVar5 + 1;
      } while (lVar6 != 0);
    }
    if (*(uint *)(lVar4 + 0x68) != 0) {
      lVar6 = (ulong)*(uint *)(lVar4 + 0x68) << 3;
      piVar5 = *(int **)(lVar4 + 0x60);
      do {
        if (*piVar5 == iVar1) {
          return (undefined8 *)0x0;
        }
        lVar6 = lVar6 + -8;
        piVar5 = piVar5 + 2;
      } while (lVar6 != 0);
    }
  }
LAB_02ef8010:
  puVar2 = (undefined8 *)(*DAT_0442d138)(0,0x18);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined8 *)((long)puVar2 + 0xe) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar4 = FUN_02e43210(*(undefined8 *)(param_1 + 0x10));
  if (lVar4 != 0) {
    puVar2[1] = param_1;
    FUN_02ef6c7c(lVar4,puVar2);
    return puVar2;
  }
  if (puVar2[1] != 0) {
    lVar4 = *(long *)(puVar2[1] + 0x10);
    if (*(uint *)(lVar4 + 0x40) < 6) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28);
    }
    FUN_02ef6db4(uVar3,puVar2);
    puVar2[1] = 0;
  }
  FUN_02f59e60(0,puVar2);
  return (undefined8 *)0x0;
}


