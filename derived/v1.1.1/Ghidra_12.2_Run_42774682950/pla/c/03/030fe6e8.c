/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fe6e8; name: FUN_030fe6e8
 */


void FUN_030fe6e8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  
  piVar6 = *(int **)(param_1 + 8);
  puVar1 = (undefined8 *)(param_1 + 8);
  piVar4 = piVar6 + 1;
  do {
    iVar5 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (iVar5 < 0x10) {
      uVar7 = *param_2;
      *(undefined8 *)(piVar6 + (long)iVar5 * 0xc + 6) = param_2[1];
      *(undefined8 *)(piVar6 + (long)iVar5 * 0xc + 4) = uVar7;
      uVar7 = param_2[2];
      *(undefined8 *)(piVar6 + (long)iVar5 * 0xc + 10) = param_2[3];
      *(undefined8 *)(piVar6 + (long)iVar5 * 0xc + 8) = uVar7;
      *(undefined8 *)(piVar6 + (long)iVar5 * 0xc + 0xc) = param_2[4];
      return;
    }
    piVar4 = (int *)FUN_032cf5b0(0x310);
    piVar4[0xd] = 0xffffff;
    piVar4[0x19] = 0xffffff;
    piVar4[0x25] = 0xffffff;
    piVar4[0x31] = 0xffffff;
    piVar4[0x3d] = 0xffffff;
    piVar4[0x49] = 0xffffff;
    piVar4[0x55] = 0xffffff;
    piVar4[0x61] = 0xffffff;
    piVar4[0x6d] = 0xffffff;
    piVar4[0x79] = 0xffffff;
    piVar4[0x85] = 0xffffff;
    piVar4[0x91] = 0xffffff;
    piVar4[0x9d] = 0xffffff;
    piVar4[0xa9] = 0xffffff;
    piVar4[0xb5] = 0xffffff;
    piVar4[0xc1] = 0xffffff;
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6 + 1;
    }
    *piVar4 = iVar5;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    do {
      if ((int *)*puVar1 != piVar6) {
        ClearExclusiveLocal();
        FUN_032cf640(piVar4,0x310);
        goto LAB_030fe7b8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = piVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (piVar6 != (int *)0x0) {
      *(int **)(piVar6 + 2) = piVar4;
    }
LAB_030fe7b8:
    piVar6 = (int *)*puVar1;
    piVar4 = piVar6 + 1;
    do {
      iVar5 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  } while( true );
}


