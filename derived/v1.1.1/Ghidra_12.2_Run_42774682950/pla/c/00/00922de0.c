/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00922de0; name: FUN_00922de0
 */


void FUN_00922de0(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_041b76b0;
  plVar6 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar6 == (long *)0x0) {
LAB_00922e4c:
    plVar6 = (long *)param_1[0x2f];
    if (plVar6 == (long *)0x0) goto LAB_00922e70;
LAB_00922e54:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922e70;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x2e];
    if (plVar6 != (long *)0x0) goto LAB_00922e78;
LAB_00922e94:
    plVar6 = (long *)param_1[0x2d];
    if (plVar6 == (long *)0x0) goto LAB_00922eb8;
LAB_00922e9c:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922eb8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x2c];
    if (plVar6 != (long *)0x0) goto LAB_00922ec0;
LAB_00922edc:
    plVar6 = (long *)param_1[0x2b];
    if (plVar6 == (long *)0x0) goto LAB_00922f00;
LAB_00922ee4:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922f00;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x2a];
    if (plVar6 != (long *)0x0) goto LAB_00922f08;
LAB_00922f24:
    plVar6 = (long *)param_1[0x29];
    if (plVar6 == (long *)0x0) goto LAB_00922f48;
LAB_00922f2c:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922f48;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x28];
    if (plVar6 != (long *)0x0) goto LAB_00922f50;
LAB_00922f6c:
    plVar6 = (long *)param_1[0x27];
    if (plVar6 == (long *)0x0) goto LAB_00922f90;
LAB_00922f74:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922f90;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x26];
    if (plVar6 != (long *)0x0) goto LAB_00922f98;
LAB_00922fb4:
    plVar6 = (long *)param_1[0x25];
    if (plVar6 == (long *)0x0) goto LAB_00922fd8;
LAB_00922fbc:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922fd8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x24];
    if (plVar6 != (long *)0x0) goto LAB_00922fe0;
LAB_00922ffc:
    plVar6 = (long *)param_1[0x23];
    if (plVar6 == (long *)0x0) goto LAB_00923020;
LAB_00923004:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923020;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x22];
    if (plVar6 != (long *)0x0) goto LAB_00923028;
LAB_00923044:
    plVar6 = (long *)param_1[0x21];
    if (plVar6 == (long *)0x0) goto LAB_00923068;
LAB_0092304c:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923068;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x20];
    if (plVar6 != (long *)0x0) goto LAB_00923070;
LAB_0092308c:
    plVar6 = (long *)param_1[0x1f];
    if (plVar6 == (long *)0x0) goto LAB_009230b0;
LAB_00923094:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_009230b0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x1e];
    if (plVar6 != (long *)0x0) goto LAB_009230b8;
LAB_009230d4:
    plVar6 = (long *)param_1[0x1d];
    if (plVar6 == (long *)0x0) goto LAB_009230f8;
LAB_009230dc:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_009230f8;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x1c];
    if (plVar6 != (long *)0x0) goto LAB_00923100;
LAB_0092311c:
    plVar6 = (long *)param_1[0x1b];
    if (plVar6 == (long *)0x0) goto LAB_00923140;
LAB_00923124:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923140;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x1a];
    if (plVar6 != (long *)0x0) goto LAB_00923148;
LAB_00923164:
    plVar6 = (long *)param_1[0x19];
    if (plVar6 == (long *)0x0) goto LAB_00923188;
LAB_0092316c:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923188;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x18];
    if (plVar6 != (long *)0x0) goto LAB_00923190;
LAB_009231ac:
    plVar6 = (long *)param_1[0x17];
    if (plVar6 == (long *)0x0) goto LAB_009231d0;
LAB_009231b4:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_009231d0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x16];
    if (plVar6 != (long *)0x0) goto LAB_009231d8;
LAB_009231f4:
    plVar6 = (long *)param_1[0x15];
    if (plVar6 == (long *)0x0) goto LAB_00923214;
LAB_009231fc:
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_00923214;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) goto LAB_0092321c;
LAB_00923234:
    plVar6 = (long *)param_1[0x13];
  }
  else {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922e4c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x2f];
    if (plVar6 != (long *)0x0) goto LAB_00922e54;
LAB_00922e70:
    plVar6 = (long *)param_1[0x2e];
    if (plVar6 == (long *)0x0) goto LAB_00922e94;
