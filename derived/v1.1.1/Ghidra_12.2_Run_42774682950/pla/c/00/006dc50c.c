/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dc50c; name: FUN_006dc50c
 */


int FUN_006dc50c(undefined8 param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_78;
  long *local_70;
  long *plStack_68;
  
  iVar4 = 0x80341;
  if (*param_2 == 5) {
    plVar1 = (long *)(param_2 + 10);
    if (*(long **)(param_2 + 8) != plVar1) {
      plVar9 = (long *)((ulong)&local_80 | 1);
      plVar8 = *(long **)(param_2 + 8);
LAB_006dc574:
      do {
        FUN_006dc840(&local_80,plVar8 + 4);
        uVar2 = (ulong)(local_80 >> 1);
        if ((local_80 & 1) != 0) {
          uVar2 = local_78;
        }
        if (uVar2 == 5) {
          plVar5 = plVar9;
          if ((local_80 & 1) != 0) {
            plVar5 = local_70;
          }
          bVar3 = (int)*plVar5 == 0x6c616572 && *(char *)((long)plVar5 + 4) == 'm';
        }
        else {
          bVar3 = false;
        }
        if ((local_80 & 1) != 0) {
          (**(code **)(*plStack_68 + 0x18))
                    (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
        }
        if ((!bVar3) || ((int)plVar8[7] != 5)) {
          return 0x80341;
        }
        plVar5 = (long *)plVar8[0xb];
        while (plVar5 != plVar8 + 0xc) {
          FUN_006dc840(&local_80,plVar5 + 4);
          uVar2 = (ulong)(local_80 >> 1);
          if ((local_80 & 1) != 0) {
            uVar2 = local_78;
          }
          if (uVar2 == 9) {
            plVar6 = plVar9;
            if ((local_80 & 1) != 0) {
              plVar6 = local_70;
            }
            bVar3 = *plVar6 == 0x656469727265766f && (char)plVar6[1] == 's';
          }
          else {
            bVar3 = false;
          }
          if ((local_80 & 1) != 0) {
            (**(code **)(*plStack_68 + 0x18))
                      (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
          }
          if (bVar3) {
            iVar4 = FUN_006dcac0(param_1,plVar5 + 7);
          }
          else {
            FUN_006dc840(&local_80,plVar5 + 4);
            uVar2 = (ulong)(local_80 >> 1);
            if ((local_80 & 1) != 0) {
              uVar2 = local_78;
            }
            if (uVar2 == 7) {
              plVar6 = plVar9;
              if ((local_80 & 1) != 0) {
                plVar6 = local_70;
              }
              bVar3 = (int)*plVar6 == 0x6d726570 && *(int *)((long)plVar6 + 3) == 0x7374696d;
            }
            else {
              bVar3 = false;
            }
            if ((local_80 & 1) != 0) {
              (**(code **)(*plStack_68 + 0x18))
                        (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
            }
            if (!bVar3) {
              return 0x80341;
            }
            iVar4 = FUN_006dcd6c(param_1,plVar5 + 7);
          }
          if (iVar4 != 0) {
            return iVar4;
          }
          plVar6 = (long *)plVar5[1];
          if ((long *)plVar5[1] == (long *)0x0) {
            plVar6 = plVar5 + 2;
            bVar3 = *(long **)*plVar6 != plVar5;
            plVar5 = (long *)*plVar6;
            if (bVar3) {
              do {
                lVar7 = *plVar6;
                plVar6 = (long *)(lVar7 + 0x10);
                plVar5 = (long *)*plVar6;
              } while (*(long *)*plVar6 != lVar7);
            }
          }
          else {
            do {
              plVar5 = plVar6;
              plVar6 = (long *)*plVar5;
            } while (plVar6 != (long *)0x0);
          }
        }
        plVar5 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar5 = plVar8 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 == plVar8) {
            plVar8 = plVar6;
            if (plVar6 == plVar1) {
              return 0;
            }
            goto LAB_006dc574;
          }
          do {
            lVar7 = *plVar5;
            plVar5 = (long *)(lVar7 + 0x10);
            plVar8 = (long *)*plVar5;
          } while (*plVar8 != lVar7);
        }
        else {
          do {
            plVar8 = plVar5;
            plVar5 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        if (plVar8 == plVar1) {
          return 0;
        }
      } while( true );
    }
    iVar4 = 0;
  }
  return iVar4;
}


