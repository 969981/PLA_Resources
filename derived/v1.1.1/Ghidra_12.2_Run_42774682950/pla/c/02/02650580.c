/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02650580; name: FUN_02650580
 */


void FUN_02650580(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_02650d50();
  FUN_0087fcf0(param_1 + 0x10,param_2 + 0x10);
  FUN_019a471c(param_1 + 0x20,param_2 + 0x20);
  FUN_019b5304(param_1 + 0x30,param_2 + 0x30);
  plVar6 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  FUN_018e5d8c(param_1 + 0x48,param_2 + 0x48);
  FUN_00d07998(param_1 + 0x58,param_2 + 0x58);
  FUN_02626558(param_1 + 0x68,param_2 + 0x68);
  FUN_01d8d3a4(param_1 + 0x78,param_2 + 0x78);
  FUN_02651050(param_1 + 0x88,param_2 + 0x88);
  FUN_02651350(param_1 + 0x98,param_2 + 0x98);
  FUN_0260845c(param_1 + 0xa8,param_2 + 0xa8);
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xb8) = uVar8;
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar8 = *(undefined8 *)(param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar9 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = uVar9;
  *(undefined8 *)(param_1 + 0xf0) = uVar8;
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  uVar9 = *(undefined8 *)(param_2 + 0x120);
  uVar8 = *(undefined8 *)(param_2 + 0x110);
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  *(undefined8 *)(param_1 + 0x120) = uVar9;
  *(undefined8 *)(param_1 + 0x110) = uVar8;
  return;
}


