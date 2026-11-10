/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bfc18; name: FUN_032bfc18
 */


void FUN_032bfc18(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 != 0) {
    puVar5 = *(uint **)(param_1 + 0x20);
    if (uVar1 == (*puVar5 & 0xffff)) {
      lVar6 = *(long *)(param_1 + 0x18);
      puVar7 = *(undefined8 **)(param_1 + 0x30);
      *(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)puVar5[1] * 8) = 0;
      *(undefined1 *)(lVar6 + 0xc) = 1;
      iVar2 = *(int *)(puVar7 + 0xb);
      lVar6 = puVar7[1];
      *(uint **)(lVar6 + (long)iVar2 * 8) = puVar5;
      *(int *)(puVar7 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar7 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar7 + 0x28))((long *)*puVar7,lVar6 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar7 + 0xb) = iVar2 + -5;
      }
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = *puVar5 - uVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x18) + 0xc) = 1;
  }
  return;
}


