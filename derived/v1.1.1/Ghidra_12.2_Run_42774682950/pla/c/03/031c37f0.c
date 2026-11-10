/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c37f0; name: FUN_031c37f0
 */


ulong FUN_031c37f0(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x18);
  if (0 < (int)uVar2) {
    uVar10 = 0;
    do {
      if (*(long *)(lVar7 + uVar10 * 8) == 0) {
        if ((~(uint)uVar10 & 0xff) != 0) goto LAB_031c3858;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((long)(int)uVar2 != uVar10);
  }
  if ((int)uVar2 < (int)(*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    uVar8 = uVar2;
  }
  else {
    lVar7 = FUN_031c5dd8(PTR_PTR_0434a080,uVar2 + 1,lVar7,uVar2);
    *(long *)(param_1 + 0x18) = lVar7;
    uVar8 = *(uint *)(param_1 + 0x20);
  }
  uVar10 = (ulong)uVar2;
  *(undefined8 *)(lVar7 + (long)(int)uVar8 * 8) = 0;
  *(uint *)(param_1 + 0x20) = uVar2 + 1;
LAB_031c3858:
  lVar7 = tpidr_el0;
  lVar9 = *(long *)(lVar7 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar9;
  }
  plVar5 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x60,0);
  *puVar6 = &PTR_LAB_04305d88;
  puVar6[1] = 0xffffffff;
  puVar6[2] = 1;
  *(char *)(puVar6 + 3) = (char)uVar10;
  puVar6[4] = 0;
  puVar6[5] = 0x8000000000000000;
  puVar6[6] = 0;
  puVar6[7] = 0x8000000000000000;
  puVar6[8] = 0;
  puVar6[9] = 0x8000000000000000;
  puVar6[10] = 0;
  puVar6[0xb] = 0x8000000000000000;
  lVar7 = (uVar10 & 0xff) * 8;
  plVar5 = *(long **)(*(long *)(param_1 + 0x18) + lVar7);
  *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar7) = puVar6;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  return uVar10 & 0xff;
}


