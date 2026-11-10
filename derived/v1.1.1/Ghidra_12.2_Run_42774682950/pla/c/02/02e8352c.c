/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8352c; name: FUN_02e8352c
 */


void FUN_02e8352c(long param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        lVar7 = plVar6[2];
        lVar8 = *(long *)(lVar7 + 8);
        plVar9 = (long *)FUN_02e8766c(lVar8);
        uVar1 = *(ushort *)(lVar8 + 0x34);
        if ((((uVar1 & 0xff00) == 0x300) && ((param_4 & 1) == 0)) ||
           ((param_3 != 0 && (*(long *)(lVar7 + 0x40) != param_3)))) {
LAB_02e839a4:
          plVar6 = (long *)*plVar6;
        }
        else {
          if ((uVar1 == 0x1820) || (param_5 != 0 && *(int *)(lVar7 + 0x30) != param_5))
          goto LAB_02e839a4;
          *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
          plVar6 = (long *)*plVar6;
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          lVar7 = plVar6[2];
          lVar8 = *(long *)(lVar7 + 8);
          plVar9 = (long *)FUN_02e8766c(lVar8);
          if (plVar9 == (long *)0x0) break;
          if (plVar9 == param_2) {
LAB_02e83918:
            uVar1 = *(ushort *)(lVar8 + 0x34);
            if ((((uVar1 & 0xff00) != 0x300) || ((param_4 & 1) != 0)) &&
               ((param_3 == 0 || (*(long *)(lVar7 + 0x40) == param_3)))) {
              if ((uVar1 != 0x1820) && (param_5 == 0 || *(int *)(lVar7 + 0x30) == param_5)) {
                *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
              }
            }
          }
          else {
            plVar2 = (long *)plVar9[0x11];
            for (plVar5 = (long *)plVar9[0x10]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0x10]
                ) {
              if (plVar5 == param_2) goto LAB_02e83918;
              if (plVar2 == (long *)0x0) {
                plVar2 = (long *)plVar5[0x11];
              }
            }
            for (; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[0x11]) {
              if (plVar2 == param_2) goto LAB_02e83918;
            }
          }
          plVar6 = (long *)*plVar6;
          (**(code **)(*plVar9 + 0x18))();
          if (plVar6 == (long *)0x0) goto LAB_02e83568;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_02e83568:
  plVar9 = (long *)(param_1 + 0x28);
  plVar6 = (long *)*plVar9;
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (param_2 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      lVar7 = plVar6[2];
      lVar8 = *(long *)(lVar7 + 8);
      plVar2 = (long *)FUN_02e8766c(lVar8);
      if (plVar2 == (long *)0x0) {
LAB_02e835d4:
        plVar4 = (long *)*plVar6;
        plVar5 = plVar6;
      }
      else {
        if (plVar2 != param_2) {
          plVar3 = (long *)plVar2[0x11];
          for (plVar4 = (long *)plVar2[0x10]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0x10])
          {
            if (plVar4 == param_2) goto LAB_02e83618;
            if (plVar3 == (long *)0x0) {
              plVar3 = (long *)plVar4[0x11];
            }
          }
          for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[0x11]) {
            if (plVar3 == param_2) goto LAB_02e83618;
          }
          goto LAB_02e835d4;
        }
LAB_02e83618:
        if ((((*(ushort *)(lVar8 + 0x34) & 0xff00) == 0x300) && ((param_4 & 1) == 0)) ||
           ((param_3 != 0 && (*(long *)(lVar7 + 0x40) != param_3)))) goto LAB_02e835d4;
        if ((*(ushort *)(lVar8 + 0x34) == 0x1820) ||
           (param_5 != 0 && *(int *)(lVar7 + 0x30) != param_5)) goto LAB_02e835d4;
        FUN_02e8425c(param_1,*(undefined4 *)(lVar8 + 0x30),lVar7,0);
        plVar4 = (long *)*plVar6;
        plVar3 = plVar9;
        if (*(long **)(param_1 + 0x28) != plVar6) {
          plVar3 = plVar5;
        }
        *plVar3 = (long)plVar4;
        if (*(long **)(param_1 + 0x30) == plVar6) {
          *(long **)(param_1 + 0x30) = plVar5;
        }
        *plVar6 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar6;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      }
      plVar6 = plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      if (plVar6 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  lVar7 = plVar6[2];
  lVar8 = *(long *)(lVar7 + 8);
  plVar5 = (long *)FUN_02e8766c(lVar8);
  if ((((*(ushort *)(lVar8 + 0x34) & 0xff00) != 0x300) || ((param_4 & 1) != 0)) &&
     ((param_3 == 0 || (*(long *)(lVar7 + 0x40) == param_3)))) {
    if ((*(ushort *)(lVar8 + 0x34) != 0x1820) && (param_5 == 0 || *(int *)(lVar7 + 0x30) == param_5)
       ) {
      FUN_02e8425c(param_1,*(undefined4 *)(lVar8 + 0x30),lVar7,0);
      plVar2 = (long *)*plVar6;
      plVar4 = plVar9;
      if (*(long **)(param_1 + 0x28) != plVar6) {
        plVar4 = (long *)0x0;
      }
      *plVar4 = (long)plVar2;
      if (*(long **)(param_1 + 0x30) == plVar6) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *plVar6 = *(long *)(param_1 + 0x38);
      *(long **)(param_1 + 0x38) = plVar6;
      plVar6 = (long *)0x0;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      goto joined_r0x02e8376c;
    }
  }
  plVar2 = (long *)*plVar6;
joined_r0x02e8376c:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  do {
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = plVar2[2];
    lVar8 = *(long *)(lVar7 + 8);
    plVar5 = (long *)FUN_02e8766c(lVar8);
    if ((((*(ushort *)(lVar8 + 0x34) & 0xff00) == 0x300) && ((param_4 & 1) == 0)) ||
       ((param_3 != 0 && (*(long *)(lVar7 + 0x40) != param_3)))) {
LAB_02e837b4:
      plVar4 = (long *)*plVar2;
      plVar6 = plVar2;
    }
    else {
      if ((*(ushort *)(lVar8 + 0x34) == 0x1820) ||
         (param_5 != 0 && *(int *)(lVar7 + 0x30) != param_5)) goto LAB_02e837b4;
      FUN_02e8425c(param_1,*(undefined4 *)(lVar8 + 0x30),lVar7,0);
      plVar4 = (long *)*plVar2;
      plVar3 = plVar9;
      if (*(long **)(param_1 + 0x28) != plVar2) {
        plVar3 = plVar6;
      }
      *plVar3 = (long)plVar4;
      if (*(long **)(param_1 + 0x30) == plVar2) {
        *(long **)(param_1 + 0x30) = plVar6;
      }
      *plVar2 = *(long *)(param_1 + 0x38);
      *(long **)(param_1 + 0x38) = plVar2;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    }
    plVar2 = plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  } while( true );
}


