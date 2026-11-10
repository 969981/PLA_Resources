/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f17a04; name: FUN_02f17a04
 */


void FUN_02f17a04(ulong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  if (DAT_0440ae38 != 0) {
    plVar6 = DAT_0440ae30;
    if ((param_1 & 1) == 0) {
      do {
        lVar5 = *plVar6;
        *(undefined4 *)(lVar5 + 0x194) = 0x2c;
        if ((*(long **)(lVar5 + 0x128) == (long *)0x0) ||
           (iVar1 = (**(code **)(**(long **)(lVar5 + 0x128) + 0xf8))(), iVar1 < 0)) {
          iVar1 = 0;
          plVar3 = *(long **)(lVar5 + 0x130);
        }
        else {
          iVar1 = (**(code **)(**(long **)(lVar5 + 0x128) + 0xf8))();
          plVar3 = *(long **)(lVar5 + 0x130);
        }
        if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0xf8))(), iVar1 <= iVar2)) {
          (**(code **)(**(long **)(lVar5 + 0x130) + 0xf8))();
        }
        if (*(int *)(lVar5 + 0x140) == 1) {
          FUN_02f2bcbc(lVar5,lVar5 + 0x168);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != DAT_0440ae30 + DAT_0440ae38);
    }
    else {
      do {
        lVar5 = *plVar6;
        *(undefined4 *)(lVar5 + 0x194) = 0x2c;
        if ((*(long **)(lVar5 + 0x128) == (long *)0x0) ||
           (iVar1 = (**(code **)(**(long **)(lVar5 + 0x128) + 0xf8))(), iVar1 < 0)) {
          iVar1 = 0;
          plVar3 = *(long **)(lVar5 + 0x130);
        }
        else {
          iVar1 = (**(code **)(**(long **)(lVar5 + 0x128) + 0xf8))();
          plVar3 = *(long **)(lVar5 + 0x130);
        }
        if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0xf8))(), iVar1 <= iVar2)) {
          (**(code **)(**(long **)(lVar5 + 0x130) + 0xf8))();
        }
        if ((*(int *)(lVar5 + 0x140) == 1) &&
           (uVar4 = FUN_02f2bcbc(lVar5,lVar5 + 0x168), (uVar4 & 1) != 0)) {
          *(undefined2 *)(lVar5 + 0x17a) = 0;
          *(undefined8 *)(lVar5 + 0x17c) = 0;
          *(undefined4 *)(lVar5 + 0x184) = 0xffffffff;
          *(undefined4 *)(lVar5 + 0x194) = 0x2b;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != DAT_0440ae30 + DAT_0440ae38);
    }
  }
  return;
}