LAB_00922e78:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922e94;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x2d];
    if (plVar6 != (long *)0x0) goto LAB_00922e9c;
LAB_00922eb8:
    plVar6 = (long *)param_1[0x2c];
    if (plVar6 == (long *)0x0) goto LAB_00922edc;
LAB_00922ec0:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922edc;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x2b];
    if (plVar6 != (long *)0x0) goto LAB_00922ee4;
LAB_00922f00:
    plVar6 = (long *)param_1[0x2a];
    if (plVar6 == (long *)0x0) goto LAB_00922f24;
LAB_00922f08:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922f24;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x29];
    if (plVar6 != (long *)0x0) goto LAB_00922f2c;
LAB_00922f48:
    plVar6 = (long *)param_1[0x28];
    if (plVar6 == (long *)0x0) goto LAB_00922f6c;
LAB_00922f50:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922f6c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x27];
    if (plVar6 != (long *)0x0) goto LAB_00922f74;
LAB_00922f90:
    plVar6 = (long *)param_1[0x26];
    if (plVar6 == (long *)0x0) goto LAB_00922fb4;
LAB_00922f98:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922fb4;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x25];
    if (plVar6 != (long *)0x0) goto LAB_00922fbc;
LAB_00922fd8:
    plVar6 = (long *)param_1[0x24];
    if (plVar6 == (long *)0x0) goto LAB_00922ffc;
LAB_00922fe0:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00922ffc;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x23];
    if (plVar6 != (long *)0x0) goto LAB_00923004;
LAB_00923020:
    plVar6 = (long *)param_1[0x22];
    if (plVar6 == (long *)0x0) goto LAB_00923044;
LAB_00923028:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923044;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x21];
    if (plVar6 != (long *)0x0) goto LAB_0092304c;
LAB_00923068:
    plVar6 = (long *)param_1[0x20];
    if (plVar6 == (long *)0x0) goto LAB_0092308c;
LAB_00923070:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_0092308c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x1f];
    if (plVar6 != (long *)0x0) goto LAB_00923094;
LAB_009230b0:
    plVar6 = (long *)param_1[0x1e];
    if (plVar6 == (long *)0x0) goto LAB_009230d4;
LAB_009230b8:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_009230d4;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x1d];
    if (plVar6 != (long *)0x0) goto LAB_009230dc;
LAB_009230f8:
    plVar6 = (long *)param_1[0x1c];
    if (plVar6 == (long *)0x0) goto LAB_0092311c;
LAB_00923100:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_0092311c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x1b];
    if (plVar6 != (long *)0x0) goto LAB_00923124;
LAB_00923140:
    plVar6 = (long *)param_1[0x1a];
    if (plVar6 == (long *)0x0) goto LAB_00923164;
LAB_00923148:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_00923164;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x19];
    if (plVar6 != (long *)0x0) goto LAB_0092316c;
LAB_00923188:
    plVar6 = (long *)param_1[0x18];
    if (plVar6 == (long *)0x0) goto LAB_009231ac;
LAB_00923190:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_009231ac;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x17];
    if (plVar6 != (long *)0x0) goto LAB_009231b4;
LAB_009231d0:
    plVar6 = (long *)param_1[0x16];
    if (plVar6 == (long *)0x0) goto LAB_009231f4;
LAB_009231d8:
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 != 0) goto LAB_009231f4;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x15];
    if (plVar6 != (long *)0x0) goto LAB_009231fc;
LAB_00923214:
    plVar6 = (long *)param_1[0x14];
    if (plVar6 == (long *)0x0) goto LAB_00923234;
LAB_0092321c:
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_00923234;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x13];
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  lVar7 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar7 != 0) {
    FUN_008c7940(param_1 + 0x10);
  }
  lVar7 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar7 != 0) {
    FUN_008c7940(param_1 + 0xc);
  }
  lVar7 = param_1[7];
  param_1[7] = 0;
  if (lVar7 == 0) {
    plVar6 = (long *)param_1[6];
    if (plVar6 == (long *)0x0) goto LAB_009232a8;
LAB_00923290:
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) goto LAB_009232a8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[5];
  }
  else {
    FUN_00923de8(param_1 + 8);
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) goto LAB_00923290;
LAB_009232a8:
    plVar6 = (long *)param_1[5];
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      plVar6 = (long *)param_1[4];
      goto joined_r0x00923694;
    }
  }
  plVar6 = (long *)param_1[4];
joined_r0x00923694:
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00923374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


