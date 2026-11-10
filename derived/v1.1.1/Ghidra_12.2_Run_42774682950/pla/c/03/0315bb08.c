/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315bb08; name: FUN_0315bb08
 */


void FUN_0315bb08(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar7 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = param_2;
  if (lVar7 != 0) {
    FUN_032d647c();
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar9 = *(uint *)(param_1 + 0x7c);
  if ((int)(uVar9 & 0x3fffffff) < (int)uVar2) {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined4 *)(param_1 + 0x78);
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar9 = *(uint *)(param_1 + 0x7c);
    }
    uVar9 = (uVar9 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar6 = uVar2;
    if ((int)uVar2 <= (int)uVar9) {
      uVar6 = uVar9;
    }
    uVar8 = FUN_032bd1d4(PTR_PTR_0434a080,uVar6,4,uVar8,uVar3);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
  }
  uVar9 = *(uint *)(param_1 + 0x78);
  if ((int)uVar9 < (int)uVar2) {
    *(uint *)(param_1 + 0x78) = uVar2;
    memset((void *)(*(long *)(param_1 + 0x70) + (long)(int)uVar9 * 4),0xff,
           (ulong)(uVar2 + ~uVar9) * 4 + 4);
  }
  else if ((int)uVar2 < (int)uVar9) {
    *(uint *)(param_1 + 0x78) = uVar2;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x6c);
  return;
}


