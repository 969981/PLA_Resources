/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004da220; name: FUN_004da220
 */


undefined8 FUN_004da220(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  code *pcVar8;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (param_3 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      FUN_00417470(*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    iVar5 = FUN_004c3060(param_1);
    if (iVar5 == 0) {
      FUN_004c99a0(param_1,0x50,0x255,0x44,"external/openssl/ssl/statem/statem_lib.c",0x40f);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
       (iVar5 = **(int **)(param_1 + 8), 0x303 < iVar5)) && (iVar5 != 0x10000)) &&
     ((*(int *)(param_1 + 0x38) == 0 && (*(int *)(param_1 + 0x748) == 4)))) {
    *(undefined4 *)(param_1 + 0x748) = 1;
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x740) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    FUN_004e7610(param_1);
    piVar6 = *(int **)(param_1 + 8);
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((((*(uint *)(*(long *)(piVar6 + 0x30) + 0x60) >> 3 & 1) == 0) && (0x303 < *piVar6)) &&
         (*piVar6 != 0x10000)) {
        if ((*(byte *)(*(long *)(param_1 + 0x728) + 0x48) & 1) == 0) goto LAB_004da3ac;
        FUN_003ffc50(*(long *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x508));
        iVar5 = *(int *)(param_1 + 200);
      }
      else {
        FUN_004c4b80(param_1,1);
LAB_004da3ac:
        iVar5 = *(int *)(param_1 + 200);
      }
      if (iVar5 != 0) {
        piVar6 = (int *)(*(long *)(param_1 + 0x728) + 0x94);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar4) {
            *piVar6 = *piVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined **)(param_1 + 0x30) = PTR_LAB_04374768;
      piVar6 = (int *)(*(long *)(param_1 + 0x728) + 0x78);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = *piVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60);
    }
    else {
      if ((((*(uint *)(*(long *)(piVar6 + 0x30) + 0x60) >> 3 & 1) != 0) || (*piVar6 < 0x304)) ||
         (*piVar6 == 0x10000)) {
        FUN_004c4b80(param_1,2);
      }
      piVar6 = (int *)(*(long *)(param_1 + 0x598) + 0x84);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = *piVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *(undefined **)(param_1 + 0x30) = PTR_LAB_04374760;
      bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60);
    }
    if ((bVar2 >> 3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0xb0);
      *(undefined2 *)(lVar7 + 0x110) = 0;
      *(undefined4 *)(lVar7 + 0x10c) = 0;
      FUN_004cd8b0(param_1);
    }
  }
  pcVar8 = *(code **)(param_1 + 0x568);
  if (pcVar8 == (code *)0x0) {
    pcVar8 = *(code **)(*(long *)(param_1 + 0x598) + 0x110);
    FUN_004c9a30(param_1,0);
    if (pcVar8 == (code *)0x0) goto LAB_004da494;
  }
  else {
    FUN_004c9a30(param_1,0);
  }
  if (((iVar1 != 0) || ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0))
     || (((iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304 ||
          ((iVar1 == 0x10000 || (*(long *)(*(long *)(param_1 + 0xa8) + 0x198) == 0)))) ||
         (*(long *)(*(long *)(param_1 + 0xa8) + 0x220) == 0)))) {
    (*pcVar8)(param_1,0x20,1);
  }
LAB_004da494:
  if (param_4 == 0) {
    FUN_004c9a30(param_1,1);
    return 2;
  }
  return 1;
}


