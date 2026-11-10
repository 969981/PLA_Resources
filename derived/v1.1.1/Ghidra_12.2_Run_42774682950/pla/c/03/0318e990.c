/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318e990; name: FUN_0318e990
 */


void FUN_0318e990(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  
  *(undefined4 *)(param_1 + 0x178) = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    plVar7 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = param_2;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x160) = 0;
  puVar6 = PTR_PTR_0434a080;
  puVar8 = (uint *)(param_1 + 0x9c);
  uVar10 = *puVar8;
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar9) {
    uVar12 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = *(undefined4 *)(param_1 + 0x98);
    if (0x3fffffff < (int)uVar9) {
      FUN_032bd0a8(uVar9);
      uVar10 = *puVar8;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar5 = uVar9;
    if ((int)uVar9 <= (int)uVar10) {
      uVar5 = uVar10;
    }
    uVar12 = FUN_032bd1d4(puVar6,uVar5,4,uVar12,uVar2,puVar8);
    *(undefined8 *)(param_1 + 0x90) = uVar12;
  }
  uVar10 = *(uint *)(param_1 + 0x98);
  if ((int)uVar10 < (int)uVar9) {
    *(uint *)(param_1 + 0x98) = uVar9;
    memset((void *)(*(long *)(param_1 + 0x90) + (long)(int)uVar10 * 4),0xff,
           (ulong)(uVar9 + ~uVar10) * 4 + 4);
  }
  else if ((int)uVar9 < (int)uVar10) {
    *(uint *)(param_1 + 0x98) = uVar9;
  }
  puVar8 = (uint *)(param_1 + 0x7c);
  uVar9 = *puVar8;
  uVar10 = *(uint *)(param_1 + 0x30);
  if ((int)(uVar9 & 0x3fffffff) < (int)uVar10) {
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    if (0x3fffffff < (int)uVar10) {
      FUN_032bd0a8(uVar10);
      uVar9 = *puVar8;
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar5 = uVar10;
    if ((int)uVar10 <= (int)uVar9) {
      uVar5 = uVar9;
    }
    uVar12 = FUN_032bd1d4(puVar6,uVar5,4,uVar12,uVar2,puVar8);
    *(undefined8 *)(param_1 + 0x70) = uVar12;
  }
  uVar9 = *(uint *)(param_1 + 0x78);
  if ((int)uVar9 < (int)uVar10) {
    *(uint *)(param_1 + 0x78) = uVar10;
    memset((void *)(*(long *)(param_1 + 0x70) + (long)(int)uVar9 * 4),0xff,
           (ulong)(uVar10 + ~uVar9) * 4 + 4);
  }
  else if ((int)uVar10 < (int)uVar9) {
    *(uint *)(param_1 + 0x78) = uVar10;
  }
  uVar9 = *(uint *)(param_1 + 0x10c);
  uVar10 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar9 & 0x3fffffff) < (int)uVar10) {
    uVar12 = *(undefined8 *)(param_1 + 0x100);
    uVar2 = *(undefined4 *)(param_1 + 0x108);
    if (0x3fffffff < (int)uVar10) {
      FUN_032bd0a8(uVar10);
      uVar9 = *(uint *)(param_1 + 0x10c);
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar5 = uVar10;
    if ((int)uVar10 <= (int)uVar9) {
      uVar5 = uVar9;
    }
    uVar12 = FUN_032bd1d4(puVar6,uVar5,1,uVar12,uVar2,(uint *)(param_1 + 0x10c));
    *(undefined8 *)(param_1 + 0x100) = uVar12;
  }
  uVar9 = *(uint *)(param_1 + 0x108);
  if ((int)uVar9 < (int)uVar10) {
    *(uint *)(param_1 + 0x108) = uVar10;
    memset((void *)(*(long *)(param_1 + 0x100) + (long)(int)uVar9),0,(ulong)(uVar10 + ~uVar9) + 1);
  }
  else if ((int)uVar10 < (int)uVar9) {
    *(uint *)(param_1 + 0x108) = uVar10;
  }
  uVar9 = *(uint *)(param_1 + 0x174);
  uVar10 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((int)(uVar9 & 0x3fffffff) < (int)uVar10) {
    uVar12 = *(undefined8 *)(param_1 + 0x168);
    uVar2 = *(undefined4 *)(param_1 + 0x170);
    if (0x3fffffff < (int)uVar10) {
      FUN_032bd0a8(uVar10);
      uVar9 = *(uint *)(param_1 + 0x174);
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar5 = uVar10;
    if ((int)uVar10 <= (int)uVar9) {
      uVar5 = uVar9;
    }
    uVar12 = FUN_032bd1d4(puVar6,uVar5,4,uVar12,uVar2,(uint *)(param_1 + 0x174));
    *(undefined8 *)(param_1 + 0x168) = uVar12;
  }
  uVar9 = *(uint *)(param_1 + 0x170);
  if ((int)uVar9 < (int)uVar10) {
    *(uint *)(param_1 + 0x170) = uVar10;
    memset((void *)(*(long *)(param_1 + 0x168) + (long)(int)uVar9 * 4),0xff,
           (ulong)(uVar10 + ~uVar9) * 4 + 4);
    return;
  }
  if ((int)uVar10 < (int)uVar9) {
    *(uint *)(param_1 + 0x170) = uVar10;
  }
  return;
}


