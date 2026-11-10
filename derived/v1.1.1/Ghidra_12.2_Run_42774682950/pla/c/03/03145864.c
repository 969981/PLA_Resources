/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03145864; name: FUN_03145864
 */


void FUN_03145864(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long local_68;
  undefined1 auStack_54 [4];
  
  plVar2 = (long *)(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar8 = 0;
    uVar10 = (ulong)(*(int *)(param_1 + 0x2c) + 1);
    do {
      if ((*(long *)(*plVar2 + lVar8) != -1) &&
         (puVar3 = (undefined8 *)(*plVar2 + lVar8), puVar3[1] != -1)) {
        *puVar3 = 0xffffffffffffffff;
        puVar3[1] = 0xffffffffffffffff;
      }
      uVar10 = uVar10 - 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar10 != 0);
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0x80000000;
  puVar6 = PTR_PTR_0434a080;
  iVar7 = 8;
  do {
    bVar1 = iVar7 < *(int *)(param_2 + 0x28) * 2;
    iVar7 = iVar7 << 1;
  } while (bVar1);
  FUN_03144e5c(plVar2,PTR_PTR_0434a080);
  iVar7 = *(int *)(param_2 + 0x2c);
  if (-1 < iVar7) {
    lVar8 = *(long *)(param_2 + 0x20);
    uVar10 = 0;
    plVar12 = (long *)(lVar8 + 8);
    do {
      if ((plVar12[-1] != -1) && (*plVar12 != -1)) break;
      uVar10 = uVar10 + 1;
      plVar12 = plVar12 + 3;
    } while ((long)iVar7 + 1U != uVar10);
    if ((int)uVar10 <= iVar7) {
      uVar10 = uVar10 & 0xffffffff;
      do {
        lVar14 = (long)(int)uVar10;
        lVar13 = (lVar14 + (long)(int)uVar10 * 2) * 8;
        puVar3 = (undefined8 *)(lVar8 + lVar13);
        iVar7 = FUN_03144d7c(plVar2,puVar6,puVar3,auStack_54);
        puVar9 = (undefined8 *)(*plVar2 + (long)iVar7 * 0x18);
        uVar5 = puVar3[1];
        *puVar9 = *puVar3;
        puVar9[1] = uVar5;
        *(undefined4 *)(*plVar2 + (long)iVar7 * 0x18 + 0x10) = *(undefined4 *)(puVar3 + 2);
        lVar8 = lVar14 + -1;
        lVar14 = (lVar14 << 0x20) + 0x100000000;
        do {
          lVar11 = lVar14;
          lVar8 = lVar8 + 1;
          if (*(int *)(param_2 + 0x2c) <= lVar8) break;
          lVar4 = *(long *)(param_2 + 0x20) + lVar13;
          lVar13 = lVar13 + 0x18;
          lVar14 = lVar11 + 0x100000000;
        } while ((*(long *)(lVar4 + 0x18) == -1) || (*(long *)(lVar4 + 0x20) == -1));
        uVar10 = lVar11 >> 0x20;
        if (*(int *)(param_2 + 0x2c) < (int)((ulong)lVar11 >> 0x20)) break;
        lVar8 = *(long *)(param_2 + 0x20);
      } while( true );
    }
  }
  if (*(long **)(param_2 + 0x30) == (long *)0x0) {
    lVar8 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar8 != 0) {
      FUN_032d647c();
      return;
    }
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x30) + 0x68))(&local_68);
    lVar8 = local_68;
    local_68 = 0;
    lVar13 = *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar8;
    if ((lVar13 != 0) && (FUN_032d647c(), local_68 != 0)) {
      FUN_032d647c();
    }
  }
  return;
}


