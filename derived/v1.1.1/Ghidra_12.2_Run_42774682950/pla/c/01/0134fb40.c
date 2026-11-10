/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134fb40; name: FUN_0134fb40
 */


void FUN_0134fb40(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  
  if (*(char *)(param_1 + 0x188) == '\x03') {
    if ((*(long *)(param_1 + 0xa8) == *(long *)(param_1 + 0xb0)) &&
       (*(long *)(param_1 + 0x118) == *(long *)(param_1 + 0x120))) {
      return;
    }
LAB_0134fc80:
    FUN_013514ec(param_1);
    uVar9 = 4;
    goto LAB_0134fc0c;
  }
  switch(*(char *)(param_1 + 0x188)) {
  case '\x01':
    FUN_0134ff68(param_1);
    uVar9 = 2;
    break;
  case '\x02':
    if (*(char *)(param_1 + 0xa1) == '\0') {
      return;
    }
    FUN_013501f4(param_1);
    FUN_01350834(param_1);
    FUN_01351220(param_1);
    uVar9 = 5;
    break;
  default:
    goto switchD_0134fbc0_caseD_3;
  case '\x04':
    if ((*(long *)(param_1 + 0xa8) != *(long *)(param_1 + 0xb0)) ||
       (*(long *)(param_1 + 0x118) != *(long *)(param_1 + 0x120))) {
      FUN_013514ec(param_1);
      return;
    }
    lVar10 = *(long *)(param_1 + 0x90);
    if (lVar10 != 0) {
      plVar11 = *(long **)(param_1 + 0x150);
      plVar3 = *(long **)(param_1 + 0x158);
      if (plVar11 != plVar3) {
        while( true ) {
          local_70 = *plVar11;
          lStack_68 = plVar11[1];
          local_60 = plVar11[2];
          local_58 = (long *)0x0;
          FUN_01b29e90(lVar10,&local_70);
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          plVar11 = plVar11 + 3;
          if (plVar11 == plVar3) break;
          lVar10 = *(long *)(param_1 + 0x90);
        }
      }
      puVar8 = PTR_PTR_04379d00;
      puVar7 = PTR_DAT_04379c88;
      plVar11 = *(long **)(param_1 + 0xe0);
      plVar3 = *(long **)(param_1 + 0xe8);
      if (plVar11 == plVar3) {
        *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
      }
      else {
        do {
          plVar12 = (long *)*plVar11;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
          uVar13 = *(undefined8 *)(param_1 + 0x90);
          plVar2 = (long *)puVar7;
          if (plVar12 != (long *)0x0) {
            plVar2 = plVar12 + 0xb;
          }
          local_70 = *plVar2;
          plVar2 = (long *)puVar8;
          if (plVar12 != (long *)0x0) {
            plVar2 = plVar12 + 0xc;
          }
          lStack_68 = *plVar2;
          if (plVar12 == (long *)0x0) {
            local_60 = 0;
          }
          else {
            local_60 = plVar12[0xd];
            local_58 = (long *)0x0;
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
          local_58 = plVar12;
          FUN_01b2b778(uVar13,&local_70,0);
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          plVar11 = plVar11 + 1;
        } while (plVar3 != plVar11);
        plVar11 = *(long **)(param_1 + 0xe0);
        plVar3 = *(long **)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
        if (plVar3 != plVar11) {
          plVar12 = (long *)plVar3[-1];
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x20))();
          }
          if (plVar3 + -1 != plVar11) {
            plVar12 = (long *)plVar3[-2];
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x20))();
            }
            if (plVar3 + -2 != plVar11) {
              plVar12 = (long *)plVar3[-3];
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x20))();
              }
              if (plVar3 + -3 != plVar11) {
                plVar12 = (long *)plVar3[-4];
                while( true ) {
                  if (plVar12 != (long *)0x0) {
                    (**(code **)(*plVar12 + 0x20))();
                  }
                  if (plVar11 + 3 == plVar3 + -1) break;
                  plVar12 = (long *)plVar3[-5];
                  plVar3 = plVar3 + -1;
                }
              }
            }
          }
        }
      }
      *(long **)(param_1 + 0xe8) = plVar11;
    }
    uVar9 = 5;
    break;
  case '\x05':
    lVar10 = *(long *)(param_1 + 0x90);
    if (lVar10 == 0) {
      return;
    }
    if (*(int *)(lVar10 + 0x27b8) != 1) {
      return;
    }
    if (*(long *)(lVar10 + 0x27c8) != *(long *)(lVar10 + 0x27c0)) {
      return;
    }
    if ((*(long *)(param_1 + 0xa8) != *(long *)(param_1 + 0xb0)) ||
       (*(long *)(param_1 + 0x118) != *(long *)(param_1 + 0x120))) goto LAB_0134fc80;
    if (*(char *)(param_1 + 0xa2) == '\0') {
      if ((*(char *)(param_1 + 0xa3) != '\0') && (lVar10 = *(long *)(param_1 + 0x80), lVar10 != 0))
      {
        uVar4 = *(uint *)(lVar10 + 0x214);
        uVar1 = uVar4 & 0xffffffef;
        bVar6 = (uVar4 != 0) != ((uVar4 & 0xffffffef) != 0);
        if ((uVar1 == uVar4) ||
           (((uVar1 != 0 || (*(int *)(lVar10 + 0x21c) == 0)) || (*(int *)(lVar10 + 0x224) == 0)))) {
          if (bVar6) goto LAB_0134ff48;
        }
        else if (bVar6 || *(int *)(lVar10 + 0x21c) == 1) {
LAB_0134ff48:
          FUN_01bdbf3c(lVar10,uVar1);
          *(uint *)(lVar10 + 0x214) = uVar1;
          goto LAB_0134fea8;
        }
        *(uint *)(lVar10 + 0x214) = uVar1;
        if ((*(uint *)(lVar10 + 0x210) != uVar1) && (*(int *)(lVar10 + 0x21c) == 0)) {
          *(uint *)(lVar10 + 0x210) = uVar1;
        }
      }
LAB_0134fea8:
      *(undefined1 *)(param_1 + 0xa2) = 1;
    }
    uVar9 = 3;
    break;
  case '\x06':
    lVar10 = *(long *)(param_1 + 0x90);
    if (lVar10 == 0) {
      return;
    }
    if (*(int *)(lVar10 + 0x27b8) != 1) {
      return;
    }
    if (*(long *)(lVar10 + 0x27c8) != *(long *)(lVar10 + 0x27c0)) {
      return;
    }
    FUN_01351ca0(param_1);
    uVar9 = 7;
    break;
  case '\a':
    bVar5 = *(byte *)(param_1 + 0x189);
    *(byte *)(param_1 + 0x189) = bVar5 + 1;
    if (2 < bVar5) {
      *(undefined2 *)(param_1 + 0x188) = 0;
    }
    goto switchD_0134fbc0_caseD_3;
  }
LAB_0134fc0c:
  *(undefined1 *)(param_1 + 0x188) = uVar9;
switchD_0134fbc0_caseD_3:
  return;
}


