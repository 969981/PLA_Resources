/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286bb1c; name: FUN_0286bb1c
 */


void FUN_0286bb1c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte bStack_40;
  
  lVar7 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(lVar7 + 0x2e28) = 0;
  *(undefined4 *)(lVar7 + 0x2e30) = 0;
  *(undefined4 *)(lVar7 + 0x2e38) = 0;
  *(undefined2 *)(lVar7 + 0x2e3c) = 0x1212;
  *(undefined8 *)(lVar7 + 0x2e40) = 0x1900000000;
  *(undefined4 *)(lVar7 + 0x2e48) = 3;
  *(undefined2 *)(lVar7 + 0x2e4c) = 0;
  *(undefined1 *)(lVar7 + 0x2e4e) = 0;
  *(undefined8 *)(lVar7 + 0x2e50) = 0;
  *(undefined8 *)(lVar7 + 0x2e58) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x2e60) = 0;
  *(undefined4 *)(lVar7 + 0x2e68) = 0;
  *(undefined1 *)(lVar7 + 0x2e6c) = 0;
  *(undefined4 *)(lVar7 + 0x2e70) = 0xffff;
  *(undefined1 *)(lVar7 + 0x2e74) = 0x12;
  *(undefined8 *)(lVar7 + 0x2e78) = 0x100000001;
  *(undefined1 *)(lVar7 + 0x2e80) = 0;
  *(undefined8 *)(lVar7 + 0x2e96) = 0;
  *(ulong *)(lVar7 + 0x2e81) = (ulong)bStack_40;
  *(undefined8 *)(lVar7 + 0x2e89) = 0;
  *(undefined8 *)(lVar7 + 0x2e91) = 0;
  plVar5 = *(long **)(lVar7 + 0x2ea0);
  *(undefined8 *)(lVar7 + 0x2ea0) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(lVar7 + 0x2ea0) = 0;
  return;
}


