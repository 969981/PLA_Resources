/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d38488; name: FUN_00d38488
 */


undefined8 FUN_00d38488(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  
  iVar3 = (int)param_1[0x98];
  if (iVar3 == 1) {
    lVar7 = param_1[0x1b];
  }
  else {
    if (iVar3 == 2) {
      uVar8 = 3;
      if ((char)param_1[0x9a] != '\0') {
        uVar8 = 5;
      }
      *(undefined4 *)(param_1 + 0x98) = uVar8;
      return 1;
    }
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
    lVar7 = param_1[0x1b];
  }
  if (lVar7 == 0) {
    bVar4 = 1;
    lVar7 = param_1[0x1f];
  }
  else {
    bVar4 = FUN_00d27c54();
    lVar7 = param_1[0x1f];
  }
  if ((lVar7 == 0) || (uVar9 = *(uint *)(lVar7 + 400), uVar9 == 0)) {
    bVar5 = 1;
  }
  else {
    if (*(long *)(lVar7 + 0x18) == 0) {
      bVar5 = 1;
    }
    else {
      uVar9 = *(uint *)(lVar7 + 400);
      bVar5 = *(byte *)(*(long *)(lVar7 + 0x18) + 0xd8) & 1;
    }
    if (1 < uVar9) {
      if (*(long *)(lVar7 + 0x30) == 0) {
        bVar6 = 1;
      }
      else {
        bVar6 = *(byte *)(*(long *)(lVar7 + 0x30) + 0xd8) & 1;
        uVar9 = *(uint *)(lVar7 + 400);
      }
      bVar5 = bVar5 & bVar6;
      if (2 < uVar9) {
        if (*(long *)(lVar7 + 0x48) == 0) {
          bVar6 = 1;
        }
        else {
          bVar6 = *(byte *)(*(long *)(lVar7 + 0x48) + 0xd8) & 1;
          uVar9 = *(uint *)(lVar7 + 400);
        }
        bVar5 = bVar5 & bVar6;
        if (3 < uVar9) {
          plVar11 = (long *)(lVar7 + 0x60);
          uVar10 = 3;
          do {
            if (*plVar11 == 0) {
              bVar6 = 1;
            }
            else {
              bVar6 = *(byte *)(*plVar11 + 0xd8) & 1;
              uVar9 = *(uint *)(lVar7 + 400);
            }
            uVar10 = uVar10 + 1;
            bVar5 = bVar5 & bVar6;
            plVar11 = plVar11 + 3;
          } while (uVar10 < uVar9);
        }
      }
    }
  }
  if ((bVar4 & bVar5) == 1) {
    lVar7 = param_1[0x99];
    if (lVar7 != 0) {
      puVar1 = *(undefined8 **)(lVar7 + 0x70);
      puVar2 = *(undefined8 **)(lVar7 + 0x78);
      if (puVar1 == puVar2) {
        *(undefined1 *)(lVar7 + 0xc0) = 1;
      }
      else {
        plVar11 = (long *)*puVar1;
        bVar4 = FUN_00d43c54(plVar11,plVar11[1]);
        bVar5 = (**(code **)(*plVar11 + 0x40))(plVar11);
        bVar4 = bVar4 & bVar5;
        if (((bVar4 & 1) != 0) && ((char)plVar11[0xb5] == '\0')) {
          FUN_00d2d5d0(plVar11 + 0x30);
          (**(code **)(*plVar11 + 0x48))(plVar11);
          *(undefined1 *)(plVar11 + 0xb5) = 1;
        }
        if (puVar1 + 1 != puVar2) {
          plVar11 = (long *)puVar1[1];
          bVar5 = FUN_00d43c54(plVar11,plVar11[1]);
          bVar6 = (**(code **)(*plVar11 + 0x40))(plVar11);
          if (((bVar5 & bVar6 & 1) != 0) && ((char)plVar11[0xb5] == '\0')) {
            FUN_00d2d5d0(plVar11 + 0x30);
            (**(code **)(*plVar11 + 0x48))(plVar11);
            *(undefined1 *)(plVar11 + 0xb5) = 1;
          }
          bVar4 = bVar4 & bVar5 & bVar6;
          if (puVar1 + 2 != puVar2) {
            plVar11 = (long *)puVar1[2];
            bVar5 = FUN_00d43c54(plVar11,plVar11[1]);
            bVar6 = (**(code **)(*plVar11 + 0x40))(plVar11);
            if (((bVar5 & bVar6 & 1) != 0) && ((char)plVar11[0xb5] == '\0')) {
              FUN_00d2d5d0(plVar11 + 0x30);
              (**(code **)(*plVar11 + 0x48))(plVar11);
              *(undefined1 *)(plVar11 + 0xb5) = 1;
            }
            bVar4 = bVar4 & bVar5 & bVar6;
            for (puVar1 = puVar1 + 3; puVar1 != puVar2; puVar1 = puVar1 + 1) {
              plVar11 = (long *)*puVar1;
              bVar5 = FUN_00d43c54(plVar11,plVar11[1]);
              bVar6 = (**(code **)(*plVar11 + 0x40))(plVar11);
              if (((bVar5 & bVar6 & 1) != 0) && ((char)plVar11[0xb5] == '\0')) {
                FUN_00d2d5d0(plVar11 + 0x30);
                (**(code **)(*plVar11 + 0x48))(plVar11);
                *(undefined1 *)(plVar11 + 0xb5) = 1;
              }
              bVar4 = bVar4 & bVar5 & bVar6;
            }
          }
        }
        *(byte *)(lVar7 + 0xc0) = bVar4 & 1;
        if ((bVar4 & 1) == 0) {
          return 0;
        }
      }
    }
    uVar10 = (**(code **)(*param_1 + 0xa8))(param_1);
    if ((uVar10 & 1) != 0) {
      lVar7 = param_1[0x99];
      if (lVar7 != 0) {
        puVar1 = *(undefined8 **)(lVar7 + 0x70);
        puVar2 = *(undefined8 **)(lVar7 + 0x78);
        if (puVar1 != puVar2) {
          plVar11 = (long *)*puVar1;
          (**(code **)(*plVar11 + 0x70))(plVar11);
          if (plVar11[0x59] != 0) {
            FUN_0283c5bc();
          }
          if (puVar1 + 1 != puVar2) {
            plVar11 = (long *)puVar1[1];
            (**(code **)(*plVar11 + 0x70))(plVar11);
            if (plVar11[0x59] != 0) {
              FUN_0283c5bc();
            }
            if (puVar1 + 2 != puVar2) {
              plVar11 = (long *)puVar1[2];
              (**(code **)(*plVar11 + 0x70))(plVar11);
              if (plVar11[0x59] != 0) {
                FUN_0283c5bc();
              }
              for (puVar1 = puVar1 + 3; puVar1 != puVar2; puVar1 = puVar1 + 1) {
                plVar11 = (long *)*puVar1;
                (**(code **)(*plVar11 + 0x70))(plVar11);
                if (plVar11[0x59] != 0) {
                  FUN_0283c5bc();
                }
              }
            }
          }
        }
      }
      (**(code **)(*param_1 + 0xb0))(param_1);
      *(undefined4 *)(param_1 + 0x98) = 2;
      return 0;
    }
  }
  return 0;
}


